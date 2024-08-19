
// Generated from Fortran90Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "Fortran90Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Fortran90Parser.
 */
class  Fortran90ParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(Fortran90Parser::ProgramContext *ctx) = 0;
  virtual void exitProgram(Fortran90Parser::ProgramContext *ctx) = 0;

  virtual void enterExecutableProgram(Fortran90Parser::ExecutableProgramContext *ctx) = 0;
  virtual void exitExecutableProgram(Fortran90Parser::ExecutableProgramContext *ctx) = 0;

  virtual void enterProgramUnit(Fortran90Parser::ProgramUnitContext *ctx) = 0;
  virtual void exitProgramUnit(Fortran90Parser::ProgramUnitContext *ctx) = 0;

  virtual void enterMainProgram(Fortran90Parser::MainProgramContext *ctx) = 0;
  virtual void exitMainProgram(Fortran90Parser::MainProgramContext *ctx) = 0;

  virtual void enterProgramStmt(Fortran90Parser::ProgramStmtContext *ctx) = 0;
  virtual void exitProgramStmt(Fortran90Parser::ProgramStmtContext *ctx) = 0;

  virtual void enterMainRange(Fortran90Parser::MainRangeContext *ctx) = 0;
  virtual void exitMainRange(Fortran90Parser::MainRangeContext *ctx) = 0;

  virtual void enterBodyPlusInternals(Fortran90Parser::BodyPlusInternalsContext *ctx) = 0;
  virtual void exitBodyPlusInternals(Fortran90Parser::BodyPlusInternalsContext *ctx) = 0;

  virtual void enterInternalSubprogram(Fortran90Parser::InternalSubprogramContext *ctx) = 0;
  virtual void exitInternalSubprogram(Fortran90Parser::InternalSubprogramContext *ctx) = 0;

  virtual void enterSpecificationPartConstruct(Fortran90Parser::SpecificationPartConstructContext *ctx) = 0;
  virtual void exitSpecificationPartConstruct(Fortran90Parser::SpecificationPartConstructContext *ctx) = 0;

  virtual void enterUseStmt(Fortran90Parser::UseStmtContext *ctx) = 0;
  virtual void exitUseStmt(Fortran90Parser::UseStmtContext *ctx) = 0;

  virtual void enterOnlyList(Fortran90Parser::OnlyListContext *ctx) = 0;
  virtual void exitOnlyList(Fortran90Parser::OnlyListContext *ctx) = 0;

  virtual void enterOnlyStmt(Fortran90Parser::OnlyStmtContext *ctx) = 0;
  virtual void exitOnlyStmt(Fortran90Parser::OnlyStmtContext *ctx) = 0;

  virtual void enterRenameList(Fortran90Parser::RenameListContext *ctx) = 0;
  virtual void exitRenameList(Fortran90Parser::RenameListContext *ctx) = 0;

  virtual void enterRename(Fortran90Parser::RenameContext *ctx) = 0;
  virtual void exitRename(Fortran90Parser::RenameContext *ctx) = 0;

  virtual void enterUseName(Fortran90Parser::UseNameContext *ctx) = 0;
  virtual void exitUseName(Fortran90Parser::UseNameContext *ctx) = 0;

  virtual void enterParameterStmt(Fortran90Parser::ParameterStmtContext *ctx) = 0;
  virtual void exitParameterStmt(Fortran90Parser::ParameterStmtContext *ctx) = 0;

  virtual void enterNamedConstantDefList(Fortran90Parser::NamedConstantDefListContext *ctx) = 0;
  virtual void exitNamedConstantDefList(Fortran90Parser::NamedConstantDefListContext *ctx) = 0;

  virtual void enterNamedConstantDef(Fortran90Parser::NamedConstantDefContext *ctx) = 0;
  virtual void exitNamedConstantDef(Fortran90Parser::NamedConstantDefContext *ctx) = 0;

  virtual void enterEndProgramStmt(Fortran90Parser::EndProgramStmtContext *ctx) = 0;
  virtual void exitEndProgramStmt(Fortran90Parser::EndProgramStmtContext *ctx) = 0;

  virtual void enterBlockDataSubprogram(Fortran90Parser::BlockDataSubprogramContext *ctx) = 0;
  virtual void exitBlockDataSubprogram(Fortran90Parser::BlockDataSubprogramContext *ctx) = 0;

  virtual void enterBlockDataStmt(Fortran90Parser::BlockDataStmtContext *ctx) = 0;
  virtual void exitBlockDataStmt(Fortran90Parser::BlockDataStmtContext *ctx) = 0;

  virtual void enterBlockDataBody(Fortran90Parser::BlockDataBodyContext *ctx) = 0;
  virtual void exitBlockDataBody(Fortran90Parser::BlockDataBodyContext *ctx) = 0;

  virtual void enterBlockDataBodyConstruct(Fortran90Parser::BlockDataBodyConstructContext *ctx) = 0;
  virtual void exitBlockDataBodyConstruct(Fortran90Parser::BlockDataBodyConstructContext *ctx) = 0;

  virtual void enterEndBlockDataStmt(Fortran90Parser::EndBlockDataStmtContext *ctx) = 0;
  virtual void exitEndBlockDataStmt(Fortran90Parser::EndBlockDataStmtContext *ctx) = 0;

  virtual void enterFormatStmt(Fortran90Parser::FormatStmtContext *ctx) = 0;
  virtual void exitFormatStmt(Fortran90Parser::FormatStmtContext *ctx) = 0;

  virtual void enterFmtSpec(Fortran90Parser::FmtSpecContext *ctx) = 0;
  virtual void exitFmtSpec(Fortran90Parser::FmtSpecContext *ctx) = 0;

  virtual void enterFormatedit(Fortran90Parser::FormateditContext *ctx) = 0;
  virtual void exitFormatedit(Fortran90Parser::FormateditContext *ctx) = 0;

  virtual void enterEditElement(Fortran90Parser::EditElementContext *ctx) = 0;
  virtual void exitEditElement(Fortran90Parser::EditElementContext *ctx) = 0;

  virtual void enterMislexedFcon(Fortran90Parser::MislexedFconContext *ctx) = 0;
  virtual void exitMislexedFcon(Fortran90Parser::MislexedFconContext *ctx) = 0;

  virtual void enterModule(Fortran90Parser::ModuleContext *ctx) = 0;
  virtual void exitModule(Fortran90Parser::ModuleContext *ctx) = 0;

  virtual void enterEndModuleStmt(Fortran90Parser::EndModuleStmtContext *ctx) = 0;
  virtual void exitEndModuleStmt(Fortran90Parser::EndModuleStmtContext *ctx) = 0;

  virtual void enterEntryStmt(Fortran90Parser::EntryStmtContext *ctx) = 0;
  virtual void exitEntryStmt(Fortran90Parser::EntryStmtContext *ctx) = 0;

  virtual void enterSubroutineParList(Fortran90Parser::SubroutineParListContext *ctx) = 0;
  virtual void exitSubroutineParList(Fortran90Parser::SubroutineParListContext *ctx) = 0;

  virtual void enterSubroutinePars(Fortran90Parser::SubroutineParsContext *ctx) = 0;
  virtual void exitSubroutinePars(Fortran90Parser::SubroutineParsContext *ctx) = 0;

  virtual void enterSubroutinePar(Fortran90Parser::SubroutineParContext *ctx) = 0;
  virtual void exitSubroutinePar(Fortran90Parser::SubroutineParContext *ctx) = 0;

  virtual void enterDeclarationConstruct(Fortran90Parser::DeclarationConstructContext *ctx) = 0;
  virtual void exitDeclarationConstruct(Fortran90Parser::DeclarationConstructContext *ctx) = 0;

  virtual void enterSpecificationStmt(Fortran90Parser::SpecificationStmtContext *ctx) = 0;
  virtual void exitSpecificationStmt(Fortran90Parser::SpecificationStmtContext *ctx) = 0;

  virtual void enterTargetStmt(Fortran90Parser::TargetStmtContext *ctx) = 0;
  virtual void exitTargetStmt(Fortran90Parser::TargetStmtContext *ctx) = 0;

  virtual void enterTargetObjectList(Fortran90Parser::TargetObjectListContext *ctx) = 0;
  virtual void exitTargetObjectList(Fortran90Parser::TargetObjectListContext *ctx) = 0;

  virtual void enterTargetObject(Fortran90Parser::TargetObjectContext *ctx) = 0;
  virtual void exitTargetObject(Fortran90Parser::TargetObjectContext *ctx) = 0;

  virtual void enterPointerStmt(Fortran90Parser::PointerStmtContext *ctx) = 0;
  virtual void exitPointerStmt(Fortran90Parser::PointerStmtContext *ctx) = 0;

  virtual void enterPointerStmtObjectList(Fortran90Parser::PointerStmtObjectListContext *ctx) = 0;
  virtual void exitPointerStmtObjectList(Fortran90Parser::PointerStmtObjectListContext *ctx) = 0;

  virtual void enterPointerStmtObject(Fortran90Parser::PointerStmtObjectContext *ctx) = 0;
  virtual void exitPointerStmtObject(Fortran90Parser::PointerStmtObjectContext *ctx) = 0;

  virtual void enterOptionalStmt(Fortran90Parser::OptionalStmtContext *ctx) = 0;
  virtual void exitOptionalStmt(Fortran90Parser::OptionalStmtContext *ctx) = 0;

  virtual void enterOptionalParList(Fortran90Parser::OptionalParListContext *ctx) = 0;
  virtual void exitOptionalParList(Fortran90Parser::OptionalParListContext *ctx) = 0;

  virtual void enterOptionalPar(Fortran90Parser::OptionalParContext *ctx) = 0;
  virtual void exitOptionalPar(Fortran90Parser::OptionalParContext *ctx) = 0;

  virtual void enterNamelistStmt(Fortran90Parser::NamelistStmtContext *ctx) = 0;
  virtual void exitNamelistStmt(Fortran90Parser::NamelistStmtContext *ctx) = 0;

  virtual void enterNamelistGroups(Fortran90Parser::NamelistGroupsContext *ctx) = 0;
  virtual void exitNamelistGroups(Fortran90Parser::NamelistGroupsContext *ctx) = 0;

  virtual void enterNamelistGroupName(Fortran90Parser::NamelistGroupNameContext *ctx) = 0;
  virtual void exitNamelistGroupName(Fortran90Parser::NamelistGroupNameContext *ctx) = 0;

  virtual void enterNamelistGroupObject(Fortran90Parser::NamelistGroupObjectContext *ctx) = 0;
  virtual void exitNamelistGroupObject(Fortran90Parser::NamelistGroupObjectContext *ctx) = 0;

  virtual void enterIntentStmt(Fortran90Parser::IntentStmtContext *ctx) = 0;
  virtual void exitIntentStmt(Fortran90Parser::IntentStmtContext *ctx) = 0;

  virtual void enterIntentParList(Fortran90Parser::IntentParListContext *ctx) = 0;
  virtual void exitIntentParList(Fortran90Parser::IntentParListContext *ctx) = 0;

  virtual void enterIntentPar(Fortran90Parser::IntentParContext *ctx) = 0;
  virtual void exitIntentPar(Fortran90Parser::IntentParContext *ctx) = 0;

  virtual void enterDummyArgName(Fortran90Parser::DummyArgNameContext *ctx) = 0;
  virtual void exitDummyArgName(Fortran90Parser::DummyArgNameContext *ctx) = 0;

  virtual void enterIntentSpec(Fortran90Parser::IntentSpecContext *ctx) = 0;
  virtual void exitIntentSpec(Fortran90Parser::IntentSpecContext *ctx) = 0;

  virtual void enterAllocatableStmt(Fortran90Parser::AllocatableStmtContext *ctx) = 0;
  virtual void exitAllocatableStmt(Fortran90Parser::AllocatableStmtContext *ctx) = 0;

  virtual void enterArrayAllocationList(Fortran90Parser::ArrayAllocationListContext *ctx) = 0;
  virtual void exitArrayAllocationList(Fortran90Parser::ArrayAllocationListContext *ctx) = 0;

  virtual void enterArrayAllocation(Fortran90Parser::ArrayAllocationContext *ctx) = 0;
  virtual void exitArrayAllocation(Fortran90Parser::ArrayAllocationContext *ctx) = 0;

  virtual void enterArrayName(Fortran90Parser::ArrayNameContext *ctx) = 0;
  virtual void exitArrayName(Fortran90Parser::ArrayNameContext *ctx) = 0;

  virtual void enterAccessStmt(Fortran90Parser::AccessStmtContext *ctx) = 0;
  virtual void exitAccessStmt(Fortran90Parser::AccessStmtContext *ctx) = 0;

  virtual void enterAccessIdList(Fortran90Parser::AccessIdListContext *ctx) = 0;
  virtual void exitAccessIdList(Fortran90Parser::AccessIdListContext *ctx) = 0;

  virtual void enterAccessId(Fortran90Parser::AccessIdContext *ctx) = 0;
  virtual void exitAccessId(Fortran90Parser::AccessIdContext *ctx) = 0;

  virtual void enterGenericName(Fortran90Parser::GenericNameContext *ctx) = 0;
  virtual void exitGenericName(Fortran90Parser::GenericNameContext *ctx) = 0;

  virtual void enterSaveStmt(Fortran90Parser::SaveStmtContext *ctx) = 0;
  virtual void exitSaveStmt(Fortran90Parser::SaveStmtContext *ctx) = 0;

  virtual void enterSavedEntityList(Fortran90Parser::SavedEntityListContext *ctx) = 0;
  virtual void exitSavedEntityList(Fortran90Parser::SavedEntityListContext *ctx) = 0;

  virtual void enterSavedEntity(Fortran90Parser::SavedEntityContext *ctx) = 0;
  virtual void exitSavedEntity(Fortran90Parser::SavedEntityContext *ctx) = 0;

  virtual void enterSavedCommonBlock(Fortran90Parser::SavedCommonBlockContext *ctx) = 0;
  virtual void exitSavedCommonBlock(Fortran90Parser::SavedCommonBlockContext *ctx) = 0;

  virtual void enterIntrinsicStmt(Fortran90Parser::IntrinsicStmtContext *ctx) = 0;
  virtual void exitIntrinsicStmt(Fortran90Parser::IntrinsicStmtContext *ctx) = 0;

  virtual void enterIntrinsicList(Fortran90Parser::IntrinsicListContext *ctx) = 0;
  virtual void exitIntrinsicList(Fortran90Parser::IntrinsicListContext *ctx) = 0;

  virtual void enterIntrinsicProcedureName(Fortran90Parser::IntrinsicProcedureNameContext *ctx) = 0;
  virtual void exitIntrinsicProcedureName(Fortran90Parser::IntrinsicProcedureNameContext *ctx) = 0;

  virtual void enterExternalStmt(Fortran90Parser::ExternalStmtContext *ctx) = 0;
  virtual void exitExternalStmt(Fortran90Parser::ExternalStmtContext *ctx) = 0;

  virtual void enterExternalNameList(Fortran90Parser::ExternalNameListContext *ctx) = 0;
  virtual void exitExternalNameList(Fortran90Parser::ExternalNameListContext *ctx) = 0;

  virtual void enterExternalName(Fortran90Parser::ExternalNameContext *ctx) = 0;
  virtual void exitExternalName(Fortran90Parser::ExternalNameContext *ctx) = 0;

  virtual void enterEquivalenceStmt(Fortran90Parser::EquivalenceStmtContext *ctx) = 0;
  virtual void exitEquivalenceStmt(Fortran90Parser::EquivalenceStmtContext *ctx) = 0;

  virtual void enterEquivalenceSetList(Fortran90Parser::EquivalenceSetListContext *ctx) = 0;
  virtual void exitEquivalenceSetList(Fortran90Parser::EquivalenceSetListContext *ctx) = 0;

  virtual void enterEquivalenceSet(Fortran90Parser::EquivalenceSetContext *ctx) = 0;
  virtual void exitEquivalenceSet(Fortran90Parser::EquivalenceSetContext *ctx) = 0;

  virtual void enterEquivalenceObject(Fortran90Parser::EquivalenceObjectContext *ctx) = 0;
  virtual void exitEquivalenceObject(Fortran90Parser::EquivalenceObjectContext *ctx) = 0;

  virtual void enterEquivalenceObjectList(Fortran90Parser::EquivalenceObjectListContext *ctx) = 0;
  virtual void exitEquivalenceObjectList(Fortran90Parser::EquivalenceObjectListContext *ctx) = 0;

  virtual void enterDimensionStmt(Fortran90Parser::DimensionStmtContext *ctx) = 0;
  virtual void exitDimensionStmt(Fortran90Parser::DimensionStmtContext *ctx) = 0;

  virtual void enterArrayDeclaratorList(Fortran90Parser::ArrayDeclaratorListContext *ctx) = 0;
  virtual void exitArrayDeclaratorList(Fortran90Parser::ArrayDeclaratorListContext *ctx) = 0;

  virtual void enterCommonStmt(Fortran90Parser::CommonStmtContext *ctx) = 0;
  virtual void exitCommonStmt(Fortran90Parser::CommonStmtContext *ctx) = 0;

  virtual void enterComlist(Fortran90Parser::ComlistContext *ctx) = 0;
  virtual void exitComlist(Fortran90Parser::ComlistContext *ctx) = 0;

  virtual void enterCommonBlockObject(Fortran90Parser::CommonBlockObjectContext *ctx) = 0;
  virtual void exitCommonBlockObject(Fortran90Parser::CommonBlockObjectContext *ctx) = 0;

  virtual void enterArrayDeclarator(Fortran90Parser::ArrayDeclaratorContext *ctx) = 0;
  virtual void exitArrayDeclarator(Fortran90Parser::ArrayDeclaratorContext *ctx) = 0;

  virtual void enterComblock(Fortran90Parser::ComblockContext *ctx) = 0;
  virtual void exitComblock(Fortran90Parser::ComblockContext *ctx) = 0;

  virtual void enterCommonBlockName(Fortran90Parser::CommonBlockNameContext *ctx) = 0;
  virtual void exitCommonBlockName(Fortran90Parser::CommonBlockNameContext *ctx) = 0;

  virtual void enterTypeDeclarationStmt(Fortran90Parser::TypeDeclarationStmtContext *ctx) = 0;
  virtual void exitTypeDeclarationStmt(Fortran90Parser::TypeDeclarationStmtContext *ctx) = 0;

  virtual void enterAttrSpecSeq(Fortran90Parser::AttrSpecSeqContext *ctx) = 0;
  virtual void exitAttrSpecSeq(Fortran90Parser::AttrSpecSeqContext *ctx) = 0;

  virtual void enterAttrSpec(Fortran90Parser::AttrSpecContext *ctx) = 0;
  virtual void exitAttrSpec(Fortran90Parser::AttrSpecContext *ctx) = 0;

  virtual void enterEntityDeclList(Fortran90Parser::EntityDeclListContext *ctx) = 0;
  virtual void exitEntityDeclList(Fortran90Parser::EntityDeclListContext *ctx) = 0;

  virtual void enterEntityDecl(Fortran90Parser::EntityDeclContext *ctx) = 0;
  virtual void exitEntityDecl(Fortran90Parser::EntityDeclContext *ctx) = 0;

  virtual void enterObjectName(Fortran90Parser::ObjectNameContext *ctx) = 0;
  virtual void exitObjectName(Fortran90Parser::ObjectNameContext *ctx) = 0;

  virtual void enterName(Fortran90Parser::NameContext *ctx) = 0;
  virtual void exitName(Fortran90Parser::NameContext *ctx) = 0;

  virtual void enterArraySpec(Fortran90Parser::ArraySpecContext *ctx) = 0;
  virtual void exitArraySpec(Fortran90Parser::ArraySpecContext *ctx) = 0;

  virtual void enterAssumedShapeSpecList(Fortran90Parser::AssumedShapeSpecListContext *ctx) = 0;
  virtual void exitAssumedShapeSpecList(Fortran90Parser::AssumedShapeSpecListContext *ctx) = 0;

  virtual void enterAssumedShapeSpec(Fortran90Parser::AssumedShapeSpecContext *ctx) = 0;
  virtual void exitAssumedShapeSpec(Fortran90Parser::AssumedShapeSpecContext *ctx) = 0;

  virtual void enterAssumedSizeSpec(Fortran90Parser::AssumedSizeSpecContext *ctx) = 0;
  virtual void exitAssumedSizeSpec(Fortran90Parser::AssumedSizeSpecContext *ctx) = 0;

  virtual void enterInterfaceBlock(Fortran90Parser::InterfaceBlockContext *ctx) = 0;
  virtual void exitInterfaceBlock(Fortran90Parser::InterfaceBlockContext *ctx) = 0;

  virtual void enterEndInterfaceStmt(Fortran90Parser::EndInterfaceStmtContext *ctx) = 0;
  virtual void exitEndInterfaceStmt(Fortran90Parser::EndInterfaceStmtContext *ctx) = 0;

  virtual void enterInterfaceStmt(Fortran90Parser::InterfaceStmtContext *ctx) = 0;
  virtual void exitInterfaceStmt(Fortran90Parser::InterfaceStmtContext *ctx) = 0;

  virtual void enterGenericSpec(Fortran90Parser::GenericSpecContext *ctx) = 0;
  virtual void exitGenericSpec(Fortran90Parser::GenericSpecContext *ctx) = 0;

  virtual void enterDefinedOperator(Fortran90Parser::DefinedOperatorContext *ctx) = 0;
  virtual void exitDefinedOperator(Fortran90Parser::DefinedOperatorContext *ctx) = 0;

  virtual void enterInterfaceBlockBody(Fortran90Parser::InterfaceBlockBodyContext *ctx) = 0;
  virtual void exitInterfaceBlockBody(Fortran90Parser::InterfaceBlockBodyContext *ctx) = 0;

  virtual void enterInterfaceBodyPartConstruct(Fortran90Parser::InterfaceBodyPartConstructContext *ctx) = 0;
  virtual void exitInterfaceBodyPartConstruct(Fortran90Parser::InterfaceBodyPartConstructContext *ctx) = 0;

  virtual void enterModuleProcedureStmt(Fortran90Parser::ModuleProcedureStmtContext *ctx) = 0;
  virtual void exitModuleProcedureStmt(Fortran90Parser::ModuleProcedureStmtContext *ctx) = 0;

  virtual void enterProcedureNameList(Fortran90Parser::ProcedureNameListContext *ctx) = 0;
  virtual void exitProcedureNameList(Fortran90Parser::ProcedureNameListContext *ctx) = 0;

  virtual void enterProcedureName(Fortran90Parser::ProcedureNameContext *ctx) = 0;
  virtual void exitProcedureName(Fortran90Parser::ProcedureNameContext *ctx) = 0;

  virtual void enterInterfaceBody(Fortran90Parser::InterfaceBodyContext *ctx) = 0;
  virtual void exitInterfaceBody(Fortran90Parser::InterfaceBodyContext *ctx) = 0;

  virtual void enterSubroutineInterfaceRange(Fortran90Parser::SubroutineInterfaceRangeContext *ctx) = 0;
  virtual void exitSubroutineInterfaceRange(Fortran90Parser::SubroutineInterfaceRangeContext *ctx) = 0;

  virtual void enterEndSubroutineStmt(Fortran90Parser::EndSubroutineStmtContext *ctx) = 0;
  virtual void exitEndSubroutineStmt(Fortran90Parser::EndSubroutineStmtContext *ctx) = 0;

  virtual void enterRecursive(Fortran90Parser::RecursiveContext *ctx) = 0;
  virtual void exitRecursive(Fortran90Parser::RecursiveContext *ctx) = 0;

  virtual void enterFunctionPrefixRec(Fortran90Parser::FunctionPrefixRecContext *ctx) = 0;
  virtual void exitFunctionPrefixRec(Fortran90Parser::FunctionPrefixRecContext *ctx) = 0;

  virtual void enterFunctionPrefixTyp(Fortran90Parser::FunctionPrefixTypContext *ctx) = 0;
  virtual void exitFunctionPrefixTyp(Fortran90Parser::FunctionPrefixTypContext *ctx) = 0;

  virtual void enterFunctionInterfaceRange(Fortran90Parser::FunctionInterfaceRangeContext *ctx) = 0;
  virtual void exitFunctionInterfaceRange(Fortran90Parser::FunctionInterfaceRangeContext *ctx) = 0;

  virtual void enterFunctionParList(Fortran90Parser::FunctionParListContext *ctx) = 0;
  virtual void exitFunctionParList(Fortran90Parser::FunctionParListContext *ctx) = 0;

  virtual void enterFunctionPars(Fortran90Parser::FunctionParsContext *ctx) = 0;
  virtual void exitFunctionPars(Fortran90Parser::FunctionParsContext *ctx) = 0;

  virtual void enterFunctionPar(Fortran90Parser::FunctionParContext *ctx) = 0;
  virtual void exitFunctionPar(Fortran90Parser::FunctionParContext *ctx) = 0;

  virtual void enterSubprogramInterfaceBody(Fortran90Parser::SubprogramInterfaceBodyContext *ctx) = 0;
  virtual void exitSubprogramInterfaceBody(Fortran90Parser::SubprogramInterfaceBodyContext *ctx) = 0;

  virtual void enterEndFunctionStmt(Fortran90Parser::EndFunctionStmtContext *ctx) = 0;
  virtual void exitEndFunctionStmt(Fortran90Parser::EndFunctionStmtContext *ctx) = 0;

  virtual void enterDerivedTypeDef(Fortran90Parser::DerivedTypeDefContext *ctx) = 0;
  virtual void exitDerivedTypeDef(Fortran90Parser::DerivedTypeDefContext *ctx) = 0;

  virtual void enterEndTypeStmt(Fortran90Parser::EndTypeStmtContext *ctx) = 0;
  virtual void exitEndTypeStmt(Fortran90Parser::EndTypeStmtContext *ctx) = 0;

  virtual void enterDerivedTypeStmt(Fortran90Parser::DerivedTypeStmtContext *ctx) = 0;
  virtual void exitDerivedTypeStmt(Fortran90Parser::DerivedTypeStmtContext *ctx) = 0;

  virtual void enterDerivedTypeBody(Fortran90Parser::DerivedTypeBodyContext *ctx) = 0;
  virtual void exitDerivedTypeBody(Fortran90Parser::DerivedTypeBodyContext *ctx) = 0;

  virtual void enterDerivedTypeBodyConstruct(Fortran90Parser::DerivedTypeBodyConstructContext *ctx) = 0;
  virtual void exitDerivedTypeBodyConstruct(Fortran90Parser::DerivedTypeBodyConstructContext *ctx) = 0;

  virtual void enterPrivateSequenceStmt(Fortran90Parser::PrivateSequenceStmtContext *ctx) = 0;
  virtual void exitPrivateSequenceStmt(Fortran90Parser::PrivateSequenceStmtContext *ctx) = 0;

  virtual void enterComponentDefStmt(Fortran90Parser::ComponentDefStmtContext *ctx) = 0;
  virtual void exitComponentDefStmt(Fortran90Parser::ComponentDefStmtContext *ctx) = 0;

  virtual void enterComponentDeclList(Fortran90Parser::ComponentDeclListContext *ctx) = 0;
  virtual void exitComponentDeclList(Fortran90Parser::ComponentDeclListContext *ctx) = 0;

  virtual void enterComponentDecl(Fortran90Parser::ComponentDeclContext *ctx) = 0;
  virtual void exitComponentDecl(Fortran90Parser::ComponentDeclContext *ctx) = 0;

  virtual void enterComponentName(Fortran90Parser::ComponentNameContext *ctx) = 0;
  virtual void exitComponentName(Fortran90Parser::ComponentNameContext *ctx) = 0;

  virtual void enterComponentAttrSpecList(Fortran90Parser::ComponentAttrSpecListContext *ctx) = 0;
  virtual void exitComponentAttrSpecList(Fortran90Parser::ComponentAttrSpecListContext *ctx) = 0;

  virtual void enterComponentAttrSpec(Fortran90Parser::ComponentAttrSpecContext *ctx) = 0;
  virtual void exitComponentAttrSpec(Fortran90Parser::ComponentAttrSpecContext *ctx) = 0;

  virtual void enterComponentArraySpec(Fortran90Parser::ComponentArraySpecContext *ctx) = 0;
  virtual void exitComponentArraySpec(Fortran90Parser::ComponentArraySpecContext *ctx) = 0;

  virtual void enterExplicitShapeSpecList(Fortran90Parser::ExplicitShapeSpecListContext *ctx) = 0;
  virtual void exitExplicitShapeSpecList(Fortran90Parser::ExplicitShapeSpecListContext *ctx) = 0;

  virtual void enterExplicitShapeSpec(Fortran90Parser::ExplicitShapeSpecContext *ctx) = 0;
  virtual void exitExplicitShapeSpec(Fortran90Parser::ExplicitShapeSpecContext *ctx) = 0;

  virtual void enterLowerBound(Fortran90Parser::LowerBoundContext *ctx) = 0;
  virtual void exitLowerBound(Fortran90Parser::LowerBoundContext *ctx) = 0;

  virtual void enterUpperBound(Fortran90Parser::UpperBoundContext *ctx) = 0;
  virtual void exitUpperBound(Fortran90Parser::UpperBoundContext *ctx) = 0;

  virtual void enterDeferredShapeSpecList(Fortran90Parser::DeferredShapeSpecListContext *ctx) = 0;
  virtual void exitDeferredShapeSpecList(Fortran90Parser::DeferredShapeSpecListContext *ctx) = 0;

  virtual void enterDeferredShapeSpec(Fortran90Parser::DeferredShapeSpecContext *ctx) = 0;
  virtual void exitDeferredShapeSpec(Fortran90Parser::DeferredShapeSpecContext *ctx) = 0;

  virtual void enterTypeSpec(Fortran90Parser::TypeSpecContext *ctx) = 0;
  virtual void exitTypeSpec(Fortran90Parser::TypeSpecContext *ctx) = 0;

  virtual void enterKindSelector(Fortran90Parser::KindSelectorContext *ctx) = 0;
  virtual void exitKindSelector(Fortran90Parser::KindSelectorContext *ctx) = 0;

  virtual void enterTypeName(Fortran90Parser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(Fortran90Parser::TypeNameContext *ctx) = 0;

  virtual void enterCharSelector(Fortran90Parser::CharSelectorContext *ctx) = 0;
  virtual void exitCharSelector(Fortran90Parser::CharSelectorContext *ctx) = 0;

  virtual void enterLengthSelector(Fortran90Parser::LengthSelectorContext *ctx) = 0;
  virtual void exitLengthSelector(Fortran90Parser::LengthSelectorContext *ctx) = 0;

  virtual void enterCharLength(Fortran90Parser::CharLengthContext *ctx) = 0;
  virtual void exitCharLength(Fortran90Parser::CharLengthContext *ctx) = 0;

  virtual void enterConstant(Fortran90Parser::ConstantContext *ctx) = 0;
  virtual void exitConstant(Fortran90Parser::ConstantContext *ctx) = 0;

  virtual void enterBozLiteralConstant(Fortran90Parser::BozLiteralConstantContext *ctx) = 0;
  virtual void exitBozLiteralConstant(Fortran90Parser::BozLiteralConstantContext *ctx) = 0;

  virtual void enterStructureConstructor(Fortran90Parser::StructureConstructorContext *ctx) = 0;
  virtual void exitStructureConstructor(Fortran90Parser::StructureConstructorContext *ctx) = 0;

  virtual void enterExprList(Fortran90Parser::ExprListContext *ctx) = 0;
  virtual void exitExprList(Fortran90Parser::ExprListContext *ctx) = 0;

  virtual void enterNamedConstantUse(Fortran90Parser::NamedConstantUseContext *ctx) = 0;
  virtual void exitNamedConstantUse(Fortran90Parser::NamedConstantUseContext *ctx) = 0;

  virtual void enterTypeParamValue(Fortran90Parser::TypeParamValueContext *ctx) = 0;
  virtual void exitTypeParamValue(Fortran90Parser::TypeParamValueContext *ctx) = 0;

  virtual void enterModuleStmt(Fortran90Parser::ModuleStmtContext *ctx) = 0;
  virtual void exitModuleStmt(Fortran90Parser::ModuleStmtContext *ctx) = 0;

  virtual void enterModuleName(Fortran90Parser::ModuleNameContext *ctx) = 0;
  virtual void exitModuleName(Fortran90Parser::ModuleNameContext *ctx) = 0;

  virtual void enterIdent(Fortran90Parser::IdentContext *ctx) = 0;
  virtual void exitIdent(Fortran90Parser::IdentContext *ctx) = 0;

  virtual void enterComplexSubmodule(Fortran90Parser::ComplexSubmoduleContext *ctx) = 0;
  virtual void exitComplexSubmodule(Fortran90Parser::ComplexSubmoduleContext *ctx) = 0;

  virtual void enterComplexSpecPart(Fortran90Parser::ComplexSpecPartContext *ctx) = 0;
  virtual void exitComplexSpecPart(Fortran90Parser::ComplexSpecPartContext *ctx) = 0;

  virtual void enterSubmoduleStmt(Fortran90Parser::SubmoduleStmtContext *ctx) = 0;
  virtual void exitSubmoduleStmt(Fortran90Parser::SubmoduleStmtContext *ctx) = 0;

  virtual void enterSpecPartStmt(Fortran90Parser::SpecPartStmtContext *ctx) = 0;
  virtual void exitSpecPartStmt(Fortran90Parser::SpecPartStmtContext *ctx) = 0;

  virtual void enterModuleSubprogramPartConstruct(Fortran90Parser::ModuleSubprogramPartConstructContext *ctx) = 0;
  virtual void exitModuleSubprogramPartConstruct(Fortran90Parser::ModuleSubprogramPartConstructContext *ctx) = 0;

  virtual void enterContainsStmt(Fortran90Parser::ContainsStmtContext *ctx) = 0;
  virtual void exitContainsStmt(Fortran90Parser::ContainsStmtContext *ctx) = 0;

  virtual void enterModuleSubprogram(Fortran90Parser::ModuleSubprogramContext *ctx) = 0;
  virtual void exitModuleSubprogram(Fortran90Parser::ModuleSubprogramContext *ctx) = 0;

  virtual void enterFunctionSubprogram(Fortran90Parser::FunctionSubprogramContext *ctx) = 0;
  virtual void exitFunctionSubprogram(Fortran90Parser::FunctionSubprogramContext *ctx) = 0;

  virtual void enterFunctionName(Fortran90Parser::FunctionNameContext *ctx) = 0;
  virtual void exitFunctionName(Fortran90Parser::FunctionNameContext *ctx) = 0;

  virtual void enterFunctionRange(Fortran90Parser::FunctionRangeContext *ctx) = 0;
  virtual void exitFunctionRange(Fortran90Parser::FunctionRangeContext *ctx) = 0;

  virtual void enterBody(Fortran90Parser::BodyContext *ctx) = 0;
  virtual void exitBody(Fortran90Parser::BodyContext *ctx) = 0;

  virtual void enterBodyConstruct(Fortran90Parser::BodyConstructContext *ctx) = 0;
  virtual void exitBodyConstruct(Fortran90Parser::BodyConstructContext *ctx) = 0;

  virtual void enterExecutableConstruct(Fortran90Parser::ExecutableConstructContext *ctx) = 0;
  virtual void exitExecutableConstruct(Fortran90Parser::ExecutableConstructContext *ctx) = 0;

  virtual void enterWhereConstruct(Fortran90Parser::WhereConstructContext *ctx) = 0;
  virtual void exitWhereConstruct(Fortran90Parser::WhereConstructContext *ctx) = 0;

  virtual void enterElseWhere(Fortran90Parser::ElseWhereContext *ctx) = 0;
  virtual void exitElseWhere(Fortran90Parser::ElseWhereContext *ctx) = 0;

  virtual void enterElsewhereStmt(Fortran90Parser::ElsewhereStmtContext *ctx) = 0;
  virtual void exitElsewhereStmt(Fortran90Parser::ElsewhereStmtContext *ctx) = 0;

  virtual void enterEndWhereStmt(Fortran90Parser::EndWhereStmtContext *ctx) = 0;
  virtual void exitEndWhereStmt(Fortran90Parser::EndWhereStmtContext *ctx) = 0;

  virtual void enterWhere(Fortran90Parser::WhereContext *ctx) = 0;
  virtual void exitWhere(Fortran90Parser::WhereContext *ctx) = 0;

  virtual void enterWhereConstructStmt(Fortran90Parser::WhereConstructStmtContext *ctx) = 0;
  virtual void exitWhereConstructStmt(Fortran90Parser::WhereConstructStmtContext *ctx) = 0;

  virtual void enterMaskExpr(Fortran90Parser::MaskExprContext *ctx) = 0;
  virtual void exitMaskExpr(Fortran90Parser::MaskExprContext *ctx) = 0;

  virtual void enterCaseConstruct(Fortran90Parser::CaseConstructContext *ctx) = 0;
  virtual void exitCaseConstruct(Fortran90Parser::CaseConstructContext *ctx) = 0;

  virtual void enterSelectCaseRange(Fortran90Parser::SelectCaseRangeContext *ctx) = 0;
  virtual void exitSelectCaseRange(Fortran90Parser::SelectCaseRangeContext *ctx) = 0;

  virtual void enterEndSelectStmt(Fortran90Parser::EndSelectStmtContext *ctx) = 0;
  virtual void exitEndSelectStmt(Fortran90Parser::EndSelectStmtContext *ctx) = 0;

  virtual void enterSelectCaseBody(Fortran90Parser::SelectCaseBodyContext *ctx) = 0;
  virtual void exitSelectCaseBody(Fortran90Parser::SelectCaseBodyContext *ctx) = 0;

  virtual void enterCaseBodyConstruct(Fortran90Parser::CaseBodyConstructContext *ctx) = 0;
  virtual void exitCaseBodyConstruct(Fortran90Parser::CaseBodyConstructContext *ctx) = 0;

  virtual void enterCaseStmt(Fortran90Parser::CaseStmtContext *ctx) = 0;
  virtual void exitCaseStmt(Fortran90Parser::CaseStmtContext *ctx) = 0;

  virtual void enterCaseSelector(Fortran90Parser::CaseSelectorContext *ctx) = 0;
  virtual void exitCaseSelector(Fortran90Parser::CaseSelectorContext *ctx) = 0;

  virtual void enterCaseValueRangeList(Fortran90Parser::CaseValueRangeListContext *ctx) = 0;
  virtual void exitCaseValueRangeList(Fortran90Parser::CaseValueRangeListContext *ctx) = 0;

  virtual void enterLitteralExpression(Fortran90Parser::LitteralExpressionContext *ctx) = 0;
  virtual void exitLitteralExpression(Fortran90Parser::LitteralExpressionContext *ctx) = 0;

  virtual void enterAfterColonExpression(Fortran90Parser::AfterColonExpressionContext *ctx) = 0;
  virtual void exitAfterColonExpression(Fortran90Parser::AfterColonExpressionContext *ctx) = 0;

  virtual void enterBeforeColonExpression(Fortran90Parser::BeforeColonExpressionContext *ctx) = 0;
  virtual void exitBeforeColonExpression(Fortran90Parser::BeforeColonExpressionContext *ctx) = 0;

  virtual void enterMidlleColonExpression(Fortran90Parser::MidlleColonExpressionContext *ctx) = 0;
  virtual void exitMidlleColonExpression(Fortran90Parser::MidlleColonExpressionContext *ctx) = 0;

  virtual void enterIfConstruct(Fortran90Parser::IfConstructContext *ctx) = 0;
  virtual void exitIfConstruct(Fortran90Parser::IfConstructContext *ctx) = 0;

  virtual void enterIfThenStmt(Fortran90Parser::IfThenStmtContext *ctx) = 0;
  virtual void exitIfThenStmt(Fortran90Parser::IfThenStmtContext *ctx) = 0;

  virtual void enterConditionalBody(Fortran90Parser::ConditionalBodyContext *ctx) = 0;
  virtual void exitConditionalBody(Fortran90Parser::ConditionalBodyContext *ctx) = 0;

  virtual void enterElseIfConstruct(Fortran90Parser::ElseIfConstructContext *ctx) = 0;
  virtual void exitElseIfConstruct(Fortran90Parser::ElseIfConstructContext *ctx) = 0;

  virtual void enterElseIfStmt(Fortran90Parser::ElseIfStmtContext *ctx) = 0;
  virtual void exitElseIfStmt(Fortran90Parser::ElseIfStmtContext *ctx) = 0;

  virtual void enterElseConstruct(Fortran90Parser::ElseConstructContext *ctx) = 0;
  virtual void exitElseConstruct(Fortran90Parser::ElseConstructContext *ctx) = 0;

  virtual void enterElseStmt(Fortran90Parser::ElseStmtContext *ctx) = 0;
  virtual void exitElseStmt(Fortran90Parser::ElseStmtContext *ctx) = 0;

  virtual void enterEndIfStmt(Fortran90Parser::EndIfStmtContext *ctx) = 0;
  virtual void exitEndIfStmt(Fortran90Parser::EndIfStmtContext *ctx) = 0;

  virtual void enterDoConstruct(Fortran90Parser::DoConstructContext *ctx) = 0;
  virtual void exitDoConstruct(Fortran90Parser::DoConstructContext *ctx) = 0;

  virtual void enterBlockDoConstruct(Fortran90Parser::BlockDoConstructContext *ctx) = 0;
  virtual void exitBlockDoConstruct(Fortran90Parser::BlockDoConstructContext *ctx) = 0;

  virtual void enterEndDoStmt(Fortran90Parser::EndDoStmtContext *ctx) = 0;
  virtual void exitEndDoStmt(Fortran90Parser::EndDoStmtContext *ctx) = 0;

  virtual void enterEndName(Fortran90Parser::EndNameContext *ctx) = 0;
  virtual void exitEndName(Fortran90Parser::EndNameContext *ctx) = 0;

  virtual void enterNameColon(Fortran90Parser::NameColonContext *ctx) = 0;
  virtual void exitNameColon(Fortran90Parser::NameColonContext *ctx) = 0;

  virtual void enterLabelDoStmt(Fortran90Parser::LabelDoStmtContext *ctx) = 0;
  virtual void exitLabelDoStmt(Fortran90Parser::LabelDoStmtContext *ctx) = 0;

  virtual void enterDoLblRef(Fortran90Parser::DoLblRefContext *ctx) = 0;
  virtual void exitDoLblRef(Fortran90Parser::DoLblRefContext *ctx) = 0;

  virtual void enterDoLblDef(Fortran90Parser::DoLblDefContext *ctx) = 0;
  virtual void exitDoLblDef(Fortran90Parser::DoLblDefContext *ctx) = 0;

  virtual void enterDoLabelStmt(Fortran90Parser::DoLabelStmtContext *ctx) = 0;
  virtual void exitDoLabelStmt(Fortran90Parser::DoLabelStmtContext *ctx) = 0;

  virtual void enterExecutionPartConstruct(Fortran90Parser::ExecutionPartConstructContext *ctx) = 0;
  virtual void exitExecutionPartConstruct(Fortran90Parser::ExecutionPartConstructContext *ctx) = 0;

  virtual void enterDoubleDoStmt(Fortran90Parser::DoubleDoStmtContext *ctx) = 0;
  virtual void exitDoubleDoStmt(Fortran90Parser::DoubleDoStmtContext *ctx) = 0;

  virtual void enterDataStmt(Fortran90Parser::DataStmtContext *ctx) = 0;
  virtual void exitDataStmt(Fortran90Parser::DataStmtContext *ctx) = 0;

  virtual void enterDataStmtSet(Fortran90Parser::DataStmtSetContext *ctx) = 0;
  virtual void exitDataStmtSet(Fortran90Parser::DataStmtSetContext *ctx) = 0;

  virtual void enterDse1(Fortran90Parser::Dse1Context *ctx) = 0;
  virtual void exitDse1(Fortran90Parser::Dse1Context *ctx) = 0;

  virtual void enterDse2(Fortran90Parser::Dse2Context *ctx) = 0;
  virtual void exitDse2(Fortran90Parser::Dse2Context *ctx) = 0;

  virtual void enterDataStmtValue(Fortran90Parser::DataStmtValueContext *ctx) = 0;
  virtual void exitDataStmtValue(Fortran90Parser::DataStmtValueContext *ctx) = 0;

  virtual void enterDataStmtObject(Fortran90Parser::DataStmtObjectContext *ctx) = 0;
  virtual void exitDataStmtObject(Fortran90Parser::DataStmtObjectContext *ctx) = 0;

  virtual void enterVariable(Fortran90Parser::VariableContext *ctx) = 0;
  virtual void exitVariable(Fortran90Parser::VariableContext *ctx) = 0;

  virtual void enterSubscriptListRef(Fortran90Parser::SubscriptListRefContext *ctx) = 0;
  virtual void exitSubscriptListRef(Fortran90Parser::SubscriptListRefContext *ctx) = 0;

  virtual void enterSubscriptList(Fortran90Parser::SubscriptListContext *ctx) = 0;
  virtual void exitSubscriptList(Fortran90Parser::SubscriptListContext *ctx) = 0;

  virtual void enterSubscript(Fortran90Parser::SubscriptContext *ctx) = 0;
  virtual void exitSubscript(Fortran90Parser::SubscriptContext *ctx) = 0;

  virtual void enterSubstringRange(Fortran90Parser::SubstringRangeContext *ctx) = 0;
  virtual void exitSubstringRange(Fortran90Parser::SubstringRangeContext *ctx) = 0;

  virtual void enterDataImpliedDo(Fortran90Parser::DataImpliedDoContext *ctx) = 0;
  virtual void exitDataImpliedDo(Fortran90Parser::DataImpliedDoContext *ctx) = 0;

  virtual void enterDataIDoObjectList(Fortran90Parser::DataIDoObjectListContext *ctx) = 0;
  virtual void exitDataIDoObjectList(Fortran90Parser::DataIDoObjectListContext *ctx) = 0;

  virtual void enterDataIDoObject(Fortran90Parser::DataIDoObjectContext *ctx) = 0;
  virtual void exitDataIDoObject(Fortran90Parser::DataIDoObjectContext *ctx) = 0;

  virtual void enterStructureComponent(Fortran90Parser::StructureComponentContext *ctx) = 0;
  virtual void exitStructureComponent(Fortran90Parser::StructureComponentContext *ctx) = 0;

  virtual void enterFieldSelector(Fortran90Parser::FieldSelectorContext *ctx) = 0;
  virtual void exitFieldSelector(Fortran90Parser::FieldSelectorContext *ctx) = 0;

  virtual void enterArrayElement(Fortran90Parser::ArrayElementContext *ctx) = 0;
  virtual void exitArrayElement(Fortran90Parser::ArrayElementContext *ctx) = 0;

  virtual void enterImpliedDoVariable(Fortran90Parser::ImpliedDoVariableContext *ctx) = 0;
  virtual void exitImpliedDoVariable(Fortran90Parser::ImpliedDoVariableContext *ctx) = 0;

  virtual void enterCommaLoopControl(Fortran90Parser::CommaLoopControlContext *ctx) = 0;
  virtual void exitCommaLoopControl(Fortran90Parser::CommaLoopControlContext *ctx) = 0;

  virtual void enterLoopControl(Fortran90Parser::LoopControlContext *ctx) = 0;
  virtual void exitLoopControl(Fortran90Parser::LoopControlContext *ctx) = 0;

  virtual void enterVariableName(Fortran90Parser::VariableNameContext *ctx) = 0;
  virtual void exitVariableName(Fortran90Parser::VariableNameContext *ctx) = 0;

  virtual void enterCommaExpr(Fortran90Parser::CommaExprContext *ctx) = 0;
  virtual void exitCommaExpr(Fortran90Parser::CommaExprContext *ctx) = 0;

  virtual void enterSemicolonStmt(Fortran90Parser::SemicolonStmtContext *ctx) = 0;
  virtual void exitSemicolonStmt(Fortran90Parser::SemicolonStmtContext *ctx) = 0;

  virtual void enterActionStmt(Fortran90Parser::ActionStmtContext *ctx) = 0;
  virtual void exitActionStmt(Fortran90Parser::ActionStmtContext *ctx) = 0;

  virtual void enterWhereStmt(Fortran90Parser::WhereStmtContext *ctx) = 0;
  virtual void exitWhereStmt(Fortran90Parser::WhereStmtContext *ctx) = 0;

  virtual void enterPointerAssignmentStmt(Fortran90Parser::PointerAssignmentStmtContext *ctx) = 0;
  virtual void exitPointerAssignmentStmt(Fortran90Parser::PointerAssignmentStmtContext *ctx) = 0;

  virtual void enterTarget(Fortran90Parser::TargetContext *ctx) = 0;
  virtual void exitTarget(Fortran90Parser::TargetContext *ctx) = 0;

  virtual void enterNullifyStmt(Fortran90Parser::NullifyStmtContext *ctx) = 0;
  virtual void exitNullifyStmt(Fortran90Parser::NullifyStmtContext *ctx) = 0;

  virtual void enterPointerObjectList(Fortran90Parser::PointerObjectListContext *ctx) = 0;
  virtual void exitPointerObjectList(Fortran90Parser::PointerObjectListContext *ctx) = 0;

  virtual void enterPointerObject(Fortran90Parser::PointerObjectContext *ctx) = 0;
  virtual void exitPointerObject(Fortran90Parser::PointerObjectContext *ctx) = 0;

  virtual void enterPointerField(Fortran90Parser::PointerFieldContext *ctx) = 0;
  virtual void exitPointerField(Fortran90Parser::PointerFieldContext *ctx) = 0;

  virtual void enterExitStmt(Fortran90Parser::ExitStmtContext *ctx) = 0;
  virtual void exitExitStmt(Fortran90Parser::ExitStmtContext *ctx) = 0;

  virtual void enterDeallocateStmt(Fortran90Parser::DeallocateStmtContext *ctx) = 0;
  virtual void exitDeallocateStmt(Fortran90Parser::DeallocateStmtContext *ctx) = 0;

  virtual void enterAllocateObjectList(Fortran90Parser::AllocateObjectListContext *ctx) = 0;
  virtual void exitAllocateObjectList(Fortran90Parser::AllocateObjectListContext *ctx) = 0;

  virtual void enterCycleStmt(Fortran90Parser::CycleStmtContext *ctx) = 0;
  virtual void exitCycleStmt(Fortran90Parser::CycleStmtContext *ctx) = 0;

  virtual void enterAllocateStmt(Fortran90Parser::AllocateStmtContext *ctx) = 0;
  virtual void exitAllocateStmt(Fortran90Parser::AllocateStmtContext *ctx) = 0;

  virtual void enterAllocationList(Fortran90Parser::AllocationListContext *ctx) = 0;
  virtual void exitAllocationList(Fortran90Parser::AllocationListContext *ctx) = 0;

  virtual void enterAllocation(Fortran90Parser::AllocationContext *ctx) = 0;
  virtual void exitAllocation(Fortran90Parser::AllocationContext *ctx) = 0;

  virtual void enterAllocateObject(Fortran90Parser::AllocateObjectContext *ctx) = 0;
  virtual void exitAllocateObject(Fortran90Parser::AllocateObjectContext *ctx) = 0;

  virtual void enterAllocatedShape(Fortran90Parser::AllocatedShapeContext *ctx) = 0;
  virtual void exitAllocatedShape(Fortran90Parser::AllocatedShapeContext *ctx) = 0;

  virtual void enterStopStmt(Fortran90Parser::StopStmtContext *ctx) = 0;
  virtual void exitStopStmt(Fortran90Parser::StopStmtContext *ctx) = 0;

  virtual void enterWriteStmt(Fortran90Parser::WriteStmtContext *ctx) = 0;
  virtual void exitWriteStmt(Fortran90Parser::WriteStmtContext *ctx) = 0;

  virtual void enterIoControlSpecList(Fortran90Parser::IoControlSpecListContext *ctx) = 0;
  virtual void exitIoControlSpecList(Fortran90Parser::IoControlSpecListContext *ctx) = 0;

  virtual void enterStmtFunctionStmt(Fortran90Parser::StmtFunctionStmtContext *ctx) = 0;
  virtual void exitStmtFunctionStmt(Fortran90Parser::StmtFunctionStmtContext *ctx) = 0;

  virtual void enterStmtFunctionRange(Fortran90Parser::StmtFunctionRangeContext *ctx) = 0;
  virtual void exitStmtFunctionRange(Fortran90Parser::StmtFunctionRangeContext *ctx) = 0;

  virtual void enterSFDummyArgNameList(Fortran90Parser::SFDummyArgNameListContext *ctx) = 0;
  virtual void exitSFDummyArgNameList(Fortran90Parser::SFDummyArgNameListContext *ctx) = 0;

  virtual void enterSFDummyArgName(Fortran90Parser::SFDummyArgNameContext *ctx) = 0;
  virtual void exitSFDummyArgName(Fortran90Parser::SFDummyArgNameContext *ctx) = 0;

  virtual void enterReturnStmt(Fortran90Parser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(Fortran90Parser::ReturnStmtContext *ctx) = 0;

  virtual void enterRewindStmt(Fortran90Parser::RewindStmtContext *ctx) = 0;
  virtual void exitRewindStmt(Fortran90Parser::RewindStmtContext *ctx) = 0;

  virtual void enterReadStmt(Fortran90Parser::ReadStmtContext *ctx) = 0;
  virtual void exitReadStmt(Fortran90Parser::ReadStmtContext *ctx) = 0;

  virtual void enterCommaInputItemList(Fortran90Parser::CommaInputItemListContext *ctx) = 0;
  virtual void exitCommaInputItemList(Fortran90Parser::CommaInputItemListContext *ctx) = 0;

  virtual void enterRdFmtId(Fortran90Parser::RdFmtIdContext *ctx) = 0;
  virtual void exitRdFmtId(Fortran90Parser::RdFmtIdContext *ctx) = 0;

  virtual void enterRdFmtIdExpr(Fortran90Parser::RdFmtIdExprContext *ctx) = 0;
  virtual void exitRdFmtIdExpr(Fortran90Parser::RdFmtIdExprContext *ctx) = 0;

  virtual void enterInputItemList(Fortran90Parser::InputItemListContext *ctx) = 0;
  virtual void exitInputItemList(Fortran90Parser::InputItemListContext *ctx) = 0;

  virtual void enterInputItem(Fortran90Parser::InputItemContext *ctx) = 0;
  virtual void exitInputItem(Fortran90Parser::InputItemContext *ctx) = 0;

  virtual void enterInputImpliedDo(Fortran90Parser::InputImpliedDoContext *ctx) = 0;
  virtual void exitInputImpliedDo(Fortran90Parser::InputImpliedDoContext *ctx) = 0;

  virtual void enterRdCtlSpec(Fortran90Parser::RdCtlSpecContext *ctx) = 0;
  virtual void exitRdCtlSpec(Fortran90Parser::RdCtlSpecContext *ctx) = 0;

  virtual void enterRdUnitId(Fortran90Parser::RdUnitIdContext *ctx) = 0;
  virtual void exitRdUnitId(Fortran90Parser::RdUnitIdContext *ctx) = 0;

  virtual void enterRdIoCtlSpecList(Fortran90Parser::RdIoCtlSpecListContext *ctx) = 0;
  virtual void exitRdIoCtlSpecList(Fortran90Parser::RdIoCtlSpecListContext *ctx) = 0;

  virtual void enterIoControlSpec(Fortran90Parser::IoControlSpecContext *ctx) = 0;
  virtual void exitIoControlSpec(Fortran90Parser::IoControlSpecContext *ctx) = 0;

  virtual void enterPrintStmt(Fortran90Parser::PrintStmtContext *ctx) = 0;
  virtual void exitPrintStmt(Fortran90Parser::PrintStmtContext *ctx) = 0;

  virtual void enterOutputItemList(Fortran90Parser::OutputItemListContext *ctx) = 0;
  virtual void exitOutputItemList(Fortran90Parser::OutputItemListContext *ctx) = 0;

  virtual void enterOutputItemList1(Fortran90Parser::OutputItemList1Context *ctx) = 0;
  virtual void exitOutputItemList1(Fortran90Parser::OutputItemList1Context *ctx) = 0;

  virtual void enterOutputImpliedDo(Fortran90Parser::OutputImpliedDoContext *ctx) = 0;
  virtual void exitOutputImpliedDo(Fortran90Parser::OutputImpliedDoContext *ctx) = 0;

  virtual void enterFormatIdentifier(Fortran90Parser::FormatIdentifierContext *ctx) = 0;
  virtual void exitFormatIdentifier(Fortran90Parser::FormatIdentifierContext *ctx) = 0;

  virtual void enterPauseStmt(Fortran90Parser::PauseStmtContext *ctx) = 0;
  virtual void exitPauseStmt(Fortran90Parser::PauseStmtContext *ctx) = 0;

  virtual void enterOpenStmt(Fortran90Parser::OpenStmtContext *ctx) = 0;
  virtual void exitOpenStmt(Fortran90Parser::OpenStmtContext *ctx) = 0;

  virtual void enterConnectSpecList(Fortran90Parser::ConnectSpecListContext *ctx) = 0;
  virtual void exitConnectSpecList(Fortran90Parser::ConnectSpecListContext *ctx) = 0;

  virtual void enterConnectSpec(Fortran90Parser::ConnectSpecContext *ctx) = 0;
  virtual void exitConnectSpec(Fortran90Parser::ConnectSpecContext *ctx) = 0;

  virtual void enterInquireStmt(Fortran90Parser::InquireStmtContext *ctx) = 0;
  virtual void exitInquireStmt(Fortran90Parser::InquireStmtContext *ctx) = 0;

  virtual void enterInquireSpecList(Fortran90Parser::InquireSpecListContext *ctx) = 0;
  virtual void exitInquireSpecList(Fortran90Parser::InquireSpecListContext *ctx) = 0;

  virtual void enterInquireSpec(Fortran90Parser::InquireSpecContext *ctx) = 0;
  virtual void exitInquireSpec(Fortran90Parser::InquireSpecContext *ctx) = 0;

  virtual void enterAssignedGotoStmt(Fortran90Parser::AssignedGotoStmtContext *ctx) = 0;
  virtual void exitAssignedGotoStmt(Fortran90Parser::AssignedGotoStmtContext *ctx) = 0;

  virtual void enterVariableComma(Fortran90Parser::VariableCommaContext *ctx) = 0;
  virtual void exitVariableComma(Fortran90Parser::VariableCommaContext *ctx) = 0;

  virtual void enterGotoStmt(Fortran90Parser::GotoStmtContext *ctx) = 0;
  virtual void exitGotoStmt(Fortran90Parser::GotoStmtContext *ctx) = 0;

  virtual void enterComputedGotoStmt(Fortran90Parser::ComputedGotoStmtContext *ctx) = 0;
  virtual void exitComputedGotoStmt(Fortran90Parser::ComputedGotoStmtContext *ctx) = 0;

  virtual void enterLblRefList(Fortran90Parser::LblRefListContext *ctx) = 0;
  virtual void exitLblRefList(Fortran90Parser::LblRefListContext *ctx) = 0;

  virtual void enterEndfileStmt(Fortran90Parser::EndfileStmtContext *ctx) = 0;
  virtual void exitEndfileStmt(Fortran90Parser::EndfileStmtContext *ctx) = 0;

  virtual void enterContinueStmt(Fortran90Parser::ContinueStmtContext *ctx) = 0;
  virtual void exitContinueStmt(Fortran90Parser::ContinueStmtContext *ctx) = 0;

  virtual void enterCloseStmt(Fortran90Parser::CloseStmtContext *ctx) = 0;
  virtual void exitCloseStmt(Fortran90Parser::CloseStmtContext *ctx) = 0;

  virtual void enterCloseSpecList(Fortran90Parser::CloseSpecListContext *ctx) = 0;
  virtual void exitCloseSpecList(Fortran90Parser::CloseSpecListContext *ctx) = 0;

  virtual void enterCloseSpec(Fortran90Parser::CloseSpecContext *ctx) = 0;
  virtual void exitCloseSpec(Fortran90Parser::CloseSpecContext *ctx) = 0;

  virtual void enterCExpression(Fortran90Parser::CExpressionContext *ctx) = 0;
  virtual void exitCExpression(Fortran90Parser::CExpressionContext *ctx) = 0;

  virtual void enterCPrimary(Fortran90Parser::CPrimaryContext *ctx) = 0;
  virtual void exitCPrimary(Fortran90Parser::CPrimaryContext *ctx) = 0;

  virtual void enterCOperand(Fortran90Parser::COperandContext *ctx) = 0;
  virtual void exitCOperand(Fortran90Parser::COperandContext *ctx) = 0;

  virtual void enterCPrimaryConcatOp(Fortran90Parser::CPrimaryConcatOpContext *ctx) = 0;
  virtual void exitCPrimaryConcatOp(Fortran90Parser::CPrimaryConcatOpContext *ctx) = 0;

  virtual void enterCallStmt(Fortran90Parser::CallStmtContext *ctx) = 0;
  virtual void exitCallStmt(Fortran90Parser::CallStmtContext *ctx) = 0;

  virtual void enterSubroutineNameUse(Fortran90Parser::SubroutineNameUseContext *ctx) = 0;
  virtual void exitSubroutineNameUse(Fortran90Parser::SubroutineNameUseContext *ctx) = 0;

  virtual void enterSubroutineArgList(Fortran90Parser::SubroutineArgListContext *ctx) = 0;
  virtual void exitSubroutineArgList(Fortran90Parser::SubroutineArgListContext *ctx) = 0;

  virtual void enterSubroutineArg(Fortran90Parser::SubroutineArgContext *ctx) = 0;
  virtual void exitSubroutineArg(Fortran90Parser::SubroutineArgContext *ctx) = 0;

  virtual void enterArithmeticIfStmt(Fortran90Parser::ArithmeticIfStmtContext *ctx) = 0;
  virtual void exitArithmeticIfStmt(Fortran90Parser::ArithmeticIfStmtContext *ctx) = 0;

  virtual void enterLblRef(Fortran90Parser::LblRefContext *ctx) = 0;
  virtual void exitLblRef(Fortran90Parser::LblRefContext *ctx) = 0;

  virtual void enterLabel(Fortran90Parser::LabelContext *ctx) = 0;
  virtual void exitLabel(Fortran90Parser::LabelContext *ctx) = 0;

  virtual void enterAssignmentStmt(Fortran90Parser::AssignmentStmtContext *ctx) = 0;
  virtual void exitAssignmentStmt(Fortran90Parser::AssignmentStmtContext *ctx) = 0;

  virtual void enterSFExprListRef(Fortran90Parser::SFExprListRefContext *ctx) = 0;
  virtual void exitSFExprListRef(Fortran90Parser::SFExprListRefContext *ctx) = 0;

  virtual void enterSFExprList(Fortran90Parser::SFExprListContext *ctx) = 0;
  virtual void exitSFExprList(Fortran90Parser::SFExprListContext *ctx) = 0;

  virtual void enterCommaSectionSubscript(Fortran90Parser::CommaSectionSubscriptContext *ctx) = 0;
  virtual void exitCommaSectionSubscript(Fortran90Parser::CommaSectionSubscriptContext *ctx) = 0;

  virtual void enterAssignStmt(Fortran90Parser::AssignStmtContext *ctx) = 0;
  virtual void exitAssignStmt(Fortran90Parser::AssignStmtContext *ctx) = 0;

  virtual void enterBackspaceStmt(Fortran90Parser::BackspaceStmtContext *ctx) = 0;
  virtual void exitBackspaceStmt(Fortran90Parser::BackspaceStmtContext *ctx) = 0;

  virtual void enterUnitIdentifier(Fortran90Parser::UnitIdentifierContext *ctx) = 0;
  virtual void exitUnitIdentifier(Fortran90Parser::UnitIdentifierContext *ctx) = 0;

  virtual void enterPositionSpecList(Fortran90Parser::PositionSpecListContext *ctx) = 0;
  virtual void exitPositionSpecList(Fortran90Parser::PositionSpecListContext *ctx) = 0;

  virtual void enterUnitIdentifierComma(Fortran90Parser::UnitIdentifierCommaContext *ctx) = 0;
  virtual void exitUnitIdentifierComma(Fortran90Parser::UnitIdentifierCommaContext *ctx) = 0;

  virtual void enterPositionSpec(Fortran90Parser::PositionSpecContext *ctx) = 0;
  virtual void exitPositionSpec(Fortran90Parser::PositionSpecContext *ctx) = 0;

  virtual void enterScalarVariable(Fortran90Parser::ScalarVariableContext *ctx) = 0;
  virtual void exitScalarVariable(Fortran90Parser::ScalarVariableContext *ctx) = 0;

  virtual void enterUFExpr(Fortran90Parser::UFExprContext *ctx) = 0;
  virtual void exitUFExpr(Fortran90Parser::UFExprContext *ctx) = 0;

  virtual void enterUFTerm(Fortran90Parser::UFTermContext *ctx) = 0;
  virtual void exitUFTerm(Fortran90Parser::UFTermContext *ctx) = 0;

  virtual void enterUFFactor(Fortran90Parser::UFFactorContext *ctx) = 0;
  virtual void exitUFFactor(Fortran90Parser::UFFactorContext *ctx) = 0;

  virtual void enterUFPrimary(Fortran90Parser::UFPrimaryContext *ctx) = 0;
  virtual void exitUFPrimary(Fortran90Parser::UFPrimaryContext *ctx) = 0;

  virtual void enterSubroutineSubprogram(Fortran90Parser::SubroutineSubprogramContext *ctx) = 0;
  virtual void exitSubroutineSubprogram(Fortran90Parser::SubroutineSubprogramContext *ctx) = 0;

  virtual void enterSubroutineName(Fortran90Parser::SubroutineNameContext *ctx) = 0;
  virtual void exitSubroutineName(Fortran90Parser::SubroutineNameContext *ctx) = 0;

  virtual void enterSubroutineRange(Fortran90Parser::SubroutineRangeContext *ctx) = 0;
  virtual void exitSubroutineRange(Fortran90Parser::SubroutineRangeContext *ctx) = 0;

  virtual void enterIncludeStmt(Fortran90Parser::IncludeStmtContext *ctx) = 0;
  virtual void exitIncludeStmt(Fortran90Parser::IncludeStmtContext *ctx) = 0;

  virtual void enterImplicitStmt(Fortran90Parser::ImplicitStmtContext *ctx) = 0;
  virtual void exitImplicitStmt(Fortran90Parser::ImplicitStmtContext *ctx) = 0;

  virtual void enterImplicitSpecList(Fortran90Parser::ImplicitSpecListContext *ctx) = 0;
  virtual void exitImplicitSpecList(Fortran90Parser::ImplicitSpecListContext *ctx) = 0;

  virtual void enterImplicitSpec(Fortran90Parser::ImplicitSpecContext *ctx) = 0;
  virtual void exitImplicitSpec(Fortran90Parser::ImplicitSpecContext *ctx) = 0;

  virtual void enterImplicitRanges(Fortran90Parser::ImplicitRangesContext *ctx) = 0;
  virtual void exitImplicitRanges(Fortran90Parser::ImplicitRangesContext *ctx) = 0;

  virtual void enterImplicitRange(Fortran90Parser::ImplicitRangeContext *ctx) = 0;
  virtual void exitImplicitRange(Fortran90Parser::ImplicitRangeContext *ctx) = 0;

  virtual void enterExpression(Fortran90Parser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(Fortran90Parser::ExpressionContext *ctx) = 0;

  virtual void enterDefinedBinaryOp(Fortran90Parser::DefinedBinaryOpContext *ctx) = 0;
  virtual void exitDefinedBinaryOp(Fortran90Parser::DefinedBinaryOpContext *ctx) = 0;

  virtual void enterLevel5Expr(Fortran90Parser::Level5ExprContext *ctx) = 0;
  virtual void exitLevel5Expr(Fortran90Parser::Level5ExprContext *ctx) = 0;

  virtual void enterEquivOperand(Fortran90Parser::EquivOperandContext *ctx) = 0;
  virtual void exitEquivOperand(Fortran90Parser::EquivOperandContext *ctx) = 0;

  virtual void enterOrOperand(Fortran90Parser::OrOperandContext *ctx) = 0;
  virtual void exitOrOperand(Fortran90Parser::OrOperandContext *ctx) = 0;

  virtual void enterAndOperand(Fortran90Parser::AndOperandContext *ctx) = 0;
  virtual void exitAndOperand(Fortran90Parser::AndOperandContext *ctx) = 0;

  virtual void enterRelOp(Fortran90Parser::RelOpContext *ctx) = 0;
  virtual void exitRelOp(Fortran90Parser::RelOpContext *ctx) = 0;

  virtual void enterLevel4Expr(Fortran90Parser::Level4ExprContext *ctx) = 0;
  virtual void exitLevel4Expr(Fortran90Parser::Level4ExprContext *ctx) = 0;

  virtual void enterLevel3Expr(Fortran90Parser::Level3ExprContext *ctx) = 0;
  virtual void exitLevel3Expr(Fortran90Parser::Level3ExprContext *ctx) = 0;

  virtual void enterLevel2Expr(Fortran90Parser::Level2ExprContext *ctx) = 0;
  virtual void exitLevel2Expr(Fortran90Parser::Level2ExprContext *ctx) = 0;

  virtual void enterSign(Fortran90Parser::SignContext *ctx) = 0;
  virtual void exitSign(Fortran90Parser::SignContext *ctx) = 0;

  virtual void enterAddOperand(Fortran90Parser::AddOperandContext *ctx) = 0;
  virtual void exitAddOperand(Fortran90Parser::AddOperandContext *ctx) = 0;

  virtual void enterMultOperand(Fortran90Parser::MultOperandContext *ctx) = 0;
  virtual void exitMultOperand(Fortran90Parser::MultOperandContext *ctx) = 0;

  virtual void enterLevel1Expr(Fortran90Parser::Level1ExprContext *ctx) = 0;
  virtual void exitLevel1Expr(Fortran90Parser::Level1ExprContext *ctx) = 0;

  virtual void enterDefinedUnaryOp(Fortran90Parser::DefinedUnaryOpContext *ctx) = 0;
  virtual void exitDefinedUnaryOp(Fortran90Parser::DefinedUnaryOpContext *ctx) = 0;

  virtual void enterPrimary(Fortran90Parser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(Fortran90Parser::PrimaryContext *ctx) = 0;

  virtual void enterArrayConstructor(Fortran90Parser::ArrayConstructorContext *ctx) = 0;
  virtual void exitArrayConstructor(Fortran90Parser::ArrayConstructorContext *ctx) = 0;

  virtual void enterAcValueList(Fortran90Parser::AcValueListContext *ctx) = 0;
  virtual void exitAcValueList(Fortran90Parser::AcValueListContext *ctx) = 0;

  virtual void enterAcValueList1(Fortran90Parser::AcValueList1Context *ctx) = 0;
  virtual void exitAcValueList1(Fortran90Parser::AcValueList1Context *ctx) = 0;

  virtual void enterAcImpliedDo(Fortran90Parser::AcImpliedDoContext *ctx) = 0;
  virtual void exitAcImpliedDo(Fortran90Parser::AcImpliedDoContext *ctx) = 0;

  virtual void enterFunctionReference(Fortran90Parser::FunctionReferenceContext *ctx) = 0;
  virtual void exitFunctionReference(Fortran90Parser::FunctionReferenceContext *ctx) = 0;

  virtual void enterFunctionArgList(Fortran90Parser::FunctionArgListContext *ctx) = 0;
  virtual void exitFunctionArgList(Fortran90Parser::FunctionArgListContext *ctx) = 0;

  virtual void enterFunctionArg(Fortran90Parser::FunctionArgContext *ctx) = 0;
  virtual void exitFunctionArg(Fortran90Parser::FunctionArgContext *ctx) = 0;

  virtual void enterNameDataRef(Fortran90Parser::NameDataRefContext *ctx) = 0;
  virtual void exitNameDataRef(Fortran90Parser::NameDataRefContext *ctx) = 0;

  virtual void enterComplexDataRefTail(Fortran90Parser::ComplexDataRefTailContext *ctx) = 0;
  virtual void exitComplexDataRefTail(Fortran90Parser::ComplexDataRefTailContext *ctx) = 0;

  virtual void enterSectionSubscriptRef(Fortran90Parser::SectionSubscriptRefContext *ctx) = 0;
  virtual void exitSectionSubscriptRef(Fortran90Parser::SectionSubscriptRefContext *ctx) = 0;

  virtual void enterSectionSubscriptList(Fortran90Parser::SectionSubscriptListContext *ctx) = 0;
  virtual void exitSectionSubscriptList(Fortran90Parser::SectionSubscriptListContext *ctx) = 0;

  virtual void enterSectionSubscript(Fortran90Parser::SectionSubscriptContext *ctx) = 0;
  virtual void exitSectionSubscript(Fortran90Parser::SectionSubscriptContext *ctx) = 0;

  virtual void enterSubscriptTripletTail(Fortran90Parser::SubscriptTripletTailContext *ctx) = 0;
  virtual void exitSubscriptTripletTail(Fortran90Parser::SubscriptTripletTailContext *ctx) = 0;

  virtual void enterLogicalConstant(Fortran90Parser::LogicalConstantContext *ctx) = 0;
  virtual void exitLogicalConstant(Fortran90Parser::LogicalConstantContext *ctx) = 0;

  virtual void enterKindParam(Fortran90Parser::KindParamContext *ctx) = 0;
  virtual void exitKindParam(Fortran90Parser::KindParamContext *ctx) = 0;

  virtual void enterUnsignedArithmeticConstant(Fortran90Parser::UnsignedArithmeticConstantContext *ctx) = 0;
  virtual void exitUnsignedArithmeticConstant(Fortran90Parser::UnsignedArithmeticConstantContext *ctx) = 0;

  virtual void enterComplexConst(Fortran90Parser::ComplexConstContext *ctx) = 0;
  virtual void exitComplexConst(Fortran90Parser::ComplexConstContext *ctx) = 0;

  virtual void enterComplexComponent(Fortran90Parser::ComplexComponentContext *ctx) = 0;
  virtual void exitComplexComponent(Fortran90Parser::ComplexComponentContext *ctx) = 0;

  virtual void enterConstantExpr(Fortran90Parser::ConstantExprContext *ctx) = 0;
  virtual void exitConstantExpr(Fortran90Parser::ConstantExprContext *ctx) = 0;

  virtual void enterIfStmt(Fortran90Parser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(Fortran90Parser::IfStmtContext *ctx) = 0;


};

