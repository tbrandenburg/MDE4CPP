//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_FORKNODEFORKNODEIMPL_HPP
#define UML_FORKNODEFORKNODEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ForkNode.hpp"

#include "uml/impl/ControlNodeImpl.hpp"

//*********************************
namespace uml 
{
	class ForkNodeImpl :virtual public ControlNodeImpl, virtual public ForkNode 
	{
		public: 
			ForkNodeImpl(const ForkNodeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ForkNodeImpl& operator=(ForkNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ForkNodeImpl();
			virtual std::shared_ptr<ForkNode> getThisForkNodePtr() const;
			virtual void setThisForkNodePtr(std::weak_ptr<ForkNode> thisForkNodePtr);

			//Additional constructors for the containments back reference
			ForkNodeImpl(std::weak_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ForkNodeImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			ForkNodeImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ForkNodeImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~ForkNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The ActivityEdges incoming to and outgoing from a ForkNode must be either all ObjectFlows or all ControlFlows.
			let allEdges : Set(ActivityEdge) = incoming->union(outgoing) in
			allEdges->forAll(oclIsKindOf(ControlFlow)) or allEdges->forAll(oclIsKindOf(ObjectFlow)) */ 
			virtual bool edges(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 A ForkNode has one incoming ActivityEdge.
			incoming->size()=1 */ 
			virtual bool one_incoming_edge(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ForkNode> m_thisForkNodePtr;
	};
}
#endif /* end of include guard: UML_FORKNODEFORKNODEIMPL_HPP */
