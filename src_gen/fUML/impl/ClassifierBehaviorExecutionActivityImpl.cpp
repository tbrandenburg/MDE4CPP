#include "fUML/impl/ClassifierBehaviorExecutionActivityImpl.hpp"
#include <iostream>
#include <cassert>

#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "fUML/impl/FUMLPackageImpl.hpp"

//Forward declaration includes


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ClassifierBehaviorExecutionActivityImpl::ClassifierBehaviorExecutionActivityImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References

	//Init references
}

ClassifierBehaviorExecutionActivityImpl::~ClassifierBehaviorExecutionActivityImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ClassifierBehaviorExecutionActivity "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




ClassifierBehaviorExecutionActivityImpl::ClassifierBehaviorExecutionActivityImpl(const ClassifierBehaviorExecutionActivityImpl & obj):ClassifierBehaviorExecutionActivityImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ClassifierBehaviorExecutionActivity "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  ClassifierBehaviorExecutionActivityImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new ClassifierBehaviorExecutionActivityImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> ClassifierBehaviorExecutionActivityImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getClassifierBehaviorExecutionActivity_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


std::shared_ptr<ecore::EObject> ClassifierBehaviorExecutionActivityImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ClassifierBehaviorExecutionActivityImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return boost::any();
}

void ClassifierBehaviorExecutionActivityImpl::eSet(int featureID, boost::any newValue)
{
	switch(featureID)
	{
	}
}
