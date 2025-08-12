#pragma once
// Add missing headers first
#include <atomic> // For std::atomic
#include <boost/asio.hpp>
// #include <boost/asio/io_context_context.hpp>
// #includenclude <boost/asio/read_until.hpp> // Add this header
// #include <boost/asio/write.hpp>      // Add this header
#include <boost/process.hpp>
#include <boost/process/v1/async_pipe.hpp>
#include <future>          // For std::future, std::async
#include <spdlog/spdlog.h> // For spdlog::logger

#include "../../deps/ImGuiColorTextEdit/TextEditor.h"
#include "../../deps/portable-file-dialogs/portable-file-dialogs.h"
#include <git2.h>
#include <imgui-SFML.h>
#include <imgui.h>
#include <imgui_internal.h>
#include <string>
#include <vector>

// Forward declarations
namespace bp = boost::process;

class multiPurp {
  // Add these member variables
  std::atomic<bool> buildInProgress{false};
  std::future<void> buildFuture;
  std::shared_ptr<spdlog::logger> logger;
  boost::asio::io_context ioContext;

public:
  static char buf[2048]; // Declaration of buf as a static member variable

  multiPurp() {
    // Get logger instance
    logger = spdlog::get("build_logger");
    if (!logger) {
      throw std::runtime_error("Build logger not initialized");
    }
  }

  // Function for file path management
  std::string
  chooseFilePath(); // Opens a file dialog and returns the selected file path
  bool createFile(
      const std::string &filePath); // Creates a new file at the given path
  std::string
  readFileContent(const std::string &filePath); // Reads content from a file
  bool saveToFile(const std::string &content);  // Opens a save dialog and saves
                                                // content to a file

  void Compilefunc();                  // Compile functionality
  void loadFont();                     // Load font
  int menuBarfunc(TextEditor &editor); // Menu bar functionality
  int commitChanges(git_repository *repo,
                    const std::string &commitMessage); // Commit changes to Git
  bool pushChanges(git_repository *repo);              // Push changes to Git
  void OpenGitControl(); // Open Git control window
  std::wstring
  Utf8ToWstring(const std::string &str); // Convert UTF-8 to wstring

  struct SearchOutput {
    std::string word;
    int lineNum;
  };

  std::vector<SearchOutput> findMatches(const std::string &searchWord,
                                        const std::string &content);

private:
  void startAsyncProcess(const std::string &command, const std::string &type) {
    if (buildInProgress) {
      logger->warn("Already running a process!");
      return;
    }

    buildInProgress = true;
    logger->info("Starting {} command: {}", type, command);

    buildFuture = std::async(std::launch::async, [this, command, type]() {
      try {
        // Create pipes and child process
        bp::async_pipe outPipe(ioContext);
        bp::async_pipe errPipe(ioContext);

        bp::child c(command, bp::std_out > outPipe, bp::std_err > errPipe,
                    ioContext);

        // Buffers for async reads
        auto stdoutBuffer = std::make_shared<boost::asio::streambuf>();
        auto stderrBuffer = std::make_shared<boost::asio::streambuf>();

        // Declare handlers first
        std::function<void(const boost::system::error_code &, std::size_t)>
            readStdOut;
        std::function<void(const boost::system::error_code &, std::size_t)>
            readStdErr;

        // Define stdout handler
        readStdOut = [this, stdoutBuffer, &outPipe,
                      &readStdOut](const boost::system::error_code &ec,
                                   std::size_t bytes_transferred) {
          if (!ec && bytes_transferred > 0) {
            std::istream is(stdoutBuffer.get());
            std::string line;
            while (std::getline(is, line)) {
              logger->info("{}", line);
            }
            boost::asio::async_read_until(outPipe, *stdoutBuffer, '\n',
                                          readStdOut);
          }
        };

        // Define stderr handler
        readStdErr = [this, stderrBuffer, &errPipe,
                      &readStdErr](const boost::system::error_code &ec,
                                   std::size_t bytes_transferred) {
          if (!ec && bytes_transferred > 0) {
            std::istream is(stderrBuffer.get());
            std::string line;
            while (std::getline(is, line)) {
              logger->error("{}", line);
            }
            boost::asio::async_read_until(errPipe, *stderrBuffer, '\n',
                                          readStdErr);
          }
        };

        // Start async reads
        boost::asio::async_read_until(outPipe, *stdoutBuffer, '\n', readStdOut);
        boost::asio::async_read_until(errPipe, *stderrBuffer, '\n', readStdErr);

        // Run IO context
        ioContext.run();
        c.wait();

        // Handle exit code
        if (c.exit_code() == 0) {
          logger->info("{} succeeded!", type);
        } else {
          logger->error("{} failed with exit code {}", type, c.exit_code());
        }

      } catch (const std::exception &e) {
        logger->critical("{} error: {}", type, e.what());
      }

      buildInProgress = false;
    });
  }
};
