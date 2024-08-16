
// Generated from Fortran90Parser.g4 by ANTLR 4.13.2

#pragma once


#include "../antlr-runtime/antlr4-runtime.h"




class  Fortran90Parser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleExecutableProgram = 1, RuleProgramUnit = 2, RuleMainProgram = 3, 
    RuleProgramStmt = 4, RuleMainRange = 5, RuleBodyPlusInternals = 6, RuleInternalSubprogram = 7, 
    RuleSpecificationPartConstruct = 8, RuleUseStmt = 9, RuleOnlyList = 10, 
    RuleOnlyStmt = 11, RuleRenameList = 12, RuleRename = 13, RuleUseName = 14, 
    RuleParameterStmt = 15, RuleNamedConstantDefList = 16, RuleNamedConstantDef = 17, 
    RuleEndProgramStmt = 18, RuleBlockDataSubprogram = 19, RuleBlockDataStmt = 20, 
    RuleBlockDataBody = 21, RuleBlockDataBodyConstruct = 22, RuleEndBlockDataStmt = 23, 
    RuleFormatStmt = 24, RuleFmtSpec = 25, RuleFormatedit = 26, RuleEditElement = 27, 
    RuleMislexedFcon = 28, RuleModule = 29, RuleEndModuleStmt = 30, RuleEntryStmt = 31, 
    RuleSubroutineParList = 32, RuleSubroutinePars = 33, RuleSubroutinePar = 34, 
    RuleDeclarationConstruct = 35, RuleSpecificationStmt = 36, RuleTargetStmt = 37, 
    RuleTargetObjectList = 38, RuleTargetObject = 39, RulePointerStmt = 40, 
    RulePointerStmtObjectList = 41, RulePointerStmtObject = 42, RuleOptionalStmt = 43, 
    RuleOptionalParList = 44, RuleOptionalPar = 45, RuleNamelistStmt = 46, 
    RuleNamelistGroups = 47, RuleNamelistGroupName = 48, RuleNamelistGroupObject = 49, 
    RuleIntentStmt = 50, RuleIntentParList = 51, RuleIntentPar = 52, RuleDummyArgName = 53, 
    RuleIntentSpec = 54, RuleAllocatableStmt = 55, RuleArrayAllocationList = 56, 
    RuleArrayAllocation = 57, RuleArrayName = 58, RuleAccessStmt = 59, RuleAccessIdList = 60, 
    RuleAccessId = 61, RuleGenericName = 62, RuleSaveStmt = 63, RuleSavedEntityList = 64, 
    RuleSavedEntity = 65, RuleSavedCommonBlock = 66, RuleIntrinsicStmt = 67, 
    RuleIntrinsicList = 68, RuleIntrinsicProcedureName = 69, RuleExternalStmt = 70, 
    RuleExternalNameList = 71, RuleExternalName = 72, RuleEquivalenceStmt = 73, 
    RuleEquivalenceSetList = 74, RuleEquivalenceSet = 75, RuleEquivalenceObject = 76, 
    RuleEquivalenceObjectList = 77, RuleDimensionStmt = 78, RuleArrayDeclaratorList = 79, 
    RuleCommonStmt = 80, RuleComlist = 81, RuleCommonBlockObject = 82, RuleArrayDeclarator = 83, 
    RuleComblock = 84, RuleCommonBlockName = 85, RuleTypeDeclarationStmt = 86, 
    RuleAttrSpecSeq = 87, RuleAttrSpec = 88, RuleEntityDeclList = 89, RuleEntityDecl = 90, 
    RuleObjectName = 91, RuleName = 92, RuleArraySpec = 93, RuleAssumedShapeSpecList = 94, 
    RuleAssumedShapeSpec = 95, RuleAssumedSizeSpec = 96, RuleInterfaceBlock = 97, 
    RuleEndInterfaceStmt = 98, RuleInterfaceStmt = 99, RuleGenericSpec = 100, 
    RuleDefinedOperator = 101, RuleInterfaceBlockBody = 102, RuleInterfaceBodyPartConstruct = 103, 
    RuleModuleProcedureStmt = 104, RuleProcedureNameList = 105, RuleProcedureName = 106, 
    RuleInterfaceBody = 107, RuleSubroutineInterfaceRange = 108, RuleEndSubroutineStmt = 109, 
    RuleRecursive = 110, RuleFunctionPrefix = 111, RuleFunctionInterfaceRange = 112, 
    RuleFunctionParList = 113, RuleFunctionPars = 114, RuleFunctionPar = 115, 
    RuleSubprogramInterfaceBody = 116, RuleEndFunctionStmt = 117, RuleDerivedTypeDef = 118, 
    RuleEndTypeStmt = 119, RuleDerivedTypeStmt = 120, RuleDerivedTypeBody = 121, 
    RuleDerivedTypeBodyConstruct = 122, RulePrivateSequenceStmt = 123, RuleComponentDefStmt = 124, 
    RuleComponentDeclList = 125, RuleComponentDecl = 126, RuleComponentName = 127, 
    RuleComponentAttrSpecList = 128, RuleComponentAttrSpec = 129, RuleComponentArraySpec = 130, 
    RuleExplicitShapeSpecList = 131, RuleExplicitShapeSpec = 132, RuleLowerBound = 133, 
    RuleUpperBound = 134, RuleDeferredShapeSpecList = 135, RuleDeferredShapeSpec = 136, 
    RuleTypeSpec = 137, RuleKindSelector = 138, RuleTypeName = 139, RuleCharSelector = 140, 
    RuleLengthSelector = 141, RuleCharLength = 142, RuleConstant = 143, 
    RuleBozLiteralConstant = 144, RuleStructureConstructor = 145, RuleExprList = 146, 
    RuleNamedConstantUse = 147, RuleTypeParamValue = 148, RuleModuleStmt = 149, 
    RuleModuleName = 150, RuleIdent = 151, RuleModuleBody = 152, RuleModuleSubprogramPartConstruct = 153, 
    RuleContainsStmt = 154, RuleModuleSubprogram = 155, RuleFunctionSubprogram = 156, 
    RuleFunctionName = 157, RuleFunctionRange = 158, RuleBody = 159, RuleBodyConstruct = 160, 
    RuleExecutableConstruct = 161, RuleWhereConstruct = 162, RuleElseWhere = 163, 
    RuleElsewhereStmt = 164, RuleEndWhereStmt = 165, RuleWhere = 166, RuleWhereConstructStmt = 167, 
    RuleMaskExpr = 168, RuleCaseConstruct = 169, RuleSelectCaseRange = 170, 
    RuleEndSelectStmt = 171, RuleSelectCaseBody = 172, RuleCaseBodyConstruct = 173, 
    RuleCaseStmt = 174, RuleCaseSelector = 175, RuleCaseValueRangeList = 176, 
    RuleCaseValueRange = 177, RuleIfConstruct = 178, RuleIfThenStmt = 179, 
    RuleConditionalBody = 180, RuleElseIfConstruct = 181, RuleElseIfStmt = 182, 
    RuleElseConstruct = 183, RuleElseStmt = 184, RuleEndIfStmt = 185, RuleDoConstruct = 186, 
    RuleBlockDoConstruct = 187, RuleEndDoStmt = 188, RuleEndName = 189, 
    RuleNameColon = 190, RuleLabelDoStmt = 191, RuleDoLblRef = 192, RuleDoLblDef = 193, 
    RuleDoLabelStmt = 194, RuleExecutionPartConstruct = 195, RuleDoubleDoStmt = 196, 
    RuleDataStmt = 197, RuleDataStmtSet = 198, RuleDse1 = 199, RuleDse2 = 200, 
    RuleDataStmtValue = 201, RuleDataStmtObject = 202, RuleVariable = 203, 
    RuleSubscriptListRef = 204, RuleSubscriptList = 205, RuleSubscript = 206, 
    RuleSubstringRange = 207, RuleDataImpliedDo = 208, RuleDataIDoObjectList = 209, 
    RuleDataIDoObject = 210, RuleStructureComponent = 211, RuleFieldSelector = 212, 
    RuleArrayElement = 213, RuleImpliedDoVariable = 214, RuleCommaLoopControl = 215, 
    RuleLoopControl = 216, RuleVariableName = 217, RuleCommaExpr = 218, 
    RuleSemicolonStmt = 219, RuleActionStmt = 220, RuleWhereStmt = 221, 
    RulePointerAssignmentStmt = 222, RuleTarget = 223, RuleNullifyStmt = 224, 
    RulePointerObjectList = 225, RulePointerObject = 226, RulePointerField = 227, 
    RuleExitStmt = 228, RuleDeallocateStmt = 229, RuleAllocateObjectList = 230, 
    RuleCycleStmt = 231, RuleAllocateStmt = 232, RuleAllocationList = 233, 
    RuleAllocation = 234, RuleAllocateObject = 235, RuleAllocatedShape = 236, 
    RuleStopStmt = 237, RuleWriteStmt = 238, RuleIoControlSpecList = 239, 
    RuleStmtFunctionStmt = 240, RuleStmtFunctionRange = 241, RuleSFDummyArgNameList = 242, 
    RuleSFDummyArgName = 243, RuleReturnStmt = 244, RuleRewindStmt = 245, 
    RuleReadStmt = 246, RuleCommaInputItemList = 247, RuleRdFmtId = 248, 
    RuleRdFmtIdExpr = 249, RuleInputItemList = 250, RuleInputItem = 251, 
    RuleInputImpliedDo = 252, RuleRdCtlSpec = 253, RuleRdUnitId = 254, RuleRdIoCtlSpecList = 255, 
    RuleIoControlSpec = 256, RulePrintStmt = 257, RuleOutputItemList = 258, 
    RuleOutputItemList1 = 259, RuleOutputImpliedDo = 260, RuleFormatIdentifier = 261, 
    RulePauseStmt = 262, RuleOpenStmt = 263, RuleConnectSpecList = 264, 
    RuleConnectSpec = 265, RuleInquireStmt = 266, RuleInquireSpecList = 267, 
    RuleInquireSpec = 268, RuleAssignedGotoStmt = 269, RuleVariableComma = 270, 
    RuleGotoStmt = 271, RuleComputedGotoStmt = 272, RuleLblRefList = 273, 
    RuleEndfileStmt = 274, RuleContinueStmt = 275, RuleCloseStmt = 276, 
    RuleCloseSpecList = 277, RuleCloseSpec = 278, RuleCExpression = 279, 
    RuleCPrimary = 280, RuleCOperand = 281, RuleCPrimaryConcatOp = 282, 
    RuleCallStmt = 283, RuleSubroutineNameUse = 284, RuleSubroutineArgList = 285, 
    RuleSubroutineArg = 286, RuleArithmeticIfStmt = 287, RuleLblRef = 288, 
    RuleLabel = 289, RuleAssignmentStmt = 290, RuleSFExprListRef = 291, 
    RuleSFExprList = 292, RuleCommaSectionSubscript = 293, RuleAssignStmt = 294, 
    RuleBackspaceStmt = 295, RuleUnitIdentifier = 296, RulePositionSpecList = 297, 
    RuleUnitIdentifierComma = 298, RulePositionSpec = 299, RuleScalarVariable = 300, 
    RuleUFExpr = 301, RuleUFTerm = 302, RuleUFFactor = 303, RuleUFPrimary = 304, 
    RuleSubroutineSubprogram = 305, RuleSubroutineName = 306, RuleSubroutineRange = 307, 
    RuleIncludeStmt = 308, RuleImplicitStmt = 309, RuleImplicitSpecList = 310, 
    RuleImplicitSpec = 311, RuleImplicitRanges = 312, RuleImplicitRange = 313, 
    RuleExpression = 314, RuleDefinedBinaryOp = 315, RuleLevel5Expr = 316, 
    RuleEquivOperand = 317, RuleOrOperand = 318, RuleAndOperand = 319, RuleRelOp = 320, 
    RuleLevel4Expr = 321, RuleLevel3Expr = 322, RuleLevel2Expr = 323, RuleSign = 324, 
    RuleAddOperand = 325, RuleMultOperand = 326, RuleLevel1Expr = 327, RuleDefinedUnaryOp = 328, 
    RulePrimary = 329, RuleArrayConstructor = 330, RuleAcValueList = 331, 
    RuleAcValueList1 = 332, RuleAcImpliedDo = 333, RuleFunctionReference = 334, 
    RuleFunctionArgList = 335, RuleFunctionArg = 336, RuleNameDataRef = 337, 
    RuleComplexDataRefTail = 338, RuleSectionSubscriptRef = 339, RuleSectionSubscriptList = 340, 
    RuleSectionSubscript = 341, RuleSubscriptTripletTail = 342, RuleLogicalConstant = 343, 
    RuleKindParam = 344, RuleUnsignedArithmeticConstant = 345, RuleComplexConst = 346, 
    RuleComplexComponent = 347, RuleConstantExpr = 348, RuleIfStmt = 349
  };

  explicit Fortran90Parser(antlr4::TokenStream *input);

  Fortran90Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Fortran90Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class ExecutableProgramContext;
  class ProgramUnitContext;
  class MainProgramContext;
  class ProgramStmtContext;
  class MainRangeContext;
  class BodyPlusInternalsContext;
  class InternalSubprogramContext;
  class SpecificationPartConstructContext;
  class UseStmtContext;
  class OnlyListContext;
  class OnlyStmtContext;
  class RenameListContext;
  class RenameContext;
  class UseNameContext;
  class ParameterStmtContext;
  class NamedConstantDefListContext;
  class NamedConstantDefContext;
  class EndProgramStmtContext;
  class BlockDataSubprogramContext;
  class BlockDataStmtContext;
  class BlockDataBodyContext;
  class BlockDataBodyConstructContext;
  class EndBlockDataStmtContext;
  class FormatStmtContext;
  class FmtSpecContext;
  class FormateditContext;
  class EditElementContext;
  class MislexedFconContext;
  class ModuleContext;
  class EndModuleStmtContext;
  class EntryStmtContext;
  class SubroutineParListContext;
  class SubroutineParsContext;
  class SubroutineParContext;
  class DeclarationConstructContext;
  class SpecificationStmtContext;
  class TargetStmtContext;
  class TargetObjectListContext;
  class TargetObjectContext;
  class PointerStmtContext;
  class PointerStmtObjectListContext;
  class PointerStmtObjectContext;
  class OptionalStmtContext;
  class OptionalParListContext;
  class OptionalParContext;
  class NamelistStmtContext;
  class NamelistGroupsContext;
  class NamelistGroupNameContext;
  class NamelistGroupObjectContext;
  class IntentStmtContext;
  class IntentParListContext;
  class IntentParContext;
  class DummyArgNameContext;
  class IntentSpecContext;
  class AllocatableStmtContext;
  class ArrayAllocationListContext;
  class ArrayAllocationContext;
  class ArrayNameContext;
  class AccessStmtContext;
  class AccessIdListContext;
  class AccessIdContext;
  class GenericNameContext;
  class SaveStmtContext;
  class SavedEntityListContext;
  class SavedEntityContext;
  class SavedCommonBlockContext;
  class IntrinsicStmtContext;
  class IntrinsicListContext;
  class IntrinsicProcedureNameContext;
  class ExternalStmtContext;
  class ExternalNameListContext;
  class ExternalNameContext;
  class EquivalenceStmtContext;
  class EquivalenceSetListContext;
  class EquivalenceSetContext;
  class EquivalenceObjectContext;
  class EquivalenceObjectListContext;
  class DimensionStmtContext;
  class ArrayDeclaratorListContext;
  class CommonStmtContext;
  class ComlistContext;
  class CommonBlockObjectContext;
  class ArrayDeclaratorContext;
  class ComblockContext;
  class CommonBlockNameContext;
  class TypeDeclarationStmtContext;
  class AttrSpecSeqContext;
  class AttrSpecContext;
  class EntityDeclListContext;
  class EntityDeclContext;
  class ObjectNameContext;
  class NameContext;
  class ArraySpecContext;
  class AssumedShapeSpecListContext;
  class AssumedShapeSpecContext;
  class AssumedSizeSpecContext;
  class InterfaceBlockContext;
  class EndInterfaceStmtContext;
  class InterfaceStmtContext;
  class GenericSpecContext;
  class DefinedOperatorContext;
  class InterfaceBlockBodyContext;
  class InterfaceBodyPartConstructContext;
  class ModuleProcedureStmtContext;
  class ProcedureNameListContext;
  class ProcedureNameContext;
  class InterfaceBodyContext;
  class SubroutineInterfaceRangeContext;
  class EndSubroutineStmtContext;
  class RecursiveContext;
  class FunctionPrefixContext;
  class FunctionInterfaceRangeContext;
  class FunctionParListContext;
  class FunctionParsContext;
  class FunctionParContext;
  class SubprogramInterfaceBodyContext;
  class EndFunctionStmtContext;
  class DerivedTypeDefContext;
  class EndTypeStmtContext;
  class DerivedTypeStmtContext;
  class DerivedTypeBodyContext;
  class DerivedTypeBodyConstructContext;
  class PrivateSequenceStmtContext;
  class ComponentDefStmtContext;
  class ComponentDeclListContext;
  class ComponentDeclContext;
  class ComponentNameContext;
  class ComponentAttrSpecListContext;
  class ComponentAttrSpecContext;
  class ComponentArraySpecContext;
  class ExplicitShapeSpecListContext;
  class ExplicitShapeSpecContext;
  class LowerBoundContext;
  class UpperBoundContext;
  class DeferredShapeSpecListContext;
  class DeferredShapeSpecContext;
  class TypeSpecContext;
  class KindSelectorContext;
  class TypeNameContext;
  class CharSelectorContext;
  class LengthSelectorContext;
  class CharLengthContext;
  class ConstantContext;
  class BozLiteralConstantContext;
  class StructureConstructorContext;
  class ExprListContext;
  class NamedConstantUseContext;
  class TypeParamValueContext;
  class ModuleStmtContext;
  class ModuleNameContext;
  class IdentContext;
  class ModuleBodyContext;
  class ModuleSubprogramPartConstructContext;
  class ContainsStmtContext;
  class ModuleSubprogramContext;
  class FunctionSubprogramContext;
  class FunctionNameContext;
  class FunctionRangeContext;
  class BodyContext;
  class BodyConstructContext;
  class ExecutableConstructContext;
  class WhereConstructContext;
  class ElseWhereContext;
  class ElsewhereStmtContext;
  class EndWhereStmtContext;
  class WhereContext;
  class WhereConstructStmtContext;
  class MaskExprContext;
  class CaseConstructContext;
  class SelectCaseRangeContext;
  class EndSelectStmtContext;
  class SelectCaseBodyContext;
  class CaseBodyConstructContext;
  class CaseStmtContext;
  class CaseSelectorContext;
  class CaseValueRangeListContext;
  class CaseValueRangeContext;
  class IfConstructContext;
  class IfThenStmtContext;
  class ConditionalBodyContext;
  class ElseIfConstructContext;
  class ElseIfStmtContext;
  class ElseConstructContext;
  class ElseStmtContext;
  class EndIfStmtContext;
  class DoConstructContext;
  class BlockDoConstructContext;
  class EndDoStmtContext;
  class EndNameContext;
  class NameColonContext;
  class LabelDoStmtContext;
  class DoLblRefContext;
  class DoLblDefContext;
  class DoLabelStmtContext;
  class ExecutionPartConstructContext;
  class DoubleDoStmtContext;
  class DataStmtContext;
  class DataStmtSetContext;
  class Dse1Context;
  class Dse2Context;
  class DataStmtValueContext;
  class DataStmtObjectContext;
  class VariableContext;
  class SubscriptListRefContext;
  class SubscriptListContext;
  class SubscriptContext;
  class SubstringRangeContext;
  class DataImpliedDoContext;
  class DataIDoObjectListContext;
  class DataIDoObjectContext;
  class StructureComponentContext;
  class FieldSelectorContext;
  class ArrayElementContext;
  class ImpliedDoVariableContext;
  class CommaLoopControlContext;
  class LoopControlContext;
  class VariableNameContext;
  class CommaExprContext;
  class SemicolonStmtContext;
  class ActionStmtContext;
  class WhereStmtContext;
  class PointerAssignmentStmtContext;
  class TargetContext;
  class NullifyStmtContext;
  class PointerObjectListContext;
  class PointerObjectContext;
  class PointerFieldContext;
  class ExitStmtContext;
  class DeallocateStmtContext;
  class AllocateObjectListContext;
  class CycleStmtContext;
  class AllocateStmtContext;
  class AllocationListContext;
  class AllocationContext;
  class AllocateObjectContext;
  class AllocatedShapeContext;
  class StopStmtContext;
  class WriteStmtContext;
  class IoControlSpecListContext;
  class StmtFunctionStmtContext;
  class StmtFunctionRangeContext;
  class SFDummyArgNameListContext;
  class SFDummyArgNameContext;
  class ReturnStmtContext;
  class RewindStmtContext;
  class ReadStmtContext;
  class CommaInputItemListContext;
  class RdFmtIdContext;
  class RdFmtIdExprContext;
  class InputItemListContext;
  class InputItemContext;
  class InputImpliedDoContext;
  class RdCtlSpecContext;
  class RdUnitIdContext;
  class RdIoCtlSpecListContext;
  class IoControlSpecContext;
  class PrintStmtContext;
  class OutputItemListContext;
  class OutputItemList1Context;
  class OutputImpliedDoContext;
  class FormatIdentifierContext;
  class PauseStmtContext;
  class OpenStmtContext;
  class ConnectSpecListContext;
  class ConnectSpecContext;
  class InquireStmtContext;
  class InquireSpecListContext;
  class InquireSpecContext;
  class AssignedGotoStmtContext;
  class VariableCommaContext;
  class GotoStmtContext;
  class ComputedGotoStmtContext;
  class LblRefListContext;
  class EndfileStmtContext;
  class ContinueStmtContext;
  class CloseStmtContext;
  class CloseSpecListContext;
  class CloseSpecContext;
  class CExpressionContext;
  class CPrimaryContext;
  class COperandContext;
  class CPrimaryConcatOpContext;
  class CallStmtContext;
  class SubroutineNameUseContext;
  class SubroutineArgListContext;
  class SubroutineArgContext;
  class ArithmeticIfStmtContext;
  class LblRefContext;
  class LabelContext;
  class AssignmentStmtContext;
  class SFExprListRefContext;
  class SFExprListContext;
  class CommaSectionSubscriptContext;
  class AssignStmtContext;
  class BackspaceStmtContext;
  class UnitIdentifierContext;
  class PositionSpecListContext;
  class UnitIdentifierCommaContext;
  class PositionSpecContext;
  class ScalarVariableContext;
  class UFExprContext;
  class UFTermContext;
  class UFFactorContext;
  class UFPrimaryContext;
  class SubroutineSubprogramContext;
  class SubroutineNameContext;
  class SubroutineRangeContext;
  class IncludeStmtContext;
  class ImplicitStmtContext;
  class ImplicitSpecListContext;
  class ImplicitSpecContext;
  class ImplicitRangesContext;
  class ImplicitRangeContext;
  class ExpressionContext;
  class DefinedBinaryOpContext;
  class Level5ExprContext;
  class EquivOperandContext;
  class OrOperandContext;
  class AndOperandContext;
  class RelOpContext;
  class Level4ExprContext;
  class Level3ExprContext;
  class Level2ExprContext;
  class SignContext;
  class AddOperandContext;
  class MultOperandContext;
  class Level1ExprContext;
  class DefinedUnaryOpContext;
  class PrimaryContext;
  class ArrayConstructorContext;
  class AcValueListContext;
  class AcValueList1Context;
  class AcImpliedDoContext;
  class FunctionReferenceContext;
  class FunctionArgListContext;
  class FunctionArgContext;
  class NameDataRefContext;
  class ComplexDataRefTailContext;
  class SectionSubscriptRefContext;
  class SectionSubscriptListContext;
  class SectionSubscriptContext;
  class SubscriptTripletTailContext;
  class LogicalConstantContext;
  class KindParamContext;
  class UnsignedArithmeticConstantContext;
  class ComplexConstContext;
  class ComplexComponentContext;
  class ConstantExprContext;
  class IfStmtContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExecutableProgramContext *executableProgram();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  ExecutableProgramContext : public antlr4::ParserRuleContext {
  public:
    ExecutableProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProgramUnitContext *> programUnit();
    ProgramUnitContext* programUnit(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecutableProgramContext* executableProgram();

  class  ProgramUnitContext : public antlr4::ParserRuleContext {
  public:
    ProgramUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MainProgramContext *mainProgram();
    FunctionSubprogramContext *functionSubprogram();
    SubroutineSubprogramContext *subroutineSubprogram();
    BlockDataSubprogramContext *blockDataSubprogram();
    ModuleContext *module();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramUnitContext* programUnit();

  class  MainProgramContext : public antlr4::ParserRuleContext {
  public:
    MainProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MainRangeContext *mainRange();
    ProgramStmtContext *programStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MainProgramContext* mainProgram();

  class  ProgramStmtContext : public antlr4::ParserRuleContext {
  public:
    ProgramStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramStmtContext* programStmt();

  class  MainRangeContext : public antlr4::ParserRuleContext {
  public:
    MainRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EndProgramStmtContext *endProgramStmt();
    BodyContext *body();
    BodyPlusInternalsContext *bodyPlusInternals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MainRangeContext* mainRange();

  class  BodyPlusInternalsContext : public antlr4::ParserRuleContext {
  public:
    BodyPlusInternalsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BodyContext *body();
    ContainsStmtContext *containsStmt();
    InternalSubprogramContext *internalSubprogram();
    BodyPlusInternalsContext *bodyPlusInternals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BodyPlusInternalsContext* bodyPlusInternals();
  BodyPlusInternalsContext* bodyPlusInternals(int precedence);
  class  InternalSubprogramContext : public antlr4::ParserRuleContext {
  public:
    InternalSubprogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionSubprogramContext *functionSubprogram();
    SubroutineSubprogramContext *subroutineSubprogram();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InternalSubprogramContext* internalSubprogram();

  class  SpecificationPartConstructContext : public antlr4::ParserRuleContext {
  public:
    SpecificationPartConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImplicitStmtContext *implicitStmt();
    ParameterStmtContext *parameterStmt();
    FormatStmtContext *formatStmt();
    EntryStmtContext *entryStmt();
    DeclarationConstructContext *declarationConstruct();
    IncludeStmtContext *includeStmt();
    UseStmtContext *useStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpecificationPartConstructContext* specificationPartConstruct();

  class  UseStmtContext : public antlr4::ParserRuleContext {
  public:
    UseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *COLON();
    RenameListContext *renameList();
    OnlyListContext *onlyList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UseStmtContext* useStmt();

  class  OnlyListContext : public antlr4::ParserRuleContext {
  public:
    OnlyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OnlyStmtContext *> onlyStmt();
    OnlyStmtContext* onlyStmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OnlyListContext* onlyList();

  class  OnlyStmtContext : public antlr4::ParserRuleContext {
  public:
    OnlyStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GenericSpecContext *genericSpec();
    IdentContext *ident();
    antlr4::tree::TerminalNode *IMPLIEDT();
    UseNameContext *useName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OnlyStmtContext* onlyStmt();

  class  RenameListContext : public antlr4::ParserRuleContext {
  public:
    RenameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RenameContext *> rename();
    RenameContext* rename(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RenameListContext* renameList();

  class  RenameContext : public antlr4::ParserRuleContext {
  public:
    RenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *IMPLIEDT();
    UseNameContext *useName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RenameContext* rename();

  class  UseNameContext : public antlr4::ParserRuleContext {
  public:
    UseNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UseNameContext* useName();

  class  ParameterStmtContext : public antlr4::ParserRuleContext {
  public:
    ParameterStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *LPAREN();
    NamedConstantDefListContext *namedConstantDefList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterStmtContext* parameterStmt();

  class  NamedConstantDefListContext : public antlr4::ParserRuleContext {
  public:
    NamedConstantDefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedConstantDefContext *> namedConstantDef();
    NamedConstantDefContext* namedConstantDef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedConstantDefListContext* namedConstantDefList();

  class  NamedConstantDefContext : public antlr4::ParserRuleContext {
  public:
    NamedConstantDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedConstantDefContext* namedConstantDef();

  class  EndProgramStmtContext : public antlr4::ParserRuleContext {
  public:
    EndProgramStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndProgramStmtContext* endProgramStmt();

  class  BlockDataSubprogramContext : public antlr4::ParserRuleContext {
  public:
    BlockDataSubprogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDataStmtContext *blockDataStmt();
    BlockDataBodyContext *blockDataBody();
    EndBlockDataStmtContext *endBlockDataStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockDataSubprogramContext* blockDataSubprogram();

  class  BlockDataStmtContext : public antlr4::ParserRuleContext {
  public:
    BlockDataStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BLOCKDATA();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *DATA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockDataStmtContext* blockDataStmt();

  class  BlockDataBodyContext : public antlr4::ParserRuleContext {
  public:
    BlockDataBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDataBodyConstructContext *blockDataBodyConstruct();
    BlockDataBodyContext *blockDataBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockDataBodyContext* blockDataBody();
  BlockDataBodyContext* blockDataBody(int precedence);
  class  BlockDataBodyConstructContext : public antlr4::ParserRuleContext {
  public:
    BlockDataBodyConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpecificationPartConstructContext *specificationPartConstruct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockDataBodyConstructContext* blockDataBodyConstruct();

  class  EndBlockDataStmtContext : public antlr4::ParserRuleContext {
  public:
    EndBlockDataStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDBLOCKDATA();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *BLOCKDATA();
    antlr4::tree::TerminalNode *ENDBLOCK();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *BLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndBlockDataStmtContext* endBlockDataStmt();

  class  FormatStmtContext : public antlr4::ParserRuleContext {
  public:
    FormatStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICON();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FmtSpecContext *fmtSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormatStmtContext* formatStmt();

  class  FmtSpecContext : public antlr4::ParserRuleContext {
  public:
    FmtSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FormateditContext *formatedit();
    antlr4::tree::TerminalNode *FORMATSEP();
    FmtSpecContext *fmtSpec();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FmtSpecContext* fmtSpec();
  FmtSpecContext* fmtSpec(int precedence);
  class  FormateditContext : public antlr4::ParserRuleContext {
  public:
    FormateditContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EditElementContext *editElement();
    antlr4::tree::TerminalNode *ICON();
    antlr4::tree::TerminalNode *XCON();
    antlr4::tree::TerminalNode *PCON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormateditContext* formatedit();

  class  EditElementContext : public antlr4::ParserRuleContext {
  public:
    EditElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FCON();
    MislexedFconContext *mislexedFcon();
    antlr4::tree::TerminalNode *SCON();
    antlr4::tree::TerminalNode *HOLLERITH();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *LPAREN();
    FmtSpecContext *fmtSpec();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EditElementContext* editElement();

  class  MislexedFconContext : public antlr4::ParserRuleContext {
  public:
    MislexedFconContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RDCON();
    antlr4::tree::TerminalNode* RDCON(size_t i);
    antlr4::tree::TerminalNode *SPOFF();
    antlr4::tree::TerminalNode *SPON();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MislexedFconContext* mislexedFcon();

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleStmtContext *moduleStmt();
    ModuleBodyContext *moduleBody();
    EndModuleStmtContext *endModuleStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleContext* module();

  class  EndModuleStmtContext : public antlr4::ParserRuleContext {
  public:
    EndModuleStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ENDMODULE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndModuleStmtContext* endModuleStmt();

  class  EntryStmtContext : public antlr4::ParserRuleContext {
  public:
    EntryStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENTRY();
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    SubroutineParListContext *subroutineParList();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EntryStmtContext* entryStmt();

  class  SubroutineParListContext : public antlr4::ParserRuleContext {
  public:
    SubroutineParListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    SubroutineParsContext *subroutinePars();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineParListContext* subroutineParList();

  class  SubroutineParsContext : public antlr4::ParserRuleContext {
  public:
    SubroutineParsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubroutineParContext *> subroutinePar();
    SubroutineParContext* subroutinePar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineParsContext* subroutinePars();

  class  SubroutineParContext : public antlr4::ParserRuleContext {
  public:
    SubroutineParContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DummyArgNameContext *dummyArgName();
    antlr4::tree::TerminalNode *STAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineParContext* subroutinePar();

  class  DeclarationConstructContext : public antlr4::ParserRuleContext {
  public:
    DeclarationConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DerivedTypeDefContext *derivedTypeDef();
    InterfaceBlockContext *interfaceBlock();
    TypeDeclarationStmtContext *typeDeclarationStmt();
    SpecificationStmtContext *specificationStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationConstructContext* declarationConstruct();

  class  SpecificationStmtContext : public antlr4::ParserRuleContext {
  public:
    SpecificationStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonStmtContext *commonStmt();
    DataStmtContext *dataStmt();
    DimensionStmtContext *dimensionStmt();
    EquivalenceStmtContext *equivalenceStmt();
    ExternalStmtContext *externalStmt();
    IntrinsicStmtContext *intrinsicStmt();
    SaveStmtContext *saveStmt();
    AccessStmtContext *accessStmt();
    AllocatableStmtContext *allocatableStmt();
    IntentStmtContext *intentStmt();
    NamelistStmtContext *namelistStmt();
    OptionalStmtContext *optionalStmt();
    PointerStmtContext *pointerStmt();
    TargetStmtContext *targetStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpecificationStmtContext* specificationStmt();

  class  TargetStmtContext : public antlr4::ParserRuleContext {
  public:
    TargetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGET();
    TargetObjectListContext *targetObjectList();
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TargetStmtContext* targetStmt();

  class  TargetObjectListContext : public antlr4::ParserRuleContext {
  public:
    TargetObjectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TargetObjectContext *> targetObject();
    TargetObjectContext* targetObject(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TargetObjectListContext* targetObjectList();

  class  TargetObjectContext : public antlr4::ParserRuleContext {
  public:
    TargetObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectNameContext *objectName();
    antlr4::tree::TerminalNode *LPAREN();
    ArraySpecContext *arraySpec();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TargetObjectContext* targetObject();

  class  PointerStmtContext : public antlr4::ParserRuleContext {
  public:
    PointerStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POINTER();
    PointerStmtObjectListContext *pointerStmtObjectList();
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerStmtContext* pointerStmt();

  class  PointerStmtObjectListContext : public antlr4::ParserRuleContext {
  public:
    PointerStmtObjectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PointerStmtObjectContext *> pointerStmtObject();
    PointerStmtObjectContext* pointerStmtObject(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerStmtObjectListContext* pointerStmtObjectList();

  class  PointerStmtObjectContext : public antlr4::ParserRuleContext {
  public:
    PointerStmtObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectNameContext *objectName();
    antlr4::tree::TerminalNode *LPAREN();
    DeferredShapeSpecListContext *deferredShapeSpecList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerStmtObjectContext* pointerStmtObject();

  class  OptionalStmtContext : public antlr4::ParserRuleContext {
  public:
    OptionalStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONAL();
    OptionalParListContext *optionalParList();
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalStmtContext* optionalStmt();

  class  OptionalParListContext : public antlr4::ParserRuleContext {
  public:
    OptionalParListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OptionalParContext *> optionalPar();
    OptionalParContext* optionalPar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalParListContext* optionalParList();

  class  OptionalParContext : public antlr4::ParserRuleContext {
  public:
    OptionalParContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DummyArgNameContext *dummyArgName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionalParContext* optionalPar();

  class  NamelistStmtContext : public antlr4::ParserRuleContext {
  public:
    NamelistStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAMELIST();
    NamelistGroupsContext *namelistGroups();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamelistStmtContext* namelistStmt();

  class  NamelistGroupsContext : public antlr4::ParserRuleContext {
  public:
    NamelistGroupsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    NamelistGroupNameContext *namelistGroupName();
    NamelistGroupObjectContext *namelistGroupObject();
    NamelistGroupsContext *namelistGroups();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamelistGroupsContext* namelistGroups();
  NamelistGroupsContext* namelistGroups(int precedence);
  class  NamelistGroupNameContext : public antlr4::ParserRuleContext {
  public:
    NamelistGroupNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamelistGroupNameContext* namelistGroupName();

  class  NamelistGroupObjectContext : public antlr4::ParserRuleContext {
  public:
    NamelistGroupObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamelistGroupObjectContext* namelistGroupObject();

  class  IntentStmtContext : public antlr4::ParserRuleContext {
  public:
    IntentStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTENT();
    antlr4::tree::TerminalNode *LPAREN();
    IntentSpecContext *intentSpec();
    antlr4::tree::TerminalNode *RPAREN();
    IntentParListContext *intentParList();
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntentStmtContext* intentStmt();

  class  IntentParListContext : public antlr4::ParserRuleContext {
  public:
    IntentParListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IntentParContext *> intentPar();
    IntentParContext* intentPar(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntentParListContext* intentParList();

  class  IntentParContext : public antlr4::ParserRuleContext {
  public:
    IntentParContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DummyArgNameContext *dummyArgName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntentParContext* intentPar();

  class  DummyArgNameContext : public antlr4::ParserRuleContext {
  public:
    DummyArgNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DummyArgNameContext* dummyArgName();

  class  IntentSpecContext : public antlr4::ParserRuleContext {
  public:
    IntentSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntentSpecContext* intentSpec();

  class  AllocatableStmtContext : public antlr4::ParserRuleContext {
  public:
    AllocatableStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALLOCATABLE();
    ArrayAllocationListContext *arrayAllocationList();
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AllocatableStmtContext* allocatableStmt();

  class  ArrayAllocationListContext : public antlr4::ParserRuleContext {
  public:
    ArrayAllocationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayAllocationContext *> arrayAllocation();
    ArrayAllocationContext* arrayAllocation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayAllocationListContext* arrayAllocationList();

  class  ArrayAllocationContext : public antlr4::ParserRuleContext {
  public:
    ArrayAllocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayNameContext *arrayName();
    antlr4::tree::TerminalNode *LPAREN();
    DeferredShapeSpecListContext *deferredShapeSpecList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayAllocationContext* arrayAllocation();

  class  ArrayNameContext : public antlr4::ParserRuleContext {
  public:
    ArrayNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayNameContext* arrayName();

  class  AccessStmtContext : public antlr4::ParserRuleContext {
  public:
    AccessStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESSSPEC();
    AccessIdListContext *accessIdList();
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessStmtContext* accessStmt();

  class  AccessIdListContext : public antlr4::ParserRuleContext {
  public:
    AccessIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AccessIdContext *> accessId();
    AccessIdContext* accessId(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessIdListContext* accessIdList();

  class  AccessIdContext : public antlr4::ParserRuleContext {
  public:
    AccessIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GenericNameContext *genericName();
    GenericSpecContext *genericSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessIdContext* accessId();

  class  GenericNameContext : public antlr4::ParserRuleContext {
  public:
    GenericNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericNameContext* genericName();

  class  SaveStmtContext : public antlr4::ParserRuleContext {
  public:
    SaveStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVE();
    SavedEntityListContext *savedEntityList();
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SaveStmtContext* saveStmt();

  class  SavedEntityListContext : public antlr4::ParserRuleContext {
  public:
    SavedEntityListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SavedEntityContext *> savedEntity();
    SavedEntityContext* savedEntity(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SavedEntityListContext* savedEntityList();

  class  SavedEntityContext : public antlr4::ParserRuleContext {
  public:
    SavedEntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    SavedCommonBlockContext *savedCommonBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SavedEntityContext* savedEntity();

  class  SavedCommonBlockContext : public antlr4::ParserRuleContext {
  public:
    SavedCommonBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    CommonBlockNameContext *commonBlockName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SavedCommonBlockContext* savedCommonBlock();

  class  IntrinsicStmtContext : public antlr4::ParserRuleContext {
  public:
    IntrinsicStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTRINSIC();
    IntrinsicListContext *intrinsicList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntrinsicStmtContext* intrinsicStmt();

  class  IntrinsicListContext : public antlr4::ParserRuleContext {
  public:
    IntrinsicListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IntrinsicProcedureNameContext *> intrinsicProcedureName();
    IntrinsicProcedureNameContext* intrinsicProcedureName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntrinsicListContext* intrinsicList();

  class  IntrinsicProcedureNameContext : public antlr4::ParserRuleContext {
  public:
    IntrinsicProcedureNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntrinsicProcedureNameContext* intrinsicProcedureName();

  class  ExternalStmtContext : public antlr4::ParserRuleContext {
  public:
    ExternalStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERNAL();
    ExternalNameListContext *externalNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExternalStmtContext* externalStmt();

  class  ExternalNameListContext : public antlr4::ParserRuleContext {
  public:
    ExternalNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExternalNameContext *> externalName();
    ExternalNameContext* externalName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExternalNameListContext* externalNameList();

  class  ExternalNameContext : public antlr4::ParserRuleContext {
  public:
    ExternalNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExternalNameContext* externalName();

  class  EquivalenceStmtContext : public antlr4::ParserRuleContext {
  public:
    EquivalenceStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUIVALENCE();
    EquivalenceSetListContext *equivalenceSetList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EquivalenceStmtContext* equivalenceStmt();

  class  EquivalenceSetListContext : public antlr4::ParserRuleContext {
  public:
    EquivalenceSetListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EquivalenceSetContext *> equivalenceSet();
    EquivalenceSetContext* equivalenceSet(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EquivalenceSetListContext* equivalenceSetList();

  class  EquivalenceSetContext : public antlr4::ParserRuleContext {
  public:
    EquivalenceSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    EquivalenceObjectContext *equivalenceObject();
    antlr4::tree::TerminalNode *COMMA();
    EquivalenceObjectListContext *equivalenceObjectList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EquivalenceSetContext* equivalenceSet();

  class  EquivalenceObjectContext : public antlr4::ParserRuleContext {
  public:
    EquivalenceObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EquivalenceObjectContext* equivalenceObject();

  class  EquivalenceObjectListContext : public antlr4::ParserRuleContext {
  public:
    EquivalenceObjectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EquivalenceObjectContext *> equivalenceObject();
    EquivalenceObjectContext* equivalenceObject(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EquivalenceObjectListContext* equivalenceObjectList();

  class  DimensionStmtContext : public antlr4::ParserRuleContext {
  public:
    DimensionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIMENSION();
    ArrayDeclaratorListContext *arrayDeclaratorList();
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DimensionStmtContext* dimensionStmt();

  class  ArrayDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    ArrayDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayDeclaratorContext *> arrayDeclarator();
    ArrayDeclaratorContext* arrayDeclarator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayDeclaratorListContext* arrayDeclaratorList();

  class  CommonStmtContext : public antlr4::ParserRuleContext {
  public:
    CommonStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMON();
    ComlistContext *comlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommonStmtContext* commonStmt();

  class  ComlistContext : public antlr4::ParserRuleContext {
  public:
    ComlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommonBlockObjectContext *commonBlockObject();
    ComblockContext *comblock();
    ComlistContext *comlist();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComlistContext* comlist();
  ComlistContext* comlist(int precedence);
  class  CommonBlockObjectContext : public antlr4::ParserRuleContext {
  public:
    CommonBlockObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    ArrayDeclaratorContext *arrayDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommonBlockObjectContext* commonBlockObject();

  class  ArrayDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ArrayDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    antlr4::tree::TerminalNode *LPAREN();
    ArraySpecContext *arraySpec();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayDeclaratorContext* arrayDeclarator();

  class  ComblockContext : public antlr4::ParserRuleContext {
  public:
    ComblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    antlr4::tree::TerminalNode *SPOFF();
    antlr4::tree::TerminalNode *SPON();
    CommonBlockNameContext *commonBlockName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComblockContext* comblock();

  class  CommonBlockNameContext : public antlr4::ParserRuleContext {
  public:
    CommonBlockNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommonBlockNameContext* commonBlockName();

  class  TypeDeclarationStmtContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclarationStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecContext *typeSpec();
    EntityDeclListContext *entityDeclList();
    antlr4::tree::TerminalNode *DOUBLECOLON();
    AttrSpecSeqContext *attrSpecSeq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeDeclarationStmtContext* typeDeclarationStmt();

  class  AttrSpecSeqContext : public antlr4::ParserRuleContext {
  public:
    AttrSpecSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    AttrSpecContext *attrSpec();
    AttrSpecSeqContext *attrSpecSeq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttrSpecSeqContext* attrSpecSeq();
  AttrSpecSeqContext* attrSpecSeq(int precedence);
  class  AttrSpecContext : public antlr4::ParserRuleContext {
  public:
    AttrSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *ACCESSSPEC();
    antlr4::tree::TerminalNode *ALLOCATABLE();
    antlr4::tree::TerminalNode *DIMENSION();
    antlr4::tree::TerminalNode *LPAREN();
    ArraySpecContext *arraySpec();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *INTENT();
    IntentSpecContext *intentSpec();
    antlr4::tree::TerminalNode *INTRINSIC();
    antlr4::tree::TerminalNode *OPTIONAL();
    antlr4::tree::TerminalNode *POINTER();
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *TARGET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttrSpecContext* attrSpec();

  class  EntityDeclListContext : public antlr4::ParserRuleContext {
  public:
    EntityDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EntityDeclContext *> entityDecl();
    EntityDeclContext* entityDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EntityDeclListContext* entityDeclList();

  class  EntityDeclContext : public antlr4::ParserRuleContext {
  public:
    EntityDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectNameContext *objectName();
    antlr4::tree::TerminalNode *LPAREN();
    ArraySpecContext *arraySpec();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *STAR();
    CharLengthContext *charLength();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EntityDeclContext* entityDecl();

  class  ObjectNameContext : public antlr4::ParserRuleContext {
  public:
    ObjectNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectNameContext* objectName();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ACCESSSPEC();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ADVANCE();
    antlr4::tree::TerminalNode *AIF();
    antlr4::tree::TerminalNode *ALLOCATABLE();
    antlr4::tree::TerminalNode *ALLOCATE();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *ASSIGNSTMT();
    antlr4::tree::TerminalNode *BACKSPACE();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *BLOCKDATA();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CCON();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *CODEROOT();
    antlr4::tree::TerminalNode *COMMON();
    antlr4::tree::TerminalNode *COMPLEX();
    antlr4::tree::TerminalNode *CONCATOP();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *CTRLDIRECT();
    antlr4::tree::TerminalNode *CTRLREC();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DELIM();
    antlr4::tree::TerminalNode *DIMENSION();
    antlr4::tree::TerminalNode *DIRECT();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DOBLOCK();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *DOUBLEPRECISION();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ELSEBLOCK();
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *ELSEWHERE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDBLOCK();
    antlr4::tree::TerminalNode *ENDBLOCKDATA();
    antlr4::tree::TerminalNode *ENDDO();
    antlr4::tree::TerminalNode *ENDFILE();
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *ENDINTERFACE();
    antlr4::tree::TerminalNode *ENDMODULE();
    antlr4::tree::TerminalNode *ENDSELECT();
    antlr4::tree::TerminalNode *ENDTYPE();
    antlr4::tree::TerminalNode *ENDWHERE();
    antlr4::tree::TerminalNode *ENTRY();
    antlr4::tree::TerminalNode *EQUIVALENCE();
    antlr4::tree::TerminalNode *ERR();
    antlr4::tree::TerminalNode *EXIST();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FMT();
    antlr4::tree::TerminalNode *FORM();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FORMATTED();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *HOLLERITH();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *INQUIRE();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INTENT();
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *INTRINSIC();
    antlr4::tree::TerminalNode *IOLENGTH();
    antlr4::tree::TerminalNode *IOSTART();
    antlr4::tree::TerminalNode *IOSTAT();
    antlr4::tree::TerminalNode *KIND();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *LEN();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *NAME_();
    antlr4::tree::TerminalNode *NAMED();
    antlr4::tree::TerminalNode *NAMELIST();
    antlr4::tree::TerminalNode *NEXTREC();
    antlr4::tree::TerminalNode *NML();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NULLIFY();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPENED();
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *OPTIONAL();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *PAD();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *PAUSE();
    antlr4::tree::TerminalNode *POINTER();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *READWRITE();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REC();
    antlr4::tree::TerminalNode *RECL();
    antlr4::tree::TerminalNode *RECURSIVE();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *REWIND();
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SELECTCASE();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SEQUENTIAL();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SPOFF();
    antlr4::tree::TerminalNode *SPON();
    antlr4::tree::TerminalNode *STAT();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *SUBPROGRAMBLOCK();
    antlr4::tree::TerminalNode *SUBROUTINE();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *THENBLOCK();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *UNFORMATTED();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *WRITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameContext* name();

  class  ArraySpecContext : public antlr4::ParserRuleContext {
  public:
    ArraySpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExplicitShapeSpecListContext *explicitShapeSpecList();
    AssumedSizeSpecContext *assumedSizeSpec();
    AssumedShapeSpecListContext *assumedShapeSpecList();
    DeferredShapeSpecListContext *deferredShapeSpecList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArraySpecContext* arraySpec();

  class  AssumedShapeSpecListContext : public antlr4::ParserRuleContext {
  public:
    AssumedShapeSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LowerBoundContext *lowerBound();
    antlr4::tree::TerminalNode *COLON();
    DeferredShapeSpecListContext *deferredShapeSpecList();
    antlr4::tree::TerminalNode *COMMA();
    AssumedShapeSpecListContext *assumedShapeSpecList();
    AssumedShapeSpecContext *assumedShapeSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssumedShapeSpecListContext* assumedShapeSpecList();
  AssumedShapeSpecListContext* assumedShapeSpecList(int precedence);
  class  AssumedShapeSpecContext : public antlr4::ParserRuleContext {
  public:
    AssumedShapeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LowerBoundContext *lowerBound();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssumedShapeSpecContext* assumedShapeSpec();

  class  AssumedSizeSpecContext : public antlr4::ParserRuleContext {
  public:
    AssumedSizeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    LowerBoundContext *lowerBound();
    antlr4::tree::TerminalNode *COLON();
    ExplicitShapeSpecListContext *explicitShapeSpecList();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssumedSizeSpecContext* assumedSizeSpec();

  class  InterfaceBlockContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceStmtContext *interfaceStmt();
    InterfaceBlockBodyContext *interfaceBlockBody();
    EndInterfaceStmtContext *endInterfaceStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceBlockContext* interfaceBlock();

  class  EndInterfaceStmtContext : public antlr4::ParserRuleContext {
  public:
    EndInterfaceStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDINTERFACE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndInterfaceStmtContext* endInterfaceStmt();

  class  InterfaceStmtContext : public antlr4::ParserRuleContext {
  public:
    InterfaceStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *NAME();
    GenericSpecContext *genericSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceStmtContext* interfaceStmt();

  class  GenericSpecContext : public antlr4::ParserRuleContext {
  public:
    GenericSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPERATOR();
    antlr4::tree::TerminalNode *LPAREN();
    DefinedOperatorContext *definedOperator();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericSpecContext* genericSpec();

  class  DefinedOperatorContext : public antlr4::ParserRuleContext {
  public:
    DefinedOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOP();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GE();
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    antlr4::tree::TerminalNode *SPOFF();
    antlr4::tree::TerminalNode *SPON();
    antlr4::tree::TerminalNode *LNOT();
    antlr4::tree::TerminalNode *LAND();
    antlr4::tree::TerminalNode *LOR();
    antlr4::tree::TerminalNode *NEQV();
    antlr4::tree::TerminalNode *EQV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinedOperatorContext* definedOperator();

  class  InterfaceBlockBodyContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBlockBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceBodyPartConstructContext *interfaceBodyPartConstruct();
    InterfaceBlockBodyContext *interfaceBlockBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceBlockBodyContext* interfaceBlockBody();
  InterfaceBlockBodyContext* interfaceBlockBody(int precedence);
  class  InterfaceBodyPartConstructContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBodyPartConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceBodyContext *interfaceBody();
    ModuleProcedureStmtContext *moduleProcedureStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceBodyPartConstructContext* interfaceBodyPartConstruct();

  class  ModuleProcedureStmtContext : public antlr4::ParserRuleContext {
  public:
    ModuleProcedureStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *PROCEDURE();
    ProcedureNameListContext *procedureNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleProcedureStmtContext* moduleProcedureStmt();

  class  ProcedureNameListContext : public antlr4::ParserRuleContext {
  public:
    ProcedureNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProcedureNameContext *> procedureName();
    ProcedureNameContext* procedureName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProcedureNameListContext* procedureNameList();

  class  ProcedureNameContext : public antlr4::ParserRuleContext {
  public:
    ProcedureNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProcedureNameContext* procedureName();

  class  InterfaceBodyContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionPrefixContext *functionPrefix();
    antlr4::tree::TerminalNode *NAME();
    FunctionInterfaceRangeContext *functionInterfaceRange();
    antlr4::tree::TerminalNode *SUBROUTINE();
    SubroutineInterfaceRangeContext *subroutineInterfaceRange();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceBodyContext* interfaceBody();

  class  SubroutineInterfaceRangeContext : public antlr4::ParserRuleContext {
  public:
    SubroutineInterfaceRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubroutineParListContext *subroutineParList();
    EndSubroutineStmtContext *endSubroutineStmt();
    SubprogramInterfaceBodyContext *subprogramInterfaceBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineInterfaceRangeContext* subroutineInterfaceRange();

  class  EndSubroutineStmtContext : public antlr4::ParserRuleContext {
  public:
    EndSubroutineStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SUBROUTINE();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndSubroutineStmtContext* endSubroutineStmt();

  class  RecursiveContext : public antlr4::ParserRuleContext {
  public:
    RecursiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECURSIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RecursiveContext* recursive();

  class  FunctionPrefixContext : public antlr4::ParserRuleContext {
  public:
    FunctionPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionPrefixContext() = default;
    void copyFrom(FunctionPrefixContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionPrefixRecContext : public FunctionPrefixContext {
  public:
    FunctionPrefixRecContext(FunctionPrefixContext *ctx);

    antlr4::tree::TerminalNode *FUNCTION();
    RecursiveContext *recursive();
    TypeSpecContext *typeSpec();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FunctionPrefixTypContext : public FunctionPrefixContext {
  public:
    FunctionPrefixTypContext(FunctionPrefixContext *ctx);

    TypeSpecContext *typeSpec();
    antlr4::tree::TerminalNode *RECURSIVE();
    antlr4::tree::TerminalNode *FUNCTION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  FunctionPrefixContext* functionPrefix();

  class  FunctionInterfaceRangeContext : public antlr4::ParserRuleContext {
  public:
    FunctionInterfaceRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionParListContext *functionParList();
    EndFunctionStmtContext *endFunctionStmt();
    SubprogramInterfaceBodyContext *subprogramInterfaceBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionInterfaceRangeContext* functionInterfaceRange();

  class  FunctionParListContext : public antlr4::ParserRuleContext {
  public:
    FunctionParListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionParsContext *functionPars();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionParListContext* functionParList();

  class  FunctionParsContext : public antlr4::ParserRuleContext {
  public:
    FunctionParsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionParContext *> functionPar();
    FunctionParContext* functionPar(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionParsContext* functionPars();

  class  FunctionParContext : public antlr4::ParserRuleContext {
  public:
    FunctionParContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DummyArgNameContext *dummyArgName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionParContext* functionPar();

  class  SubprogramInterfaceBodyContext : public antlr4::ParserRuleContext {
  public:
    SubprogramInterfaceBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpecificationPartConstructContext *specificationPartConstruct();
    SubprogramInterfaceBodyContext *subprogramInterfaceBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubprogramInterfaceBodyContext* subprogramInterfaceBody();
  SubprogramInterfaceBodyContext* subprogramInterfaceBody(int precedence);
  class  EndFunctionStmtContext : public antlr4::ParserRuleContext {
  public:
    EndFunctionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndFunctionStmtContext* endFunctionStmt();

  class  DerivedTypeDefContext : public antlr4::ParserRuleContext {
  public:
    DerivedTypeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DerivedTypeStmtContext *derivedTypeStmt();
    DerivedTypeBodyContext *derivedTypeBody();
    EndTypeStmtContext *endTypeStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DerivedTypeDefContext* derivedTypeDef();

  class  EndTypeStmtContext : public antlr4::ParserRuleContext {
  public:
    EndTypeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDTYPE();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndTypeStmtContext* endTypeStmt();

  class  DerivedTypeStmtContext : public antlr4::ParserRuleContext {
  public:
    DerivedTypeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *DOUBLECOLON();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ACCESSSPEC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DerivedTypeStmtContext* derivedTypeStmt();

  class  DerivedTypeBodyContext : public antlr4::ParserRuleContext {
  public:
    DerivedTypeBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DerivedTypeBodyConstructContext *derivedTypeBodyConstruct();
    DerivedTypeBodyContext *derivedTypeBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DerivedTypeBodyContext* derivedTypeBody();
  DerivedTypeBodyContext* derivedTypeBody(int precedence);
  class  DerivedTypeBodyConstructContext : public antlr4::ParserRuleContext {
  public:
    DerivedTypeBodyConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivateSequenceStmtContext *privateSequenceStmt();
    ComponentDefStmtContext *componentDefStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DerivedTypeBodyConstructContext* derivedTypeBodyConstruct();

  class  PrivateSequenceStmtContext : public antlr4::ParserRuleContext {
  public:
    PrivateSequenceStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *SEQUENCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivateSequenceStmtContext* privateSequenceStmt();

  class  ComponentDefStmtContext : public antlr4::ParserRuleContext {
  public:
    ComponentDefStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecContext *typeSpec();
    antlr4::tree::TerminalNode *COMMA();
    ComponentAttrSpecListContext *componentAttrSpecList();
    antlr4::tree::TerminalNode *DOUBLECOLON();
    ComponentDeclListContext *componentDeclList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentDefStmtContext* componentDefStmt();

  class  ComponentDeclListContext : public antlr4::ParserRuleContext {
  public:
    ComponentDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComponentDeclContext *> componentDecl();
    ComponentDeclContext* componentDecl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentDeclListContext* componentDeclList();

  class  ComponentDeclContext : public antlr4::ParserRuleContext {
  public:
    ComponentDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComponentNameContext *componentName();
    antlr4::tree::TerminalNode *LPAREN();
    ComponentArraySpecContext *componentArraySpec();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *STAR();
    CharLengthContext *charLength();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentDeclContext* componentDecl();

  class  ComponentNameContext : public antlr4::ParserRuleContext {
  public:
    ComponentNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentNameContext* componentName();

  class  ComponentAttrSpecListContext : public antlr4::ParserRuleContext {
  public:
    ComponentAttrSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComponentAttrSpecContext *> componentAttrSpec();
    ComponentAttrSpecContext* componentAttrSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentAttrSpecListContext* componentAttrSpecList();

  class  ComponentAttrSpecContext : public antlr4::ParserRuleContext {
  public:
    ComponentAttrSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POINTER();
    antlr4::tree::TerminalNode *DIMENSION();
    antlr4::tree::TerminalNode *LPAREN();
    ComponentArraySpecContext *componentArraySpec();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentAttrSpecContext* componentAttrSpec();

  class  ComponentArraySpecContext : public antlr4::ParserRuleContext {
  public:
    ComponentArraySpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExplicitShapeSpecListContext *explicitShapeSpecList();
    DeferredShapeSpecListContext *deferredShapeSpecList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentArraySpecContext* componentArraySpec();

  class  ExplicitShapeSpecListContext : public antlr4::ParserRuleContext {
  public:
    ExplicitShapeSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExplicitShapeSpecContext *> explicitShapeSpec();
    ExplicitShapeSpecContext* explicitShapeSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplicitShapeSpecListContext* explicitShapeSpecList();

  class  ExplicitShapeSpecContext : public antlr4::ParserRuleContext {
  public:
    ExplicitShapeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LowerBoundContext *lowerBound();
    antlr4::tree::TerminalNode *COLON();
    UpperBoundContext *upperBound();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplicitShapeSpecContext* explicitShapeSpec();

  class  LowerBoundContext : public antlr4::ParserRuleContext {
  public:
    LowerBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LowerBoundContext* lowerBound();

  class  UpperBoundContext : public antlr4::ParserRuleContext {
  public:
    UpperBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UpperBoundContext* upperBound();

  class  DeferredShapeSpecListContext : public antlr4::ParserRuleContext {
  public:
    DeferredShapeSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeferredShapeSpecContext *> deferredShapeSpec();
    DeferredShapeSpecContext* deferredShapeSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeferredShapeSpecListContext* deferredShapeSpecList();

  class  DeferredShapeSpecContext : public antlr4::ParserRuleContext {
  public:
    DeferredShapeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeferredShapeSpecContext* deferredShapeSpec();

  class  TypeSpecContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DOUBLEPRECISION();
    antlr4::tree::TerminalNode *COMPLEX();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *CHARACTER();
    LengthSelectorContext *lengthSelector();
    KindSelectorContext *kindSelector();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *PRECISION();
    CharSelectorContext *charSelector();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *LPAREN();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeSpecContext* typeSpec();

  class  KindSelectorContext : public antlr4::ParserRuleContext {
  public:
    KindSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *KIND();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KindSelectorContext* kindSelector();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNameContext* typeName();

  class  CharSelectorContext : public antlr4::ParserRuleContext {
  public:
    CharSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *LEN();
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    TypeParamValueContext *typeParamValue();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *KIND();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharSelectorContext* charSelector();

  class  LengthSelectorContext : public antlr4::ParserRuleContext {
  public:
    LengthSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    CharLengthContext *charLength();
    antlr4::tree::TerminalNode *LPAREN();
    TypeParamValueContext *typeParamValue();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LengthSelectorContext* lengthSelector();

  class  CharLengthContext : public antlr4::ParserRuleContext {
  public:
    CharLengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    TypeParamValueContext *typeParamValue();
    antlr4::tree::TerminalNode *RPAREN();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharLengthContext* charLength();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamedConstantUseContext *namedConstantUse();
    UnsignedArithmeticConstantContext *unsignedArithmeticConstant();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *SCON();
    antlr4::tree::TerminalNode *HOLLERITH();
    LogicalConstantContext *logicalConstant();
    antlr4::tree::TerminalNode *ICON();
    antlr4::tree::TerminalNode *UNDERSCORE();
    StructureConstructorContext *structureConstructor();
    BozLiteralConstantContext *bozLiteralConstant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantContext* constant();

  class  BozLiteralConstantContext : public antlr4::ParserRuleContext {
  public:
    BozLiteralConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BCON();
    antlr4::tree::TerminalNode *OCON();
    antlr4::tree::TerminalNode *ZCON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BozLiteralConstantContext* bozLiteralConstant();

  class  StructureConstructorContext : public antlr4::ParserRuleContext {
  public:
    StructureConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *LPAREN();
    ExprListContext *exprList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructureConstructorContext* structureConstructor();

  class  ExprListContext : public antlr4::ParserRuleContext {
  public:
    ExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprListContext* exprList();

  class  NamedConstantUseContext : public antlr4::ParserRuleContext {
  public:
    NamedConstantUseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedConstantUseContext* namedConstantUse();

  class  TypeParamValueContext : public antlr4::ParserRuleContext {
  public:
    TypeParamValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *STAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeParamValueContext* typeParamValue();

  class  ModuleStmtContext : public antlr4::ParserRuleContext {
  public:
    ModuleStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    ModuleNameContext *moduleName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleStmtContext* moduleStmt();

  class  ModuleNameContext : public antlr4::ParserRuleContext {
  public:
    ModuleNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleNameContext* moduleName();

  class  IdentContext : public antlr4::ParserRuleContext {
  public:
    IdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentContext* ident();

  class  ModuleBodyContext : public antlr4::ParserRuleContext {
  public:
    ModuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ModuleBodyContext() = default;
    void copyFrom(ModuleBodyContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ComplexSubmoduleContext : public ModuleBodyContext {
  public:
    ComplexSubmoduleContext(ModuleBodyContext *ctx);

    ModuleBodyContext *moduleBody();
    ModuleSubprogramPartConstructContext *moduleSubprogramPartConstruct();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ComplexSpecPartContext : public ModuleBodyContext {
  public:
    ComplexSpecPartContext(ModuleBodyContext *ctx);

    ModuleBodyContext *moduleBody();
    SpecificationPartConstructContext *specificationPartConstruct();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SubmoduleStmtContext : public ModuleBodyContext {
  public:
    SubmoduleStmtContext(ModuleBodyContext *ctx);

    ModuleSubprogramPartConstructContext *moduleSubprogramPartConstruct();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SpecPartStmtContext : public ModuleBodyContext {
  public:
    SpecPartStmtContext(ModuleBodyContext *ctx);

    SpecificationPartConstructContext *specificationPartConstruct();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ModuleBodyContext* moduleBody();
  ModuleBodyContext* moduleBody(int precedence);
  class  ModuleSubprogramPartConstructContext : public antlr4::ParserRuleContext {
  public:
    ModuleSubprogramPartConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ContainsStmtContext *containsStmt();
    ModuleSubprogramContext *moduleSubprogram();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleSubprogramPartConstructContext* moduleSubprogramPartConstruct();

  class  ContainsStmtContext : public antlr4::ParserRuleContext {
  public:
    ContainsStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTAINS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContainsStmtContext* containsStmt();

  class  ModuleSubprogramContext : public antlr4::ParserRuleContext {
  public:
    ModuleSubprogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionSubprogramContext *functionSubprogram();
    SubroutineSubprogramContext *subroutineSubprogram();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleSubprogramContext* moduleSubprogram();

  class  FunctionSubprogramContext : public antlr4::ParserRuleContext {
  public:
    FunctionSubprogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionPrefixContext *functionPrefix();
    FunctionNameContext *functionName();
    FunctionRangeContext *functionRange();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionSubprogramContext* functionSubprogram();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionNameContext* functionName();

  class  FunctionRangeContext : public antlr4::ParserRuleContext {
  public:
    FunctionRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionParListContext *functionParList();
    EndFunctionStmtContext *endFunctionStmt();
    BodyContext *body();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *RPAREN();
    BodyPlusInternalsContext *bodyPlusInternals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionRangeContext* functionRange();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BodyConstructContext *> bodyConstruct();
    BodyConstructContext* bodyConstruct(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BodyContext* body();

  class  BodyConstructContext : public antlr4::ParserRuleContext {
  public:
    BodyConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpecificationPartConstructContext *specificationPartConstruct();
    ExecutableConstructContext *executableConstruct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BodyConstructContext* bodyConstruct();

  class  ExecutableConstructContext : public antlr4::ParserRuleContext {
  public:
    ExecutableConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ActionStmtContext *actionStmt();
    DoConstructContext *doConstruct();
    IfConstructContext *ifConstruct();
    CaseConstructContext *caseConstruct();
    WhereConstructContext *whereConstruct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecutableConstructContext* executableConstruct();

  class  WhereConstructContext : public antlr4::ParserRuleContext {
  public:
    WhereConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhereContext *where();
    EndWhereStmtContext *endWhereStmt();
    ElseWhereContext *elseWhere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhereConstructContext* whereConstruct();

  class  ElseWhereContext : public antlr4::ParserRuleContext {
  public:
    ElseWhereContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhereContext *where();
    ElsewhereStmtContext *elsewhereStmt();
    ElseWhereContext *elseWhere();
    AssignmentStmtContext *assignmentStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseWhereContext* elseWhere();
  ElseWhereContext* elseWhere(int precedence);
  class  ElsewhereStmtContext : public antlr4::ParserRuleContext {
  public:
    ElsewhereStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSEWHERE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElsewhereStmtContext* elsewhereStmt();

  class  EndWhereStmtContext : public antlr4::ParserRuleContext {
  public:
    EndWhereStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDWHERE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *WHERE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndWhereStmtContext* endWhereStmt();

  class  WhereContext : public antlr4::ParserRuleContext {
  public:
    WhereContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhereConstructStmtContext *whereConstructStmt();
    WhereContext *where();
    AssignmentStmtContext *assignmentStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhereContext* where();
  WhereContext* where(int precedence);
  class  WhereConstructStmtContext : public antlr4::ParserRuleContext {
  public:
    WhereConstructStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *LPAREN();
    MaskExprContext *maskExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhereConstructStmtContext* whereConstructStmt();

  class  MaskExprContext : public antlr4::ParserRuleContext {
  public:
    MaskExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MaskExprContext* maskExpr();

  class  CaseConstructContext : public antlr4::ParserRuleContext {
  public:
    CaseConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SELECTCASE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    SelectCaseRangeContext *selectCaseRange();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *CASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseConstructContext* caseConstruct();

  class  SelectCaseRangeContext : public antlr4::ParserRuleContext {
  public:
    SelectCaseRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectCaseBodyContext *selectCaseBody();
    EndSelectStmtContext *endSelectStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectCaseRangeContext* selectCaseRange();

  class  EndSelectStmtContext : public antlr4::ParserRuleContext {
  public:
    EndSelectStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDSELECT();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SELECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndSelectStmtContext* endSelectStmt();

  class  SelectCaseBodyContext : public antlr4::ParserRuleContext {
  public:
    SelectCaseBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaseStmtContext *caseStmt();
    SelectCaseBodyContext *selectCaseBody();
    CaseBodyConstructContext *caseBodyConstruct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectCaseBodyContext* selectCaseBody();
  SelectCaseBodyContext* selectCaseBody(int precedence);
  class  CaseBodyConstructContext : public antlr4::ParserRuleContext {
  public:
    CaseBodyConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaseStmtContext *caseStmt();
    ExecutionPartConstructContext *executionPartConstruct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseBodyConstructContext* caseBodyConstruct();

  class  CaseStmtContext : public antlr4::ParserRuleContext {
  public:
    CaseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    CaseSelectorContext *caseSelector();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseStmtContext* caseStmt();

  class  CaseSelectorContext : public antlr4::ParserRuleContext {
  public:
    CaseSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    CaseValueRangeListContext *caseValueRangeList();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseSelectorContext* caseSelector();

  class  CaseValueRangeListContext : public antlr4::ParserRuleContext {
  public:
    CaseValueRangeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseValueRangeContext *> caseValueRange();
    CaseValueRangeContext* caseValueRange(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseValueRangeListContext* caseValueRangeList();

  class  CaseValueRangeContext : public antlr4::ParserRuleContext {
  public:
    CaseValueRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CaseValueRangeContext() = default;
    void copyFrom(CaseValueRangeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MidlleColonExpressionContext : public CaseValueRangeContext {
  public:
    MidlleColonExpressionContext(CaseValueRangeContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LitteralExpressionContext : public CaseValueRangeContext {
  public:
    LitteralExpressionContext(CaseValueRangeContext *ctx);

    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AfterColonExpressionContext : public CaseValueRangeContext {
  public:
    AfterColonExpressionContext(CaseValueRangeContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BeforeColonExpressionContext : public CaseValueRangeContext {
  public:
    BeforeColonExpressionContext(CaseValueRangeContext *ctx);

    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  CaseValueRangeContext* caseValueRange();

  class  IfConstructContext : public antlr4::ParserRuleContext {
  public:
    IfConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfThenStmtContext *ifThenStmt();
    ConditionalBodyContext *conditionalBody();
    EndIfStmtContext *endIfStmt();
    std::vector<ElseIfConstructContext *> elseIfConstruct();
    ElseIfConstructContext* elseIfConstruct(size_t i);
    ElseConstructContext *elseConstruct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfConstructContext* ifConstruct();

  class  IfThenStmtContext : public antlr4::ParserRuleContext {
  public:
    IfThenStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *THEN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfThenStmtContext* ifThenStmt();

  class  ConditionalBodyContext : public antlr4::ParserRuleContext {
  public:
    ConditionalBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExecutionPartConstructContext *> executionPartConstruct();
    ExecutionPartConstructContext* executionPartConstruct(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalBodyContext* conditionalBody();

  class  ElseIfConstructContext : public antlr4::ParserRuleContext {
  public:
    ElseIfConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElseIfStmtContext *elseIfStmt();
    ConditionalBodyContext *conditionalBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseIfConstructContext* elseIfConstruct();

  class  ElseIfStmtContext : public antlr4::ParserRuleContext {
  public:
    ElseIfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *IF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseIfStmtContext* elseIfStmt();

  class  ElseConstructContext : public antlr4::ParserRuleContext {
  public:
    ElseConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElseStmtContext *elseStmt();
    ConditionalBodyContext *conditionalBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseConstructContext* elseConstruct();

  class  ElseStmtContext : public antlr4::ParserRuleContext {
  public:
    ElseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseStmtContext* elseStmt();

  class  EndIfStmtContext : public antlr4::ParserRuleContext {
  public:
    EndIfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *IF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndIfStmtContext* endIfStmt();

  class  DoConstructContext : public antlr4::ParserRuleContext {
  public:
    DoConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelDoStmtContext *labelDoStmt();
    BlockDoConstructContext *blockDoConstruct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoConstructContext* doConstruct();

  class  BlockDoConstructContext : public antlr4::ParserRuleContext {
  public:
    BlockDoConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    EndDoStmtContext *endDoStmt();
    NameColonContext *nameColon();
    CommaLoopControlContext *commaLoopControl();
    std::vector<ExecutionPartConstructContext *> executionPartConstruct();
    ExecutionPartConstructContext* executionPartConstruct(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockDoConstructContext* blockDoConstruct();

  class  EndDoStmtContext : public antlr4::ParserRuleContext {
  public:
    EndDoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDDO();
    EndNameContext *endName();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *DO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndDoStmtContext* endDoStmt();

  class  EndNameContext : public antlr4::ParserRuleContext {
  public:
    EndNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndNameContext* endName();

  class  NameColonContext : public antlr4::ParserRuleContext {
  public:
    NameColonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameColonContext* nameColon();

  class  LabelDoStmtContext : public antlr4::ParserRuleContext {
  public:
    LabelDoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    DoLblRefContext *doLblRef();
    CommaLoopControlContext *commaLoopControl();
    DoLblDefContext *doLblDef();
    DoLabelStmtContext *doLabelStmt();
    std::vector<ExecutionPartConstructContext *> executionPartConstruct();
    ExecutionPartConstructContext* executionPartConstruct(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelDoStmtContext* labelDoStmt();

  class  DoLblRefContext : public antlr4::ParserRuleContext {
  public:
    DoLblRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoLblRefContext* doLblRef();

  class  DoLblDefContext : public antlr4::ParserRuleContext {
  public:
    DoLblDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoLblDefContext* doLblDef();

  class  DoLabelStmtContext : public antlr4::ParserRuleContext {
  public:
    DoLabelStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ActionStmtContext *actionStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoLabelStmtContext* doLabelStmt();

  class  ExecutionPartConstructContext : public antlr4::ParserRuleContext {
  public:
    ExecutionPartConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExecutableConstructContext *executableConstruct();
    FormatStmtContext *formatStmt();
    DataStmtContext *dataStmt();
    EntryStmtContext *entryStmt();
    DoubleDoStmtContext *doubleDoStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecutionPartConstructContext* executionPartConstruct();

  class  DoubleDoStmtContext : public antlr4::ParserRuleContext {
  public:
    DoubleDoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    LblRefContext *lblRef();
    CommaLoopControlContext *commaLoopControl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoubleDoStmtContext* doubleDoStmt();

  class  DataStmtContext : public antlr4::ParserRuleContext {
  public:
    DataStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    std::vector<DataStmtSetContext *> dataStmtSet();
    DataStmtSetContext* dataStmtSet(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataStmtContext* dataStmt();

  class  DataStmtSetContext : public antlr4::ParserRuleContext {
  public:
    DataStmtSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dse1Context *dse1();
    Dse2Context *dse2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataStmtSetContext* dataStmtSet();

  class  Dse1Context : public antlr4::ParserRuleContext {
  public:
    Dse1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DataStmtObjectContext *> dataStmtObject();
    DataStmtObjectContext* dataStmtObject(size_t i);
    antlr4::tree::TerminalNode *DIV();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dse1Context* dse1();

  class  Dse2Context : public antlr4::ParserRuleContext {
  public:
    Dse2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DataStmtValueContext *> dataStmtValue();
    DataStmtValueContext* dataStmtValue(size_t i);
    antlr4::tree::TerminalNode *DIV();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dse2Context* dse2();

  class  DataStmtValueContext : public antlr4::ParserRuleContext {
  public:
    DataStmtValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    antlr4::tree::TerminalNode *STAR();
    NamedConstantUseContext *namedConstantUse();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataStmtValueContext* dataStmtValue();

  class  DataStmtObjectContext : public antlr4::ParserRuleContext {
  public:
    DataStmtObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    DataImpliedDoContext *dataImpliedDo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataStmtObjectContext* dataStmtObject();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    SubscriptListRefContext *subscriptListRef();
    SubstringRangeContext *substringRange();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableContext* variable();

  class  SubscriptListRefContext : public antlr4::ParserRuleContext {
  public:
    SubscriptListRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    SubscriptListContext *subscriptList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubscriptListRefContext* subscriptListRef();

  class  SubscriptListContext : public antlr4::ParserRuleContext {
  public:
    SubscriptListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubscriptContext *> subscript();
    SubscriptContext* subscript(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubscriptListContext* subscriptList();

  class  SubscriptContext : public antlr4::ParserRuleContext {
  public:
    SubscriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubscriptContext* subscript();

  class  SubstringRangeContext : public antlr4::ParserRuleContext {
  public:
    SubstringRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    SubscriptTripletTailContext *subscriptTripletTail();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubstringRangeContext* substringRange();

  class  DataImpliedDoContext : public antlr4::ParserRuleContext {
  public:
    DataImpliedDoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    DataIDoObjectListContext *dataIDoObjectList();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ImpliedDoVariableContext *impliedDoVariable();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataImpliedDoContext* dataImpliedDo();

  class  DataIDoObjectListContext : public antlr4::ParserRuleContext {
  public:
    DataIDoObjectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DataIDoObjectContext *> dataIDoObject();
    DataIDoObjectContext* dataIDoObject(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataIDoObjectListContext* dataIDoObjectList();

  class  DataIDoObjectContext : public antlr4::ParserRuleContext {
  public:
    DataIDoObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayElementContext *arrayElement();
    DataImpliedDoContext *dataImpliedDo();
    StructureComponentContext *structureComponent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataIDoObjectContext* dataIDoObject();

  class  StructureComponentContext : public antlr4::ParserRuleContext {
  public:
    StructureComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    FieldSelectorContext *fieldSelector();
    StructureComponentContext *structureComponent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructureComponentContext* structureComponent();
  StructureComponentContext* structureComponent(int precedence);
  class  FieldSelectorContext : public antlr4::ParserRuleContext {
  public:
    FieldSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    SectionSubscriptListContext *sectionSubscriptList();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *PCT();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldSelectorContext* fieldSelector();

  class  ArrayElementContext : public antlr4::ParserRuleContext {
  public:
    ArrayElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    antlr4::tree::TerminalNode *LPAREN();
    SectionSubscriptListContext *sectionSubscriptList();
    antlr4::tree::TerminalNode *RPAREN();
    StructureComponentContext *structureComponent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayElementContext* arrayElement();

  class  ImpliedDoVariableContext : public antlr4::ParserRuleContext {
  public:
    ImpliedDoVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImpliedDoVariableContext* impliedDoVariable();

  class  CommaLoopControlContext : public antlr4::ParserRuleContext {
  public:
    CommaLoopControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopControlContext *loopControl();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommaLoopControlContext* commaLoopControl();

  class  LoopControlContext : public antlr4::ParserRuleContext {
  public:
    LoopControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    CommaExprContext *commaExpr();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoopControlContext* loopControl();

  class  VariableNameContext : public antlr4::ParserRuleContext {
  public:
    VariableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableNameContext* variableName();

  class  CommaExprContext : public antlr4::ParserRuleContext {
  public:
    CommaExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommaExprContext* commaExpr();

  class  SemicolonStmtContext : public antlr4::ParserRuleContext {
  public:
    SemicolonStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    ActionStmtContext *actionStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SemicolonStmtContext* semicolonStmt();

  class  ActionStmtContext : public antlr4::ParserRuleContext {
  public:
    ActionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArithmeticIfStmtContext *arithmeticIfStmt();
    AssignmentStmtContext *assignmentStmt();
    AssignStmtContext *assignStmt();
    BackspaceStmtContext *backspaceStmt();
    CallStmtContext *callStmt();
    CloseStmtContext *closeStmt();
    ContinueStmtContext *continueStmt();
    EndfileStmtContext *endfileStmt();
    GotoStmtContext *gotoStmt();
    ComputedGotoStmtContext *computedGotoStmt();
    AssignedGotoStmtContext *assignedGotoStmt();
    IfStmtContext *ifStmt();
    InquireStmtContext *inquireStmt();
    OpenStmtContext *openStmt();
    PauseStmtContext *pauseStmt();
    PrintStmtContext *printStmt();
    ReadStmtContext *readStmt();
    ReturnStmtContext *returnStmt();
    RewindStmtContext *rewindStmt();
    StmtFunctionStmtContext *stmtFunctionStmt();
    StopStmtContext *stopStmt();
    WriteStmtContext *writeStmt();
    AllocateStmtContext *allocateStmt();
    CycleStmtContext *cycleStmt();
    DeallocateStmtContext *deallocateStmt();
    ExitStmtContext *exitStmt();
    NullifyStmtContext *nullifyStmt();
    PointerAssignmentStmtContext *pointerAssignmentStmt();
    WhereStmtContext *whereStmt();
    SemicolonStmtContext *semicolonStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ActionStmtContext* actionStmt();

  class  WhereStmtContext : public antlr4::ParserRuleContext {
  public:
    WhereStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *LPAREN();
    MaskExprContext *maskExpr();
    antlr4::tree::TerminalNode *RPAREN();
    AssignmentStmtContext *assignmentStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhereStmtContext* whereStmt();

  class  PointerAssignmentStmtContext : public antlr4::ParserRuleContext {
  public:
    PointerAssignmentStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *IMPLIEDT();
    TargetContext *target();
    antlr4::tree::TerminalNode *PCT();
    NameDataRefContext *nameDataRef();
    SFExprListRefContext *sFExprListRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerAssignmentStmtContext* pointerAssignmentStmt();

  class  TargetContext : public antlr4::ParserRuleContext {
  public:
    TargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TargetContext* target();

  class  NullifyStmtContext : public antlr4::ParserRuleContext {
  public:
    NullifyStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLIFY();
    antlr4::tree::TerminalNode *LPAREN();
    PointerObjectListContext *pointerObjectList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullifyStmtContext* nullifyStmt();

  class  PointerObjectListContext : public antlr4::ParserRuleContext {
  public:
    PointerObjectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PointerObjectContext *> pointerObject();
    PointerObjectContext* pointerObject(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerObjectListContext* pointerObjectList();

  class  PointerObjectContext : public antlr4::ParserRuleContext {
  public:
    PointerObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    PointerFieldContext *pointerField();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerObjectContext* pointerObject();

  class  PointerFieldContext : public antlr4::ParserRuleContext {
  public:
    PointerFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    antlr4::tree::TerminalNode *PCT();
    SFExprListRefContext *sFExprListRef();
    PointerFieldContext *pointerField();
    FieldSelectorContext *fieldSelector();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerFieldContext* pointerField();
  PointerFieldContext* pointerField(int precedence);
  class  ExitStmtContext : public antlr4::ParserRuleContext {
  public:
    ExitStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXIT();
    EndNameContext *endName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExitStmtContext* exitStmt();

  class  DeallocateStmtContext : public antlr4::ParserRuleContext {
  public:
    DeallocateStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *LPAREN();
    AllocateObjectListContext *allocateObjectList();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *STAT();
    antlr4::tree::TerminalNode *ASSIGN();
    VariableContext *variable();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeallocateStmtContext* deallocateStmt();

  class  AllocateObjectListContext : public antlr4::ParserRuleContext {
  public:
    AllocateObjectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AllocateObjectContext *> allocateObject();
    AllocateObjectContext* allocateObject(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AllocateObjectListContext* allocateObjectList();

  class  CycleStmtContext : public antlr4::ParserRuleContext {
  public:
    CycleStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CYCLE();
    EndNameContext *endName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CycleStmtContext* cycleStmt();

  class  AllocateStmtContext : public antlr4::ParserRuleContext {
  public:
    AllocateStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALLOCATE();
    antlr4::tree::TerminalNode *LPAREN();
    AllocationListContext *allocationList();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *STAT();
    antlr4::tree::TerminalNode *ASSIGN();
    VariableContext *variable();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AllocateStmtContext* allocateStmt();

  class  AllocationListContext : public antlr4::ParserRuleContext {
  public:
    AllocationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AllocationContext *> allocation();
    AllocationContext* allocation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AllocationListContext* allocationList();

  class  AllocationContext : public antlr4::ParserRuleContext {
  public:
    AllocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AllocateObjectContext *allocateObject();
    AllocatedShapeContext *allocatedShape();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AllocationContext* allocation();

  class  AllocateObjectContext : public antlr4::ParserRuleContext {
  public:
    AllocateObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    AllocateObjectContext *allocateObject();
    FieldSelectorContext *fieldSelector();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AllocateObjectContext* allocateObject();
  AllocateObjectContext* allocateObject(int precedence);
  class  AllocatedShapeContext : public antlr4::ParserRuleContext {
  public:
    AllocatedShapeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    SectionSubscriptListContext *sectionSubscriptList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AllocatedShapeContext* allocatedShape();

  class  StopStmtContext : public antlr4::ParserRuleContext {
  public:
    StopStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *ICON();
    antlr4::tree::TerminalNode *SCON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StopStmtContext* stopStmt();

  class  WriteStmtContext : public antlr4::ParserRuleContext {
  public:
    WriteStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *LPAREN();
    IoControlSpecListContext *ioControlSpecList();
    antlr4::tree::TerminalNode *RPAREN();
    OutputItemListContext *outputItemList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WriteStmtContext* writeStmt();

  class  IoControlSpecListContext : public antlr4::ParserRuleContext {
  public:
    IoControlSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *COMMA();
    FormatIdentifierContext *formatIdentifier();
    IoControlSpecContext *ioControlSpec();
    IoControlSpecListContext *ioControlSpecList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IoControlSpecListContext* ioControlSpecList();
  IoControlSpecListContext* ioControlSpecList(int precedence);
  class  StmtFunctionStmtContext : public antlr4::ParserRuleContext {
  public:
    StmtFunctionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    StmtFunctionRangeContext *stmtFunctionRange();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtFunctionStmtContext* stmtFunctionStmt();

  class  StmtFunctionRangeContext : public antlr4::ParserRuleContext {
  public:
    StmtFunctionRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    SFDummyArgNameListContext *sFDummyArgNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StmtFunctionRangeContext* stmtFunctionRange();

  class  SFDummyArgNameListContext : public antlr4::ParserRuleContext {
  public:
    SFDummyArgNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SFDummyArgNameContext *> sFDummyArgName();
    SFDummyArgNameContext* sFDummyArgName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SFDummyArgNameListContext* sFDummyArgNameList();

  class  SFDummyArgNameContext : public antlr4::ParserRuleContext {
  public:
    SFDummyArgNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SFDummyArgNameContext* sFDummyArgName();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  RewindStmtContext : public antlr4::ParserRuleContext {
  public:
    RewindStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REWIND();
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *LPAREN();
    PositionSpecListContext *positionSpecList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RewindStmtContext* rewindStmt();

  class  ReadStmtContext : public antlr4::ParserRuleContext {
  public:
    ReadStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    RdCtlSpecContext *rdCtlSpec();
    InputItemListContext *inputItemList();
    RdFmtIdContext *rdFmtId();
    CommaInputItemListContext *commaInputItemList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReadStmtContext* readStmt();

  class  CommaInputItemListContext : public antlr4::ParserRuleContext {
  public:
    CommaInputItemListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    InputItemListContext *inputItemList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommaInputItemListContext* commaInputItemList();

  class  RdFmtIdContext : public antlr4::ParserRuleContext {
  public:
    RdFmtIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LblRefContext *lblRef();
    antlr4::tree::TerminalNode *STAR();
    COperandContext *cOperand();
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    antlr4::tree::TerminalNode *SPOFF();
    antlr4::tree::TerminalNode *SPON();
    CPrimaryContext *cPrimary();
    RdFmtIdExprContext *rdFmtIdExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RdFmtIdContext* rdFmtId();

  class  RdFmtIdExprContext : public antlr4::ParserRuleContext {
  public:
    RdFmtIdExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    UFExprContext *uFExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RdFmtIdExprContext* rdFmtIdExpr();

  class  InputItemListContext : public antlr4::ParserRuleContext {
  public:
    InputItemListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InputItemContext *> inputItem();
    InputItemContext* inputItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputItemListContext* inputItemList();

  class  InputItemContext : public antlr4::ParserRuleContext {
  public:
    InputItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameDataRefContext *nameDataRef();
    InputImpliedDoContext *inputImpliedDo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputItemContext* inputItem();

  class  InputImpliedDoContext : public antlr4::ParserRuleContext {
  public:
    InputImpliedDoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    InputItemListContext *inputItemList();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ImpliedDoVariableContext *impliedDoVariable();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    CommaExprContext *commaExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputImpliedDoContext* inputImpliedDo();

  class  RdCtlSpecContext : public antlr4::ParserRuleContext {
  public:
    RdCtlSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RdUnitIdContext *rdUnitId();
    antlr4::tree::TerminalNode *LPAREN();
    RdIoCtlSpecListContext *rdIoCtlSpecList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RdCtlSpecContext* rdCtlSpec();

  class  RdUnitIdContext : public antlr4::ParserRuleContext {
  public:
    RdUnitIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    UFExprContext *uFExpr();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *STAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RdUnitIdContext* rdUnitId();

  class  RdIoCtlSpecListContext : public antlr4::ParserRuleContext {
  public:
    RdIoCtlSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *COMMA();
    IoControlSpecContext *ioControlSpec();
    FormatIdentifierContext *formatIdentifier();
    RdIoCtlSpecListContext *rdIoCtlSpecList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RdIoCtlSpecListContext* rdIoCtlSpecList();
  RdIoCtlSpecListContext* rdIoCtlSpecList(int precedence);
  class  IoControlSpecContext : public antlr4::ParserRuleContext {
  public:
    IoControlSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FMT();
    antlr4::tree::TerminalNode *ASSIGN();
    FormatIdentifierContext *formatIdentifier();
    antlr4::tree::TerminalNode *UNIT();
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *REC();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    LblRefContext *lblRef();
    antlr4::tree::TerminalNode *ERR();
    antlr4::tree::TerminalNode *IOSTAT();
    ScalarVariableContext *scalarVariable();
    antlr4::tree::TerminalNode *NML();
    NamelistGroupNameContext *namelistGroupName();
    antlr4::tree::TerminalNode *ADVANCE();
    CExpressionContext *cExpression();
    antlr4::tree::TerminalNode *SIZE();
    VariableContext *variable();
    antlr4::tree::TerminalNode *EOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IoControlSpecContext* ioControlSpec();

  class  PrintStmtContext : public antlr4::ParserRuleContext {
  public:
    PrintStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    FormatIdentifierContext *formatIdentifier();
    antlr4::tree::TerminalNode *COMMA();
    OutputItemListContext *outputItemList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintStmtContext* printStmt();

  class  OutputItemListContext : public antlr4::ParserRuleContext {
  public:
    OutputItemListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    OutputItemList1Context *outputItemList1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutputItemListContext* outputItemList();

  class  OutputItemList1Context : public antlr4::ParserRuleContext {
  public:
    OutputItemList1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    OutputImpliedDoContext *outputImpliedDo();
    OutputItemList1Context *outputItemList1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutputItemList1Context* outputItemList1();
  OutputItemList1Context* outputItemList1(int precedence);
  class  OutputImpliedDoContext : public antlr4::ParserRuleContext {
  public:
    OutputImpliedDoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ImpliedDoVariableContext *impliedDoVariable();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *RPAREN();
    CommaExprContext *commaExpr();
    OutputItemList1Context *outputItemList1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutputImpliedDoContext* outputImpliedDo();

  class  FormatIdentifierContext : public antlr4::ParserRuleContext {
  public:
    FormatIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LblRefContext *lblRef();
    CExpressionContext *cExpression();
    antlr4::tree::TerminalNode *STAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormatIdentifierContext* formatIdentifier();

  class  PauseStmtContext : public antlr4::ParserRuleContext {
  public:
    PauseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAUSE();
    antlr4::tree::TerminalNode *ICON();
    antlr4::tree::TerminalNode *SCON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PauseStmtContext* pauseStmt();

  class  OpenStmtContext : public antlr4::ParserRuleContext {
  public:
    OpenStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *LPAREN();
    ConnectSpecListContext *connectSpecList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpenStmtContext* openStmt();

  class  ConnectSpecListContext : public antlr4::ParserRuleContext {
  public:
    ConnectSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitIdentifierCommaContext *unitIdentifierComma();
    std::vector<ConnectSpecContext *> connectSpec();
    ConnectSpecContext* connectSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConnectSpecListContext* connectSpecList();

  class  ConnectSpecContext : public antlr4::ParserRuleContext {
  public:
    ConnectSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *ASSIGN();
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *ERR();
    LblRefContext *lblRef();
    antlr4::tree::TerminalNode *FILE();
    CExpressionContext *cExpression();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *FORM();
    antlr4::tree::TerminalNode *RECL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *BLANK();
    antlr4::tree::TerminalNode *IOSTAT();
    ScalarVariableContext *scalarVariable();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *DELIM();
    antlr4::tree::TerminalNode *PAD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConnectSpecContext* connectSpec();

  class  InquireStmtContext : public antlr4::ParserRuleContext {
  public:
    InquireStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INQUIRE();
    antlr4::tree::TerminalNode *LPAREN();
    InquireSpecListContext *inquireSpecList();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *IOLENGTH();
    antlr4::tree::TerminalNode *ASSIGN();
    ScalarVariableContext *scalarVariable();
    OutputItemListContext *outputItemList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InquireStmtContext* inquireStmt();

  class  InquireSpecListContext : public antlr4::ParserRuleContext {
  public:
    InquireSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitIdentifierContext *unitIdentifier();
    std::vector<InquireSpecContext *> inquireSpec();
    InquireSpecContext* inquireSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InquireSpecListContext* inquireSpecList();

  class  InquireSpecContext : public antlr4::ParserRuleContext {
  public:
    InquireSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *ASSIGN();
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *FILE();
    CExpressionContext *cExpression();
    antlr4::tree::TerminalNode *ERR();
    LblRefContext *lblRef();
    antlr4::tree::TerminalNode *IOSTAT();
    ScalarVariableContext *scalarVariable();
    antlr4::tree::TerminalNode *EXIST();
    antlr4::tree::TerminalNode *OPENED();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *NAMED();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *SEQUENTIAL();
    antlr4::tree::TerminalNode *DIRECT();
    antlr4::tree::TerminalNode *FORM();
    antlr4::tree::TerminalNode *FORMATTED();
    antlr4::tree::TerminalNode *UNFORMATTED();
    antlr4::tree::TerminalNode *RECL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NEXTREC();
    antlr4::tree::TerminalNode *BLANK();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *READWRITE();
    antlr4::tree::TerminalNode *DELIM();
    antlr4::tree::TerminalNode *PAD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InquireSpecContext* inquireSpec();

  class  AssignedGotoStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignedGotoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *LPAREN();
    LblRefListContext *lblRefList();
    antlr4::tree::TerminalNode *RPAREN();
    VariableCommaContext *variableComma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignedGotoStmtContext* assignedGotoStmt();

  class  VariableCommaContext : public antlr4::ParserRuleContext {
  public:
    VariableCommaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableCommaContext* variableComma();

  class  GotoStmtContext : public antlr4::ParserRuleContext {
  public:
    GotoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LblRefContext *lblRef();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GotoStmtContext* gotoStmt();

  class  ComputedGotoStmtContext : public antlr4::ParserRuleContext {
  public:
    ComputedGotoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *LPAREN();
    LblRefListContext *lblRefList();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComputedGotoStmtContext* computedGotoStmt();

  class  LblRefListContext : public antlr4::ParserRuleContext {
  public:
    LblRefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LblRefContext *> lblRef();
    LblRefContext* lblRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LblRefListContext* lblRefList();

  class  EndfileStmtContext : public antlr4::ParserRuleContext {
  public:
    EndfileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *ENDFILE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *LPAREN();
    PositionSpecListContext *positionSpecList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndfileStmtContext* endfileStmt();

  class  ContinueStmtContext : public antlr4::ParserRuleContext {
  public:
    ContinueStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContinueStmtContext* continueStmt();

  class  CloseStmtContext : public antlr4::ParserRuleContext {
  public:
    CloseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *LPAREN();
    CloseSpecListContext *closeSpecList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CloseStmtContext* closeStmt();

  class  CloseSpecListContext : public antlr4::ParserRuleContext {
  public:
    CloseSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitIdentifierCommaContext *unitIdentifierComma();
    std::vector<CloseSpecContext *> closeSpec();
    CloseSpecContext* closeSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CloseSpecListContext* closeSpecList();

  class  CloseSpecContext : public antlr4::ParserRuleContext {
  public:
    CloseSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *ASSIGN();
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *ERR();
    LblRefContext *lblRef();
    antlr4::tree::TerminalNode *STATUS();
    CExpressionContext *cExpression();
    antlr4::tree::TerminalNode *IOSTAT();
    ScalarVariableContext *scalarVariable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CloseSpecContext* closeSpec();

  class  CExpressionContext : public antlr4::ParserRuleContext {
  public:
    CExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CPrimaryContext *cPrimary();
    std::vector<CPrimaryConcatOpContext *> cPrimaryConcatOp();
    CPrimaryConcatOpContext* cPrimaryConcatOp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CExpressionContext* cExpression();

  class  CPrimaryContext : public antlr4::ParserRuleContext {
  public:
    CPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    COperandContext *cOperand();
    antlr4::tree::TerminalNode *LPAREN();
    CExpressionContext *cExpression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CPrimaryContext* cPrimary();

  class  COperandContext : public antlr4::ParserRuleContext {
  public:
    COperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCON();
    NameDataRefContext *nameDataRef();
    FunctionReferenceContext *functionReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  COperandContext* cOperand();

  class  CPrimaryConcatOpContext : public antlr4::ParserRuleContext {
  public:
    CPrimaryConcatOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CPrimaryContext *cPrimary();
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    antlr4::tree::TerminalNode *SPOFF();
    antlr4::tree::TerminalNode *SPON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CPrimaryConcatOpContext* cPrimaryConcatOp();

  class  CallStmtContext : public antlr4::ParserRuleContext {
  public:
    CallStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    SubroutineNameUseContext *subroutineNameUse();
    antlr4::tree::TerminalNode *LPAREN();
    SubroutineArgListContext *subroutineArgList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallStmtContext* callStmt();

  class  SubroutineNameUseContext : public antlr4::ParserRuleContext {
  public:
    SubroutineNameUseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineNameUseContext* subroutineNameUse();

  class  SubroutineArgListContext : public antlr4::ParserRuleContext {
  public:
    SubroutineArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubroutineArgContext *> subroutineArg();
    SubroutineArgContext* subroutineArg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineArgListContext* subroutineArgList();

  class  SubroutineArgContext : public antlr4::ParserRuleContext {
  public:
    SubroutineArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *HOLLERITH();
    antlr4::tree::TerminalNode *STAR();
    LblRefContext *lblRef();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineArgContext* subroutineArg();

  class  ArithmeticIfStmtContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticIfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<LblRefContext *> lblRef();
    LblRefContext* lblRef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithmeticIfStmtContext* arithmeticIfStmt();

  class  LblRefContext : public antlr4::ParserRuleContext {
  public:
    LblRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LblRefContext* lblRef();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelContext* label();

  class  AssignmentStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    LabelContext *label();
    SFExprListRefContext *sFExprListRef();
    SubstringRangeContext *substringRange();
    antlr4::tree::TerminalNode *PCT();
    NameDataRefContext *nameDataRef();
    antlr4::tree::TerminalNode *LPAREN();
    SFDummyArgNameListContext *sFDummyArgNameList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentStmtContext* assignmentStmt();

  class  SFExprListRefContext : public antlr4::ParserRuleContext {
  public:
    SFExprListRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    SFExprListContext *sFExprList();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<CommaSectionSubscriptContext *> commaSectionSubscript();
    CommaSectionSubscriptContext* commaSectionSubscript(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SFExprListRefContext* sFExprListRef();

  class  SFExprListContext : public antlr4::ParserRuleContext {
  public:
    SFExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SFExprListContext* sFExprList();

  class  CommaSectionSubscriptContext : public antlr4::ParserRuleContext {
  public:
    CommaSectionSubscriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    SectionSubscriptContext *sectionSubscript();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommaSectionSubscriptContext* commaSectionSubscript();

  class  AssignStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGNSTMT();
    LblRefContext *lblRef();
    antlr4::tree::TerminalNode *TO();
    VariableNameContext *variableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignStmtContext* assignStmt();

  class  BackspaceStmtContext : public antlr4::ParserRuleContext {
  public:
    BackspaceStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKSPACE();
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *LPAREN();
    PositionSpecListContext *positionSpecList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BackspaceStmtContext* backspaceStmt();

  class  UnitIdentifierContext : public antlr4::ParserRuleContext {
  public:
    UnitIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UFExprContext *uFExpr();
    antlr4::tree::TerminalNode *STAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnitIdentifierContext* unitIdentifier();

  class  PositionSpecListContext : public antlr4::ParserRuleContext {
  public:
    PositionSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitIdentifierCommaContext *unitIdentifierComma();
    std::vector<PositionSpecContext *> positionSpec();
    PositionSpecContext* positionSpec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PositionSpecListContext* positionSpecList();

  class  UnitIdentifierCommaContext : public antlr4::ParserRuleContext {
  public:
    UnitIdentifierCommaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnitIdentifierCommaContext* unitIdentifierComma();

  class  PositionSpecContext : public antlr4::ParserRuleContext {
  public:
    PositionSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *ASSIGN();
    UnitIdentifierContext *unitIdentifier();
    antlr4::tree::TerminalNode *ERR();
    LblRefContext *lblRef();
    antlr4::tree::TerminalNode *IOSTAT();
    ScalarVariableContext *scalarVariable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PositionSpecContext* positionSpec();

  class  ScalarVariableContext : public antlr4::ParserRuleContext {
  public:
    ScalarVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableNameContext *variableName();
    ArrayElementContext *arrayElement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScalarVariableContext* scalarVariable();

  class  UFExprContext : public antlr4::ParserRuleContext {
  public:
    UFExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UFTermContext *uFTerm();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    UFExprContext *uFExpr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UFExprContext* uFExpr();
  UFExprContext* uFExpr(int precedence);
  class  UFTermContext : public antlr4::ParserRuleContext {
  public:
    UFTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UFFactorContext *uFFactor();
    UFTermContext *uFTerm();
    antlr4::tree::TerminalNode *STAR();
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    UFPrimaryContext *uFPrimary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UFTermContext* uFTerm();
  UFTermContext* uFTerm(int precedence);
  class  UFFactorContext : public antlr4::ParserRuleContext {
  public:
    UFFactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UFPrimaryContext *uFPrimary();
    antlr4::tree::TerminalNode *POWER();
    UFFactorContext *uFFactor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UFFactorContext* uFFactor();

  class  UFPrimaryContext : public antlr4::ParserRuleContext {
  public:
    UFPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICON();
    antlr4::tree::TerminalNode *SCON();
    NameDataRefContext *nameDataRef();
    FunctionReferenceContext *functionReference();
    antlr4::tree::TerminalNode *LPAREN();
    UFExprContext *uFExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UFPrimaryContext* uFPrimary();

  class  SubroutineSubprogramContext : public antlr4::ParserRuleContext {
  public:
    SubroutineSubprogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBROUTINE();
    SubroutineNameContext *subroutineName();
    SubroutineRangeContext *subroutineRange();
    antlr4::tree::TerminalNode *RECURSIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineSubprogramContext* subroutineSubprogram();

  class  SubroutineNameContext : public antlr4::ParserRuleContext {
  public:
    SubroutineNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineNameContext* subroutineName();

  class  SubroutineRangeContext : public antlr4::ParserRuleContext {
  public:
    SubroutineRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubroutineParListContext *subroutineParList();
    EndSubroutineStmtContext *endSubroutineStmt();
    BodyContext *body();
    BodyPlusInternalsContext *bodyPlusInternals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubroutineRangeContext* subroutineRange();

  class  IncludeStmtContext : public antlr4::ParserRuleContext {
  public:
    IncludeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *SCON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncludeStmtContext* includeStmt();

  class  ImplicitStmtContext : public antlr4::ParserRuleContext {
  public:
    ImplicitStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLICIT();
    ImplicitSpecListContext *implicitSpecList();
    antlr4::tree::TerminalNode *NONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplicitStmtContext* implicitStmt();

  class  ImplicitSpecListContext : public antlr4::ParserRuleContext {
  public:
    ImplicitSpecListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImplicitSpecContext *> implicitSpec();
    ImplicitSpecContext* implicitSpec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplicitSpecListContext* implicitSpecList();

  class  ImplicitSpecContext : public antlr4::ParserRuleContext {
  public:
    ImplicitSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecContext *typeSpec();
    ImplicitRangesContext *implicitRanges();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplicitSpecContext* implicitSpec();

  class  ImplicitRangesContext : public antlr4::ParserRuleContext {
  public:
    ImplicitRangesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImplicitRangeContext *> implicitRange();
    ImplicitRangeContext* implicitRange(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplicitRangesContext* implicitRanges();

  class  ImplicitRangeContext : public antlr4::ParserRuleContext {
  public:
    ImplicitRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplicitRangeContext* implicitRange();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level5ExprContext *level5Expr();
    ExpressionContext *expression();
    DefinedBinaryOpContext *definedBinaryOp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  DefinedBinaryOpContext : public antlr4::ParserRuleContext {
  public:
    DefinedBinaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinedBinaryOpContext* definedBinaryOp();

  class  Level5ExprContext : public antlr4::ParserRuleContext {
  public:
    Level5ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EquivOperandContext *> equivOperand();
    EquivOperandContext* equivOperand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEQV();
    antlr4::tree::TerminalNode* NEQV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQV();
    antlr4::tree::TerminalNode* EQV(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Level5ExprContext* level5Expr();

  class  EquivOperandContext : public antlr4::ParserRuleContext {
  public:
    EquivOperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OrOperandContext *> orOperand();
    OrOperandContext* orOperand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOR();
    antlr4::tree::TerminalNode* LOR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EquivOperandContext* equivOperand();

  class  OrOperandContext : public antlr4::ParserRuleContext {
  public:
    OrOperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndOperandContext *> andOperand();
    AndOperandContext* andOperand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LAND();
    antlr4::tree::TerminalNode* LAND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrOperandContext* orOperand();

  class  AndOperandContext : public antlr4::ParserRuleContext {
  public:
    AndOperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level4ExprContext *level4Expr();
    antlr4::tree::TerminalNode *LNOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndOperandContext* andOperand();

  class  RelOpContext : public antlr4::ParserRuleContext {
  public:
    RelOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RelOpContext* relOp();

  class  Level4ExprContext : public antlr4::ParserRuleContext {
  public:
    Level4ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Level3ExprContext *> level3Expr();
    Level3ExprContext* level3Expr(size_t i);
    std::vector<RelOpContext *> relOp();
    RelOpContext* relOp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Level4ExprContext* level4Expr();

  class  Level3ExprContext : public antlr4::ParserRuleContext {
  public:
    Level3ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Level2ExprContext *> level2Expr();
    Level2ExprContext* level2Expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SPOFF();
    antlr4::tree::TerminalNode* SPOFF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SPON();
    antlr4::tree::TerminalNode* SPON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Level3ExprContext* level3Expr();

  class  Level2ExprContext : public antlr4::ParserRuleContext {
  public:
    Level2ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AddOperandContext *> addOperand();
    AddOperandContext* addOperand(size_t i);
    SignContext *sign();
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Level2ExprContext* level2Expr();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SignContext* sign();

  class  AddOperandContext : public antlr4::ParserRuleContext {
  public:
    AddOperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MultOperandContext *> multOperand();
    MultOperandContext* multOperand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddOperandContext* addOperand();

  class  MultOperandContext : public antlr4::ParserRuleContext {
  public:
    MultOperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Level1ExprContext *> level1Expr();
    Level1ExprContext* level1Expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POWER();
    antlr4::tree::TerminalNode* POWER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultOperandContext* multOperand();

  class  Level1ExprContext : public antlr4::ParserRuleContext {
  public:
    Level1ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    DefinedUnaryOpContext *definedUnaryOp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Level1ExprContext* level1Expr();

  class  DefinedUnaryOpContext : public antlr4::ParserRuleContext {
  public:
    DefinedUnaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinedUnaryOpContext* definedUnaryOp();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnsignedArithmeticConstantContext *unsignedArithmeticConstant();
    NameDataRefContext *nameDataRef();
    FunctionReferenceContext *functionReference();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SCON();
    LogicalConstantContext *logicalConstant();
    ArrayConstructorContext *arrayConstructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryContext* primary();

  class  ArrayConstructorContext : public antlr4::ParserRuleContext {
  public:
    ArrayConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBRACKETSLASH();
    AcValueListContext *acValueList();
    antlr4::tree::TerminalNode *CBRACKETSLASH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayConstructorContext* arrayConstructor();

  class  AcValueListContext : public antlr4::ParserRuleContext {
  public:
    AcValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    AcValueList1Context *acValueList1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AcValueListContext* acValueList();

  class  AcValueList1Context : public antlr4::ParserRuleContext {
  public:
    AcValueList1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    AcImpliedDoContext *acImpliedDo();
    AcValueList1Context *acValueList1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AcValueList1Context* acValueList1();
  AcValueList1Context* acValueList1(int precedence);
  class  AcImpliedDoContext : public antlr4::ParserRuleContext {
  public:
    AcImpliedDoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ImpliedDoVariableContext *impliedDoVariable();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *RPAREN();
    AcImpliedDoContext *acImpliedDo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AcImpliedDoContext* acImpliedDo();

  class  FunctionReferenceContext : public antlr4::ParserRuleContext {
  public:
    FunctionReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FunctionArgListContext *functionArgList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionReferenceContext* functionReference();

  class  FunctionArgListContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionArgContext *functionArg();
    SectionSubscriptListContext *sectionSubscriptList();
    antlr4::tree::TerminalNode *COMMA();
    FunctionArgListContext *functionArgList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionArgListContext* functionArgList();
  FunctionArgListContext* functionArgList(int precedence);
  class  FunctionArgContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionArgContext* functionArg();

  class  NameDataRefContext : public antlr4::ParserRuleContext {
  public:
    NameDataRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    std::vector<ComplexDataRefTailContext *> complexDataRefTail();
    ComplexDataRefTailContext* complexDataRefTail(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameDataRefContext* nameDataRef();

  class  ComplexDataRefTailContext : public antlr4::ParserRuleContext {
  public:
    ComplexDataRefTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SectionSubscriptRefContext *sectionSubscriptRef();
    antlr4::tree::TerminalNode *PCT();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComplexDataRefTailContext* complexDataRefTail();

  class  SectionSubscriptRefContext : public antlr4::ParserRuleContext {
  public:
    SectionSubscriptRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    SectionSubscriptListContext *sectionSubscriptList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SectionSubscriptRefContext* sectionSubscriptRef();

  class  SectionSubscriptListContext : public antlr4::ParserRuleContext {
  public:
    SectionSubscriptListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SectionSubscriptContext *> sectionSubscript();
    SectionSubscriptContext* sectionSubscript(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SectionSubscriptListContext* sectionSubscriptList();

  class  SectionSubscriptContext : public antlr4::ParserRuleContext {
  public:
    SectionSubscriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    SubscriptTripletTailContext *subscriptTripletTail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SectionSubscriptContext* sectionSubscript();

  class  SubscriptTripletTailContext : public antlr4::ParserRuleContext {
  public:
    SubscriptTripletTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *DOUBLECOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubscriptTripletTailContext* subscriptTripletTail();

  class  LogicalConstantContext : public antlr4::ParserRuleContext {
  public:
    LogicalConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNDERSCORE();
    KindParamContext *kindParam();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicalConstantContext* logicalConstant();

  class  KindParamContext : public antlr4::ParserRuleContext {
  public:
    KindParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICON();
    NamedConstantUseContext *namedConstantUse();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KindParamContext* kindParam();

  class  UnsignedArithmeticConstantContext : public antlr4::ParserRuleContext {
  public:
    UnsignedArithmeticConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICON();
    antlr4::tree::TerminalNode *RDCON();
    ComplexConstContext *complexConst();
    antlr4::tree::TerminalNode *UNDERSCORE();
    KindParamContext *kindParam();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnsignedArithmeticConstantContext* unsignedArithmeticConstant();

  class  ComplexConstContext : public antlr4::ParserRuleContext {
  public:
    ComplexConstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ComplexComponentContext *complexComponent();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComplexConstContext* complexConst();

  class  ComplexComponentContext : public antlr4::ParserRuleContext {
  public:
    ComplexComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ICON();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *RDCON();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComplexComponentContext* complexComponent();

  class  ConstantExprContext : public antlr4::ParserRuleContext {
  public:
    ConstantExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantExprContext* constantExpr();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    ActionStmtContext *actionStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStmtContext* ifStmt();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool bodyPlusInternalsSempred(BodyPlusInternalsContext *_localctx, size_t predicateIndex);
  bool blockDataBodySempred(BlockDataBodyContext *_localctx, size_t predicateIndex);
  bool fmtSpecSempred(FmtSpecContext *_localctx, size_t predicateIndex);
  bool namelistGroupsSempred(NamelistGroupsContext *_localctx, size_t predicateIndex);
  bool comlistSempred(ComlistContext *_localctx, size_t predicateIndex);
  bool attrSpecSeqSempred(AttrSpecSeqContext *_localctx, size_t predicateIndex);
  bool assumedShapeSpecListSempred(AssumedShapeSpecListContext *_localctx, size_t predicateIndex);
  bool interfaceBlockBodySempred(InterfaceBlockBodyContext *_localctx, size_t predicateIndex);
  bool subprogramInterfaceBodySempred(SubprogramInterfaceBodyContext *_localctx, size_t predicateIndex);
  bool derivedTypeBodySempred(DerivedTypeBodyContext *_localctx, size_t predicateIndex);
  bool moduleBodySempred(ModuleBodyContext *_localctx, size_t predicateIndex);
  bool elseWhereSempred(ElseWhereContext *_localctx, size_t predicateIndex);
  bool whereSempred(WhereContext *_localctx, size_t predicateIndex);
  bool selectCaseBodySempred(SelectCaseBodyContext *_localctx, size_t predicateIndex);
  bool structureComponentSempred(StructureComponentContext *_localctx, size_t predicateIndex);
  bool pointerFieldSempred(PointerFieldContext *_localctx, size_t predicateIndex);
  bool allocateObjectSempred(AllocateObjectContext *_localctx, size_t predicateIndex);
  bool ioControlSpecListSempred(IoControlSpecListContext *_localctx, size_t predicateIndex);
  bool rdIoCtlSpecListSempred(RdIoCtlSpecListContext *_localctx, size_t predicateIndex);
  bool outputItemList1Sempred(OutputItemList1Context *_localctx, size_t predicateIndex);
  bool uFExprSempred(UFExprContext *_localctx, size_t predicateIndex);
  bool uFTermSempred(UFTermContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool acValueList1Sempred(AcValueList1Context *_localctx, size_t predicateIndex);
  bool functionArgListSempred(FunctionArgListContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

