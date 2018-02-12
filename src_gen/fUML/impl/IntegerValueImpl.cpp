#include "fUML/impl/IntegerValueImpl.hpp"
#include <iostream>
#include <cassert>

#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "fUML/impl/FUMLPackageImpl.hpp"
#include "fuml/FUMLFactory.hpp"
#include "uml/UmlFactory.hpp"
#include "uml/Literalinteger.hpp"
#include <cstdio>
#include "uml/Type.hpp"
#include "uml/PrimitiveType.hpp"

//Forward declaration includes
#include "uml/PrimitiveType.hpp"

#include "fUML/PrimitiveValue.hpp"

#include "fUML/Value.hpp"

#include "uml/ValueSpecification.hpp"


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
IntegerValueImpl::IntegerValueImpl()
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

IntegerValueImpl::~IntegerValueImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete IntegerValue "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




IntegerValueImpl::IntegerValueImpl(const IntegerValueImpl & obj):IntegerValueImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy IntegerValue "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_value = obj.getValue();

	//copy references with no containment (soft copy)
	
	m_type  = obj.getType();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  IntegerValueImpl::copy() const
{
	std::shared_ptr<ecore::EObject> element(new IntegerValueImpl(*this));
	return element;
}

std::shared_ptr<ecore::EClass> IntegerValueImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getIntegerValue_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void IntegerValueImpl::setValue(int _value)
{
	m_value = _value;
} 

int IntegerValueImpl::getValue() const 
{
	return m_value;
}

//*********************************
// Operations
//*********************************
bool IntegerValueImpl::equals(std::shared_ptr<fUML::Value>  otherValue) 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
		bool isEqual = false;


    if(otherValue != nullptr && otherValue->eClass()->getClassifierID() == fUML::FUMLPackage::INTEGERVALUE_ECLASS)
    {
		std::shared_ptr<IntegerValue> otherIntegerValue = std::dynamic_pointer_cast<IntegerValue>(otherValue);
        isEqual = (otherIntegerValue->getValue() == this->getValue());
    }

    return isEqual;
	//end of body
}

std::shared_ptr<uml::ValueSpecification> IntegerValueImpl::specify() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<uml::LiteralInteger> literal = uml::UmlFactory::eInstance()->createLiteralInteger_in_Namespace(std::shared_ptr<uml::Classifier>());

    literal->setType(this->getType());
    literal->setValue(this->getValue());

    return literal;
	//end of body
}

std::string IntegerValueImpl::toString() 
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	    char buf [11];
    std::sprintf(buf, "%d", this->getValue());
    return std::string(buf);
	//end of body
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


std::shared_ptr<ecore::EObject> IntegerValueImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any IntegerValueImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::PRIMITIVEVALUE_EREFERENCE_TYPE:
			return getType(); //180
		case FUMLPackage::INTEGERVALUE_EATTRIBUTE_VALUE:
			return getValue(); //181
	}
	return boost::any();
}

void IntegerValueImpl::eSet(int featureID, boost::any newValue)
{
	switch(featureID)
	{
		case FUMLPackage::PRIMITIVEVALUE_EREFERENCE_TYPE:
		{
			// BOOST CAST
			std::shared_ptr<uml::PrimitiveType> _type = boost::any_cast<std::shared_ptr<uml::PrimitiveType>>(newValue);
			setType(_type); //180
			break;
		}
		case FUMLPackage::INTEGERVALUE_EATTRIBUTE_VALUE:
		{
			// BOOST CAST
			int _value = boost::any_cast<int>(newValue);
			setValue(_value); //181
			break;
		}
	}
}
