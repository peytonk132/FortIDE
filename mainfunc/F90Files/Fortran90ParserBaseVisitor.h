
// Generated from Fortran90Parser.g4 by ANTLR 4.13.2

#pragma once


#include "../antlr-runtime/antlr4-runtime.h"
#include "Fortran90ParserVisitor.h"


/**
 * This class provides an empty implementation of Fortran90ParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Fortran90ParserBaseVisitor : public Fortran90ParserVisitor {
public:

  virtual std::any visitProgram(Fortran90Parser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecutableProgram(Fortran90Parser::ExecutableProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgramUnit(Fortran90Parser::ProgramUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMainProgram(Fortran90Parser::MainProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgramStmt(Fortran90Parser::ProgramStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMainRange(Fortran90Parser::MainRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBodyPlusInternals(Fortran90Parser::BodyPlusInternalsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInternalSubprogram(Fortran90Parser::InternalSubprogramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecificationPartConstruct(Fortran90Parser::SpecificationPartConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUseStmt(Fortran90Parser::UseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnlyList(Fortran90Parser::OnlyListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnlyStmt(Fortran90Parser::OnlyStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRenameList(Fortran90Parser::RenameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRename(Fortran90Parser::RenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUseName(Fortran90Parser::UseNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterStmt(Fortran90Parser::ParameterStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedConstantDefList(Fortran90Parser::NamedConstantDefListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedConstantDef(Fortran90Parser::NamedConstantDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndProgramStmt(Fortran90Parser::EndProgramStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockDataSubprogram(Fortran90Parser::BlockDataSubprogramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockDataStmt(Fortran90Parser::BlockDataStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockDataBody(Fortran90Parser::BlockDataBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockDataBodyConstruct(Fortran90Parser::BlockDataBodyConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndBlockDataStmt(Fortran90Parser::EndBlockDataStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormatStmt(Fortran90Parser::FormatStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFmtSpec(Fortran90Parser::FmtSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormatedit(Fortran90Parser::FormateditContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEditElement(Fortran90Parser::EditElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMislexedFcon(Fortran90Parser::MislexedFconContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule(Fortran90Parser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndModuleStmt(Fortran90Parser::EndModuleStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntryStmt(Fortran90Parser::EntryStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineParList(Fortran90Parser::SubroutineParListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutinePars(Fortran90Parser::SubroutineParsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutinePar(Fortran90Parser::SubroutineParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationConstruct(Fortran90Parser::DeclarationConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecificationStmt(Fortran90Parser::SpecificationStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTargetStmt(Fortran90Parser::TargetStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTargetObjectList(Fortran90Parser::TargetObjectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTargetObject(Fortran90Parser::TargetObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerStmt(Fortran90Parser::PointerStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerStmtObjectList(Fortran90Parser::PointerStmtObjectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerStmtObject(Fortran90Parser::PointerStmtObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalStmt(Fortran90Parser::OptionalStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalParList(Fortran90Parser::OptionalParListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalPar(Fortran90Parser::OptionalParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamelistStmt(Fortran90Parser::NamelistStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamelistGroups(Fortran90Parser::NamelistGroupsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamelistGroupName(Fortran90Parser::NamelistGroupNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamelistGroupObject(Fortran90Parser::NamelistGroupObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntentStmt(Fortran90Parser::IntentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntentParList(Fortran90Parser::IntentParListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntentPar(Fortran90Parser::IntentParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDummyArgName(Fortran90Parser::DummyArgNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntentSpec(Fortran90Parser::IntentSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocatableStmt(Fortran90Parser::AllocatableStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayAllocationList(Fortran90Parser::ArrayAllocationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayAllocation(Fortran90Parser::ArrayAllocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayName(Fortran90Parser::ArrayNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessStmt(Fortran90Parser::AccessStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessIdList(Fortran90Parser::AccessIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessId(Fortran90Parser::AccessIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericName(Fortran90Parser::GenericNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSaveStmt(Fortran90Parser::SaveStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSavedEntityList(Fortran90Parser::SavedEntityListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSavedEntity(Fortran90Parser::SavedEntityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSavedCommonBlock(Fortran90Parser::SavedCommonBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntrinsicStmt(Fortran90Parser::IntrinsicStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntrinsicList(Fortran90Parser::IntrinsicListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntrinsicProcedureName(Fortran90Parser::IntrinsicProcedureNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalStmt(Fortran90Parser::ExternalStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalNameList(Fortran90Parser::ExternalNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalName(Fortran90Parser::ExternalNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquivalenceStmt(Fortran90Parser::EquivalenceStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquivalenceSetList(Fortran90Parser::EquivalenceSetListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquivalenceSet(Fortran90Parser::EquivalenceSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquivalenceObject(Fortran90Parser::EquivalenceObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquivalenceObjectList(Fortran90Parser::EquivalenceObjectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDimensionStmt(Fortran90Parser::DimensionStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDeclaratorList(Fortran90Parser::ArrayDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommonStmt(Fortran90Parser::CommonStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComlist(Fortran90Parser::ComlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommonBlockObject(Fortran90Parser::CommonBlockObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDeclarator(Fortran90Parser::ArrayDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComblock(Fortran90Parser::ComblockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommonBlockName(Fortran90Parser::CommonBlockNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeDeclarationStmt(Fortran90Parser::TypeDeclarationStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttrSpecSeq(Fortran90Parser::AttrSpecSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttrSpec(Fortran90Parser::AttrSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntityDeclList(Fortran90Parser::EntityDeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntityDecl(Fortran90Parser::EntityDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectName(Fortran90Parser::ObjectNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName(Fortran90Parser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArraySpec(Fortran90Parser::ArraySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssumedShapeSpecList(Fortran90Parser::AssumedShapeSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssumedShapeSpec(Fortran90Parser::AssumedShapeSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssumedSizeSpec(Fortran90Parser::AssumedSizeSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceBlock(Fortran90Parser::InterfaceBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndInterfaceStmt(Fortran90Parser::EndInterfaceStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceStmt(Fortran90Parser::InterfaceStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericSpec(Fortran90Parser::GenericSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedOperator(Fortran90Parser::DefinedOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceBlockBody(Fortran90Parser::InterfaceBlockBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceBodyPartConstruct(Fortran90Parser::InterfaceBodyPartConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleProcedureStmt(Fortran90Parser::ModuleProcedureStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureNameList(Fortran90Parser::ProcedureNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedureName(Fortran90Parser::ProcedureNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceBody(Fortran90Parser::InterfaceBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineInterfaceRange(Fortran90Parser::SubroutineInterfaceRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndSubroutineStmt(Fortran90Parser::EndSubroutineStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecursive(Fortran90Parser::RecursiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionPrefixRec(Fortran90Parser::FunctionPrefixRecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionPrefixTyp(Fortran90Parser::FunctionPrefixTypContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionInterfaceRange(Fortran90Parser::FunctionInterfaceRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionParList(Fortran90Parser::FunctionParListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionPars(Fortran90Parser::FunctionParsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionPar(Fortran90Parser::FunctionParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubprogramInterfaceBody(Fortran90Parser::SubprogramInterfaceBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndFunctionStmt(Fortran90Parser::EndFunctionStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDerivedTypeDef(Fortran90Parser::DerivedTypeDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndTypeStmt(Fortran90Parser::EndTypeStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDerivedTypeStmt(Fortran90Parser::DerivedTypeStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDerivedTypeBody(Fortran90Parser::DerivedTypeBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDerivedTypeBodyConstruct(Fortran90Parser::DerivedTypeBodyConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivateSequenceStmt(Fortran90Parser::PrivateSequenceStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentDefStmt(Fortran90Parser::ComponentDefStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentDeclList(Fortran90Parser::ComponentDeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentDecl(Fortran90Parser::ComponentDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentName(Fortran90Parser::ComponentNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentAttrSpecList(Fortran90Parser::ComponentAttrSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentAttrSpec(Fortran90Parser::ComponentAttrSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentArraySpec(Fortran90Parser::ComponentArraySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplicitShapeSpecList(Fortran90Parser::ExplicitShapeSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplicitShapeSpec(Fortran90Parser::ExplicitShapeSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLowerBound(Fortran90Parser::LowerBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpperBound(Fortran90Parser::UpperBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeferredShapeSpecList(Fortran90Parser::DeferredShapeSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeferredShapeSpec(Fortran90Parser::DeferredShapeSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpec(Fortran90Parser::TypeSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKindSelector(Fortran90Parser::KindSelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeName(Fortran90Parser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharSelector(Fortran90Parser::CharSelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLengthSelector(Fortran90Parser::LengthSelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharLength(Fortran90Parser::CharLengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(Fortran90Parser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBozLiteralConstant(Fortran90Parser::BozLiteralConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructureConstructor(Fortran90Parser::StructureConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprList(Fortran90Parser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedConstantUse(Fortran90Parser::NamedConstantUseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParamValue(Fortran90Parser::TypeParamValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleStmt(Fortran90Parser::ModuleStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleName(Fortran90Parser::ModuleNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdent(Fortran90Parser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexSubmodule(Fortran90Parser::ComplexSubmoduleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexSpecPart(Fortran90Parser::ComplexSpecPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubmoduleStmt(Fortran90Parser::SubmoduleStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecPartStmt(Fortran90Parser::SpecPartStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleSubprogramPartConstruct(Fortran90Parser::ModuleSubprogramPartConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContainsStmt(Fortran90Parser::ContainsStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleSubprogram(Fortran90Parser::ModuleSubprogramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionSubprogram(Fortran90Parser::FunctionSubprogramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionName(Fortran90Parser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionRange(Fortran90Parser::FunctionRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBody(Fortran90Parser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBodyConstruct(Fortran90Parser::BodyConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecutableConstruct(Fortran90Parser::ExecutableConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereConstruct(Fortran90Parser::WhereConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseWhere(Fortran90Parser::ElseWhereContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElsewhereStmt(Fortran90Parser::ElsewhereStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndWhereStmt(Fortran90Parser::EndWhereStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhere(Fortran90Parser::WhereContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereConstructStmt(Fortran90Parser::WhereConstructStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaskExpr(Fortran90Parser::MaskExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseConstruct(Fortran90Parser::CaseConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectCaseRange(Fortran90Parser::SelectCaseRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndSelectStmt(Fortran90Parser::EndSelectStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectCaseBody(Fortran90Parser::SelectCaseBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseBodyConstruct(Fortran90Parser::CaseBodyConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseStmt(Fortran90Parser::CaseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseSelector(Fortran90Parser::CaseSelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseValueRangeList(Fortran90Parser::CaseValueRangeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLitteralExpression(Fortran90Parser::LitteralExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAfterColonExpression(Fortran90Parser::AfterColonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBeforeColonExpression(Fortran90Parser::BeforeColonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMidlleColonExpression(Fortran90Parser::MidlleColonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfConstruct(Fortran90Parser::IfConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfThenStmt(Fortran90Parser::IfThenStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalBody(Fortran90Parser::ConditionalBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseIfConstruct(Fortran90Parser::ElseIfConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseIfStmt(Fortran90Parser::ElseIfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseConstruct(Fortran90Parser::ElseConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStmt(Fortran90Parser::ElseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndIfStmt(Fortran90Parser::EndIfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoConstruct(Fortran90Parser::DoConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockDoConstruct(Fortran90Parser::BlockDoConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndDoStmt(Fortran90Parser::EndDoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndName(Fortran90Parser::EndNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNameColon(Fortran90Parser::NameColonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabelDoStmt(Fortran90Parser::LabelDoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoLblRef(Fortran90Parser::DoLblRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoLblDef(Fortran90Parser::DoLblDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoLabelStmt(Fortran90Parser::DoLabelStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecutionPartConstruct(Fortran90Parser::ExecutionPartConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleDoStmt(Fortran90Parser::DoubleDoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataStmt(Fortran90Parser::DataStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataStmtSet(Fortran90Parser::DataStmtSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDse1(Fortran90Parser::Dse1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDse2(Fortran90Parser::Dse2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataStmtValue(Fortran90Parser::DataStmtValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataStmtObject(Fortran90Parser::DataStmtObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(Fortran90Parser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscriptListRef(Fortran90Parser::SubscriptListRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscriptList(Fortran90Parser::SubscriptListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscript(Fortran90Parser::SubscriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubstringRange(Fortran90Parser::SubstringRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataImpliedDo(Fortran90Parser::DataImpliedDoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataIDoObjectList(Fortran90Parser::DataIDoObjectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataIDoObject(Fortran90Parser::DataIDoObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructureComponent(Fortran90Parser::StructureComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldSelector(Fortran90Parser::FieldSelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayElement(Fortran90Parser::ArrayElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImpliedDoVariable(Fortran90Parser::ImpliedDoVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommaLoopControl(Fortran90Parser::CommaLoopControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopControl(Fortran90Parser::LoopControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableName(Fortran90Parser::VariableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommaExpr(Fortran90Parser::CommaExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSemicolonStmt(Fortran90Parser::SemicolonStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActionStmt(Fortran90Parser::ActionStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereStmt(Fortran90Parser::WhereStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerAssignmentStmt(Fortran90Parser::PointerAssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget(Fortran90Parser::TargetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullifyStmt(Fortran90Parser::NullifyStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerObjectList(Fortran90Parser::PointerObjectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerObject(Fortran90Parser::PointerObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerField(Fortran90Parser::PointerFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExitStmt(Fortran90Parser::ExitStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeallocateStmt(Fortran90Parser::DeallocateStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocateObjectList(Fortran90Parser::AllocateObjectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCycleStmt(Fortran90Parser::CycleStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocateStmt(Fortran90Parser::AllocateStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocationList(Fortran90Parser::AllocationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocation(Fortran90Parser::AllocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocateObject(Fortran90Parser::AllocateObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocatedShape(Fortran90Parser::AllocatedShapeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStopStmt(Fortran90Parser::StopStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteStmt(Fortran90Parser::WriteStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIoControlSpecList(Fortran90Parser::IoControlSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtFunctionStmt(Fortran90Parser::StmtFunctionStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmtFunctionRange(Fortran90Parser::StmtFunctionRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSFDummyArgNameList(Fortran90Parser::SFDummyArgNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSFDummyArgName(Fortran90Parser::SFDummyArgNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(Fortran90Parser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRewindStmt(Fortran90Parser::RewindStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadStmt(Fortran90Parser::ReadStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommaInputItemList(Fortran90Parser::CommaInputItemListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRdFmtId(Fortran90Parser::RdFmtIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRdFmtIdExpr(Fortran90Parser::RdFmtIdExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInputItemList(Fortran90Parser::InputItemListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInputItem(Fortran90Parser::InputItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInputImpliedDo(Fortran90Parser::InputImpliedDoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRdCtlSpec(Fortran90Parser::RdCtlSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRdUnitId(Fortran90Parser::RdUnitIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRdIoCtlSpecList(Fortran90Parser::RdIoCtlSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIoControlSpec(Fortran90Parser::IoControlSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintStmt(Fortran90Parser::PrintStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutputItemList(Fortran90Parser::OutputItemListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutputItemList1(Fortran90Parser::OutputItemList1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutputImpliedDo(Fortran90Parser::OutputImpliedDoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormatIdentifier(Fortran90Parser::FormatIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPauseStmt(Fortran90Parser::PauseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpenStmt(Fortran90Parser::OpenStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConnectSpecList(Fortran90Parser::ConnectSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConnectSpec(Fortran90Parser::ConnectSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInquireStmt(Fortran90Parser::InquireStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInquireSpecList(Fortran90Parser::InquireSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInquireSpec(Fortran90Parser::InquireSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignedGotoStmt(Fortran90Parser::AssignedGotoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableComma(Fortran90Parser::VariableCommaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGotoStmt(Fortran90Parser::GotoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComputedGotoStmt(Fortran90Parser::ComputedGotoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLblRefList(Fortran90Parser::LblRefListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndfileStmt(Fortran90Parser::EndfileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinueStmt(Fortran90Parser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCloseStmt(Fortran90Parser::CloseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCloseSpecList(Fortran90Parser::CloseSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCloseSpec(Fortran90Parser::CloseSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCExpression(Fortran90Parser::CExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCPrimary(Fortran90Parser::CPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCOperand(Fortran90Parser::COperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCPrimaryConcatOp(Fortran90Parser::CPrimaryConcatOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallStmt(Fortran90Parser::CallStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineNameUse(Fortran90Parser::SubroutineNameUseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineArgList(Fortran90Parser::SubroutineArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineArg(Fortran90Parser::SubroutineArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticIfStmt(Fortran90Parser::ArithmeticIfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLblRef(Fortran90Parser::LblRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(Fortran90Parser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStmt(Fortran90Parser::AssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSFExprListRef(Fortran90Parser::SFExprListRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSFExprList(Fortran90Parser::SFExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommaSectionSubscript(Fortran90Parser::CommaSectionSubscriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignStmt(Fortran90Parser::AssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackspaceStmt(Fortran90Parser::BackspaceStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitIdentifier(Fortran90Parser::UnitIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositionSpecList(Fortran90Parser::PositionSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitIdentifierComma(Fortran90Parser::UnitIdentifierCommaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositionSpec(Fortran90Parser::PositionSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalarVariable(Fortran90Parser::ScalarVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUFExpr(Fortran90Parser::UFExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUFTerm(Fortran90Parser::UFTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUFFactor(Fortran90Parser::UFFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUFPrimary(Fortran90Parser::UFPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineSubprogram(Fortran90Parser::SubroutineSubprogramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineName(Fortran90Parser::SubroutineNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubroutineRange(Fortran90Parser::SubroutineRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncludeStmt(Fortran90Parser::IncludeStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplicitStmt(Fortran90Parser::ImplicitStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplicitSpecList(Fortran90Parser::ImplicitSpecListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplicitSpec(Fortran90Parser::ImplicitSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplicitRanges(Fortran90Parser::ImplicitRangesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplicitRange(Fortran90Parser::ImplicitRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(Fortran90Parser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedBinaryOp(Fortran90Parser::DefinedBinaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel5Expr(Fortran90Parser::Level5ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquivOperand(Fortran90Parser::EquivOperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrOperand(Fortran90Parser::OrOperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndOperand(Fortran90Parser::AndOperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelOp(Fortran90Parser::RelOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel4Expr(Fortran90Parser::Level4ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel3Expr(Fortran90Parser::Level3ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel2Expr(Fortran90Parser::Level2ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSign(Fortran90Parser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddOperand(Fortran90Parser::AddOperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultOperand(Fortran90Parser::MultOperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel1Expr(Fortran90Parser::Level1ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedUnaryOp(Fortran90Parser::DefinedUnaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(Fortran90Parser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayConstructor(Fortran90Parser::ArrayConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAcValueList(Fortran90Parser::AcValueListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAcValueList1(Fortran90Parser::AcValueList1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAcImpliedDo(Fortran90Parser::AcImpliedDoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionReference(Fortran90Parser::FunctionReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionArgList(Fortran90Parser::FunctionArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionArg(Fortran90Parser::FunctionArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNameDataRef(Fortran90Parser::NameDataRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexDataRefTail(Fortran90Parser::ComplexDataRefTailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSectionSubscriptRef(Fortran90Parser::SectionSubscriptRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSectionSubscriptList(Fortran90Parser::SectionSubscriptListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSectionSubscript(Fortran90Parser::SectionSubscriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscriptTripletTail(Fortran90Parser::SubscriptTripletTailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalConstant(Fortran90Parser::LogicalConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKindParam(Fortran90Parser::KindParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsignedArithmeticConstant(Fortran90Parser::UnsignedArithmeticConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexConst(Fortran90Parser::ComplexConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexComponent(Fortran90Parser::ComplexComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantExpr(Fortran90Parser::ConstantExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(Fortran90Parser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }


};

