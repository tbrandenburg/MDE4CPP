//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUMLFACTORY_HPP
#define FUMLFACTORY_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include "EFactory.hpp"

namespace fUML 
{	class AcceptEventActionActivation;
	class AcceptEventActionEventAccepter;
	class ActionActivation;
	class ActivityEdgeInstance;
	class ActivityExecution;
	class ActivityFinalNodeActivation;
	class ActivityNodeActivation;
	class ActivityNodeActivationGroup;
	class ActivityParameterNodeActivation;
	class AddStructuralFeatureValueActionActivation;
	class BooleanValue;
	class CallActionActivation;
	class CallBehaviorActionActivation;
	class CallOperationActionActivation;
	class CentralBufferNodeActivation;
	class ChoiceStrategy;
	class ClassifierBehaviorExecution;
	class ClassifierBehaviorExecutionActivity;
	class ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1;
	class ClauseActivation;
	class ClearAssociationActionActivation;
	class ClearStructuralFeatureActionActivation;
	class CompoundValue;
	class ConditionalNodeActivation;
	class ControlNodeActivation;
	class ControlToken;
	class CreateLinkActionActivation;
	class CreateObjectActionActivation;
	class DataStoreNodeActivation;
	class DataValue;
	class DecisionNodeActivation;
	class DestroyLinkActionActivation;
	class DestroyObjectActionActivation;
	class DispatchStrategy;
	class EnumerationValue;
	class Evaluation;
	class EventAccepter;
	class EventDispatchLoop;
	class Execution;
	class ExecutionFactory;
	class ExecutionFactoryL1;
	class ExecutionFactoryL2;
	class ExecutionFactoryL3;
	class Executor;
	class ExpansionActivationGroup;
	class ExpansionNodeActivation;
	class ExpansionRegionActivation;
	class ExtensionalValue;
	class ExtensionalValueList;
	class FIFOGetNextEventStrategy;
	class FeatureValue;
	class FirstChoiceStrategy;
	class FlowFinalNodeActivation;
	class ForkNodeActivation;
	class ForkedToken;
	class GetNextEventStrategy;
	class InitialNodeActivation;
	class InputPinActivation;
	class InstanceValueEvaluation;
	class IntegerValue;
	class InvocationActionActivation;
	class JoinNodeActivation;
	class Link;
	class LinkActionActivation;
	class LiteralBooleanEvaluation;
	class LiteralEvaluation;
	class LiteralIntegerEvaluation;
	class LiteralNullEvaluation;
	class LiteralRealEvaluation;
	class LiteralStringEvaluation;
	class LiteralUnlimitedNaturalEvaluation;
	class Locus;
	class LoopNodeActivation;
	class MergeNodeActivation;
	class Object;
	class ObjectActivation;
	class ObjectNodeActivation;
	class ObjectToken;
	class Offer;
	class OpaqueBehaviorExecution;
	class OutputPinActivation;
	class ParameterValue;
	class PinActivation;
	class PrimitiveValue;
	class ReadExtentActionActivation;
	class ReadIsClassifiedObjectActionActivation;
	class ReadLinkActionActivation;
	class ReadSelfActionActivation;
	class ReadStructuralFeatureActionActivation;
	class RealValue;
	class ReclassifyObjectActionActivation;
	class RedefinitionBasedDispatchStrategy;
	class ReduceActionActivation;
	class Reference;
	class RemoveStructuralFeatureValueActivation;
	class SemanticStrategy;
	class SemanticVisitor;
	class SendSignalActionActivation;
	class SignalInstance;
	class StartClassifierBehaviorActionActivation;
	class StartObjectBehaviorActionActivation;
	class StringValue;
	class StructuralFeatureActionActivation;
	class StructuredActivityNodeActivation;
	class StructuredValue;
	class TestIdentityActionActivation;
	class Token;
	class TokenSet;
	class UnlimitedNaturalValue;
	class Value;
	class ValueSpecificActionActivation;
	class Values;
	class WriteLinkActionActivation;
	class WriteStructuralFeatureActionActivation;
	class FUMLPackage;
	class FUMLFactory;
}

namespace fUML 
{
	class FUMLFactory : virtual public ecore::EFactory 
	{
		private:    
			FUMLFactory(FUMLFactory const&) = delete;
			FUMLFactory& operator=(FUMLFactory const&) = delete;
		protected:
			FUMLFactory(){}
		
			//Singleton Instance and Getter
		private:
			static std::shared_ptr<FUMLFactory> instance;
		public:
			static std::shared_ptr<FUMLFactory> eInstance();
		
			//Creator functions
			virtual Locus* createLocus() const = 0;
			virtual Executor* createExecutor() const = 0;
			virtual ExecutionFactoryL1* createExecutionFactoryL1() const = 0;
			virtual FirstChoiceStrategy* createFirstChoiceStrategy() const = 0;
			virtual ExecutionFactoryL2* createExecutionFactoryL2() const = 0;
			virtual ExecutionFactoryL3* createExecutionFactoryL3() const = 0;
			virtual Reference* createReference() const = 0;
			virtual FeatureValue* createFeatureValue() const = 0;
			virtual UnlimitedNaturalValue* createUnlimitedNaturalValue() const = 0;
			virtual StringValue* createStringValue() const = 0;
			virtual IntegerValue* createIntegerValue() const = 0;
			virtual RealValue* createRealValue() const = 0;
			virtual BooleanValue* createBooleanValue() const = 0;
			virtual ExtensionalValueList* createExtensionalValueList() const = 0;
			virtual InstanceValueEvaluation* createInstanceValueEvaluation() const = 0;
			virtual LiteralBooleanEvaluation* createLiteralBooleanEvaluation() const = 0;
			virtual LiteralIntegerEvaluation* createLiteralIntegerEvaluation() const = 0;
			virtual LiteralNullEvaluation* createLiteralNullEvaluation() const = 0;
			virtual LiteralStringEvaluation* createLiteralStringEvaluation() const = 0;
			virtual LiteralRealEvaluation* createLiteralRealEvaluation() const = 0;
			virtual LiteralUnlimitedNaturalEvaluation* createLiteralUnlimitedNaturalEvaluation() const = 0;
			virtual Link* createLink() const = 0;
			virtual EnumerationValue* createEnumerationValue() const = 0;
			virtual DataValue* createDataValue() const = 0;
			virtual DispatchStrategy* createDispatchStrategy() const = 0;
			virtual RedefinitionBasedDispatchStrategy* createRedefinitionBasedDispatchStrategy() const = 0;
			virtual Object* createObject() const = 0;
			virtual ParameterValue* createParameterValue() const = 0;
			virtual ClassifierBehaviorExecutionActivity* createClassifierBehaviorExecutionActivity() const = 0;
			virtual ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1* createClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1() const = 0;
			virtual EventDispatchLoop* createEventDispatchLoop() const = 0;
			virtual SignalInstance* createSignalInstance() const = 0;
			virtual ClassifierBehaviorExecution* createClassifierBehaviorExecution() const = 0;
			virtual ObjectActivation* createObjectActivation() const = 0;
			virtual FIFOGetNextEventStrategy* createFIFOGetNextEventStrategy() const = 0;
			virtual ActivityNodeActivationGroup* createActivityNodeActivationGroup() const = 0;
			virtual ActivityEdgeInstance* createActivityEdgeInstance() const = 0;
			virtual Offer* createOffer() const = 0;
			virtual ObjectToken* createObjectToken() const = 0;
			virtual ForkedToken* createForkedToken() const = 0;
			virtual ControlToken* createControlToken() const = 0;
			virtual ActivityExecution* createActivityExecution() const = 0;
			virtual ActivityParameterNodeActivation* createActivityParameterNodeActivation() const = 0;
			virtual MergeNodeActivation* createMergeNodeActivation() const = 0;
			virtual JoinNodeActivation* createJoinNodeActivation() const = 0;
			virtual ForkNodeActivation* createForkNodeActivation() const = 0;
			virtual InitialNodeActivation* createInitialNodeActivation() const = 0;
			virtual DecisionNodeActivation* createDecisionNodeActivation() const = 0;
			virtual ActivityFinalNodeActivation* createActivityFinalNodeActivation() const = 0;
			virtual FlowFinalNodeActivation* createFlowFinalNodeActivation() const = 0;
			virtual Values* createValues() const = 0;
			virtual ClauseActivation* createClauseActivation() const = 0;
			virtual StructuredActivityNodeActivation* createStructuredActivityNodeActivation() const = 0;
			virtual LoopNodeActivation* createLoopNodeActivation() const = 0;
			virtual ConditionalNodeActivation* createConditionalNodeActivation() const = 0;
			virtual TokenSet* createTokenSet() const = 0;
			virtual ExpansionActivationGroup* createExpansionActivationGroup() const = 0;
			virtual ExpansionRegionActivation* createExpansionRegionActivation() const = 0;
			virtual ExpansionNodeActivation* createExpansionNodeActivation() const = 0;
			virtual SendSignalActionActivation* createSendSignalActionActivation() const = 0;
			virtual CallBehaviorActionActivation* createCallBehaviorActionActivation() const = 0;
			virtual CallOperationActionActivation* createCallOperationActionActivation() const = 0;
			virtual InputPinActivation* createInputPinActivation() const = 0;
			virtual OutputPinActivation* createOutputPinActivation() const = 0;
			virtual ValueSpecificActionActivation* createValueSpecificActionActivation() const = 0;
			virtual TestIdentityActionActivation* createTestIdentityActionActivation() const = 0;
			virtual ReadSelfActionActivation* createReadSelfActionActivation() const = 0;
			virtual DestroyObjectActionActivation* createDestroyObjectActionActivation() const = 0;
			virtual CreateObjectActionActivation* createCreateObjectActionActivation() const = 0;
			virtual ClearAssociationActionActivation* createClearAssociationActionActivation() const = 0;
			virtual ReadLinkActionActivation* createReadLinkActionActivation() const = 0;
			virtual DestroyLinkActionActivation* createDestroyLinkActionActivation() const = 0;
			virtual CreateLinkActionActivation* createCreateLinkActionActivation() const = 0;
			virtual ReadStructuralFeatureActionActivation* createReadStructuralFeatureActionActivation() const = 0;
			virtual ClearStructuralFeatureActionActivation* createClearStructuralFeatureActionActivation() const = 0;
			virtual RemoveStructuralFeatureValueActivation* createRemoveStructuralFeatureValueActivation() const = 0;
			virtual AddStructuralFeatureValueActionActivation* createAddStructuralFeatureValueActionActivation() const = 0;
			virtual StartClassifierBehaviorActionActivation* createStartClassifierBehaviorActionActivation() const = 0;
			virtual ReduceActionActivation* createReduceActionActivation() const = 0;
			virtual ReadIsClassifiedObjectActionActivation* createReadIsClassifiedObjectActionActivation() const = 0;
			virtual ReclassifyObjectActionActivation* createReclassifyObjectActionActivation() const = 0;
			virtual ReadExtentActionActivation* createReadExtentActionActivation() const = 0;
			virtual AcceptEventActionActivation* createAcceptEventActionActivation() const = 0;
			virtual StartObjectBehaviorActionActivation* createStartObjectBehaviorActionActivation() const = 0;
			virtual AcceptEventActionEventAccepter* createAcceptEventActionEventAccepter() const = 0;
			virtual CentralBufferNodeActivation* createCentralBufferNodeActivation() const = 0;
			virtual DataStoreNodeActivation* createDataStoreNodeActivation() const = 0;
			
			//Package
			virtual std::shared_ptr<FUMLPackage> getFUMLPackage() const = 0;
	};
}
#endif /* end of include guard: FUMLFACTORY_HPP */
