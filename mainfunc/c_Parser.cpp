#include "c_Parser.h"
#include <antlr4-runtime.h>
#include "F90Files/Fortran90Lexer.h"
#include "F90Files/Fortran90Parser.h"
<<<<<<< Updated upstream

// Declare errorMarkers as a global variable
std::map<int, std::string> errorMarkers;
=======
#include <memory>
#include <iostream>
#include <regex>
#include "../colorText/TextEditor.h"
>>>>>>> Stashed changes

void c_Parser::parseCode(TextEditor& editor)
{
    std::string code = editor.GetText();

    antlr4::ANTLRInputStream* inputStream = new antlr4::ANTLRInputStream(code);
    Fortran90Lexer* lexer = new Fortran90Lexer(inputStream);
    antlr4::CommonTokenStream* tokens = new antlr4::CommonTokenStream(lexer);
    Fortran90Parser* parser = new Fortran90Parser(tokens);

    class SyntaxErrorListener : public antlr4::BaseErrorListener {
    public:
        void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol,
            size_t line, size_t charPositionInLine,
            const std::string& msg, std::exception_ptr e) override {
            // Store the error in the global errorMarkers map
            errorMarkers[static_cast<int>(line)] = msg;
        }
    };

    // Clear old error markers
    errorMarkers.clear();

    SyntaxErrorListener errorListener;
    parser->removeErrorListeners();
    parser->addErrorListener(&errorListener);

    // Parse the code
    antlr4::tree::ParseTree* tree = parser->program();

    // Update the editor with new error markers
    editor.SetErrorMarkers(errorMarkers);

    // Clear resolved errors (this function updates the editor)
    clearResolvedErrors(editor);

<<<<<<< Updated upstream
    // Clean up
    delete parser;
    delete tokens;
    delete lexer;
    delete inputStream;
=======
        editor.SetErrorMarkers(errorMarkers);  // Set error markers in the editor
        clearResolvedErrors(editor);  // Clear resolved errors
    }
    catch (const std::exception& e) {
        std::cerr << "Exception during parsing: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception occurred during parsing." << std::endl;
    }
>>>>>>> Stashed changes
}

void c_Parser::clearResolvedErrors(TextEditor& editor)
{
    // The editor should now only display the markers in the global errorMarkers
    editor.SetErrorMarkers(errorMarkers);
}
