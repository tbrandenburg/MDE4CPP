#include "ExecutionSpecificationImpl.hpp"
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

#include "GeneralOrdering.hpp"

#include "Interaction.hpp"

#include "InteractionFragment.hpp"

#include "InteractionOperand.hpp"

#include "Lifeline.hpp"

#include "Namespace.hpp"

#include "OccurrenceSpecification.hpp"

#include "StringExpression.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
ExecutionSpecificationImpl::ExecutionSpecificationImpl()
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

ExecutionSpecificationImpl::~ExecutionSpecificationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ExecutionSpecification "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ExecutionSpecificationImpl::ExecutionSpecificationImpl(const ExecutionSpecificationImpl & obj):ExecutionSpecificationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ExecutionSpecification "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
		std::shared_ptr< Bag<uml::Dependency> >
	 _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new 	 Bag<uml::Dependency> 
	(*(obj.getClientDependency().get())));

		std::shared_ptr< Bag<uml::Lifeline> >
	 _covered = obj.getCovered();
	m_covered.reset(new 	 Bag<uml::Lifeline> 
	(*(obj.getCovered().get())));

	m_finish  = obj.getFinish();

			std::shared_ptr<Union<uml::Element> > _ownedElement = obj.getOwnedElement();
	m_ownedElement.reset(new 		Union<uml::Element> (*(obj.getOwnedElement().get())));

	m_owner  = obj.getOwner();

	m_start  = obj.getStart();


    
	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	if(obj.getEnclosingInteraction()!=nullptr)
	{
		m_enclosingInteraction.reset(dynamic_cast<uml::Interaction*>(obj.getEnclosingInteraction()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_enclosingInteraction" << std::endl;
	#endif
	if(obj.getEnclosingOperand()!=nullptr)
	{
		m_enclosingOperand.reset(dynamic_cast<uml::InteractionOperand*>(obj.getEnclosingOperand()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_enclosingOperand" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::GeneralOrdering>> _generalOrderingList = obj.getGeneralOrdering();
	for(std::shared_ptr<uml::GeneralOrdering> _generalOrdering : *_generalOrderingList)
	{
		this->getGeneralOrdering()->add(std::shared_ptr<uml::GeneralOrdering>(dynamic_cast<uml::GeneralOrdering*>(_generalOrdering->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_generalOrdering" << std::endl;
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

ecore::EObject *  ExecutionSpecificationImpl::copy() const
{
	return new ExecutionSpecificationImpl(*this);
}

std::shared_ptr<ecore::EClass> ExecutionSpecificationImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getExecutionSpecification();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool
 ExecutionSpecificationImpl::same_lifeline(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::OccurrenceSpecification > ExecutionSpecificationImpl::getFinish() const
{
//assert(m_finish);
    return m_finish;
}
void ExecutionSpecificationImpl::setFinish(std::shared_ptr<uml::OccurrenceSpecification> _finish)
{
    m_finish = _finish;
}

std::shared_ptr<uml::OccurrenceSpecification > ExecutionSpecificationImpl::getStart() const
{
//assert(m_start);
    return m_start;
}
void ExecutionSpecificationImpl::setStart(std::shared_ptr<uml::OccurrenceSpecification> _start)
{
    m_start = _start;
}

//*********************************
// Union Getter
//*********************************
		std::shared_ptr<Union<uml::Element> > ExecutionSpecificationImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::shared_ptr<uml::Element > ExecutionSpecificationImpl::getOwner() const
{
	return m_owner;
}
std::shared_ptr<uml::Namespace > ExecutionSpecificationImpl::getNamespace() const
{
	return m_namespace;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ExecutionSpecificationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //2264
		case UmlPackage::INTERACTIONFRAGMENT_COVERED:
			return getCovered(); //22610
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //2260
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGINTERACTION:
			return getEnclosingInteraction(); //22612
		case UmlPackage::INTERACTIONFRAGMENT_ENCLOSINGOPERAND:
			return getEnclosingOperand(); //22611
		case UmlPackage::EXECUTIONSPECIFICATION_FINISH:
			return getFinish(); //22614
		case UmlPackage::INTERACTIONFRAGMENT_GENERALORDERING:
			return getGeneralOrdering(); //22613
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //2265
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //2266
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //2267
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //2261
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //2262
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //2263
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //2268
		case UmlPackage::EXECUTIONSPECIFICATION_START:
			return getStart(); //22615
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //2269
	}
	return boost::any();
}
