#include "fUML/impl/LiteralUnlimitedNaturalEvaluationImpl.hpp"

#ifdef NDEBUG
	#define DEBUG_MESSAGE(a) /**/
#else
	#define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <cassert>
#include <iostream>
#include <sstream>


#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "fUML/impl/FUMLPackageImpl.hpp"
#include "fUML/UnlimitedNaturalValue.hpp"
#include "fUML/FUMLFactory.hpp"
#include "uml/LiteralUnlimitedNatural.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "fUML/FUMLFactory.hpp"
#include "fUML/FUMLPackage.hpp"
#include <exception> // used in Persistence

#include "fUML/LiteralEvaluation.hpp"

#include "fUML/Locus.hpp"

#include "fUML/Value.hpp"

#include "uml/ValueSpecification.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "fUML/FUMLPackage.hpp"
#include "fUML/FUMLFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
LiteralUnlimitedNaturalEvaluationImpl::LiteralUnlimitedNaturalEvaluationImpl()
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

LiteralUnlimitedNaturalEvaluationImpl::~LiteralUnlimitedNaturalEvaluationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete LiteralUnlimitedNaturalEvaluation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




LiteralUnlimitedNaturalEvaluationImpl::LiteralUnlimitedNaturalEvaluationImpl(const LiteralUnlimitedNaturalEvaluationImpl & obj):LiteralUnlimitedNaturalEvaluationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy LiteralUnlimitedNaturalEvaluation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_locus  = obj.getLocus();

	m_specification  = obj.getSpecification();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  LiteralUnlimitedNaturalEvaluationImpl::copy() const
{
	std::shared_ptr<LiteralUnlimitedNaturalEvaluationImpl> element(new LiteralUnlimitedNaturalEvaluationImpl(*this));
	element->setThisLiteralUnlimitedNaturalEvaluationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> LiteralUnlimitedNaturalEvaluationImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getLiteralUnlimitedNaturalEvaluation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<fUML::Value> LiteralUnlimitedNaturalEvaluationImpl::evaluate()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<uml::LiteralUnlimitedNatural> literal = std::dynamic_pointer_cast<uml::LiteralUnlimitedNatural>(getSpecification());
	std::shared_ptr<UnlimitedNaturalValue> unlimitedNaturalValue(FUMLFactory::eInstance()->createUnlimitedNaturalValue());
    unlimitedNaturalValue->setType(this->getType("UnlimitedNatural"));
    unlimitedNaturalValue->setValue(literal->getValue());
    return unlimitedNaturalValue;
	//end of body
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


std::shared_ptr<LiteralUnlimitedNaturalEvaluation> LiteralUnlimitedNaturalEvaluationImpl::getThisLiteralUnlimitedNaturalEvaluationPtr() const
{
	return m_thisLiteralUnlimitedNaturalEvaluationPtr.lock();
}
void LiteralUnlimitedNaturalEvaluationImpl::setThisLiteralUnlimitedNaturalEvaluationPtr(std::weak_ptr<LiteralUnlimitedNaturalEvaluation> thisLiteralUnlimitedNaturalEvaluationPtr)
{
	m_thisLiteralUnlimitedNaturalEvaluationPtr = thisLiteralUnlimitedNaturalEvaluationPtr;
	setThisLiteralEvaluationPtr(thisLiteralUnlimitedNaturalEvaluationPtr);
}
std::shared_ptr<ecore::EObject> LiteralUnlimitedNaturalEvaluationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any LiteralUnlimitedNaturalEvaluationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return LiteralEvaluationImpl::eGet(featureID, resolve, coreType);
}
bool LiteralUnlimitedNaturalEvaluationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return LiteralEvaluationImpl::internalEIsSet(featureID);
}
bool LiteralUnlimitedNaturalEvaluationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return LiteralEvaluationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void LiteralUnlimitedNaturalEvaluationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get FUMLFactory
	std::shared_ptr<fUML::FUMLFactory> modelFactory = fUML::FUMLFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void LiteralUnlimitedNaturalEvaluationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	LiteralEvaluationImpl::loadAttributes(loadHandler, attr_list);
}

void LiteralUnlimitedNaturalEvaluationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory)
{


	LiteralEvaluationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void LiteralUnlimitedNaturalEvaluationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	LiteralEvaluationImpl::resolveReferences(featureID, references);
}

void LiteralUnlimitedNaturalEvaluationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	LiteralEvaluationImpl::saveContent(saveHandler);
	
	EvaluationImpl::saveContent(saveHandler);
	
	SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
}

void LiteralUnlimitedNaturalEvaluationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<fUML::FUMLPackage> package = fUML::FUMLPackage::eInstance();

	

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

