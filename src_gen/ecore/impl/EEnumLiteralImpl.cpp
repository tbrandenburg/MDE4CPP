#include "EEnumLiteralImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "ecorePackageImpl.hpp"

using namespace ecore;

//*********************************
// Constructor / Destructor
//*********************************
EEnumLiteralImpl::EEnumLiteralImpl()
{
	//*********************************
	// Reference Members
	//*********************************
	
}

EEnumLiteralImpl::~EEnumLiteralImpl()
{
	
}

EEnumLiteralImpl::EEnumLiteralImpl(const EEnumLiteralImpl & obj)
{
	//create copy of all Attributes
	m_instance = obj.getInstance();
	m_literal = obj.getLiteral();
	m_name = obj.getName();
	m_value = obj.getValue();

	//copy references with now containment
	
	m_eEnum  = obj.getEEnum();


	//clone containt lists
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *obj.getEAnnotations())
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
}

ecore::EObject *  EEnumLiteralImpl::copy() const
{
	return new EEnumLiteralImpl(*this);
}

std::shared_ptr<EClass> EEnumLiteralImpl::eStaticClass() const
{
	return EcorePackageImpl::eInstance()->getEEnumLiteral();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void EEnumLiteralImpl::setInstance (boost::any _instance)
{
	m_instance = _instance;
} 

boost::any EEnumLiteralImpl::getInstance() const 
{
	return m_instance;
}

void EEnumLiteralImpl::setLiteral (std::string _literal)
{
	m_literal = _literal;
} 

std::string EEnumLiteralImpl::getLiteral() const 
{
	return m_literal;
}

void EEnumLiteralImpl::setValue (int _value)
{
	m_value = _value;
} 

int EEnumLiteralImpl::getValue() const 
{
	return m_value;
}

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr< ecore::EEnum >  EEnumLiteralImpl::getEEnum() const
{

    return m_eEnum;
}


//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any EEnumLiteralImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //60
		case EcorePackage::EENUMLITERAL_EENUM:
			return getEEnum(); //65
		case EcorePackage::EENUMLITERAL_INSTANCE:
			return getInstance(); //63
		case EcorePackage::EENUMLITERAL_LITERAL:
			return getLiteral(); //64
		case EcorePackage::ENAMEDELEMENT_NAME:
			return getName(); //61
		case EcorePackage::EENUMLITERAL_VALUE:
			return getValue(); //62
	}
	return boost::any();
}
