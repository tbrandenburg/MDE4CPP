#ifndef NEWMODEL_METAMODELPACKAGEIMPL_HPP
#define NEWMODEL_METAMODELPACKAGEIMPL_HPP

//********************************************************************
//*    
//* Warning: This file was generated by Mesapp Generator
//*
//********************************************************************



#include "NewModelPackage.hpp"



#include "impl/PackageImpl.hpp"	


namespace NewModel
{

class NewModelPackageImpl : virtual public uml::PackageImpl ,virtual public NewModelPackage
{


friend class NewModelPackage;
// Constructor
NewModelPackageImpl();

public:
// destructor
	virtual ~NewModelPackageImpl();



//getter for the ownedMember
virtual uml::OutputPin* get_coaIsNotFinishedisNotFinished();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimenext_call_NewModel_CheckIfPrimecoaIsNotFinished();
virtual uml::Operation* get_NewModel_PrimeChecker_isNotFinished_();
virtual uml::Activity* get_NewModel_CheckIfPrime();
virtual uml::CallOperationAction* get_NewModel_CheckIfPrimecoaIsOdd();
virtual uml::ObjectFlow* get_OF_NewModel_CheckIfPrimeFork1_coaIsOddtarget();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimeIsOdd_NewModel_CheckIfPrimeMerge();
virtual uml::FunctionBehavior* get_NewModel_PrimeChecker_next();
virtual uml::CallBehaviorAction* get_NewModel_CheckIfPrimecbaPrintNotPrime2();
virtual uml::InputPin* get_coaIsOddtarget();
virtual uml::CallBehaviorAction* get_NewModel_CheckIfPrimecbaPrintNotPrime();
virtual uml::Parameter* get_NewModel_CheckIfPrime_NewModel_CheckIfPrime_ActInputNode();
virtual uml::Parameter* get_NewModel_PrimeChecker_isOdd_isOdd();
virtual uml::InputPin* get_coaIsNotFinishedtarget();
virtual uml::CallBehaviorAction* get_NewModel_CheckIfPrimecbaPrintIsPrime();
virtual uml::InputPin* get_coaNexttarget();
virtual uml::FunctionBehavior* get_NewModel_PrimeChecker_isOdd();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimedivides_NewModel_CheckIfPrimenext_call();
virtual uml::DecisionNode* get_NewModel_CheckIfPrimedivides();
virtual uml::Operation* get_NewModel_PrimeChecker_next_();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimecbaPrintNotPrime_NewModel_CheckIfPrimeActivityFinal2();
virtual uml::ObjectFlow* get_NewModel_CheckIfPrimeifIsNotFinished();
virtual uml::DecisionNode* get_NewModel_CheckIfPrimeIsOdd();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimeisNotFinished_NewModel_CheckIfPrimecbaPrintIsPrime();
virtual uml::ObjectFlow* get_OF_NewModel_CheckIfPrimeprimeChecker_NewModel_CheckIfPrimeFork1();
virtual uml::Parameter* get_NewModel_PrimeChecker_isNotFinished_isNotFinished();
virtual uml::Operation* get_NewModel_PrimeChecker_printNotPrime_();
virtual uml::Property* get_NewModel_PrimeChecker_divider();
virtual uml::CallOperationAction* get_NewModel_CheckIfPrimecoaDivides();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimeIsOdd_NewModel_CheckIfPrimecbaPrintNotPrime2();
virtual uml::OutputPin* get_coaIsOddisOdd();
virtual uml::CallOperationAction* get_NewModel_CheckIfPrimenext_call();
virtual uml::OutputPin* get_coaDividesisDivisible();
virtual uml::ObjectFlow* get_NewModel_CheckIfPrimeifDivides();
virtual uml::DecisionNode* get_NewModel_CheckIfPrimeisNotFinished();
virtual uml::FunctionBehavior* get_NewModel_PrimeChecker_divides();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimeMerge_NewModel_CheckIfPrimecoaDivides();
virtual uml::ActivityFinalNode* get_NewModel_CheckIfPrimeActivityFinal2();
virtual uml::ForkNode* get_NewModel_CheckIfPrimeFork1();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimedivides_NewModel_CheckIfPrimecbaPrintNotPrime();
virtual uml::ObjectFlow* get_OF_NewModel_CheckIfPrimeFork1_coaIsNotFinishedtarget();
virtual uml::Operation* get_NewModel_PrimeChecker_printIsPrime_();
virtual uml::Operation* get_NewModel_PrimeChecker_isOdd_();
virtual uml::InputPin* get_next_calltarget();
virtual uml::ObjectFlow* get_OF_NewModel_CheckIfPrimeFork1_next_calltarget();
virtual uml::ObjectFlow* get_OF_NewModel_CheckIfPrimeFork1_coaNexttarget();
virtual uml::ActivityFinalNode* get_NewModel_CheckIfPrimeActivityFinal3();
virtual uml::Class* get_NewModel_PrimeChecker();
virtual uml::MergeNode* get_NewModel_CheckIfPrimeMerge();
virtual uml::ObjectFlow* get_OF_NewModel_CheckIfPrimeFork1_coaDividestarget();
virtual uml::ObjectFlow* get_NewModel_CheckIfPrimeifIsOdd();
virtual uml::CallOperationAction* get_NewModel_CheckIfPrimecoaNext();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimecbaPrintNotPrime2_NewModel_CheckIfPrimeActivityFinal1();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimeisNotFinished_NewModel_CheckIfPrimeMerge();
virtual uml::ActivityParameterNode* get_NewModel_CheckIfPrimeprimeChecker();
virtual uml::CallOperationAction* get_NewModel_CheckIfPrimecoaIsNotFinished();
virtual uml::FunctionBehavior* get_NewModel_PrimeChecker_PrintNotPrime();
virtual uml::ActivityFinalNode* get_NewModel_CheckIfPrimeActivityFinal1();
virtual uml::InputPin* get_coaDividestarget();
virtual uml::ControlFlow* get_CF_NewModel_CheckIfPrimecbaPrintIsPrime_NewModel_CheckIfPrimeActivityFinal3();
virtual uml::Operation* get_NewModel_PrimeChecker_divides_();
virtual uml::FunctionBehavior* get_NewModel_PrimeChecker_isNotFinished();
virtual uml::FunctionBehavior* get_NewModel_PrimeChecker_printIsPrime();
virtual uml::Parameter* get_NewModel_PrimeChecker_divides_isDivisible();
virtual uml::Property* get_NewModel_PrimeChecker_number();


private:

//private variables for ownedMember of the metamodel package
uml::CallBehaviorAction* newModel_CheckIfPrimecbaPrintIsPrime = nullptr;
uml::InputPin* coaIsNotFinishedtarget = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimeIsOdd_NewModel_CheckIfPrimecbaPrintNotPrime2_guard_LiteralBoolean = nullptr;
uml::Operation* newModel_PrimeChecker_isNotFinished_ = nullptr;
uml::LiteralInteger* newModel_CheckIfPrimeprimeChecker_upperBound_LiteralInteger = nullptr;
uml::ObjectFlow* newModel_CheckIfPrimeifIsOdd = nullptr;
uml::ForkNode* newModel_CheckIfPrimeFork1 = nullptr;
uml::Operation* newModel_PrimeChecker_printNotPrime_ = nullptr;
uml::Activity* newModel_CheckIfPrime = nullptr;
uml::Operation* newModel_PrimeChecker_next_ = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimeisNotFinished_NewModel_CheckIfPrimecbaPrintIsPrime = nullptr;
uml::LiteralInteger* cF_NewModel_CheckIfPrimeisNotFinished_NewModel_CheckIfPrimecbaPrintIsPrime_weight_LiteralInteger = nullptr;
uml::ObjectFlow* oF_NewModel_CheckIfPrimeprimeChecker_NewModel_CheckIfPrimeFork1 = nullptr;
uml::DecisionNode* newModel_CheckIfPrimeisNotFinished = nullptr;
uml::LiteralInteger* cF_NewModel_CheckIfPrimenext_call_NewModel_CheckIfPrimecoaIsNotFinished_weight_LiteralInteger = nullptr;
uml::LiteralInteger* newModel_PrimeChecker_divider_defaultValue_LiteralInteger = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimenext_call_NewModel_CheckIfPrimecoaIsNotFinished = nullptr;
uml::ObjectFlow* oF_NewModel_CheckIfPrimeFork1_coaIsNotFinishedtarget = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimecbaPrintNotPrime_NewModel_CheckIfPrimeActivityFinal2 = nullptr;
uml::DecisionNode* newModel_CheckIfPrimedivides = nullptr;
uml::Parameter* newModel_PrimeChecker_isNotFinished_isNotFinished = nullptr;
uml::CallOperationAction* newModel_CheckIfPrimecoaIsOdd = nullptr;
uml::ObjectFlow* newModel_CheckIfPrimeifIsNotFinished = nullptr;
uml::Parameter* newModel_PrimeChecker_isOdd_isOdd = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimeMerge_NewModel_CheckIfPrimecoaDivides_guard_LiteralBoolean = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimeIsOdd_NewModel_CheckIfPrimeMerge_guard_LiteralBoolean = nullptr;
uml::CallOperationAction* newModel_CheckIfPrimecoaDivides = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimedivides_NewModel_CheckIfPrimecbaPrintNotPrime = nullptr;
uml::OutputPin* coaIsNotFinishedisNotFinished = nullptr;
uml::CallOperationAction* newModel_CheckIfPrimecoaIsNotFinished = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimeisNotFinished_NewModel_CheckIfPrimecbaPrintIsPrime_guard_LiteralBoolean = nullptr;
uml::ObjectFlow* oF_NewModel_CheckIfPrimeFork1_coaNexttarget = nullptr;
uml::Property* newModel_PrimeChecker_divider = nullptr;
uml::Operation* newModel_PrimeChecker_isOdd_ = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimecbaPrintNotPrime_NewModel_CheckIfPrimeActivityFinal2_guard_LiteralBoolean = nullptr;
uml::Class* newModel_PrimeChecker = nullptr;
uml::InputPin* coaNexttarget = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimeIsOdd_NewModel_CheckIfPrimecbaPrintNotPrime2 = nullptr;
uml::Operation* newModel_PrimeChecker_printIsPrime_ = nullptr;
uml::LiteralInteger* cF_NewModel_CheckIfPrimedivides_NewModel_CheckIfPrimenext_call_weight_LiteralInteger = nullptr;
uml::LiteralInteger* cF_NewModel_CheckIfPrimecbaPrintNotPrime_NewModel_CheckIfPrimeActivityFinal2_weight_LiteralInteger = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimecbaPrintNotPrime2_NewModel_CheckIfPrimeActivityFinal1_guard_LiteralBoolean = nullptr;
uml::LiteralInteger* cF_NewModel_CheckIfPrimecbaPrintIsPrime_NewModel_CheckIfPrimeActivityFinal3_weight_LiteralInteger = nullptr;
uml::FunctionBehavior* newModel_PrimeChecker_isOdd = nullptr;
uml::ObjectFlow* oF_NewModel_CheckIfPrimeFork1_next_calltarget = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimedivides_NewModel_CheckIfPrimecbaPrintNotPrime_guard_LiteralBoolean = nullptr;
uml::OutputPin* coaIsOddisOdd = nullptr;
uml::FunctionBehavior* newModel_PrimeChecker_printIsPrime = nullptr;
uml::LiteralInteger* cF_NewModel_CheckIfPrimeMerge_NewModel_CheckIfPrimecoaDivides_weight_LiteralInteger = nullptr;
uml::ActivityFinalNode* newModel_CheckIfPrimeActivityFinal1 = nullptr;
uml::DecisionNode* newModel_CheckIfPrimeIsOdd = nullptr;
uml::Parameter* newModel_PrimeChecker_divides_isDivisible = nullptr;
uml::InputPin* next_calltarget = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimecbaPrintIsPrime_NewModel_CheckIfPrimeActivityFinal3 = nullptr;
uml::OutputPin* coaDividesisDivisible = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimecbaPrintNotPrime2_NewModel_CheckIfPrimeActivityFinal1 = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimeIsOdd_NewModel_CheckIfPrimeMerge = nullptr;
uml::Operation* newModel_PrimeChecker_divides_ = nullptr;
uml::CallBehaviorAction* newModel_CheckIfPrimecbaPrintNotPrime = nullptr;
uml::LiteralInteger* cF_NewModel_CheckIfPrimedivides_NewModel_CheckIfPrimecbaPrintNotPrime_weight_LiteralInteger = nullptr;
uml::FunctionBehavior* newModel_PrimeChecker_PrintNotPrime = nullptr;
uml::ObjectFlow* oF_NewModel_CheckIfPrimeFork1_coaIsOddtarget = nullptr;
uml::FunctionBehavior* newModel_PrimeChecker_isNotFinished = nullptr;
uml::LiteralInteger* newModel_PrimeChecker_number_defaultValue_LiteralInteger = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimedivides_NewModel_CheckIfPrimenext_call_guard_LiteralBoolean = nullptr;
uml::LiteralInteger* cF_NewModel_CheckIfPrimecbaPrintNotPrime2_NewModel_CheckIfPrimeActivityFinal1_weight_LiteralInteger = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimeisNotFinished_NewModel_CheckIfPrimeMerge_guard_LiteralBoolean = nullptr;
uml::ObjectFlow* newModel_CheckIfPrimeifDivides = nullptr;
uml::MergeNode* newModel_CheckIfPrimeMerge = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimeisNotFinished_NewModel_CheckIfPrimeMerge = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimecbaPrintIsPrime_NewModel_CheckIfPrimeActivityFinal3_guard_LiteralBoolean = nullptr;
uml::LiteralBoolean* cF_NewModel_CheckIfPrimenext_call_NewModel_CheckIfPrimecoaIsNotFinished_guard_LiteralBoolean = nullptr;
uml::CallBehaviorAction* newModel_CheckIfPrimecbaPrintNotPrime2 = nullptr;
uml::FunctionBehavior* newModel_PrimeChecker_divides = nullptr;
uml::ObjectFlow* oF_NewModel_CheckIfPrimeFork1_coaDividestarget = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimedivides_NewModel_CheckIfPrimenext_call = nullptr;
uml::FunctionBehavior* newModel_PrimeChecker_next = nullptr;
uml::InputPin* coaIsOddtarget = nullptr;
uml::Parameter* newModel_CheckIfPrime_NewModel_CheckIfPrime_ActInputNode = nullptr;
uml::LiteralString* newModel_PrimeChecker_divides_isDivisible_defaultValue_LiteralString = nullptr;
uml::LiteralString* newModel_PrimeChecker_isOdd_isOdd_defaultValue_LiteralString = nullptr;
uml::CallOperationAction* newModel_CheckIfPrimecoaNext = nullptr;
uml::InputPin* coaDividestarget = nullptr;
uml::ActivityParameterNode* newModel_CheckIfPrimeprimeChecker = nullptr;
uml::ActivityFinalNode* newModel_CheckIfPrimeActivityFinal2 = nullptr;
uml::CallOperationAction* newModel_CheckIfPrimenext_call = nullptr;
uml::ControlFlow* cF_NewModel_CheckIfPrimeMerge_NewModel_CheckIfPrimecoaDivides = nullptr;
uml::Property* newModel_PrimeChecker_number = nullptr;
uml::ActivityFinalNode* newModel_CheckIfPrimeActivityFinal3 = nullptr;



private:
 static bool isInited;
	void initMetaModel();
private:
 static NewModelPackage* create();
 virtual void init();

private:
 bool isInitialized = false;
public:
 void initializePackageContents();

private:
 bool isCreated = false;
public:
 void createPackageContents();



};

} 



#endif /* end of include guard: NEWMODEL_METAMODELPACKAGEIMPL_HPP */

