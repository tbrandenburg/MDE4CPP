#include "NamedElementImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

//Forward declaration includes
#include "Comment.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "NamedElement.hpp"

#include "Namespace.hpp"

#include "Package.hpp"

#include "StringExpression.hpp"

#include "Usage.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
NamedElementImpl::NamedElementImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	
	
	//*********************************
	// Reference Members
	//*********************************
	//References
		m_clientDependency.reset(new Bag<uml::Dependency>());
	
	

	

	

	//Init references
	
	

	

	
}

NamedElementImpl::~NamedElementImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete NamedElement "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

NamedElementImpl::NamedElementImpl(const NamedElementImpl & obj):NamedElementImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy NamedElement "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
		std::shared_ptr< Bag<uml::Dependency> >
	 _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new 	 Bag<uml::Dependency> 
	(*(obj.getClientDependency().get())));

			std::shared_ptr<Union<uml::Element> > _ownedElement = obj.getOwnedElement();
	m_ownedElement.reset(new 		Union<uml::Element> (*(obj.getOwnedElement().get())));

	m_owner  = obj.getOwner();


    
	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif

	

}

ecore::EObject *  NamedElementImpl::copy() const
{
	return new NamedElementImpl(*this);
}

std::shared_ptr<ecore::EClass> NamedElementImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getNamedElement();
}

//*********************************
// Attribute Setter Gettter
//*********************************
void NamedElementImpl::setName (std::string _name)
{
	m_name = _name;
} 

std::string NamedElementImpl::getName() const 
{
	return m_name;
}



std::string NamedElementImpl::getQualifiedName() const 
{
	return m_qualifiedName;
}

void NamedElementImpl::setVisibility (VisibilityKind _visibility)
{
	m_visibility = _visibility;
} 

VisibilityKind NamedElementImpl::getVisibility() const 
{
	return m_visibility;
}

//*********************************
// Operations
//*********************************
std::shared_ptr<Bag<uml::Namespace> >
 NamedElementImpl::allNamespaces() 
{
	//generated from body annotation
	std::shared_ptr<Bag<uml::Namespace> > allNS(new Bag<uml::Namespace>());
    if (getNamespace()==nullptr)
    {
        return allNS;
    }
    else
    {
    	std::shared_ptr<Bag<uml::Namespace> > currentNSList = getNamespace()->allNamespaces();
        allNS->insert(allNS->end(), currentNSList->begin(), currentNSList->end());
        currentNSList = nullptr;

        std::shared_ptr<uml::Namespace> currentNS = getNamespace();
        if (currentNS != nullptr)
        {
            allNS->push_back(currentNS);
        }
        return allNS;
    }
}

std::shared_ptr<Bag<uml::Package> >
 NamedElementImpl::allOwningPackages() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<uml::Dependency> 
 NamedElementImpl::createDependency(std::shared_ptr<uml::NamedElement>  supplier) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<uml::Usage> 
 NamedElementImpl::createUsage(std::shared_ptr<uml::NamedElement>  supplier) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<uml::Dependency> >
 NamedElementImpl::getClientDependencies() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::string
 NamedElementImpl::getLabel() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::string
 NamedElementImpl::getLabel(bool localize) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



std::string
 NamedElementImpl::getQualifiedName() 
{
	//generated from body annotation
	std::shared_ptr< Bag<uml::Namespace> >  allNS = allNamespaces();

    if(!this->getName().empty() && std::none_of(allNS->cbegin(), allNS->cend(), [](std::shared_ptr<uml::Namespace> ns){ return ns->getName().empty(); }))
    {
        std::string ret;
        for(std::shared_ptr<uml::Namespace> ns : *allNS )
        {
            ret = ns->getName() + separator() + ret;
        }
        ret += getName();
        return ret;
    }
    else
    {
        return std::string();
    }
}

bool
 NamedElementImpl::has_no_qualified_name(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool
 NamedElementImpl::has_qualified_name(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool
 NamedElementImpl::isDistinguishableFrom(std::shared_ptr<uml::NamedElement>  n,std::shared_ptr<uml::Namespace>  ns) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::string
 NamedElementImpl::separator() 
{
	//generated from body annotation
	return "::";
}

bool
 NamedElementImpl::visibility_needs_ownership(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
	std::shared_ptr< Bag<uml::Dependency> >
 NamedElementImpl::getClientDependency() const
{

    return m_clientDependency;
}


std::shared_ptr<uml::StringExpression > NamedElementImpl::getNameExpression() const
{

    return m_nameExpression;
}
void NamedElementImpl::setNameExpression(std::shared_ptr<uml::StringExpression> _nameExpression)
{
    m_nameExpression = _nameExpression;
}




//*********************************
// Union Getter
//*********************************
std::shared_ptr<uml::Element > NamedElementImpl::getOwner() const
{
	return m_owner;
}
		std::shared_ptr<Union<uml::Element> > NamedElementImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::shared_ptr<uml::Namespace > NamedElementImpl::getNamespace() const
{
	return m_namespace;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any NamedElementImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //74
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //70
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //75
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //76
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //77
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //71
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //72
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //73
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //78
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //79
	}
	return boost::any();
}
