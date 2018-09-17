//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_OBJECTTOKENOBJECTTOKENIMPL_HPP
#define FUML_OBJECTTOKENOBJECTTOKENIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ObjectToken.hpp"

#include "fUML/impl/TokenImpl.hpp"

//*********************************
namespace fUML 
{
	class ObjectTokenImpl :virtual public TokenImpl, virtual public ObjectToken 
	{
		public: 
			ObjectTokenImpl(const ObjectTokenImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ObjectTokenImpl& operator=(ObjectTokenImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ObjectTokenImpl();
			virtual std::shared_ptr<ObjectToken> getThisObjectTokenPtr() const;
			virtual void setThisObjectTokenPtr(std::weak_ptr<ObjectToken> thisObjectTokenPtr);



		public:
			//destructor
			virtual ~ObjectTokenImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Token>  other) ;
			
			/*!
			 */ 
			virtual bool isControl() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Value > getValue() const ;
			
			/*!
			 */
			virtual void setValue(std::shared_ptr<fUML::Value> _value_value) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ObjectToken> m_thisObjectTokenPtr;
	};
}
#endif /* end of include guard: FUML_OBJECTTOKENOBJECTTOKENIMPL_HPP */
