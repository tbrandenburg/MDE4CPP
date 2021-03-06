//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STRINGVALUESTRINGVALUEIMPL_HPP
#define FUML_STRINGVALUESTRINGVALUEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StringValue.hpp"

#include "fUML/impl/PrimitiveValueImpl.hpp"

//*********************************
namespace fUML 
{
	class StringValueImpl :virtual public PrimitiveValueImpl, virtual public StringValue 
	{
		public: 
			StringValueImpl(const StringValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StringValueImpl& operator=(StringValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			StringValueImpl();
			virtual std::shared_ptr<StringValue> getThisStringValuePtr() const;
			virtual void setThisStringValuePtr(std::weak_ptr<StringValue> thisStringValuePtr);



		public:
			//destructor
			virtual ~StringValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Value>  otherValue) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify() ;
			
			/*!
			 */ 
			virtual std::string toString() ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getValue() const ;
			
			/*!
			 */ 
			virtual void setValue (std::string _value); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			std::weak_ptr<StringValue> m_thisStringValuePtr;
	};
}
#endif /* end of include guard: FUML_STRINGVALUESTRINGVALUEIMPL_HPP */
