#include "fUML/impl/EventDispatchLoopImpl.hpp"
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
EventDispatchLoopImpl::EventDispatchLoopImpl()
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

EventDispatchLoopImpl::~EventDispatchLoopImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete EventDispatchLoop "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




EventDispatchLoopImpl::EventDispatchLoopImpl(const EventDispatchLoopImpl & obj):EventDispatchLoopImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy EventDispatchLoop "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  EventDispatchLoopImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new EventDispatchLoopImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> EventDispatchLoopImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getEventDispatchLoop_EClass();
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


std::shared_ptr<ecore::EObject> EventDispatchLoopImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any EventDispatchLoopImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return boost::any();
}

void EventDispatchLoopImpl::eSet(int featureID, boost::any newValue)
{
	switch(featureID)
	{
	}
}
