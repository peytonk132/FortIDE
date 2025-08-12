#include "c_Parser.h"
#include <antlr4-runtime.h>
#include "F90Files/Fortran90Lexer.h"
#include "F90Files/Fortran90Parser.h"
#include <memory>
#include <iostream>
#include <regex>
#include "../../deps/ImGuiColorTextEdit/TextEditor.h"

/*
void c_Parser::parseCode(TextEditor& editor)
{
    std::string code = editor.GetText();

    try {
        auto inputStream = std::make_unique<antlr4::ANTLRInputStream>(code);
        auto lexer = std::make_unique<Fortran90Lexer>(inputStream.get());
        auto tokens = std::make_unique<antlr4::CommonTokenStream>(lexer.get());
        auto parser = std::make_unique<Fortran90Parser>(tokens.get());

        class SyntaxErrorListener : public antlr4::BaseErrorListener {
        public:
            std::map<int, std::string>& errorMarkers;

            SyntaxErrorListener(std::map<int, std::string>& markers) : errorMarkers(markers) {}

            void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol,
                size_t line, size_t charPositionInLine,
                const std::string& msg, std::exception_ptr e) override {
                errorMarkers[static_cast<int>(line)] = msg;
            }
        };

        errorMarkers.clear();

        SyntaxErrorListener errorListener(errorMarkers);
        parser->removeErrorListeners();
        parser->addErrorListener(&errorListener);

        antlr4::tree::ParseTree* tree = parser->program();

    // Update the editor with new error markers
    editor.SetErrorMarkers(errorMarkers);

    // Clear resolved errors (this function updates the editor)
    clearResolvedErrors(editor);
        editor.SetErrorMarkers(errorMarkers);  // Set error markers in the editor
        clearResolvedErrors(editor);  // Clear resolved errors
    }
    catch (const std::exception& e) {
        std::cerr << "Exception during parsing: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception occurred during parsing." << std::endl;
    }
}

void c_Parser::clearResolvedErrors(TextEditor& editor)
{
    editor.SetErrorMarkers(errorMarkers);
}*/
