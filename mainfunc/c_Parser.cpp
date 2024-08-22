#include "c_Parser.h"
#include <antlr4-runtime.h>
#include "F90Files/Fortran90Lexer.h"
#include "F90Files/Fortran90Parser.h"

// Ensure that TextEditor is valid during the entire parsing process.
void c_Parser::parseCode(TextEditor& editor)
{
    std::string code = editor.GetText();

    antlr4::ANTLRInputStream* inputStream = new antlr4::ANTLRInputStream(code);
    Fortran90Lexer* lexer = new Fortran90Lexer(inputStream);
    antlr4::CommonTokenStream* tokens = new antlr4::CommonTokenStream(lexer);
    Fortran90Parser* parser = new Fortran90Parser(tokens);

    class SyntaxErrorListener : public antlr4::BaseErrorListener {
    public:
        SyntaxErrorListener(TextEditor& editor) : editor(editor) {}

        void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol,
            size_t line, size_t charPositionInLine,
            const std::string& msg, std::exception_ptr e) override {
            std::map<int, std::string> errorMarkers;
            errorMarkers[static_cast<int>(line)] = msg;
            editor.SetErrorMarkers(errorMarkers);
        }

    private:
        TextEditor& editor;
    };

    SyntaxErrorListener errorListener(editor);
    parser->removeErrorListeners();
    parser->addErrorListener(&errorListener);

    // Parse
    antlr4::tree::ParseTree* tree = parser->program();

    // Clean up explicitly
    delete parser;
    delete tokens;
    delete lexer;
    delete inputStream;
}