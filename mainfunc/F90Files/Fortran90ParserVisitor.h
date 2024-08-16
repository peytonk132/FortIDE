
// Generated from Fortran90Parser.g4 by ANTLR 4.13.2

#pragma once


#include "../antlr-runtime/antlr4-runtime.h"
#include "Fortran90Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Fortran90Parser.
 */
class  Fortran90ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Fortran90Parser.
   */
    virtual std::any visitProgram(Fortran90Parser::ProgramContext *context) = 0;

    virtual std::any visitExecutableProgram(Fortran90Parser::ExecutableProgramContext *context) = 0;

    virtual std::any visitProgramUnit(Fortran90Parser::ProgramUnitContext *context) = 0;

    virtual std::any visitMainProgram(Fortran90Parser::MainProgramContext *context) = 0;

    virtual std::any visitProgramStmt(Fortran90Parser::ProgramStmtContext *context) = 0;

    virtual std::any visitMainRange(Fortran90Parser::MainRangeContext *context) = 0;

    virtual std::any visitBodyPlusInternals(Fortran90Parser::BodyPlusInternalsContext *context) = 0;

    virtual std::any visitInternalSubprogram(Fortran90Parser::InternalSubprogramContext *context) = 0;

    virtual std::any visitSpecificationPartConstruct(Fortran90Parser::SpecificationPartConstructContext *context) = 0;

    virtual std::any visitUseStmt(Fortran90Parser::UseStmtContext *context) = 0;

    virtual std::any visitOnlyList(Fortran90Parser::OnlyListContext *context) = 0;

    virtual std::any visitOnlyStmt(Fortran90Parser::OnlyStmtContext *context) = 0;

    virtual std::any visitRenameList(Fortran90Parser::RenameListContext *context) = 0;

    virtual std::any visitRename(Fortran90Parser::RenameContext *context) = 0;

    virtual std::any visitUseName(Fortran90Parser::UseNameContext *context) = 0;

    virtual std::any visitParameterStmt(Fortran90Parser::ParameterStmtContext *context) = 0;

    virtual std::any visitNamedConstantDefList(Fortran90Parser::NamedConstantDefListContext *context) = 0;

    virtual std::any visitNamedConstantDef(Fortran90Parser::NamedConstantDefContext *context) = 0;

    virtual std::any visitEndProgramStmt(Fortran90Parser::EndProgramStmtContext *context) = 0;

    virtual std::any visitBlockDataSubprogram(Fortran90Parser::BlockDataSubprogramContext *context) = 0;

    virtual std::any visitBlockDataStmt(Fortran90Parser::BlockDataStmtContext *context) = 0;

    virtual std::any visitBlockDataBody(Fortran90Parser::BlockDataBodyContext *context) = 0;

    virtual std::any visitBlockDataBodyConstruct(Fortran90Parser::BlockDataBodyConstructContext *context) = 0;

    virtual std::any visitEndBlockDataStmt(Fortran90Parser::EndBlockDataStmtContext *context) = 0;

    virtual std::any visitFormatStmt(Fortran90Parser::FormatStmtContext *context) = 0;

    virtual std::any visitFmtSpec(Fortran90Parser::FmtSpecContext *context) = 0;

    virtual std::any visitFormatedit(Fortran90Parser::FormateditContext *context) = 0;

    virtual std::any visitEditElement(Fortran90Parser::EditElementContext *context) = 0;

    virtual std::any visitMislexedFcon(Fortran90Parser::MislexedFconContext *context) = 0;

    virtual std::any visitModule(Fortran90Parser::ModuleContext *context) = 0;

    virtual std::any visitEndModuleStmt(Fortran90Parser::EndModuleStmtContext *context) = 0;

    virtual std::any visitEntryStmt(Fortran90Parser::EntryStmtContext *context) = 0;

    virtual std::any visitSubroutineParList(Fortran90Parser::SubroutineParListContext *context) = 0;

    virtual std::any visitSubroutinePars(Fortran90Parser::SubroutineParsContext *context) = 0;

    virtual std::any visitSubroutinePar(Fortran90Parser::SubroutineParContext *context) = 0;

    virtual std::any visitDeclarationConstruct(Fortran90Parser::DeclarationConstructContext *context) = 0;

    virtual std::any visitSpecificationStmt(Fortran90Parser::SpecificationStmtContext *context) = 0;

    virtual std::any visitTargetStmt(Fortran90Parser::TargetStmtContext *context) = 0;

    virtual std::any visitTargetObjectList(Fortran90Parser::TargetObjectListContext *context) = 0;

    virtual std::any visitTargetObject(Fortran90Parser::TargetObjectContext *context) = 0;

    virtual std::any visitPointerStmt(Fortran90Parser::PointerStmtContext *context) = 0;

    virtual std::any visitPointerStmtObjectList(Fortran90Parser::PointerStmtObjectListContext *context) = 0;

    virtual std::any visitPointerStmtObject(Fortran90Parser::PointerStmtObjectContext *context) = 0;

    virtual std::any visitOptionalStmt(Fortran90Parser::OptionalStmtContext *context) = 0;

    virtual std::any visitOptionalParList(Fortran90Parser::OptionalParListContext *context) = 0;

    virtual std::any visitOptionalPar(Fortran90Parser::OptionalParContext *context) = 0;

    virtual std::any visitNamelistStmt(Fortran90Parser::NamelistStmtContext *context) = 0;

    virtual std::any visitNamelistGroups(Fortran90Parser::NamelistGroupsContext *context) = 0;

    virtual std::any visitNamelistGroupName(Fortran90Parser::NamelistGroupNameContext *context) = 0;

    virtual std::any visitNamelistGroupObject(Fortran90Parser::NamelistGroupObjectContext *context) = 0;

    virtual std::any visitIntentStmt(Fortran90Parser::IntentStmtContext *context) = 0;

    virtual std::any visitIntentParList(Fortran90Parser::IntentParListContext *context) = 0;

    virtual std::any visitIntentPar(Fortran90Parser::IntentParContext *context) = 0;

    virtual std::any visitDummyArgName(Fortran90Parser::DummyArgNameContext *context) = 0;

    virtual std::any visitIntentSpec(Fortran90Parser::IntentSpecContext *context) = 0;

    virtual std::any visitAllocatableStmt(Fortran90Parser::AllocatableStmtContext *context) = 0;

    virtual std::any visitArrayAllocationList(Fortran90Parser::ArrayAllocationListContext *context) = 0;

    virtual std::any visitArrayAllocation(Fortran90Parser::ArrayAllocationContext *context) = 0;

    virtual std::any visitArrayName(Fortran90Parser::ArrayNameContext *context) = 0;

    virtual std::any visitAccessStmt(Fortran90Parser::AccessStmtContext *context) = 0;

    virtual std::any visitAccessIdList(Fortran90Parser::AccessIdListContext *context) = 0;

    virtual std::any visitAccessId(Fortran90Parser::AccessIdContext *context) = 0;

    virtual std::any visitGenericName(Fortran90Parser::GenericNameContext *context) = 0;

    virtual std::any visitSaveStmt(Fortran90Parser::SaveStmtContext *context) = 0;

    virtual std::any visitSavedEntityList(Fortran90Parser::SavedEntityListContext *context) = 0;

    virtual std::any visitSavedEntity(Fortran90Parser::SavedEntityContext *context) = 0;

    virtual std::any visitSavedCommonBlock(Fortran90Parser::SavedCommonBlockContext *context) = 0;

    virtual std::any visitIntrinsicStmt(Fortran90Parser::IntrinsicStmtContext *context) = 0;

    virtual std::any visitIntrinsicList(Fortran90Parser::IntrinsicListContext *context) = 0;

    virtual std::any visitIntrinsicProcedureName(Fortran90Parser::IntrinsicProcedureNameContext *context) = 0;

    virtual std::any visitExternalStmt(Fortran90Parser::ExternalStmtContext *context) = 0;

    virtual std::any visitExternalNameList(Fortran90Parser::ExternalNameListContext *context) = 0;

    virtual std::any visitExternalName(Fortran90Parser::ExternalNameContext *context) = 0;

    virtual std::any visitEquivalenceStmt(Fortran90Parser::EquivalenceStmtContext *context) = 0;

    virtual std::any visitEquivalenceSetList(Fortran90Parser::EquivalenceSetListContext *context) = 0;

    virtual std::any visitEquivalenceSet(Fortran90Parser::EquivalenceSetContext *context) = 0;

    virtual std::any visitEquivalenceObject(Fortran90Parser::EquivalenceObjectContext *context) = 0;

    virtual std::any visitEquivalenceObjectList(Fortran90Parser::EquivalenceObjectListContext *context) = 0;

    virtual std::any visitDimensionStmt(Fortran90Parser::DimensionStmtContext *context) = 0;

    virtual std::any visitArrayDeclaratorList(Fortran90Parser::ArrayDeclaratorListContext *context) = 0;

    virtual std::any visitCommonStmt(Fortran90Parser::CommonStmtContext *context) = 0;

    virtual std::any visitComlist(Fortran90Parser::ComlistContext *context) = 0;

    virtual std::any visitCommonBlockObject(Fortran90Parser::CommonBlockObjectContext *context) = 0;

    virtual std::any visitArrayDeclarator(Fortran90Parser::ArrayDeclaratorContext *context) = 0;

    virtual std::any visitComblock(Fortran90Parser::ComblockContext *context) = 0;

    virtual std::any visitCommonBlockName(Fortran90Parser::CommonBlockNameContext *context) = 0;

    virtual std::any visitTypeDeclarationStmt(Fortran90Parser::TypeDeclarationStmtContext *context) = 0;

    virtual std::any visitAttrSpecSeq(Fortran90Parser::AttrSpecSeqContext *context) = 0;

    virtual std::any visitAttrSpec(Fortran90Parser::AttrSpecContext *context) = 0;

    virtual std::any visitEntityDeclList(Fortran90Parser::EntityDeclListContext *context) = 0;

    virtual std::any visitEntityDecl(Fortran90Parser::EntityDeclContext *context) = 0;

    virtual std::any visitObjectName(Fortran90Parser::ObjectNameContext *context) = 0;

    virtual std::any visitName(Fortran90Parser::NameContext *context) = 0;

    virtual std::any visitArraySpec(Fortran90Parser::ArraySpecContext *context) = 0;

    virtual std::any visitAssumedShapeSpecList(Fortran90Parser::AssumedShapeSpecListContext *context) = 0;

    virtual std::any visitAssumedShapeSpec(Fortran90Parser::AssumedShapeSpecContext *context) = 0;

    virtual std::any visitAssumedSizeSpec(Fortran90Parser::AssumedSizeSpecContext *context) = 0;

    virtual std::any visitInterfaceBlock(Fortran90Parser::InterfaceBlockContext *context) = 0;

    virtual std::any visitEndInterfaceStmt(Fortran90Parser::EndInterfaceStmtContext *context) = 0;

    virtual std::any visitInterfaceStmt(Fortran90Parser::InterfaceStmtContext *context) = 0;

    virtual std::any visitGenericSpec(Fortran90Parser::GenericSpecContext *context) = 0;

    virtual std::any visitDefinedOperator(Fortran90Parser::DefinedOperatorContext *context) = 0;

    virtual std::any visitInterfaceBlockBody(Fortran90Parser::InterfaceBlockBodyContext *context) = 0;

    virtual std::any visitInterfaceBodyPartConstruct(Fortran90Parser::InterfaceBodyPartConstructContext *context) = 0;

    virtual std::any visitModuleProcedureStmt(Fortran90Parser::ModuleProcedureStmtContext *context) = 0;

    virtual std::any visitProcedureNameList(Fortran90Parser::ProcedureNameListContext *context) = 0;

    virtual std::any visitProcedureName(Fortran90Parser::ProcedureNameContext *context) = 0;

    virtual std::any visitInterfaceBody(Fortran90Parser::InterfaceBodyContext *context) = 0;

    virtual std::any visitSubroutineInterfaceRange(Fortran90Parser::SubroutineInterfaceRangeContext *context) = 0;

    virtual std::any visitEndSubroutineStmt(Fortran90Parser::EndSubroutineStmtContext *context) = 0;

    virtual std::any visitRecursive(Fortran90Parser::RecursiveContext *context) = 0;

    virtual std::any visitFunctionPrefixRec(Fortran90Parser::FunctionPrefixRecContext *context) = 0;

    virtual std::any visitFunctionPrefixTyp(Fortran90Parser::FunctionPrefixTypContext *context) = 0;

    virtual std::any visitFunctionInterfaceRange(Fortran90Parser::FunctionInterfaceRangeContext *context) = 0;

    virtual std::any visitFunctionParList(Fortran90Parser::FunctionParListContext *context) = 0;

    virtual std::any visitFunctionPars(Fortran90Parser::FunctionParsContext *context) = 0;

    virtual std::any visitFunctionPar(Fortran90Parser::FunctionParContext *context) = 0;

    virtual std::any visitSubprogramInterfaceBody(Fortran90Parser::SubprogramInterfaceBodyContext *context) = 0;

    virtual std::any visitEndFunctionStmt(Fortran90Parser::EndFunctionStmtContext *context) = 0;

    virtual std::any visitDerivedTypeDef(Fortran90Parser::DerivedTypeDefContext *context) = 0;

    virtual std::any visitEndTypeStmt(Fortran90Parser::EndTypeStmtContext *context) = 0;

    virtual std::any visitDerivedTypeStmt(Fortran90Parser::DerivedTypeStmtContext *context) = 0;

    virtual std::any visitDerivedTypeBody(Fortran90Parser::DerivedTypeBodyContext *context) = 0;

    virtual std::any visitDerivedTypeBodyConstruct(Fortran90Parser::DerivedTypeBodyConstructContext *context) = 0;

    virtual std::any visitPrivateSequenceStmt(Fortran90Parser::PrivateSequenceStmtContext *context) = 0;

    virtual std::any visitComponentDefStmt(Fortran90Parser::ComponentDefStmtContext *context) = 0;

    virtual std::any visitComponentDeclList(Fortran90Parser::ComponentDeclListContext *context) = 0;

    virtual std::any visitComponentDecl(Fortran90Parser::ComponentDeclContext *context) = 0;

    virtual std::any visitComponentName(Fortran90Parser::ComponentNameContext *context) = 0;

    virtual std::any visitComponentAttrSpecList(Fortran90Parser::ComponentAttrSpecListContext *context) = 0;

    virtual std::any visitComponentAttrSpec(Fortran90Parser::ComponentAttrSpecContext *context) = 0;

    virtual std::any visitComponentArraySpec(Fortran90Parser::ComponentArraySpecContext *context) = 0;

    virtual std::any visitExplicitShapeSpecList(Fortran90Parser::ExplicitShapeSpecListContext *context) = 0;

    virtual std::any visitExplicitShapeSpec(Fortran90Parser::ExplicitShapeSpecContext *context) = 0;

    virtual std::any visitLowerBound(Fortran90Parser::LowerBoundContext *context) = 0;

    virtual std::any visitUpperBound(Fortran90Parser::UpperBoundContext *context) = 0;

    virtual std::any visitDeferredShapeSpecList(Fortran90Parser::DeferredShapeSpecListContext *context) = 0;

    virtual std::any visitDeferredShapeSpec(Fortran90Parser::DeferredShapeSpecContext *context) = 0;

    virtual std::any visitTypeSpec(Fortran90Parser::TypeSpecContext *context) = 0;

    virtual std::any visitKindSelector(Fortran90Parser::KindSelectorContext *context) = 0;

    virtual std::any visitTypeName(Fortran90Parser::TypeNameContext *context) = 0;

    virtual std::any visitCharSelector(Fortran90Parser::CharSelectorContext *context) = 0;

    virtual std::any visitLengthSelector(Fortran90Parser::LengthSelectorContext *context) = 0;

    virtual std::any visitCharLength(Fortran90Parser::CharLengthContext *context) = 0;

    virtual std::any visitConstant(Fortran90Parser::ConstantContext *context) = 0;

    virtual std::any visitBozLiteralConstant(Fortran90Parser::BozLiteralConstantContext *context) = 0;

    virtual std::any visitStructureConstructor(Fortran90Parser::StructureConstructorContext *context) = 0;

    virtual std::any visitExprList(Fortran90Parser::ExprListContext *context) = 0;

    virtual std::any visitNamedConstantUse(Fortran90Parser::NamedConstantUseContext *context) = 0;

    virtual std::any visitTypeParamValue(Fortran90Parser::TypeParamValueContext *context) = 0;

    virtual std::any visitModuleStmt(Fortran90Parser::ModuleStmtContext *context) = 0;

    virtual std::any visitModuleName(Fortran90Parser::ModuleNameContext *context) = 0;

    virtual std::any visitIdent(Fortran90Parser::IdentContext *context) = 0;

    virtual std::any visitComplexSubmodule(Fortran90Parser::ComplexSubmoduleContext *context) = 0;

    virtual std::any visitComplexSpecPart(Fortran90Parser::ComplexSpecPartContext *context) = 0;

    virtual std::any visitSubmoduleStmt(Fortran90Parser::SubmoduleStmtContext *context) = 0;

    virtual std::any visitSpecPartStmt(Fortran90Parser::SpecPartStmtContext *context) = 0;

    virtual std::any visitModuleSubprogramPartConstruct(Fortran90Parser::ModuleSubprogramPartConstructContext *context) = 0;

    virtual std::any visitContainsStmt(Fortran90Parser::ContainsStmtContext *context) = 0;

    virtual std::any visitModuleSubprogram(Fortran90Parser::ModuleSubprogramContext *context) = 0;

    virtual std::any visitFunctionSubprogram(Fortran90Parser::FunctionSubprogramContext *context) = 0;

    virtual std::any visitFunctionName(Fortran90Parser::FunctionNameContext *context) = 0;

    virtual std::any visitFunctionRange(Fortran90Parser::FunctionRangeContext *context) = 0;

    virtual std::any visitBody(Fortran90Parser::BodyContext *context) = 0;

    virtual std::any visitBodyConstruct(Fortran90Parser::BodyConstructContext *context) = 0;

    virtual std::any visitExecutableConstruct(Fortran90Parser::ExecutableConstructContext *context) = 0;

    virtual std::any visitWhereConstruct(Fortran90Parser::WhereConstructContext *context) = 0;

    virtual std::any visitElseWhere(Fortran90Parser::ElseWhereContext *context) = 0;

    virtual std::any visitElsewhereStmt(Fortran90Parser::ElsewhereStmtContext *context) = 0;

    virtual std::any visitEndWhereStmt(Fortran90Parser::EndWhereStmtContext *context) = 0;

    virtual std::any visitWhere(Fortran90Parser::WhereContext *context) = 0;

    virtual std::any visitWhereConstructStmt(Fortran90Parser::WhereConstructStmtContext *context) = 0;

    virtual std::any visitMaskExpr(Fortran90Parser::MaskExprContext *context) = 0;

    virtual std::any visitCaseConstruct(Fortran90Parser::CaseConstructContext *context) = 0;

    virtual std::any visitSelectCaseRange(Fortran90Parser::SelectCaseRangeContext *context) = 0;

    virtual std::any visitEndSelectStmt(Fortran90Parser::EndSelectStmtContext *context) = 0;

    virtual std::any visitSelectCaseBody(Fortran90Parser::SelectCaseBodyContext *context) = 0;

    virtual std::any visitCaseBodyConstruct(Fortran90Parser::CaseBodyConstructContext *context) = 0;

    virtual std::any visitCaseStmt(Fortran90Parser::CaseStmtContext *context) = 0;

    virtual std::any visitCaseSelector(Fortran90Parser::CaseSelectorContext *context) = 0;

    virtual std::any visitCaseValueRangeList(Fortran90Parser::CaseValueRangeListContext *context) = 0;

    virtual std::any visitLitteralExpression(Fortran90Parser::LitteralExpressionContext *context) = 0;

    virtual std::any visitAfterColonExpression(Fortran90Parser::AfterColonExpressionContext *context) = 0;

    virtual std::any visitBeforeColonExpression(Fortran90Parser::BeforeColonExpressionContext *context) = 0;

    virtual std::any visitMidlleColonExpression(Fortran90Parser::MidlleColonExpressionContext *context) = 0;

    virtual std::any visitIfConstruct(Fortran90Parser::IfConstructContext *context) = 0;

    virtual std::any visitIfThenStmt(Fortran90Parser::IfThenStmtContext *context) = 0;

    virtual std::any visitConditionalBody(Fortran90Parser::ConditionalBodyContext *context) = 0;

    virtual std::any visitElseIfConstruct(Fortran90Parser::ElseIfConstructContext *context) = 0;

    virtual std::any visitElseIfStmt(Fortran90Parser::ElseIfStmtContext *context) = 0;

    virtual std::any visitElseConstruct(Fortran90Parser::ElseConstructContext *context) = 0;

    virtual std::any visitElseStmt(Fortran90Parser::ElseStmtContext *context) = 0;

    virtual std::any visitEndIfStmt(Fortran90Parser::EndIfStmtContext *context) = 0;

    virtual std::any visitDoConstruct(Fortran90Parser::DoConstructContext *context) = 0;

    virtual std::any visitBlockDoConstruct(Fortran90Parser::BlockDoConstructContext *context) = 0;

    virtual std::any visitEndDoStmt(Fortran90Parser::EndDoStmtContext *context) = 0;

    virtual std::any visitEndName(Fortran90Parser::EndNameContext *context) = 0;

    virtual std::any visitNameColon(Fortran90Parser::NameColonContext *context) = 0;

    virtual std::any visitLabelDoStmt(Fortran90Parser::LabelDoStmtContext *context) = 0;

    virtual std::any visitDoLblRef(Fortran90Parser::DoLblRefContext *context) = 0;

    virtual std::any visitDoLblDef(Fortran90Parser::DoLblDefContext *context) = 0;

    virtual std::any visitDoLabelStmt(Fortran90Parser::DoLabelStmtContext *context) = 0;

    virtual std::any visitExecutionPartConstruct(Fortran90Parser::ExecutionPartConstructContext *context) = 0;

    virtual std::any visitDoubleDoStmt(Fortran90Parser::DoubleDoStmtContext *context) = 0;

    virtual std::any visitDataStmt(Fortran90Parser::DataStmtContext *context) = 0;

    virtual std::any visitDataStmtSet(Fortran90Parser::DataStmtSetContext *context) = 0;

    virtual std::any visitDse1(Fortran90Parser::Dse1Context *context) = 0;

    virtual std::any visitDse2(Fortran90Parser::Dse2Context *context) = 0;

    virtual std::any visitDataStmtValue(Fortran90Parser::DataStmtValueContext *context) = 0;

    virtual std::any visitDataStmtObject(Fortran90Parser::DataStmtObjectContext *context) = 0;

    virtual std::any visitVariable(Fortran90Parser::VariableContext *context) = 0;

    virtual std::any visitSubscriptListRef(Fortran90Parser::SubscriptListRefContext *context) = 0;

    virtual std::any visitSubscriptList(Fortran90Parser::SubscriptListContext *context) = 0;

    virtual std::any visitSubscript(Fortran90Parser::SubscriptContext *context) = 0;

    virtual std::any visitSubstringRange(Fortran90Parser::SubstringRangeContext *context) = 0;

    virtual std::any visitDataImpliedDo(Fortran90Parser::DataImpliedDoContext *context) = 0;

    virtual std::any visitDataIDoObjectList(Fortran90Parser::DataIDoObjectListContext *context) = 0;

    virtual std::any visitDataIDoObject(Fortran90Parser::DataIDoObjectContext *context) = 0;

    virtual std::any visitStructureComponent(Fortran90Parser::StructureComponentContext *context) = 0;

    virtual std::any visitFieldSelector(Fortran90Parser::FieldSelectorContext *context) = 0;

    virtual std::any visitArrayElement(Fortran90Parser::ArrayElementContext *context) = 0;

    virtual std::any visitImpliedDoVariable(Fortran90Parser::ImpliedDoVariableContext *context) = 0;

    virtual std::any visitCommaLoopControl(Fortran90Parser::CommaLoopControlContext *context) = 0;

    virtual std::any visitLoopControl(Fortran90Parser::LoopControlContext *context) = 0;

    virtual std::any visitVariableName(Fortran90Parser::VariableNameContext *context) = 0;

    virtual std::any visitCommaExpr(Fortran90Parser::CommaExprContext *context) = 0;

    virtual std::any visitSemicolonStmt(Fortran90Parser::SemicolonStmtContext *context) = 0;

    virtual std::any visitActionStmt(Fortran90Parser::ActionStmtContext *context) = 0;

    virtual std::any visitWhereStmt(Fortran90Parser::WhereStmtContext *context) = 0;

    virtual std::any visitPointerAssignmentStmt(Fortran90Parser::PointerAssignmentStmtContext *context) = 0;

    virtual std::any visitTarget(Fortran90Parser::TargetContext *context) = 0;

    virtual std::any visitNullifyStmt(Fortran90Parser::NullifyStmtContext *context) = 0;

    virtual std::any visitPointerObjectList(Fortran90Parser::PointerObjectListContext *context) = 0;

    virtual std::any visitPointerObject(Fortran90Parser::PointerObjectContext *context) = 0;

    virtual std::any visitPointerField(Fortran90Parser::PointerFieldContext *context) = 0;

    virtual std::any visitExitStmt(Fortran90Parser::ExitStmtContext *context) = 0;

    virtual std::any visitDeallocateStmt(Fortran90Parser::DeallocateStmtContext *context) = 0;

    virtual std::any visitAllocateObjectList(Fortran90Parser::AllocateObjectListContext *context) = 0;

    virtual std::any visitCycleStmt(Fortran90Parser::CycleStmtContext *context) = 0;

    virtual std::any visitAllocateStmt(Fortran90Parser::AllocateStmtContext *context) = 0;

    virtual std::any visitAllocationList(Fortran90Parser::AllocationListContext *context) = 0;

    virtual std::any visitAllocation(Fortran90Parser::AllocationContext *context) = 0;

    virtual std::any visitAllocateObject(Fortran90Parser::AllocateObjectContext *context) = 0;

    virtual std::any visitAllocatedShape(Fortran90Parser::AllocatedShapeContext *context) = 0;

    virtual std::any visitStopStmt(Fortran90Parser::StopStmtContext *context) = 0;

    virtual std::any visitWriteStmt(Fortran90Parser::WriteStmtContext *context) = 0;

    virtual std::any visitIoControlSpecList(Fortran90Parser::IoControlSpecListContext *context) = 0;

    virtual std::any visitStmtFunctionStmt(Fortran90Parser::StmtFunctionStmtContext *context) = 0;

    virtual std::any visitStmtFunctionRange(Fortran90Parser::StmtFunctionRangeContext *context) = 0;

    virtual std::any visitSFDummyArgNameList(Fortran90Parser::SFDummyArgNameListContext *context) = 0;

    virtual std::any visitSFDummyArgName(Fortran90Parser::SFDummyArgNameContext *context) = 0;

    virtual std::any visitReturnStmt(Fortran90Parser::ReturnStmtContext *context) = 0;

    virtual std::any visitRewindStmt(Fortran90Parser::RewindStmtContext *context) = 0;

    virtual std::any visitReadStmt(Fortran90Parser::ReadStmtContext *context) = 0;

    virtual std::any visitCommaInputItemList(Fortran90Parser::CommaInputItemListContext *context) = 0;

    virtual std::any visitRdFmtId(Fortran90Parser::RdFmtIdContext *context) = 0;

    virtual std::any visitRdFmtIdExpr(Fortran90Parser::RdFmtIdExprContext *context) = 0;

    virtual std::any visitInputItemList(Fortran90Parser::InputItemListContext *context) = 0;

    virtual std::any visitInputItem(Fortran90Parser::InputItemContext *context) = 0;

    virtual std::any visitInputImpliedDo(Fortran90Parser::InputImpliedDoContext *context) = 0;

    virtual std::any visitRdCtlSpec(Fortran90Parser::RdCtlSpecContext *context) = 0;

    virtual std::any visitRdUnitId(Fortran90Parser::RdUnitIdContext *context) = 0;

    virtual std::any visitRdIoCtlSpecList(Fortran90Parser::RdIoCtlSpecListContext *context) = 0;

    virtual std::any visitIoControlSpec(Fortran90Parser::IoControlSpecContext *context) = 0;

    virtual std::any visitPrintStmt(Fortran90Parser::PrintStmtContext *context) = 0;

    virtual std::any visitOutputItemList(Fortran90Parser::OutputItemListContext *context) = 0;

    virtual std::any visitOutputItemList1(Fortran90Parser::OutputItemList1Context *context) = 0;

    virtual std::any visitOutputImpliedDo(Fortran90Parser::OutputImpliedDoContext *context) = 0;

    virtual std::any visitFormatIdentifier(Fortran90Parser::FormatIdentifierContext *context) = 0;

    virtual std::any visitPauseStmt(Fortran90Parser::PauseStmtContext *context) = 0;

    virtual std::any visitOpenStmt(Fortran90Parser::OpenStmtContext *context) = 0;

    virtual std::any visitConnectSpecList(Fortran90Parser::ConnectSpecListContext *context) = 0;

    virtual std::any visitConnectSpec(Fortran90Parser::ConnectSpecContext *context) = 0;

    virtual std::any visitInquireStmt(Fortran90Parser::InquireStmtContext *context) = 0;

    virtual std::any visitInquireSpecList(Fortran90Parser::InquireSpecListContext *context) = 0;

    virtual std::any visitInquireSpec(Fortran90Parser::InquireSpecContext *context) = 0;

    virtual std::any visitAssignedGotoStmt(Fortran90Parser::AssignedGotoStmtContext *context) = 0;

    virtual std::any visitVariableComma(Fortran90Parser::VariableCommaContext *context) = 0;

    virtual std::any visitGotoStmt(Fortran90Parser::GotoStmtContext *context) = 0;

    virtual std::any visitComputedGotoStmt(Fortran90Parser::ComputedGotoStmtContext *context) = 0;

    virtual std::any visitLblRefList(Fortran90Parser::LblRefListContext *context) = 0;

    virtual std::any visitEndfileStmt(Fortran90Parser::EndfileStmtContext *context) = 0;

    virtual std::any visitContinueStmt(Fortran90Parser::ContinueStmtContext *context) = 0;

    virtual std::any visitCloseStmt(Fortran90Parser::CloseStmtContext *context) = 0;

    virtual std::any visitCloseSpecList(Fortran90Parser::CloseSpecListContext *context) = 0;

    virtual std::any visitCloseSpec(Fortran90Parser::CloseSpecContext *context) = 0;

    virtual std::any visitCExpression(Fortran90Parser::CExpressionContext *context) = 0;

    virtual std::any visitCPrimary(Fortran90Parser::CPrimaryContext *context) = 0;

    virtual std::any visitCOperand(Fortran90Parser::COperandContext *context) = 0;

    virtual std::any visitCPrimaryConcatOp(Fortran90Parser::CPrimaryConcatOpContext *context) = 0;

    virtual std::any visitCallStmt(Fortran90Parser::CallStmtContext *context) = 0;

    virtual std::any visitSubroutineNameUse(Fortran90Parser::SubroutineNameUseContext *context) = 0;

    virtual std::any visitSubroutineArgList(Fortran90Parser::SubroutineArgListContext *context) = 0;

    virtual std::any visitSubroutineArg(Fortran90Parser::SubroutineArgContext *context) = 0;

    virtual std::any visitArithmeticIfStmt(Fortran90Parser::ArithmeticIfStmtContext *context) = 0;

    virtual std::any visitLblRef(Fortran90Parser::LblRefContext *context) = 0;

    virtual std::any visitLabel(Fortran90Parser::LabelContext *context) = 0;

    virtual std::any visitAssignmentStmt(Fortran90Parser::AssignmentStmtContext *context) = 0;

    virtual std::any visitSFExprListRef(Fortran90Parser::SFExprListRefContext *context) = 0;

    virtual std::any visitSFExprList(Fortran90Parser::SFExprListContext *context) = 0;

    virtual std::any visitCommaSectionSubscript(Fortran90Parser::CommaSectionSubscriptContext *context) = 0;

    virtual std::any visitAssignStmt(Fortran90Parser::AssignStmtContext *context) = 0;

    virtual std::any visitBackspaceStmt(Fortran90Parser::BackspaceStmtContext *context) = 0;

    virtual std::any visitUnitIdentifier(Fortran90Parser::UnitIdentifierContext *context) = 0;

    virtual std::any visitPositionSpecList(Fortran90Parser::PositionSpecListContext *context) = 0;

    virtual std::any visitUnitIdentifierComma(Fortran90Parser::UnitIdentifierCommaContext *context) = 0;

    virtual std::any visitPositionSpec(Fortran90Parser::PositionSpecContext *context) = 0;

    virtual std::any visitScalarVariable(Fortran90Parser::ScalarVariableContext *context) = 0;

    virtual std::any visitUFExpr(Fortran90Parser::UFExprContext *context) = 0;

    virtual std::any visitUFTerm(Fortran90Parser::UFTermContext *context) = 0;

    virtual std::any visitUFFactor(Fortran90Parser::UFFactorContext *context) = 0;

    virtual std::any visitUFPrimary(Fortran90Parser::UFPrimaryContext *context) = 0;

    virtual std::any visitSubroutineSubprogram(Fortran90Parser::SubroutineSubprogramContext *context) = 0;

    virtual std::any visitSubroutineName(Fortran90Parser::SubroutineNameContext *context) = 0;

    virtual std::any visitSubroutineRange(Fortran90Parser::SubroutineRangeContext *context) = 0;

    virtual std::any visitIncludeStmt(Fortran90Parser::IncludeStmtContext *context) = 0;

    virtual std::any visitImplicitStmt(Fortran90Parser::ImplicitStmtContext *context) = 0;

    virtual std::any visitImplicitSpecList(Fortran90Parser::ImplicitSpecListContext *context) = 0;

    virtual std::any visitImplicitSpec(Fortran90Parser::ImplicitSpecContext *context) = 0;

    virtual std::any visitImplicitRanges(Fortran90Parser::ImplicitRangesContext *context) = 0;

    virtual std::any visitImplicitRange(Fortran90Parser::ImplicitRangeContext *context) = 0;

    virtual std::any visitExpression(Fortran90Parser::ExpressionContext *context) = 0;

    virtual std::any visitDefinedBinaryOp(Fortran90Parser::DefinedBinaryOpContext *context) = 0;

    virtual std::any visitLevel5Expr(Fortran90Parser::Level5ExprContext *context) = 0;

    virtual std::any visitEquivOperand(Fortran90Parser::EquivOperandContext *context) = 0;

    virtual std::any visitOrOperand(Fortran90Parser::OrOperandContext *context) = 0;

    virtual std::any visitAndOperand(Fortran90Parser::AndOperandContext *context) = 0;

    virtual std::any visitRelOp(Fortran90Parser::RelOpContext *context) = 0;

    virtual std::any visitLevel4Expr(Fortran90Parser::Level4ExprContext *context) = 0;

    virtual std::any visitLevel3Expr(Fortran90Parser::Level3ExprContext *context) = 0;

    virtual std::any visitLevel2Expr(Fortran90Parser::Level2ExprContext *context) = 0;

    virtual std::any visitSign(Fortran90Parser::SignContext *context) = 0;

    virtual std::any visitAddOperand(Fortran90Parser::AddOperandContext *context) = 0;

    virtual std::any visitMultOperand(Fortran90Parser::MultOperandContext *context) = 0;

    virtual std::any visitLevel1Expr(Fortran90Parser::Level1ExprContext *context) = 0;

    virtual std::any visitDefinedUnaryOp(Fortran90Parser::DefinedUnaryOpContext *context) = 0;

    virtual std::any visitPrimary(Fortran90Parser::PrimaryContext *context) = 0;

    virtual std::any visitArrayConstructor(Fortran90Parser::ArrayConstructorContext *context) = 0;

    virtual std::any visitAcValueList(Fortran90Parser::AcValueListContext *context) = 0;

    virtual std::any visitAcValueList1(Fortran90Parser::AcValueList1Context *context) = 0;

    virtual std::any visitAcImpliedDo(Fortran90Parser::AcImpliedDoContext *context) = 0;

    virtual std::any visitFunctionReference(Fortran90Parser::FunctionReferenceContext *context) = 0;

    virtual std::any visitFunctionArgList(Fortran90Parser::FunctionArgListContext *context) = 0;

    virtual std::any visitFunctionArg(Fortran90Parser::FunctionArgContext *context) = 0;

    virtual std::any visitNameDataRef(Fortran90Parser::NameDataRefContext *context) = 0;

    virtual std::any visitComplexDataRefTail(Fortran90Parser::ComplexDataRefTailContext *context) = 0;

    virtual std::any visitSectionSubscriptRef(Fortran90Parser::SectionSubscriptRefContext *context) = 0;

    virtual std::any visitSectionSubscriptList(Fortran90Parser::SectionSubscriptListContext *context) = 0;

    virtual std::any visitSectionSubscript(Fortran90Parser::SectionSubscriptContext *context) = 0;

    virtual std::any visitSubscriptTripletTail(Fortran90Parser::SubscriptTripletTailContext *context) = 0;

    virtual std::any visitLogicalConstant(Fortran90Parser::LogicalConstantContext *context) = 0;

    virtual std::any visitKindParam(Fortran90Parser::KindParamContext *context) = 0;

    virtual std::any visitUnsignedArithmeticConstant(Fortran90Parser::UnsignedArithmeticConstantContext *context) = 0;

    virtual std::any visitComplexConst(Fortran90Parser::ComplexConstContext *context) = 0;

    virtual std::any visitComplexComponent(Fortran90Parser::ComplexComponentContext *context) = 0;

    virtual std::any visitConstantExpr(Fortran90Parser::ConstantExprContext *context) = 0;

    virtual std::any visitIfStmt(Fortran90Parser::IfStmtContext *context) = 0;


};

