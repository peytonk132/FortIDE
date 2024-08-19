
// Generated from Fortran90Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "Fortran90ParserListener.h"


/**
 * This class provides an empty implementation of Fortran90ParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Fortran90ParserBaseListener : public Fortran90ParserListener {
public:

  virtual void enterProgram(Fortran90Parser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(Fortran90Parser::ProgramContext * /*ctx*/) override { }

  virtual void enterExecutableProgram(Fortran90Parser::ExecutableProgramContext * /*ctx*/) override { }
  virtual void exitExecutableProgram(Fortran90Parser::ExecutableProgramContext * /*ctx*/) override { }

  virtual void enterProgramUnit(Fortran90Parser::ProgramUnitContext * /*ctx*/) override { }
  virtual void exitProgramUnit(Fortran90Parser::ProgramUnitContext * /*ctx*/) override { }

  virtual void enterMainProgram(Fortran90Parser::MainProgramContext * /*ctx*/) override { }
  virtual void exitMainProgram(Fortran90Parser::MainProgramContext * /*ctx*/) override { }

  virtual void enterProgramStmt(Fortran90Parser::ProgramStmtContext * /*ctx*/) override { }
  virtual void exitProgramStmt(Fortran90Parser::ProgramStmtContext * /*ctx*/) override { }

  virtual void enterMainRange(Fortran90Parser::MainRangeContext * /*ctx*/) override { }
  virtual void exitMainRange(Fortran90Parser::MainRangeContext * /*ctx*/) override { }

  virtual void enterBodyPlusInternals(Fortran90Parser::BodyPlusInternalsContext * /*ctx*/) override { }
  virtual void exitBodyPlusInternals(Fortran90Parser::BodyPlusInternalsContext * /*ctx*/) override { }

  virtual void enterInternalSubprogram(Fortran90Parser::InternalSubprogramContext * /*ctx*/) override { }
  virtual void exitInternalSubprogram(Fortran90Parser::InternalSubprogramContext * /*ctx*/) override { }

  virtual void enterSpecificationPartConstruct(Fortran90Parser::SpecificationPartConstructContext * /*ctx*/) override { }
  virtual void exitSpecificationPartConstruct(Fortran90Parser::SpecificationPartConstructContext * /*ctx*/) override { }

  virtual void enterUseStmt(Fortran90Parser::UseStmtContext * /*ctx*/) override { }
  virtual void exitUseStmt(Fortran90Parser::UseStmtContext * /*ctx*/) override { }

  virtual void enterOnlyList(Fortran90Parser::OnlyListContext * /*ctx*/) override { }
  virtual void exitOnlyList(Fortran90Parser::OnlyListContext * /*ctx*/) override { }

  virtual void enterOnlyStmt(Fortran90Parser::OnlyStmtContext * /*ctx*/) override { }
  virtual void exitOnlyStmt(Fortran90Parser::OnlyStmtContext * /*ctx*/) override { }

  virtual void enterRenameList(Fortran90Parser::RenameListContext * /*ctx*/) override { }
  virtual void exitRenameList(Fortran90Parser::RenameListContext * /*ctx*/) override { }

  virtual void enterRename(Fortran90Parser::RenameContext * /*ctx*/) override { }
  virtual void exitRename(Fortran90Parser::RenameContext * /*ctx*/) override { }

  virtual void enterUseName(Fortran90Parser::UseNameContext * /*ctx*/) override { }
  virtual void exitUseName(Fortran90Parser::UseNameContext * /*ctx*/) override { }

  virtual void enterParameterStmt(Fortran90Parser::ParameterStmtContext * /*ctx*/) override { }
  virtual void exitParameterStmt(Fortran90Parser::ParameterStmtContext * /*ctx*/) override { }

  virtual void enterNamedConstantDefList(Fortran90Parser::NamedConstantDefListContext * /*ctx*/) override { }
  virtual void exitNamedConstantDefList(Fortran90Parser::NamedConstantDefListContext * /*ctx*/) override { }

  virtual void enterNamedConstantDef(Fortran90Parser::NamedConstantDefContext * /*ctx*/) override { }
  virtual void exitNamedConstantDef(Fortran90Parser::NamedConstantDefContext * /*ctx*/) override { }

  virtual void enterEndProgramStmt(Fortran90Parser::EndProgramStmtContext * /*ctx*/) override { }
  virtual void exitEndProgramStmt(Fortran90Parser::EndProgramStmtContext * /*ctx*/) override { }

  virtual void enterBlockDataSubprogram(Fortran90Parser::BlockDataSubprogramContext * /*ctx*/) override { }
  virtual void exitBlockDataSubprogram(Fortran90Parser::BlockDataSubprogramContext * /*ctx*/) override { }

  virtual void enterBlockDataStmt(Fortran90Parser::BlockDataStmtContext * /*ctx*/) override { }
  virtual void exitBlockDataStmt(Fortran90Parser::BlockDataStmtContext * /*ctx*/) override { }

  virtual void enterBlockDataBody(Fortran90Parser::BlockDataBodyContext * /*ctx*/) override { }
  virtual void exitBlockDataBody(Fortran90Parser::BlockDataBodyContext * /*ctx*/) override { }

  virtual void enterBlockDataBodyConstruct(Fortran90Parser::BlockDataBodyConstructContext * /*ctx*/) override { }
  virtual void exitBlockDataBodyConstruct(Fortran90Parser::BlockDataBodyConstructContext * /*ctx*/) override { }

  virtual void enterEndBlockDataStmt(Fortran90Parser::EndBlockDataStmtContext * /*ctx*/) override { }
  virtual void exitEndBlockDataStmt(Fortran90Parser::EndBlockDataStmtContext * /*ctx*/) override { }

  virtual void enterFormatStmt(Fortran90Parser::FormatStmtContext * /*ctx*/) override { }
  virtual void exitFormatStmt(Fortran90Parser::FormatStmtContext * /*ctx*/) override { }

  virtual void enterFmtSpec(Fortran90Parser::FmtSpecContext * /*ctx*/) override { }
  virtual void exitFmtSpec(Fortran90Parser::FmtSpecContext * /*ctx*/) override { }

  virtual void enterFormatedit(Fortran90Parser::FormateditContext * /*ctx*/) override { }
  virtual void exitFormatedit(Fortran90Parser::FormateditContext * /*ctx*/) override { }

  virtual void enterEditElement(Fortran90Parser::EditElementContext * /*ctx*/) override { }
  virtual void exitEditElement(Fortran90Parser::EditElementContext * /*ctx*/) override { }

  virtual void enterMislexedFcon(Fortran90Parser::MislexedFconContext * /*ctx*/) override { }
  virtual void exitMislexedFcon(Fortran90Parser::MislexedFconContext * /*ctx*/) override { }

  virtual void enterModule(Fortran90Parser::ModuleContext * /*ctx*/) override { }
  virtual void exitModule(Fortran90Parser::ModuleContext * /*ctx*/) override { }

  virtual void enterEndModuleStmt(Fortran90Parser::EndModuleStmtContext * /*ctx*/) override { }
  virtual void exitEndModuleStmt(Fortran90Parser::EndModuleStmtContext * /*ctx*/) override { }

  virtual void enterEntryStmt(Fortran90Parser::EntryStmtContext * /*ctx*/) override { }
  virtual void exitEntryStmt(Fortran90Parser::EntryStmtContext * /*ctx*/) override { }

  virtual void enterSubroutineParList(Fortran90Parser::SubroutineParListContext * /*ctx*/) override { }
  virtual void exitSubroutineParList(Fortran90Parser::SubroutineParListContext * /*ctx*/) override { }

  virtual void enterSubroutinePars(Fortran90Parser::SubroutineParsContext * /*ctx*/) override { }
  virtual void exitSubroutinePars(Fortran90Parser::SubroutineParsContext * /*ctx*/) override { }

  virtual void enterSubroutinePar(Fortran90Parser::SubroutineParContext * /*ctx*/) override { }
  virtual void exitSubroutinePar(Fortran90Parser::SubroutineParContext * /*ctx*/) override { }

  virtual void enterDeclarationConstruct(Fortran90Parser::DeclarationConstructContext * /*ctx*/) override { }
  virtual void exitDeclarationConstruct(Fortran90Parser::DeclarationConstructContext * /*ctx*/) override { }

  virtual void enterSpecificationStmt(Fortran90Parser::SpecificationStmtContext * /*ctx*/) override { }
  virtual void exitSpecificationStmt(Fortran90Parser::SpecificationStmtContext * /*ctx*/) override { }

  virtual void enterTargetStmt(Fortran90Parser::TargetStmtContext * /*ctx*/) override { }
  virtual void exitTargetStmt(Fortran90Parser::TargetStmtContext * /*ctx*/) override { }

  virtual void enterTargetObjectList(Fortran90Parser::TargetObjectListContext * /*ctx*/) override { }
  virtual void exitTargetObjectList(Fortran90Parser::TargetObjectListContext * /*ctx*/) override { }

  virtual void enterTargetObject(Fortran90Parser::TargetObjectContext * /*ctx*/) override { }
  virtual void exitTargetObject(Fortran90Parser::TargetObjectContext * /*ctx*/) override { }

  virtual void enterPointerStmt(Fortran90Parser::PointerStmtContext * /*ctx*/) override { }
  virtual void exitPointerStmt(Fortran90Parser::PointerStmtContext * /*ctx*/) override { }

  virtual void enterPointerStmtObjectList(Fortran90Parser::PointerStmtObjectListContext * /*ctx*/) override { }
  virtual void exitPointerStmtObjectList(Fortran90Parser::PointerStmtObjectListContext * /*ctx*/) override { }

  virtual void enterPointerStmtObject(Fortran90Parser::PointerStmtObjectContext * /*ctx*/) override { }
  virtual void exitPointerStmtObject(Fortran90Parser::PointerStmtObjectContext * /*ctx*/) override { }

  virtual void enterOptionalStmt(Fortran90Parser::OptionalStmtContext * /*ctx*/) override { }
  virtual void exitOptionalStmt(Fortran90Parser::OptionalStmtContext * /*ctx*/) override { }

  virtual void enterOptionalParList(Fortran90Parser::OptionalParListContext * /*ctx*/) override { }
  virtual void exitOptionalParList(Fortran90Parser::OptionalParListContext * /*ctx*/) override { }

  virtual void enterOptionalPar(Fortran90Parser::OptionalParContext * /*ctx*/) override { }
  virtual void exitOptionalPar(Fortran90Parser::OptionalParContext * /*ctx*/) override { }

  virtual void enterNamelistStmt(Fortran90Parser::NamelistStmtContext * /*ctx*/) override { }
  virtual void exitNamelistStmt(Fortran90Parser::NamelistStmtContext * /*ctx*/) override { }

  virtual void enterNamelistGroups(Fortran90Parser::NamelistGroupsContext * /*ctx*/) override { }
  virtual void exitNamelistGroups(Fortran90Parser::NamelistGroupsContext * /*ctx*/) override { }

  virtual void enterNamelistGroupName(Fortran90Parser::NamelistGroupNameContext * /*ctx*/) override { }
  virtual void exitNamelistGroupName(Fortran90Parser::NamelistGroupNameContext * /*ctx*/) override { }

  virtual void enterNamelistGroupObject(Fortran90Parser::NamelistGroupObjectContext * /*ctx*/) override { }
  virtual void exitNamelistGroupObject(Fortran90Parser::NamelistGroupObjectContext * /*ctx*/) override { }

  virtual void enterIntentStmt(Fortran90Parser::IntentStmtContext * /*ctx*/) override { }
  virtual void exitIntentStmt(Fortran90Parser::IntentStmtContext * /*ctx*/) override { }

  virtual void enterIntentParList(Fortran90Parser::IntentParListContext * /*ctx*/) override { }
  virtual void exitIntentParList(Fortran90Parser::IntentParListContext * /*ctx*/) override { }

  virtual void enterIntentPar(Fortran90Parser::IntentParContext * /*ctx*/) override { }
  virtual void exitIntentPar(Fortran90Parser::IntentParContext * /*ctx*/) override { }

  virtual void enterDummyArgName(Fortran90Parser::DummyArgNameContext * /*ctx*/) override { }
  virtual void exitDummyArgName(Fortran90Parser::DummyArgNameContext * /*ctx*/) override { }

  virtual void enterIntentSpec(Fortran90Parser::IntentSpecContext * /*ctx*/) override { }
  virtual void exitIntentSpec(Fortran90Parser::IntentSpecContext * /*ctx*/) override { }

  virtual void enterAllocatableStmt(Fortran90Parser::AllocatableStmtContext * /*ctx*/) override { }
  virtual void exitAllocatableStmt(Fortran90Parser::AllocatableStmtContext * /*ctx*/) override { }

  virtual void enterArrayAllocationList(Fortran90Parser::ArrayAllocationListContext * /*ctx*/) override { }
  virtual void exitArrayAllocationList(Fortran90Parser::ArrayAllocationListContext * /*ctx*/) override { }

  virtual void enterArrayAllocation(Fortran90Parser::ArrayAllocationContext * /*ctx*/) override { }
  virtual void exitArrayAllocation(Fortran90Parser::ArrayAllocationContext * /*ctx*/) override { }

  virtual void enterArrayName(Fortran90Parser::ArrayNameContext * /*ctx*/) override { }
  virtual void exitArrayName(Fortran90Parser::ArrayNameContext * /*ctx*/) override { }

  virtual void enterAccessStmt(Fortran90Parser::AccessStmtContext * /*ctx*/) override { }
  virtual void exitAccessStmt(Fortran90Parser::AccessStmtContext * /*ctx*/) override { }

  virtual void enterAccessIdList(Fortran90Parser::AccessIdListContext * /*ctx*/) override { }
  virtual void exitAccessIdList(Fortran90Parser::AccessIdListContext * /*ctx*/) override { }

  virtual void enterAccessId(Fortran90Parser::AccessIdContext * /*ctx*/) override { }
  virtual void exitAccessId(Fortran90Parser::AccessIdContext * /*ctx*/) override { }

  virtual void enterGenericName(Fortran90Parser::GenericNameContext * /*ctx*/) override { }
  virtual void exitGenericName(Fortran90Parser::GenericNameContext * /*ctx*/) override { }

  virtual void enterSaveStmt(Fortran90Parser::SaveStmtContext * /*ctx*/) override { }
  virtual void exitSaveStmt(Fortran90Parser::SaveStmtContext * /*ctx*/) override { }

  virtual void enterSavedEntityList(Fortran90Parser::SavedEntityListContext * /*ctx*/) override { }
  virtual void exitSavedEntityList(Fortran90Parser::SavedEntityListContext * /*ctx*/) override { }

  virtual void enterSavedEntity(Fortran90Parser::SavedEntityContext * /*ctx*/) override { }
  virtual void exitSavedEntity(Fortran90Parser::SavedEntityContext * /*ctx*/) override { }

  virtual void enterSavedCommonBlock(Fortran90Parser::SavedCommonBlockContext * /*ctx*/) override { }
  virtual void exitSavedCommonBlock(Fortran90Parser::SavedCommonBlockContext * /*ctx*/) override { }

  virtual void enterIntrinsicStmt(Fortran90Parser::IntrinsicStmtContext * /*ctx*/) override { }
  virtual void exitIntrinsicStmt(Fortran90Parser::IntrinsicStmtContext * /*ctx*/) override { }

  virtual void enterIntrinsicList(Fortran90Parser::IntrinsicListContext * /*ctx*/) override { }
  virtual void exitIntrinsicList(Fortran90Parser::IntrinsicListContext * /*ctx*/) override { }

  virtual void enterIntrinsicProcedureName(Fortran90Parser::IntrinsicProcedureNameContext * /*ctx*/) override { }
  virtual void exitIntrinsicProcedureName(Fortran90Parser::IntrinsicProcedureNameContext * /*ctx*/) override { }

  virtual void enterExternalStmt(Fortran90Parser::ExternalStmtContext * /*ctx*/) override { }
  virtual void exitExternalStmt(Fortran90Parser::ExternalStmtContext * /*ctx*/) override { }

  virtual void enterExternalNameList(Fortran90Parser::ExternalNameListContext * /*ctx*/) override { }
  virtual void exitExternalNameList(Fortran90Parser::ExternalNameListContext * /*ctx*/) override { }

  virtual void enterExternalName(Fortran90Parser::ExternalNameContext * /*ctx*/) override { }
  virtual void exitExternalName(Fortran90Parser::ExternalNameContext * /*ctx*/) override { }

  virtual void enterEquivalenceStmt(Fortran90Parser::EquivalenceStmtContext * /*ctx*/) override { }
  virtual void exitEquivalenceStmt(Fortran90Parser::EquivalenceStmtContext * /*ctx*/) override { }

  virtual void enterEquivalenceSetList(Fortran90Parser::EquivalenceSetListContext * /*ctx*/) override { }
  virtual void exitEquivalenceSetList(Fortran90Parser::EquivalenceSetListContext * /*ctx*/) override { }

  virtual void enterEquivalenceSet(Fortran90Parser::EquivalenceSetContext * /*ctx*/) override { }
  virtual void exitEquivalenceSet(Fortran90Parser::EquivalenceSetContext * /*ctx*/) override { }

  virtual void enterEquivalenceObject(Fortran90Parser::EquivalenceObjectContext * /*ctx*/) override { }
  virtual void exitEquivalenceObject(Fortran90Parser::EquivalenceObjectContext * /*ctx*/) override { }

  virtual void enterEquivalenceObjectList(Fortran90Parser::EquivalenceObjectListContext * /*ctx*/) override { }
  virtual void exitEquivalenceObjectList(Fortran90Parser::EquivalenceObjectListContext * /*ctx*/) override { }

  virtual void enterDimensionStmt(Fortran90Parser::DimensionStmtContext * /*ctx*/) override { }
  virtual void exitDimensionStmt(Fortran90Parser::DimensionStmtContext * /*ctx*/) override { }

  virtual void enterArrayDeclaratorList(Fortran90Parser::ArrayDeclaratorListContext * /*ctx*/) override { }
  virtual void exitArrayDeclaratorList(Fortran90Parser::ArrayDeclaratorListContext * /*ctx*/) override { }

  virtual void enterCommonStmt(Fortran90Parser::CommonStmtContext * /*ctx*/) override { }
  virtual void exitCommonStmt(Fortran90Parser::CommonStmtContext * /*ctx*/) override { }

  virtual void enterComlist(Fortran90Parser::ComlistContext * /*ctx*/) override { }
  virtual void exitComlist(Fortran90Parser::ComlistContext * /*ctx*/) override { }

  virtual void enterCommonBlockObject(Fortran90Parser::CommonBlockObjectContext * /*ctx*/) override { }
  virtual void exitCommonBlockObject(Fortran90Parser::CommonBlockObjectContext * /*ctx*/) override { }

  virtual void enterArrayDeclarator(Fortran90Parser::ArrayDeclaratorContext * /*ctx*/) override { }
  virtual void exitArrayDeclarator(Fortran90Parser::ArrayDeclaratorContext * /*ctx*/) override { }

  virtual void enterComblock(Fortran90Parser::ComblockContext * /*ctx*/) override { }
  virtual void exitComblock(Fortran90Parser::ComblockContext * /*ctx*/) override { }

  virtual void enterCommonBlockName(Fortran90Parser::CommonBlockNameContext * /*ctx*/) override { }
  virtual void exitCommonBlockName(Fortran90Parser::CommonBlockNameContext * /*ctx*/) override { }

  virtual void enterTypeDeclarationStmt(Fortran90Parser::TypeDeclarationStmtContext * /*ctx*/) override { }
  virtual void exitTypeDeclarationStmt(Fortran90Parser::TypeDeclarationStmtContext * /*ctx*/) override { }

  virtual void enterAttrSpecSeq(Fortran90Parser::AttrSpecSeqContext * /*ctx*/) override { }
  virtual void exitAttrSpecSeq(Fortran90Parser::AttrSpecSeqContext * /*ctx*/) override { }

  virtual void enterAttrSpec(Fortran90Parser::AttrSpecContext * /*ctx*/) override { }
  virtual void exitAttrSpec(Fortran90Parser::AttrSpecContext * /*ctx*/) override { }

  virtual void enterEntityDeclList(Fortran90Parser::EntityDeclListContext * /*ctx*/) override { }
  virtual void exitEntityDeclList(Fortran90Parser::EntityDeclListContext * /*ctx*/) override { }

  virtual void enterEntityDecl(Fortran90Parser::EntityDeclContext * /*ctx*/) override { }
  virtual void exitEntityDecl(Fortran90Parser::EntityDeclContext * /*ctx*/) override { }

  virtual void enterObjectName(Fortran90Parser::ObjectNameContext * /*ctx*/) override { }
  virtual void exitObjectName(Fortran90Parser::ObjectNameContext * /*ctx*/) override { }

  virtual void enterName(Fortran90Parser::NameContext * /*ctx*/) override { }
  virtual void exitName(Fortran90Parser::NameContext * /*ctx*/) override { }

  virtual void enterArraySpec(Fortran90Parser::ArraySpecContext * /*ctx*/) override { }
  virtual void exitArraySpec(Fortran90Parser::ArraySpecContext * /*ctx*/) override { }

  virtual void enterAssumedShapeSpecList(Fortran90Parser::AssumedShapeSpecListContext * /*ctx*/) override { }
  virtual void exitAssumedShapeSpecList(Fortran90Parser::AssumedShapeSpecListContext * /*ctx*/) override { }

  virtual void enterAssumedShapeSpec(Fortran90Parser::AssumedShapeSpecContext * /*ctx*/) override { }
  virtual void exitAssumedShapeSpec(Fortran90Parser::AssumedShapeSpecContext * /*ctx*/) override { }

  virtual void enterAssumedSizeSpec(Fortran90Parser::AssumedSizeSpecContext * /*ctx*/) override { }
  virtual void exitAssumedSizeSpec(Fortran90Parser::AssumedSizeSpecContext * /*ctx*/) override { }

  virtual void enterInterfaceBlock(Fortran90Parser::InterfaceBlockContext * /*ctx*/) override { }
  virtual void exitInterfaceBlock(Fortran90Parser::InterfaceBlockContext * /*ctx*/) override { }

  virtual void enterEndInterfaceStmt(Fortran90Parser::EndInterfaceStmtContext * /*ctx*/) override { }
  virtual void exitEndInterfaceStmt(Fortran90Parser::EndInterfaceStmtContext * /*ctx*/) override { }

  virtual void enterInterfaceStmt(Fortran90Parser::InterfaceStmtContext * /*ctx*/) override { }
  virtual void exitInterfaceStmt(Fortran90Parser::InterfaceStmtContext * /*ctx*/) override { }

  virtual void enterGenericSpec(Fortran90Parser::GenericSpecContext * /*ctx*/) override { }
  virtual void exitGenericSpec(Fortran90Parser::GenericSpecContext * /*ctx*/) override { }

  virtual void enterDefinedOperator(Fortran90Parser::DefinedOperatorContext * /*ctx*/) override { }
  virtual void exitDefinedOperator(Fortran90Parser::DefinedOperatorContext * /*ctx*/) override { }

  virtual void enterInterfaceBlockBody(Fortran90Parser::InterfaceBlockBodyContext * /*ctx*/) override { }
  virtual void exitInterfaceBlockBody(Fortran90Parser::InterfaceBlockBodyContext * /*ctx*/) override { }

  virtual void enterInterfaceBodyPartConstruct(Fortran90Parser::InterfaceBodyPartConstructContext * /*ctx*/) override { }
  virtual void exitInterfaceBodyPartConstruct(Fortran90Parser::InterfaceBodyPartConstructContext * /*ctx*/) override { }

  virtual void enterModuleProcedureStmt(Fortran90Parser::ModuleProcedureStmtContext * /*ctx*/) override { }
  virtual void exitModuleProcedureStmt(Fortran90Parser::ModuleProcedureStmtContext * /*ctx*/) override { }

  virtual void enterProcedureNameList(Fortran90Parser::ProcedureNameListContext * /*ctx*/) override { }
  virtual void exitProcedureNameList(Fortran90Parser::ProcedureNameListContext * /*ctx*/) override { }

  virtual void enterProcedureName(Fortran90Parser::ProcedureNameContext * /*ctx*/) override { }
  virtual void exitProcedureName(Fortran90Parser::ProcedureNameContext * /*ctx*/) override { }

  virtual void enterInterfaceBody(Fortran90Parser::InterfaceBodyContext * /*ctx*/) override { }
  virtual void exitInterfaceBody(Fortran90Parser::InterfaceBodyContext * /*ctx*/) override { }

  virtual void enterSubroutineInterfaceRange(Fortran90Parser::SubroutineInterfaceRangeContext * /*ctx*/) override { }
  virtual void exitSubroutineInterfaceRange(Fortran90Parser::SubroutineInterfaceRangeContext * /*ctx*/) override { }

  virtual void enterEndSubroutineStmt(Fortran90Parser::EndSubroutineStmtContext * /*ctx*/) override { }
  virtual void exitEndSubroutineStmt(Fortran90Parser::EndSubroutineStmtContext * /*ctx*/) override { }

  virtual void enterRecursive(Fortran90Parser::RecursiveContext * /*ctx*/) override { }
  virtual void exitRecursive(Fortran90Parser::RecursiveContext * /*ctx*/) override { }

  virtual void enterFunctionPrefixRec(Fortran90Parser::FunctionPrefixRecContext * /*ctx*/) override { }
  virtual void exitFunctionPrefixRec(Fortran90Parser::FunctionPrefixRecContext * /*ctx*/) override { }

  virtual void enterFunctionPrefixTyp(Fortran90Parser::FunctionPrefixTypContext * /*ctx*/) override { }
  virtual void exitFunctionPrefixTyp(Fortran90Parser::FunctionPrefixTypContext * /*ctx*/) override { }

  virtual void enterFunctionInterfaceRange(Fortran90Parser::FunctionInterfaceRangeContext * /*ctx*/) override { }
  virtual void exitFunctionInterfaceRange(Fortran90Parser::FunctionInterfaceRangeContext * /*ctx*/) override { }

  virtual void enterFunctionParList(Fortran90Parser::FunctionParListContext * /*ctx*/) override { }
  virtual void exitFunctionParList(Fortran90Parser::FunctionParListContext * /*ctx*/) override { }

  virtual void enterFunctionPars(Fortran90Parser::FunctionParsContext * /*ctx*/) override { }
  virtual void exitFunctionPars(Fortran90Parser::FunctionParsContext * /*ctx*/) override { }

  virtual void enterFunctionPar(Fortran90Parser::FunctionParContext * /*ctx*/) override { }
  virtual void exitFunctionPar(Fortran90Parser::FunctionParContext * /*ctx*/) override { }

  virtual void enterSubprogramInterfaceBody(Fortran90Parser::SubprogramInterfaceBodyContext * /*ctx*/) override { }
  virtual void exitSubprogramInterfaceBody(Fortran90Parser::SubprogramInterfaceBodyContext * /*ctx*/) override { }

  virtual void enterEndFunctionStmt(Fortran90Parser::EndFunctionStmtContext * /*ctx*/) override { }
  virtual void exitEndFunctionStmt(Fortran90Parser::EndFunctionStmtContext * /*ctx*/) override { }

  virtual void enterDerivedTypeDef(Fortran90Parser::DerivedTypeDefContext * /*ctx*/) override { }
  virtual void exitDerivedTypeDef(Fortran90Parser::DerivedTypeDefContext * /*ctx*/) override { }

  virtual void enterEndTypeStmt(Fortran90Parser::EndTypeStmtContext * /*ctx*/) override { }
  virtual void exitEndTypeStmt(Fortran90Parser::EndTypeStmtContext * /*ctx*/) override { }

  virtual void enterDerivedTypeStmt(Fortran90Parser::DerivedTypeStmtContext * /*ctx*/) override { }
  virtual void exitDerivedTypeStmt(Fortran90Parser::DerivedTypeStmtContext * /*ctx*/) override { }

  virtual void enterDerivedTypeBody(Fortran90Parser::DerivedTypeBodyContext * /*ctx*/) override { }
  virtual void exitDerivedTypeBody(Fortran90Parser::DerivedTypeBodyContext * /*ctx*/) override { }

  virtual void enterDerivedTypeBodyConstruct(Fortran90Parser::DerivedTypeBodyConstructContext * /*ctx*/) override { }
  virtual void exitDerivedTypeBodyConstruct(Fortran90Parser::DerivedTypeBodyConstructContext * /*ctx*/) override { }

  virtual void enterPrivateSequenceStmt(Fortran90Parser::PrivateSequenceStmtContext * /*ctx*/) override { }
  virtual void exitPrivateSequenceStmt(Fortran90Parser::PrivateSequenceStmtContext * /*ctx*/) override { }

  virtual void enterComponentDefStmt(Fortran90Parser::ComponentDefStmtContext * /*ctx*/) override { }
  virtual void exitComponentDefStmt(Fortran90Parser::ComponentDefStmtContext * /*ctx*/) override { }

  virtual void enterComponentDeclList(Fortran90Parser::ComponentDeclListContext * /*ctx*/) override { }
  virtual void exitComponentDeclList(Fortran90Parser::ComponentDeclListContext * /*ctx*/) override { }

  virtual void enterComponentDecl(Fortran90Parser::ComponentDeclContext * /*ctx*/) override { }
  virtual void exitComponentDecl(Fortran90Parser::ComponentDeclContext * /*ctx*/) override { }

  virtual void enterComponentName(Fortran90Parser::ComponentNameContext * /*ctx*/) override { }
  virtual void exitComponentName(Fortran90Parser::ComponentNameContext * /*ctx*/) override { }

  virtual void enterComponentAttrSpecList(Fortran90Parser::ComponentAttrSpecListContext * /*ctx*/) override { }
  virtual void exitComponentAttrSpecList(Fortran90Parser::ComponentAttrSpecListContext * /*ctx*/) override { }

  virtual void enterComponentAttrSpec(Fortran90Parser::ComponentAttrSpecContext * /*ctx*/) override { }
  virtual void exitComponentAttrSpec(Fortran90Parser::ComponentAttrSpecContext * /*ctx*/) override { }

  virtual void enterComponentArraySpec(Fortran90Parser::ComponentArraySpecContext * /*ctx*/) override { }
  virtual void exitComponentArraySpec(Fortran90Parser::ComponentArraySpecContext * /*ctx*/) override { }

  virtual void enterExplicitShapeSpecList(Fortran90Parser::ExplicitShapeSpecListContext * /*ctx*/) override { }
  virtual void exitExplicitShapeSpecList(Fortran90Parser::ExplicitShapeSpecListContext * /*ctx*/) override { }

  virtual void enterExplicitShapeSpec(Fortran90Parser::ExplicitShapeSpecContext * /*ctx*/) override { }
  virtual void exitExplicitShapeSpec(Fortran90Parser::ExplicitShapeSpecContext * /*ctx*/) override { }

  virtual void enterLowerBound(Fortran90Parser::LowerBoundContext * /*ctx*/) override { }
  virtual void exitLowerBound(Fortran90Parser::LowerBoundContext * /*ctx*/) override { }

  virtual void enterUpperBound(Fortran90Parser::UpperBoundContext * /*ctx*/) override { }
  virtual void exitUpperBound(Fortran90Parser::UpperBoundContext * /*ctx*/) override { }

  virtual void enterDeferredShapeSpecList(Fortran90Parser::DeferredShapeSpecListContext * /*ctx*/) override { }
  virtual void exitDeferredShapeSpecList(Fortran90Parser::DeferredShapeSpecListContext * /*ctx*/) override { }

  virtual void enterDeferredShapeSpec(Fortran90Parser::DeferredShapeSpecContext * /*ctx*/) override { }
  virtual void exitDeferredShapeSpec(Fortran90Parser::DeferredShapeSpecContext * /*ctx*/) override { }

  virtual void enterTypeSpec(Fortran90Parser::TypeSpecContext * /*ctx*/) override { }
  virtual void exitTypeSpec(Fortran90Parser::TypeSpecContext * /*ctx*/) override { }

  virtual void enterKindSelector(Fortran90Parser::KindSelectorContext * /*ctx*/) override { }
  virtual void exitKindSelector(Fortran90Parser::KindSelectorContext * /*ctx*/) override { }

  virtual void enterTypeName(Fortran90Parser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(Fortran90Parser::TypeNameContext * /*ctx*/) override { }

  virtual void enterCharSelector(Fortran90Parser::CharSelectorContext * /*ctx*/) override { }
  virtual void exitCharSelector(Fortran90Parser::CharSelectorContext * /*ctx*/) override { }

  virtual void enterLengthSelector(Fortran90Parser::LengthSelectorContext * /*ctx*/) override { }
  virtual void exitLengthSelector(Fortran90Parser::LengthSelectorContext * /*ctx*/) override { }

  virtual void enterCharLength(Fortran90Parser::CharLengthContext * /*ctx*/) override { }
  virtual void exitCharLength(Fortran90Parser::CharLengthContext * /*ctx*/) override { }

  virtual void enterConstant(Fortran90Parser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(Fortran90Parser::ConstantContext * /*ctx*/) override { }

  virtual void enterBozLiteralConstant(Fortran90Parser::BozLiteralConstantContext * /*ctx*/) override { }
  virtual void exitBozLiteralConstant(Fortran90Parser::BozLiteralConstantContext * /*ctx*/) override { }

  virtual void enterStructureConstructor(Fortran90Parser::StructureConstructorContext * /*ctx*/) override { }
  virtual void exitStructureConstructor(Fortran90Parser::StructureConstructorContext * /*ctx*/) override { }

  virtual void enterExprList(Fortran90Parser::ExprListContext * /*ctx*/) override { }
  virtual void exitExprList(Fortran90Parser::ExprListContext * /*ctx*/) override { }

  virtual void enterNamedConstantUse(Fortran90Parser::NamedConstantUseContext * /*ctx*/) override { }
  virtual void exitNamedConstantUse(Fortran90Parser::NamedConstantUseContext * /*ctx*/) override { }

  virtual void enterTypeParamValue(Fortran90Parser::TypeParamValueContext * /*ctx*/) override { }
  virtual void exitTypeParamValue(Fortran90Parser::TypeParamValueContext * /*ctx*/) override { }

  virtual void enterModuleStmt(Fortran90Parser::ModuleStmtContext * /*ctx*/) override { }
  virtual void exitModuleStmt(Fortran90Parser::ModuleStmtContext * /*ctx*/) override { }

  virtual void enterModuleName(Fortran90Parser::ModuleNameContext * /*ctx*/) override { }
  virtual void exitModuleName(Fortran90Parser::ModuleNameContext * /*ctx*/) override { }

  virtual void enterIdent(Fortran90Parser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(Fortran90Parser::IdentContext * /*ctx*/) override { }

  virtual void enterComplexSubmodule(Fortran90Parser::ComplexSubmoduleContext * /*ctx*/) override { }
  virtual void exitComplexSubmodule(Fortran90Parser::ComplexSubmoduleContext * /*ctx*/) override { }

  virtual void enterComplexSpecPart(Fortran90Parser::ComplexSpecPartContext * /*ctx*/) override { }
  virtual void exitComplexSpecPart(Fortran90Parser::ComplexSpecPartContext * /*ctx*/) override { }

  virtual void enterSubmoduleStmt(Fortran90Parser::SubmoduleStmtContext * /*ctx*/) override { }
  virtual void exitSubmoduleStmt(Fortran90Parser::SubmoduleStmtContext * /*ctx*/) override { }

  virtual void enterSpecPartStmt(Fortran90Parser::SpecPartStmtContext * /*ctx*/) override { }
  virtual void exitSpecPartStmt(Fortran90Parser::SpecPartStmtContext * /*ctx*/) override { }

  virtual void enterModuleSubprogramPartConstruct(Fortran90Parser::ModuleSubprogramPartConstructContext * /*ctx*/) override { }
  virtual void exitModuleSubprogramPartConstruct(Fortran90Parser::ModuleSubprogramPartConstructContext * /*ctx*/) override { }

  virtual void enterContainsStmt(Fortran90Parser::ContainsStmtContext * /*ctx*/) override { }
  virtual void exitContainsStmt(Fortran90Parser::ContainsStmtContext * /*ctx*/) override { }

  virtual void enterModuleSubprogram(Fortran90Parser::ModuleSubprogramContext * /*ctx*/) override { }
  virtual void exitModuleSubprogram(Fortran90Parser::ModuleSubprogramContext * /*ctx*/) override { }

  virtual void enterFunctionSubprogram(Fortran90Parser::FunctionSubprogramContext * /*ctx*/) override { }
  virtual void exitFunctionSubprogram(Fortran90Parser::FunctionSubprogramContext * /*ctx*/) override { }

  virtual void enterFunctionName(Fortran90Parser::FunctionNameContext * /*ctx*/) override { }
  virtual void exitFunctionName(Fortran90Parser::FunctionNameContext * /*ctx*/) override { }

  virtual void enterFunctionRange(Fortran90Parser::FunctionRangeContext * /*ctx*/) override { }
  virtual void exitFunctionRange(Fortran90Parser::FunctionRangeContext * /*ctx*/) override { }

  virtual void enterBody(Fortran90Parser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(Fortran90Parser::BodyContext * /*ctx*/) override { }

  virtual void enterBodyConstruct(Fortran90Parser::BodyConstructContext * /*ctx*/) override { }
  virtual void exitBodyConstruct(Fortran90Parser::BodyConstructContext * /*ctx*/) override { }

  virtual void enterExecutableConstruct(Fortran90Parser::ExecutableConstructContext * /*ctx*/) override { }
  virtual void exitExecutableConstruct(Fortran90Parser::ExecutableConstructContext * /*ctx*/) override { }

  virtual void enterWhereConstruct(Fortran90Parser::WhereConstructContext * /*ctx*/) override { }
  virtual void exitWhereConstruct(Fortran90Parser::WhereConstructContext * /*ctx*/) override { }

  virtual void enterElseWhere(Fortran90Parser::ElseWhereContext * /*ctx*/) override { }
  virtual void exitElseWhere(Fortran90Parser::ElseWhereContext * /*ctx*/) override { }

  virtual void enterElsewhereStmt(Fortran90Parser::ElsewhereStmtContext * /*ctx*/) override { }
  virtual void exitElsewhereStmt(Fortran90Parser::ElsewhereStmtContext * /*ctx*/) override { }

  virtual void enterEndWhereStmt(Fortran90Parser::EndWhereStmtContext * /*ctx*/) override { }
  virtual void exitEndWhereStmt(Fortran90Parser::EndWhereStmtContext * /*ctx*/) override { }

  virtual void enterWhere(Fortran90Parser::WhereContext * /*ctx*/) override { }
  virtual void exitWhere(Fortran90Parser::WhereContext * /*ctx*/) override { }

  virtual void enterWhereConstructStmt(Fortran90Parser::WhereConstructStmtContext * /*ctx*/) override { }
  virtual void exitWhereConstructStmt(Fortran90Parser::WhereConstructStmtContext * /*ctx*/) override { }

  virtual void enterMaskExpr(Fortran90Parser::MaskExprContext * /*ctx*/) override { }
  virtual void exitMaskExpr(Fortran90Parser::MaskExprContext * /*ctx*/) override { }

  virtual void enterCaseConstruct(Fortran90Parser::CaseConstructContext * /*ctx*/) override { }
  virtual void exitCaseConstruct(Fortran90Parser::CaseConstructContext * /*ctx*/) override { }

  virtual void enterSelectCaseRange(Fortran90Parser::SelectCaseRangeContext * /*ctx*/) override { }
  virtual void exitSelectCaseRange(Fortran90Parser::SelectCaseRangeContext * /*ctx*/) override { }

  virtual void enterEndSelectStmt(Fortran90Parser::EndSelectStmtContext * /*ctx*/) override { }
  virtual void exitEndSelectStmt(Fortran90Parser::EndSelectStmtContext * /*ctx*/) override { }

  virtual void enterSelectCaseBody(Fortran90Parser::SelectCaseBodyContext * /*ctx*/) override { }
  virtual void exitSelectCaseBody(Fortran90Parser::SelectCaseBodyContext * /*ctx*/) override { }

  virtual void enterCaseBodyConstruct(Fortran90Parser::CaseBodyConstructContext * /*ctx*/) override { }
  virtual void exitCaseBodyConstruct(Fortran90Parser::CaseBodyConstructContext * /*ctx*/) override { }

  virtual void enterCaseStmt(Fortran90Parser::CaseStmtContext * /*ctx*/) override { }
  virtual void exitCaseStmt(Fortran90Parser::CaseStmtContext * /*ctx*/) override { }

  virtual void enterCaseSelector(Fortran90Parser::CaseSelectorContext * /*ctx*/) override { }
  virtual void exitCaseSelector(Fortran90Parser::CaseSelectorContext * /*ctx*/) override { }

  virtual void enterCaseValueRangeList(Fortran90Parser::CaseValueRangeListContext * /*ctx*/) override { }
  virtual void exitCaseValueRangeList(Fortran90Parser::CaseValueRangeListContext * /*ctx*/) override { }

  virtual void enterLitteralExpression(Fortran90Parser::LitteralExpressionContext * /*ctx*/) override { }
  virtual void exitLitteralExpression(Fortran90Parser::LitteralExpressionContext * /*ctx*/) override { }

  virtual void enterAfterColonExpression(Fortran90Parser::AfterColonExpressionContext * /*ctx*/) override { }
  virtual void exitAfterColonExpression(Fortran90Parser::AfterColonExpressionContext * /*ctx*/) override { }

  virtual void enterBeforeColonExpression(Fortran90Parser::BeforeColonExpressionContext * /*ctx*/) override { }
  virtual void exitBeforeColonExpression(Fortran90Parser::BeforeColonExpressionContext * /*ctx*/) override { }

  virtual void enterMidlleColonExpression(Fortran90Parser::MidlleColonExpressionContext * /*ctx*/) override { }
  virtual void exitMidlleColonExpression(Fortran90Parser::MidlleColonExpressionContext * /*ctx*/) override { }

  virtual void enterIfConstruct(Fortran90Parser::IfConstructContext * /*ctx*/) override { }
  virtual void exitIfConstruct(Fortran90Parser::IfConstructContext * /*ctx*/) override { }

  virtual void enterIfThenStmt(Fortran90Parser::IfThenStmtContext * /*ctx*/) override { }
  virtual void exitIfThenStmt(Fortran90Parser::IfThenStmtContext * /*ctx*/) override { }

  virtual void enterConditionalBody(Fortran90Parser::ConditionalBodyContext * /*ctx*/) override { }
  virtual void exitConditionalBody(Fortran90Parser::ConditionalBodyContext * /*ctx*/) override { }

  virtual void enterElseIfConstruct(Fortran90Parser::ElseIfConstructContext * /*ctx*/) override { }
  virtual void exitElseIfConstruct(Fortran90Parser::ElseIfConstructContext * /*ctx*/) override { }

  virtual void enterElseIfStmt(Fortran90Parser::ElseIfStmtContext * /*ctx*/) override { }
  virtual void exitElseIfStmt(Fortran90Parser::ElseIfStmtContext * /*ctx*/) override { }

  virtual void enterElseConstruct(Fortran90Parser::ElseConstructContext * /*ctx*/) override { }
  virtual void exitElseConstruct(Fortran90Parser::ElseConstructContext * /*ctx*/) override { }

  virtual void enterElseStmt(Fortran90Parser::ElseStmtContext * /*ctx*/) override { }
  virtual void exitElseStmt(Fortran90Parser::ElseStmtContext * /*ctx*/) override { }

  virtual void enterEndIfStmt(Fortran90Parser::EndIfStmtContext * /*ctx*/) override { }
  virtual void exitEndIfStmt(Fortran90Parser::EndIfStmtContext * /*ctx*/) override { }

  virtual void enterDoConstruct(Fortran90Parser::DoConstructContext * /*ctx*/) override { }
  virtual void exitDoConstruct(Fortran90Parser::DoConstructContext * /*ctx*/) override { }

  virtual void enterBlockDoConstruct(Fortran90Parser::BlockDoConstructContext * /*ctx*/) override { }
  virtual void exitBlockDoConstruct(Fortran90Parser::BlockDoConstructContext * /*ctx*/) override { }

  virtual void enterEndDoStmt(Fortran90Parser::EndDoStmtContext * /*ctx*/) override { }
  virtual void exitEndDoStmt(Fortran90Parser::EndDoStmtContext * /*ctx*/) override { }

  virtual void enterEndName(Fortran90Parser::EndNameContext * /*ctx*/) override { }
  virtual void exitEndName(Fortran90Parser::EndNameContext * /*ctx*/) override { }

  virtual void enterNameColon(Fortran90Parser::NameColonContext * /*ctx*/) override { }
  virtual void exitNameColon(Fortran90Parser::NameColonContext * /*ctx*/) override { }

  virtual void enterLabelDoStmt(Fortran90Parser::LabelDoStmtContext * /*ctx*/) override { }
  virtual void exitLabelDoStmt(Fortran90Parser::LabelDoStmtContext * /*ctx*/) override { }

  virtual void enterDoLblRef(Fortran90Parser::DoLblRefContext * /*ctx*/) override { }
  virtual void exitDoLblRef(Fortran90Parser::DoLblRefContext * /*ctx*/) override { }

  virtual void enterDoLblDef(Fortran90Parser::DoLblDefContext * /*ctx*/) override { }
  virtual void exitDoLblDef(Fortran90Parser::DoLblDefContext * /*ctx*/) override { }

  virtual void enterDoLabelStmt(Fortran90Parser::DoLabelStmtContext * /*ctx*/) override { }
  virtual void exitDoLabelStmt(Fortran90Parser::DoLabelStmtContext * /*ctx*/) override { }

  virtual void enterExecutionPartConstruct(Fortran90Parser::ExecutionPartConstructContext * /*ctx*/) override { }
  virtual void exitExecutionPartConstruct(Fortran90Parser::ExecutionPartConstructContext * /*ctx*/) override { }

  virtual void enterDoubleDoStmt(Fortran90Parser::DoubleDoStmtContext * /*ctx*/) override { }
  virtual void exitDoubleDoStmt(Fortran90Parser::DoubleDoStmtContext * /*ctx*/) override { }

  virtual void enterDataStmt(Fortran90Parser::DataStmtContext * /*ctx*/) override { }
  virtual void exitDataStmt(Fortran90Parser::DataStmtContext * /*ctx*/) override { }

  virtual void enterDataStmtSet(Fortran90Parser::DataStmtSetContext * /*ctx*/) override { }
  virtual void exitDataStmtSet(Fortran90Parser::DataStmtSetContext * /*ctx*/) override { }

  virtual void enterDse1(Fortran90Parser::Dse1Context * /*ctx*/) override { }
  virtual void exitDse1(Fortran90Parser::Dse1Context * /*ctx*/) override { }

  virtual void enterDse2(Fortran90Parser::Dse2Context * /*ctx*/) override { }
  virtual void exitDse2(Fortran90Parser::Dse2Context * /*ctx*/) override { }

  virtual void enterDataStmtValue(Fortran90Parser::DataStmtValueContext * /*ctx*/) override { }
  virtual void exitDataStmtValue(Fortran90Parser::DataStmtValueContext * /*ctx*/) override { }

  virtual void enterDataStmtObject(Fortran90Parser::DataStmtObjectContext * /*ctx*/) override { }
  virtual void exitDataStmtObject(Fortran90Parser::DataStmtObjectContext * /*ctx*/) override { }

  virtual void enterVariable(Fortran90Parser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(Fortran90Parser::VariableContext * /*ctx*/) override { }

  virtual void enterSubscriptListRef(Fortran90Parser::SubscriptListRefContext * /*ctx*/) override { }
  virtual void exitSubscriptListRef(Fortran90Parser::SubscriptListRefContext * /*ctx*/) override { }

  virtual void enterSubscriptList(Fortran90Parser::SubscriptListContext * /*ctx*/) override { }
  virtual void exitSubscriptList(Fortran90Parser::SubscriptListContext * /*ctx*/) override { }

  virtual void enterSubscript(Fortran90Parser::SubscriptContext * /*ctx*/) override { }
  virtual void exitSubscript(Fortran90Parser::SubscriptContext * /*ctx*/) override { }

  virtual void enterSubstringRange(Fortran90Parser::SubstringRangeContext * /*ctx*/) override { }
  virtual void exitSubstringRange(Fortran90Parser::SubstringRangeContext * /*ctx*/) override { }

  virtual void enterDataImpliedDo(Fortran90Parser::DataImpliedDoContext * /*ctx*/) override { }
  virtual void exitDataImpliedDo(Fortran90Parser::DataImpliedDoContext * /*ctx*/) override { }

  virtual void enterDataIDoObjectList(Fortran90Parser::DataIDoObjectListContext * /*ctx*/) override { }
  virtual void exitDataIDoObjectList(Fortran90Parser::DataIDoObjectListContext * /*ctx*/) override { }

  virtual void enterDataIDoObject(Fortran90Parser::DataIDoObjectContext * /*ctx*/) override { }
  virtual void exitDataIDoObject(Fortran90Parser::DataIDoObjectContext * /*ctx*/) override { }

  virtual void enterStructureComponent(Fortran90Parser::StructureComponentContext * /*ctx*/) override { }
  virtual void exitStructureComponent(Fortran90Parser::StructureComponentContext * /*ctx*/) override { }

  virtual void enterFieldSelector(Fortran90Parser::FieldSelectorContext * /*ctx*/) override { }
  virtual void exitFieldSelector(Fortran90Parser::FieldSelectorContext * /*ctx*/) override { }

  virtual void enterArrayElement(Fortran90Parser::ArrayElementContext * /*ctx*/) override { }
  virtual void exitArrayElement(Fortran90Parser::ArrayElementContext * /*ctx*/) override { }

  virtual void enterImpliedDoVariable(Fortran90Parser::ImpliedDoVariableContext * /*ctx*/) override { }
  virtual void exitImpliedDoVariable(Fortran90Parser::ImpliedDoVariableContext * /*ctx*/) override { }

  virtual void enterCommaLoopControl(Fortran90Parser::CommaLoopControlContext * /*ctx*/) override { }
  virtual void exitCommaLoopControl(Fortran90Parser::CommaLoopControlContext * /*ctx*/) override { }

  virtual void enterLoopControl(Fortran90Parser::LoopControlContext * /*ctx*/) override { }
  virtual void exitLoopControl(Fortran90Parser::LoopControlContext * /*ctx*/) override { }

  virtual void enterVariableName(Fortran90Parser::VariableNameContext * /*ctx*/) override { }
  virtual void exitVariableName(Fortran90Parser::VariableNameContext * /*ctx*/) override { }

  virtual void enterCommaExpr(Fortran90Parser::CommaExprContext * /*ctx*/) override { }
  virtual void exitCommaExpr(Fortran90Parser::CommaExprContext * /*ctx*/) override { }

  virtual void enterSemicolonStmt(Fortran90Parser::SemicolonStmtContext * /*ctx*/) override { }
  virtual void exitSemicolonStmt(Fortran90Parser::SemicolonStmtContext * /*ctx*/) override { }

  virtual void enterActionStmt(Fortran90Parser::ActionStmtContext * /*ctx*/) override { }
  virtual void exitActionStmt(Fortran90Parser::ActionStmtContext * /*ctx*/) override { }

  virtual void enterWhereStmt(Fortran90Parser::WhereStmtContext * /*ctx*/) override { }
  virtual void exitWhereStmt(Fortran90Parser::WhereStmtContext * /*ctx*/) override { }

  virtual void enterPointerAssignmentStmt(Fortran90Parser::PointerAssignmentStmtContext * /*ctx*/) override { }
  virtual void exitPointerAssignmentStmt(Fortran90Parser::PointerAssignmentStmtContext * /*ctx*/) override { }

  virtual void enterTarget(Fortran90Parser::TargetContext * /*ctx*/) override { }
  virtual void exitTarget(Fortran90Parser::TargetContext * /*ctx*/) override { }

  virtual void enterNullifyStmt(Fortran90Parser::NullifyStmtContext * /*ctx*/) override { }
  virtual void exitNullifyStmt(Fortran90Parser::NullifyStmtContext * /*ctx*/) override { }

  virtual void enterPointerObjectList(Fortran90Parser::PointerObjectListContext * /*ctx*/) override { }
  virtual void exitPointerObjectList(Fortran90Parser::PointerObjectListContext * /*ctx*/) override { }

  virtual void enterPointerObject(Fortran90Parser::PointerObjectContext * /*ctx*/) override { }
  virtual void exitPointerObject(Fortran90Parser::PointerObjectContext * /*ctx*/) override { }

  virtual void enterPointerField(Fortran90Parser::PointerFieldContext * /*ctx*/) override { }
  virtual void exitPointerField(Fortran90Parser::PointerFieldContext * /*ctx*/) override { }

  virtual void enterExitStmt(Fortran90Parser::ExitStmtContext * /*ctx*/) override { }
  virtual void exitExitStmt(Fortran90Parser::ExitStmtContext * /*ctx*/) override { }

  virtual void enterDeallocateStmt(Fortran90Parser::DeallocateStmtContext * /*ctx*/) override { }
  virtual void exitDeallocateStmt(Fortran90Parser::DeallocateStmtContext * /*ctx*/) override { }

  virtual void enterAllocateObjectList(Fortran90Parser::AllocateObjectListContext * /*ctx*/) override { }
  virtual void exitAllocateObjectList(Fortran90Parser::AllocateObjectListContext * /*ctx*/) override { }

  virtual void enterCycleStmt(Fortran90Parser::CycleStmtContext * /*ctx*/) override { }
  virtual void exitCycleStmt(Fortran90Parser::CycleStmtContext * /*ctx*/) override { }

  virtual void enterAllocateStmt(Fortran90Parser::AllocateStmtContext * /*ctx*/) override { }
  virtual void exitAllocateStmt(Fortran90Parser::AllocateStmtContext * /*ctx*/) override { }

  virtual void enterAllocationList(Fortran90Parser::AllocationListContext * /*ctx*/) override { }
  virtual void exitAllocationList(Fortran90Parser::AllocationListContext * /*ctx*/) override { }

  virtual void enterAllocation(Fortran90Parser::AllocationContext * /*ctx*/) override { }
  virtual void exitAllocation(Fortran90Parser::AllocationContext * /*ctx*/) override { }

  virtual void enterAllocateObject(Fortran90Parser::AllocateObjectContext * /*ctx*/) override { }
  virtual void exitAllocateObject(Fortran90Parser::AllocateObjectContext * /*ctx*/) override { }

  virtual void enterAllocatedShape(Fortran90Parser::AllocatedShapeContext * /*ctx*/) override { }
  virtual void exitAllocatedShape(Fortran90Parser::AllocatedShapeContext * /*ctx*/) override { }

  virtual void enterStopStmt(Fortran90Parser::StopStmtContext * /*ctx*/) override { }
  virtual void exitStopStmt(Fortran90Parser::StopStmtContext * /*ctx*/) override { }

  virtual void enterWriteStmt(Fortran90Parser::WriteStmtContext * /*ctx*/) override { }
  virtual void exitWriteStmt(Fortran90Parser::WriteStmtContext * /*ctx*/) override { }

  virtual void enterIoControlSpecList(Fortran90Parser::IoControlSpecListContext * /*ctx*/) override { }
  virtual void exitIoControlSpecList(Fortran90Parser::IoControlSpecListContext * /*ctx*/) override { }

  virtual void enterStmtFunctionStmt(Fortran90Parser::StmtFunctionStmtContext * /*ctx*/) override { }
  virtual void exitStmtFunctionStmt(Fortran90Parser::StmtFunctionStmtContext * /*ctx*/) override { }

  virtual void enterStmtFunctionRange(Fortran90Parser::StmtFunctionRangeContext * /*ctx*/) override { }
  virtual void exitStmtFunctionRange(Fortran90Parser::StmtFunctionRangeContext * /*ctx*/) override { }

  virtual void enterSFDummyArgNameList(Fortran90Parser::SFDummyArgNameListContext * /*ctx*/) override { }
  virtual void exitSFDummyArgNameList(Fortran90Parser::SFDummyArgNameListContext * /*ctx*/) override { }

  virtual void enterSFDummyArgName(Fortran90Parser::SFDummyArgNameContext * /*ctx*/) override { }
  virtual void exitSFDummyArgName(Fortran90Parser::SFDummyArgNameContext * /*ctx*/) override { }

  virtual void enterReturnStmt(Fortran90Parser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(Fortran90Parser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterRewindStmt(Fortran90Parser::RewindStmtContext * /*ctx*/) override { }
  virtual void exitRewindStmt(Fortran90Parser::RewindStmtContext * /*ctx*/) override { }

  virtual void enterReadStmt(Fortran90Parser::ReadStmtContext * /*ctx*/) override { }
  virtual void exitReadStmt(Fortran90Parser::ReadStmtContext * /*ctx*/) override { }

  virtual void enterCommaInputItemList(Fortran90Parser::CommaInputItemListContext * /*ctx*/) override { }
  virtual void exitCommaInputItemList(Fortran90Parser::CommaInputItemListContext * /*ctx*/) override { }

  virtual void enterRdFmtId(Fortran90Parser::RdFmtIdContext * /*ctx*/) override { }
  virtual void exitRdFmtId(Fortran90Parser::RdFmtIdContext * /*ctx*/) override { }

  virtual void enterRdFmtIdExpr(Fortran90Parser::RdFmtIdExprContext * /*ctx*/) override { }
  virtual void exitRdFmtIdExpr(Fortran90Parser::RdFmtIdExprContext * /*ctx*/) override { }

  virtual void enterInputItemList(Fortran90Parser::InputItemListContext * /*ctx*/) override { }
  virtual void exitInputItemList(Fortran90Parser::InputItemListContext * /*ctx*/) override { }

  virtual void enterInputItem(Fortran90Parser::InputItemContext * /*ctx*/) override { }
  virtual void exitInputItem(Fortran90Parser::InputItemContext * /*ctx*/) override { }

  virtual void enterInputImpliedDo(Fortran90Parser::InputImpliedDoContext * /*ctx*/) override { }
  virtual void exitInputImpliedDo(Fortran90Parser::InputImpliedDoContext * /*ctx*/) override { }

  virtual void enterRdCtlSpec(Fortran90Parser::RdCtlSpecContext * /*ctx*/) override { }
  virtual void exitRdCtlSpec(Fortran90Parser::RdCtlSpecContext * /*ctx*/) override { }

  virtual void enterRdUnitId(Fortran90Parser::RdUnitIdContext * /*ctx*/) override { }
  virtual void exitRdUnitId(Fortran90Parser::RdUnitIdContext * /*ctx*/) override { }

  virtual void enterRdIoCtlSpecList(Fortran90Parser::RdIoCtlSpecListContext * /*ctx*/) override { }
  virtual void exitRdIoCtlSpecList(Fortran90Parser::RdIoCtlSpecListContext * /*ctx*/) override { }

  virtual void enterIoControlSpec(Fortran90Parser::IoControlSpecContext * /*ctx*/) override { }
  virtual void exitIoControlSpec(Fortran90Parser::IoControlSpecContext * /*ctx*/) override { }

  virtual void enterPrintStmt(Fortran90Parser::PrintStmtContext * /*ctx*/) override { }
  virtual void exitPrintStmt(Fortran90Parser::PrintStmtContext * /*ctx*/) override { }

  virtual void enterOutputItemList(Fortran90Parser::OutputItemListContext * /*ctx*/) override { }
  virtual void exitOutputItemList(Fortran90Parser::OutputItemListContext * /*ctx*/) override { }

  virtual void enterOutputItemList1(Fortran90Parser::OutputItemList1Context * /*ctx*/) override { }
  virtual void exitOutputItemList1(Fortran90Parser::OutputItemList1Context * /*ctx*/) override { }

  virtual void enterOutputImpliedDo(Fortran90Parser::OutputImpliedDoContext * /*ctx*/) override { }
  virtual void exitOutputImpliedDo(Fortran90Parser::OutputImpliedDoContext * /*ctx*/) override { }

  virtual void enterFormatIdentifier(Fortran90Parser::FormatIdentifierContext * /*ctx*/) override { }
  virtual void exitFormatIdentifier(Fortran90Parser::FormatIdentifierContext * /*ctx*/) override { }

  virtual void enterPauseStmt(Fortran90Parser::PauseStmtContext * /*ctx*/) override { }
  virtual void exitPauseStmt(Fortran90Parser::PauseStmtContext * /*ctx*/) override { }

  virtual void enterOpenStmt(Fortran90Parser::OpenStmtContext * /*ctx*/) override { }
  virtual void exitOpenStmt(Fortran90Parser::OpenStmtContext * /*ctx*/) override { }

  virtual void enterConnectSpecList(Fortran90Parser::ConnectSpecListContext * /*ctx*/) override { }
  virtual void exitConnectSpecList(Fortran90Parser::ConnectSpecListContext * /*ctx*/) override { }

  virtual void enterConnectSpec(Fortran90Parser::ConnectSpecContext * /*ctx*/) override { }
  virtual void exitConnectSpec(Fortran90Parser::ConnectSpecContext * /*ctx*/) override { }

  virtual void enterInquireStmt(Fortran90Parser::InquireStmtContext * /*ctx*/) override { }
  virtual void exitInquireStmt(Fortran90Parser::InquireStmtContext * /*ctx*/) override { }

  virtual void enterInquireSpecList(Fortran90Parser::InquireSpecListContext * /*ctx*/) override { }
  virtual void exitInquireSpecList(Fortran90Parser::InquireSpecListContext * /*ctx*/) override { }

  virtual void enterInquireSpec(Fortran90Parser::InquireSpecContext * /*ctx*/) override { }
  virtual void exitInquireSpec(Fortran90Parser::InquireSpecContext * /*ctx*/) override { }

  virtual void enterAssignedGotoStmt(Fortran90Parser::AssignedGotoStmtContext * /*ctx*/) override { }
  virtual void exitAssignedGotoStmt(Fortran90Parser::AssignedGotoStmtContext * /*ctx*/) override { }

  virtual void enterVariableComma(Fortran90Parser::VariableCommaContext * /*ctx*/) override { }
  virtual void exitVariableComma(Fortran90Parser::VariableCommaContext * /*ctx*/) override { }

  virtual void enterGotoStmt(Fortran90Parser::GotoStmtContext * /*ctx*/) override { }
  virtual void exitGotoStmt(Fortran90Parser::GotoStmtContext * /*ctx*/) override { }

  virtual void enterComputedGotoStmt(Fortran90Parser::ComputedGotoStmtContext * /*ctx*/) override { }
  virtual void exitComputedGotoStmt(Fortran90Parser::ComputedGotoStmtContext * /*ctx*/) override { }

  virtual void enterLblRefList(Fortran90Parser::LblRefListContext * /*ctx*/) override { }
  virtual void exitLblRefList(Fortran90Parser::LblRefListContext * /*ctx*/) override { }

  virtual void enterEndfileStmt(Fortran90Parser::EndfileStmtContext * /*ctx*/) override { }
  virtual void exitEndfileStmt(Fortran90Parser::EndfileStmtContext * /*ctx*/) override { }

  virtual void enterContinueStmt(Fortran90Parser::ContinueStmtContext * /*ctx*/) override { }
  virtual void exitContinueStmt(Fortran90Parser::ContinueStmtContext * /*ctx*/) override { }

  virtual void enterCloseStmt(Fortran90Parser::CloseStmtContext * /*ctx*/) override { }
  virtual void exitCloseStmt(Fortran90Parser::CloseStmtContext * /*ctx*/) override { }

  virtual void enterCloseSpecList(Fortran90Parser::CloseSpecListContext * /*ctx*/) override { }
  virtual void exitCloseSpecList(Fortran90Parser::CloseSpecListContext * /*ctx*/) override { }

  virtual void enterCloseSpec(Fortran90Parser::CloseSpecContext * /*ctx*/) override { }
  virtual void exitCloseSpec(Fortran90Parser::CloseSpecContext * /*ctx*/) override { }

  virtual void enterCExpression(Fortran90Parser::CExpressionContext * /*ctx*/) override { }
  virtual void exitCExpression(Fortran90Parser::CExpressionContext * /*ctx*/) override { }

  virtual void enterCPrimary(Fortran90Parser::CPrimaryContext * /*ctx*/) override { }
  virtual void exitCPrimary(Fortran90Parser::CPrimaryContext * /*ctx*/) override { }

  virtual void enterCOperand(Fortran90Parser::COperandContext * /*ctx*/) override { }
  virtual void exitCOperand(Fortran90Parser::COperandContext * /*ctx*/) override { }

  virtual void enterCPrimaryConcatOp(Fortran90Parser::CPrimaryConcatOpContext * /*ctx*/) override { }
  virtual void exitCPrimaryConcatOp(Fortran90Parser::CPrimaryConcatOpContext * /*ctx*/) override { }

  virtual void enterCallStmt(Fortran90Parser::CallStmtContext * /*ctx*/) override { }
  virtual void exitCallStmt(Fortran90Parser::CallStmtContext * /*ctx*/) override { }

  virtual void enterSubroutineNameUse(Fortran90Parser::SubroutineNameUseContext * /*ctx*/) override { }
  virtual void exitSubroutineNameUse(Fortran90Parser::SubroutineNameUseContext * /*ctx*/) override { }

  virtual void enterSubroutineArgList(Fortran90Parser::SubroutineArgListContext * /*ctx*/) override { }
  virtual void exitSubroutineArgList(Fortran90Parser::SubroutineArgListContext * /*ctx*/) override { }

  virtual void enterSubroutineArg(Fortran90Parser::SubroutineArgContext * /*ctx*/) override { }
  virtual void exitSubroutineArg(Fortran90Parser::SubroutineArgContext * /*ctx*/) override { }

  virtual void enterArithmeticIfStmt(Fortran90Parser::ArithmeticIfStmtContext * /*ctx*/) override { }
  virtual void exitArithmeticIfStmt(Fortran90Parser::ArithmeticIfStmtContext * /*ctx*/) override { }

  virtual void enterLblRef(Fortran90Parser::LblRefContext * /*ctx*/) override { }
  virtual void exitLblRef(Fortran90Parser::LblRefContext * /*ctx*/) override { }

  virtual void enterLabel(Fortran90Parser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(Fortran90Parser::LabelContext * /*ctx*/) override { }

  virtual void enterAssignmentStmt(Fortran90Parser::AssignmentStmtContext * /*ctx*/) override { }
  virtual void exitAssignmentStmt(Fortran90Parser::AssignmentStmtContext * /*ctx*/) override { }

  virtual void enterSFExprListRef(Fortran90Parser::SFExprListRefContext * /*ctx*/) override { }
  virtual void exitSFExprListRef(Fortran90Parser::SFExprListRefContext * /*ctx*/) override { }

  virtual void enterSFExprList(Fortran90Parser::SFExprListContext * /*ctx*/) override { }
  virtual void exitSFExprList(Fortran90Parser::SFExprListContext * /*ctx*/) override { }

  virtual void enterCommaSectionSubscript(Fortran90Parser::CommaSectionSubscriptContext * /*ctx*/) override { }
  virtual void exitCommaSectionSubscript(Fortran90Parser::CommaSectionSubscriptContext * /*ctx*/) override { }

  virtual void enterAssignStmt(Fortran90Parser::AssignStmtContext * /*ctx*/) override { }
  virtual void exitAssignStmt(Fortran90Parser::AssignStmtContext * /*ctx*/) override { }

  virtual void enterBackspaceStmt(Fortran90Parser::BackspaceStmtContext * /*ctx*/) override { }
  virtual void exitBackspaceStmt(Fortran90Parser::BackspaceStmtContext * /*ctx*/) override { }

  virtual void enterUnitIdentifier(Fortran90Parser::UnitIdentifierContext * /*ctx*/) override { }
  virtual void exitUnitIdentifier(Fortran90Parser::UnitIdentifierContext * /*ctx*/) override { }

  virtual void enterPositionSpecList(Fortran90Parser::PositionSpecListContext * /*ctx*/) override { }
  virtual void exitPositionSpecList(Fortran90Parser::PositionSpecListContext * /*ctx*/) override { }

  virtual void enterUnitIdentifierComma(Fortran90Parser::UnitIdentifierCommaContext * /*ctx*/) override { }
  virtual void exitUnitIdentifierComma(Fortran90Parser::UnitIdentifierCommaContext * /*ctx*/) override { }

  virtual void enterPositionSpec(Fortran90Parser::PositionSpecContext * /*ctx*/) override { }
  virtual void exitPositionSpec(Fortran90Parser::PositionSpecContext * /*ctx*/) override { }

  virtual void enterScalarVariable(Fortran90Parser::ScalarVariableContext * /*ctx*/) override { }
  virtual void exitScalarVariable(Fortran90Parser::ScalarVariableContext * /*ctx*/) override { }

  virtual void enterUFExpr(Fortran90Parser::UFExprContext * /*ctx*/) override { }
  virtual void exitUFExpr(Fortran90Parser::UFExprContext * /*ctx*/) override { }

  virtual void enterUFTerm(Fortran90Parser::UFTermContext * /*ctx*/) override { }
  virtual void exitUFTerm(Fortran90Parser::UFTermContext * /*ctx*/) override { }

  virtual void enterUFFactor(Fortran90Parser::UFFactorContext * /*ctx*/) override { }
  virtual void exitUFFactor(Fortran90Parser::UFFactorContext * /*ctx*/) override { }

  virtual void enterUFPrimary(Fortran90Parser::UFPrimaryContext * /*ctx*/) override { }
  virtual void exitUFPrimary(Fortran90Parser::UFPrimaryContext * /*ctx*/) override { }

  virtual void enterSubroutineSubprogram(Fortran90Parser::SubroutineSubprogramContext * /*ctx*/) override { }
  virtual void exitSubroutineSubprogram(Fortran90Parser::SubroutineSubprogramContext * /*ctx*/) override { }

  virtual void enterSubroutineName(Fortran90Parser::SubroutineNameContext * /*ctx*/) override { }
  virtual void exitSubroutineName(Fortran90Parser::SubroutineNameContext * /*ctx*/) override { }

  virtual void enterSubroutineRange(Fortran90Parser::SubroutineRangeContext * /*ctx*/) override { }
  virtual void exitSubroutineRange(Fortran90Parser::SubroutineRangeContext * /*ctx*/) override { }

  virtual void enterIncludeStmt(Fortran90Parser::IncludeStmtContext * /*ctx*/) override { }
  virtual void exitIncludeStmt(Fortran90Parser::IncludeStmtContext * /*ctx*/) override { }

  virtual void enterImplicitStmt(Fortran90Parser::ImplicitStmtContext * /*ctx*/) override { }
  virtual void exitImplicitStmt(Fortran90Parser::ImplicitStmtContext * /*ctx*/) override { }

  virtual void enterImplicitSpecList(Fortran90Parser::ImplicitSpecListContext * /*ctx*/) override { }
  virtual void exitImplicitSpecList(Fortran90Parser::ImplicitSpecListContext * /*ctx*/) override { }

  virtual void enterImplicitSpec(Fortran90Parser::ImplicitSpecContext * /*ctx*/) override { }
  virtual void exitImplicitSpec(Fortran90Parser::ImplicitSpecContext * /*ctx*/) override { }

  virtual void enterImplicitRanges(Fortran90Parser::ImplicitRangesContext * /*ctx*/) override { }
  virtual void exitImplicitRanges(Fortran90Parser::ImplicitRangesContext * /*ctx*/) override { }

  virtual void enterImplicitRange(Fortran90Parser::ImplicitRangeContext * /*ctx*/) override { }
  virtual void exitImplicitRange(Fortran90Parser::ImplicitRangeContext * /*ctx*/) override { }

  virtual void enterExpression(Fortran90Parser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(Fortran90Parser::ExpressionContext * /*ctx*/) override { }

  virtual void enterDefinedBinaryOp(Fortran90Parser::DefinedBinaryOpContext * /*ctx*/) override { }
  virtual void exitDefinedBinaryOp(Fortran90Parser::DefinedBinaryOpContext * /*ctx*/) override { }

  virtual void enterLevel5Expr(Fortran90Parser::Level5ExprContext * /*ctx*/) override { }
  virtual void exitLevel5Expr(Fortran90Parser::Level5ExprContext * /*ctx*/) override { }

  virtual void enterEquivOperand(Fortran90Parser::EquivOperandContext * /*ctx*/) override { }
  virtual void exitEquivOperand(Fortran90Parser::EquivOperandContext * /*ctx*/) override { }

  virtual void enterOrOperand(Fortran90Parser::OrOperandContext * /*ctx*/) override { }
  virtual void exitOrOperand(Fortran90Parser::OrOperandContext * /*ctx*/) override { }

  virtual void enterAndOperand(Fortran90Parser::AndOperandContext * /*ctx*/) override { }
  virtual void exitAndOperand(Fortran90Parser::AndOperandContext * /*ctx*/) override { }

  virtual void enterRelOp(Fortran90Parser::RelOpContext * /*ctx*/) override { }
  virtual void exitRelOp(Fortran90Parser::RelOpContext * /*ctx*/) override { }

  virtual void enterLevel4Expr(Fortran90Parser::Level4ExprContext * /*ctx*/) override { }
  virtual void exitLevel4Expr(Fortran90Parser::Level4ExprContext * /*ctx*/) override { }

  virtual void enterLevel3Expr(Fortran90Parser::Level3ExprContext * /*ctx*/) override { }
  virtual void exitLevel3Expr(Fortran90Parser::Level3ExprContext * /*ctx*/) override { }

  virtual void enterLevel2Expr(Fortran90Parser::Level2ExprContext * /*ctx*/) override { }
  virtual void exitLevel2Expr(Fortran90Parser::Level2ExprContext * /*ctx*/) override { }

  virtual void enterSign(Fortran90Parser::SignContext * /*ctx*/) override { }
  virtual void exitSign(Fortran90Parser::SignContext * /*ctx*/) override { }

  virtual void enterAddOperand(Fortran90Parser::AddOperandContext * /*ctx*/) override { }
  virtual void exitAddOperand(Fortran90Parser::AddOperandContext * /*ctx*/) override { }

  virtual void enterMultOperand(Fortran90Parser::MultOperandContext * /*ctx*/) override { }
  virtual void exitMultOperand(Fortran90Parser::MultOperandContext * /*ctx*/) override { }

  virtual void enterLevel1Expr(Fortran90Parser::Level1ExprContext * /*ctx*/) override { }
  virtual void exitLevel1Expr(Fortran90Parser::Level1ExprContext * /*ctx*/) override { }

  virtual void enterDefinedUnaryOp(Fortran90Parser::DefinedUnaryOpContext * /*ctx*/) override { }
  virtual void exitDefinedUnaryOp(Fortran90Parser::DefinedUnaryOpContext * /*ctx*/) override { }

  virtual void enterPrimary(Fortran90Parser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(Fortran90Parser::PrimaryContext * /*ctx*/) override { }

  virtual void enterArrayConstructor(Fortran90Parser::ArrayConstructorContext * /*ctx*/) override { }
  virtual void exitArrayConstructor(Fortran90Parser::ArrayConstructorContext * /*ctx*/) override { }

  virtual void enterAcValueList(Fortran90Parser::AcValueListContext * /*ctx*/) override { }
  virtual void exitAcValueList(Fortran90Parser::AcValueListContext * /*ctx*/) override { }

  virtual void enterAcValueList1(Fortran90Parser::AcValueList1Context * /*ctx*/) override { }
  virtual void exitAcValueList1(Fortran90Parser::AcValueList1Context * /*ctx*/) override { }

  virtual void enterAcImpliedDo(Fortran90Parser::AcImpliedDoContext * /*ctx*/) override { }
  virtual void exitAcImpliedDo(Fortran90Parser::AcImpliedDoContext * /*ctx*/) override { }

  virtual void enterFunctionReference(Fortran90Parser::FunctionReferenceContext * /*ctx*/) override { }
  virtual void exitFunctionReference(Fortran90Parser::FunctionReferenceContext * /*ctx*/) override { }

  virtual void enterFunctionArgList(Fortran90Parser::FunctionArgListContext * /*ctx*/) override { }
  virtual void exitFunctionArgList(Fortran90Parser::FunctionArgListContext * /*ctx*/) override { }

  virtual void enterFunctionArg(Fortran90Parser::FunctionArgContext * /*ctx*/) override { }
  virtual void exitFunctionArg(Fortran90Parser::FunctionArgContext * /*ctx*/) override { }

  virtual void enterNameDataRef(Fortran90Parser::NameDataRefContext * /*ctx*/) override { }
  virtual void exitNameDataRef(Fortran90Parser::NameDataRefContext * /*ctx*/) override { }

  virtual void enterComplexDataRefTail(Fortran90Parser::ComplexDataRefTailContext * /*ctx*/) override { }
  virtual void exitComplexDataRefTail(Fortran90Parser::ComplexDataRefTailContext * /*ctx*/) override { }

  virtual void enterSectionSubscriptRef(Fortran90Parser::SectionSubscriptRefContext * /*ctx*/) override { }
  virtual void exitSectionSubscriptRef(Fortran90Parser::SectionSubscriptRefContext * /*ctx*/) override { }

  virtual void enterSectionSubscriptList(Fortran90Parser::SectionSubscriptListContext * /*ctx*/) override { }
  virtual void exitSectionSubscriptList(Fortran90Parser::SectionSubscriptListContext * /*ctx*/) override { }

  virtual void enterSectionSubscript(Fortran90Parser::SectionSubscriptContext * /*ctx*/) override { }
  virtual void exitSectionSubscript(Fortran90Parser::SectionSubscriptContext * /*ctx*/) override { }

  virtual void enterSubscriptTripletTail(Fortran90Parser::SubscriptTripletTailContext * /*ctx*/) override { }
  virtual void exitSubscriptTripletTail(Fortran90Parser::SubscriptTripletTailContext * /*ctx*/) override { }

  virtual void enterLogicalConstant(Fortran90Parser::LogicalConstantContext * /*ctx*/) override { }
  virtual void exitLogicalConstant(Fortran90Parser::LogicalConstantContext * /*ctx*/) override { }

  virtual void enterKindParam(Fortran90Parser::KindParamContext * /*ctx*/) override { }
  virtual void exitKindParam(Fortran90Parser::KindParamContext * /*ctx*/) override { }

  virtual void enterUnsignedArithmeticConstant(Fortran90Parser::UnsignedArithmeticConstantContext * /*ctx*/) override { }
  virtual void exitUnsignedArithmeticConstant(Fortran90Parser::UnsignedArithmeticConstantContext * /*ctx*/) override { }

  virtual void enterComplexConst(Fortran90Parser::ComplexConstContext * /*ctx*/) override { }
  virtual void exitComplexConst(Fortran90Parser::ComplexConstContext * /*ctx*/) override { }

  virtual void enterComplexComponent(Fortran90Parser::ComplexComponentContext * /*ctx*/) override { }
  virtual void exitComplexComponent(Fortran90Parser::ComplexComponentContext * /*ctx*/) override { }

  virtual void enterConstantExpr(Fortran90Parser::ConstantExprContext * /*ctx*/) override { }
  virtual void exitConstantExpr(Fortran90Parser::ConstantExprContext * /*ctx*/) override { }

  virtual void enterIfStmt(Fortran90Parser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(Fortran90Parser::IfStmtContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

