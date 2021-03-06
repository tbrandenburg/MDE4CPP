#include "ecore/impl/EGenericTypeImpl.hpp"

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

#include "abstractDataTypes/Bag.hpp"

#include "abstractDataTypes/Any.hpp"
#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "ecore/impl/EcorePackageImpl.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "ecore/EcoreFactory.hpp"
#include "ecore/EcorePackage.hpp"
#include <exception> // used in Persistence

#include "ecore/EClassifier.hpp"

#include "ecore/EGenericType.hpp"

#include "ecore/ETypeParameter.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ecore;

//*********************************
// Constructor / Destructor
//*********************************
EGenericTypeImpl::EGenericTypeImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	

	

		m_eTypeArguments.reset(new Bag<ecore::EGenericType>());
	
	

	

	

	//Init references
	

	

	

	
	

	

	
}

EGenericTypeImpl::~EGenericTypeImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete EGenericType "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




EGenericTypeImpl::EGenericTypeImpl(const EGenericTypeImpl & obj):EGenericTypeImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy EGenericType "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_eClassifier  = obj.getEClassifier();

	m_eRawType  = obj.getERawType();

	m_eTypeParameter  = obj.getETypeParameter();


	//Clone references with containment (deep copy)

	if(obj.getELowerBound()!=nullptr)
	{
		m_eLowerBound = std::dynamic_pointer_cast<ecore::EGenericType>(obj.getELowerBound()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eLowerBound" << std::endl;
	#endif
	std::shared_ptr<Bag<ecore::EGenericType>> _eTypeArgumentsList = obj.getETypeArguments();
	for(std::shared_ptr<ecore::EGenericType> _eTypeArguments : *_eTypeArgumentsList)
	{
		this->getETypeArguments()->add(std::shared_ptr<ecore::EGenericType>(std::dynamic_pointer_cast<ecore::EGenericType>(_eTypeArguments->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eTypeArguments" << std::endl;
	#endif
	if(obj.getEUpperBound()!=nullptr)
	{
		m_eUpperBound = std::dynamic_pointer_cast<ecore::EGenericType>(obj.getEUpperBound()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eUpperBound" << std::endl;
	#endif

	

	
	

	
}

std::shared_ptr<ecore::EObject>  EGenericTypeImpl::copy() const
{
	std::shared_ptr<EGenericTypeImpl> element(new EGenericTypeImpl(*this));
	element->setThisEGenericTypePtr(element);
	return element;
}

std::shared_ptr<EClass> EGenericTypeImpl::eStaticClass() const
{
	return EcorePackageImpl::eInstance()->getEGenericType_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool EGenericTypeImpl::isInstance(Any object) const
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<ecore::EClassifier > EGenericTypeImpl::getEClassifier() const
{

    return m_eClassifier;
}
void EGenericTypeImpl::setEClassifier(std::shared_ptr<ecore::EClassifier> _eClassifier)
{
    m_eClassifier = _eClassifier;
}

std::shared_ptr<ecore::EGenericType > EGenericTypeImpl::getELowerBound() const
{

    return m_eLowerBound;
}
void EGenericTypeImpl::setELowerBound(std::shared_ptr<ecore::EGenericType> _eLowerBound)
{
    m_eLowerBound = _eLowerBound;
}

std::shared_ptr<ecore::EClassifier > EGenericTypeImpl::getERawType() const
{
//assert(m_eRawType);
    return m_eRawType;
}


std::shared_ptr<Bag<ecore::EGenericType>> EGenericTypeImpl::getETypeArguments() const
{

    return m_eTypeArguments;
}


std::shared_ptr<ecore::ETypeParameter > EGenericTypeImpl::getETypeParameter() const
{

    return m_eTypeParameter;
}
void EGenericTypeImpl::setETypeParameter(std::shared_ptr<ecore::ETypeParameter> _eTypeParameter)
{
    m_eTypeParameter = _eTypeParameter;
}

std::shared_ptr<ecore::EGenericType > EGenericTypeImpl::getEUpperBound() const
{

    return m_eUpperBound;
}
void EGenericTypeImpl::setEUpperBound(std::shared_ptr<ecore::EGenericType> _eUpperBound)
{
    m_eUpperBound = _eUpperBound;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<EGenericType> EGenericTypeImpl::getThisEGenericTypePtr() const
{
	return m_thisEGenericTypePtr.lock();
}
void EGenericTypeImpl::setThisEGenericTypePtr(std::weak_ptr<EGenericType> thisEGenericTypePtr)
{
	m_thisEGenericTypePtr = thisEGenericTypePtr;
}
std::shared_ptr<ecore::EObject> EGenericTypeImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any EGenericTypeImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case EcorePackage::EGENERICTYPE_EREFERENCE_ECLASSIFIER:
			return eAny(getEClassifier()); //505
		case EcorePackage::EGENERICTYPE_EREFERENCE_ELOWERBOUND:
			return eAny(getELowerBound()); //503
		case EcorePackage::EGENERICTYPE_EREFERENCE_ERAWTYPE:
			return eAny(getERawType()); //502
		case EcorePackage::EGENERICTYPE_EREFERENCE_ETYPEARGUMENTS:
			return eAny(getETypeArguments()); //501
		case EcorePackage::EGENERICTYPE_EREFERENCE_ETYPEPARAMETER:
			return eAny(getETypeParameter()); //504
		case EcorePackage::EGENERICTYPE_EREFERENCE_EUPPERBOUND:
			return eAny(getEUpperBound()); //500
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool EGenericTypeImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case EcorePackage::EGENERICTYPE_EREFERENCE_ECLASSIFIER:
			return getEClassifier() != nullptr; //505
		case EcorePackage::EGENERICTYPE_EREFERENCE_ELOWERBOUND:
			return getELowerBound() != nullptr; //503
		case EcorePackage::EGENERICTYPE_EREFERENCE_ERAWTYPE:
			return getERawType() != nullptr; //502
		case EcorePackage::EGENERICTYPE_EREFERENCE_ETYPEARGUMENTS:
			return getETypeArguments() != nullptr; //501
		case EcorePackage::EGENERICTYPE_EREFERENCE_ETYPEPARAMETER:
			return getETypeParameter() != nullptr; //504
		case EcorePackage::EGENERICTYPE_EREFERENCE_EUPPERBOUND:
			return getEUpperBound() != nullptr; //500
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool EGenericTypeImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case EcorePackage::EGENERICTYPE_EREFERENCE_ECLASSIFIER:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EClassifier> _eClassifier = newValue->get<std::shared_ptr<ecore::EClassifier>>();
			setEClassifier(_eClassifier); //505
			return true;
		}
		case EcorePackage::EGENERICTYPE_EREFERENCE_ELOWERBOUND:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EGenericType> _eLowerBound = newValue->get<std::shared_ptr<ecore::EGenericType>>();
			setELowerBound(_eLowerBound); //503
			return true;
		}
		case EcorePackage::EGENERICTYPE_EREFERENCE_ETYPEPARAMETER:
		{
			// BOOST CAST
			std::shared_ptr<ecore::ETypeParameter> _eTypeParameter = newValue->get<std::shared_ptr<ecore::ETypeParameter>>();
			setETypeParameter(_eTypeParameter); //504
			return true;
		}
		case EcorePackage::EGENERICTYPE_EREFERENCE_EUPPERBOUND:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EGenericType> _eUpperBound = newValue->get<std::shared_ptr<ecore::EGenericType>>();
			setEUpperBound(_eUpperBound); //500
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void EGenericTypeImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get EcoreFactory
	std::shared_ptr<ecore::EcoreFactory> modelFactory = ecore::EcoreFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void EGenericTypeImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("eClassifier");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("eClassifier")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("eTypeParameter");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("eTypeParameter")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void EGenericTypeImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<ecore::EcoreFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("eLowerBound") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "EGenericType";
			}
			std::shared_ptr<ecore::EGenericType> eLowerBound = std::dynamic_pointer_cast<ecore::EGenericType>(modelFactory->create(typeName));
			if (eLowerBound != nullptr)
			{
				this->setELowerBound(eLowerBound);
				loadHandler->handleChild(eLowerBound);
			}
			return;
		}

		if ( nodeName.compare("eTypeArguments") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "EGenericType";
			}
			std::shared_ptr<ecore::EGenericType> eTypeArguments = std::dynamic_pointer_cast<ecore::EGenericType>(modelFactory->create(typeName));
			if (eTypeArguments != nullptr)
			{
				std::shared_ptr<Bag<ecore::EGenericType>> list_eTypeArguments = this->getETypeArguments();
				list_eTypeArguments->push_back(eTypeArguments);
				loadHandler->handleChild(eTypeArguments);
			}
			return;
		}

		if ( nodeName.compare("eUpperBound") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "EGenericType";
			}
			std::shared_ptr<ecore::EGenericType> eUpperBound = std::dynamic_pointer_cast<ecore::EGenericType>(modelFactory->create(typeName));
			if (eUpperBound != nullptr)
			{
				this->setEUpperBound(eUpperBound);
				loadHandler->handleChild(eUpperBound);
			}
			return;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void EGenericTypeImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references)
{
	switch(featureID)
	{
		case EcorePackage::EGENERICTYPE_EREFERENCE_ECLASSIFIER:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ecore::EClassifier> _eClassifier = std::dynamic_pointer_cast<ecore::EClassifier>( references.front() );
				setEClassifier(_eClassifier);
			}
			
			return;
		}

		case EcorePackage::EGENERICTYPE_EREFERENCE_ETYPEPARAMETER:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ecore::ETypeParameter> _eTypeParameter = std::dynamic_pointer_cast<ecore::ETypeParameter>( references.front() );
				setETypeParameter(_eTypeParameter);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void EGenericTypeImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void EGenericTypeImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ecore::EcorePackage> package = ecore::EcorePackage::eInstance();

	

		// Add references
		saveHandler->addReference("eClassifier", this->getEClassifier());
		saveHandler->addReference("eTypeParameter", this->getETypeParameter());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<EClass> metaClass = this->eClass();
		// Save 'eLowerBound'
		std::shared_ptr<ecore::EGenericType > eLowerBound = this->getELowerBound();
		if (eLowerBound != nullptr)
		{
			saveHandler->addReference(eLowerBound, "eLowerBound", eLowerBound->eClass() != package->getEGenericType_EClass());
		}

		// Save 'eTypeArguments'
		std::shared_ptr<Bag<ecore::EGenericType>> list_eTypeArguments = this->getETypeArguments();
		for (std::shared_ptr<ecore::EGenericType> eTypeArguments : *list_eTypeArguments) 
		{
			saveHandler->addReference(eTypeArguments, "eTypeArguments", eTypeArguments->eClass() != package->getEGenericType_EClass());
		}

		// Save 'eUpperBound'
		std::shared_ptr<ecore::EGenericType > eUpperBound = this->getEUpperBound();
		if (eUpperBound != nullptr)
		{
			saveHandler->addReference(eUpperBound, "eUpperBound", eUpperBound->eClass() != package->getEGenericType_EClass());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

