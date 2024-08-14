
// Generated from Fortran90Lexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  Fortran90Lexer : public Fortran90LexerBase {
public:
  enum {
    RECURSIVE = 1, CONTAINS = 2, MODULE = 3, ENDMODULE = 4, PROGRAM = 5, 
    ENTRY = 6, FUNCTION = 7, BLOCK = 8, SUBROUTINE = 9, ENDINTERFACE = 10, 
    PROCEDURE = 11, END = 12, DIMENSION = 13, TARGET = 14, ALLOCATABLE = 15, 
    OPTIONAL = 16, NAMELIST = 17, INTENT = 18, IN = 19, OUT = 20, INOUT = 21, 
    OPERATOR = 22, USE = 23, ONLY = 24, IMPLIEDT = 25, ASSIGNMENT = 26, 
    DOP = 27, OP = 28, DOUBLEPRECISION = 29, DOUBLECOLON = 30, ASSIGNSTMT = 31, 
    COMMON = 32, ELSEWHERE = 33, REAL = 34, EQUIVALENCE = 35, BLOCKDATA = 36, 
    POINTER = 37, PRIVATE = 38, SEQUENCE = 39, ACCESSSPEC = 40, IMPLICIT = 41, 
    NONE = 42, CHARACTER = 43, PARAMETER = 44, EXTERNAL = 45, INTRINSIC = 46, 
    SAVE = 47, DATA = 48, GO = 49, GOTO = 50, IF = 51, THEN = 52, ELSE = 53, 
    ENDIF = 54, RESULT = 55, ELSEIF = 56, DO = 57, INCLUDE = 58, CONTINUE = 59, 
    ENDWHERE = 60, WHERE = 61, ENDSELECT = 62, SELECTCASE = 63, SELECT = 64, 
    CASE = 65, DEFAULT = 66, DIRECT = 67, STOP = 68, REC = 69, ENDDO = 70, 
    PAUSE = 71, WRITE = 72, READ = 73, PRINT = 74, OPEN = 75, FMT = 76, 
    UNIT = 77, PAD = 78, ACTION = 79, DELIM = 80, IOLENGTH = 81, READWRITE = 82, 
    ERR = 83, SIZE = 84, ADVANCE = 85, NML = 86, IOSTAT = 87, FORMAT = 88, 
    LET = 89, CALL = 90, RETURN = 91, CLOSE = 92, DOUBLE = 93, IOSTART = 94, 
    SEQUENTIAL = 95, LABEL = 96, FILE = 97, STATUS = 98, ACCESS = 99, POSITION = 100, 
    FORM = 101, RECL = 102, EXIST = 103, OPENED = 104, NUMBER = 105, NAMED = 106, 
    NAME_ = 107, FORMATTED = 108, UNFORMATTED = 109, NEXTREC = 110, INQUIRE = 111, 
    BACKSPACE = 112, ENDFILE = 113, REWIND = 114, ENDBLOCKDATA = 115, ENDBLOCK = 116, 
    KIND = 117, LEN = 118, WS = 119, COMMENT = 120, DOLLAR = 121, COMMA = 122, 
    LPAREN = 123, PCT = 124, WHILE = 125, ALLOCATE = 126, STAT = 127, RPAREN = 128, 
    COLON = 129, SEMICOLON = 130, ASSIGN = 131, MINUS = 132, PLUS = 133, 
    DIV = 134, FORMATSEP = 135, POWER = 136, LNOT = 137, LAND = 138, LOR = 139, 
    EQV = 140, NEQV = 141, XOR = 142, EOR = 143, LT = 144, LE = 145, GT = 146, 
    GE = 147, NE = 148, EQ = 149, TRUE = 150, FALSE = 151, XCON = 152, PCON = 153, 
    FCON = 154, CCON = 155, HOLLERITH = 156, CONCATOP = 157, CTRLDIRECT = 158, 
    CTRLREC = 159, TO = 160, SUBPROGRAMBLOCK = 161, DOBLOCK = 162, AIF = 163, 
    THENBLOCK = 164, ELSEBLOCK = 165, CODEROOT = 166, COMPLEX = 167, PRECISION = 168, 
    INTEGER = 169, LOGICAL = 170, UNDERSCORE = 171, OBRACKETSLASH = 172, 
    DOT = 173, CBRACKETSLASH = 174, ZCON = 175, BCON = 176, OCON = 177, 
    SCON = 178, RDCON = 179, DEALLOCATE = 180, NULLIFY = 181, CYCLE = 182, 
    ENDTYPE = 183, INTERFACE = 184, SPOFF = 185, SPON = 186, ICON = 187, 
    TYPE = 188, NAME = 189, EXIT = 190, BLANK = 191, ALPHANUMERIC_CHARACTER = 192, 
    STAR = 193, STRINGLITERAL = 194, EOL = 195, LINECONT = 196
  };

  explicit Fortran90Lexer(antlr4::CharStream *input);

  ~Fortran90Lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.
  bool COMMENTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RDCONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

