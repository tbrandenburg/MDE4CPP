//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EENUMEENUMIMPL_HPP
#define ECORE_EENUMEENUMIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EEnum.hpp"

#include "ecore/impl/EDataTypeImpl.hpp"

//*********************************
namespace ecore 
{
	class EEnumImpl :virtual public EDataTypeImpl, virtual public EEnum 
	{
		public: 
			EEnumImpl(const EEnumImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EEnumImpl& operator=(EEnumImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EEnumImpl();
			virtual std::shared_ptr<EEnum> getThisEEnumPtr() const;
			virtual void setThisEEnumPtr(std::weak_ptr<EEnum> thisEEnumPtr);

			//Additional constructors for the containments back reference
			EEnumImpl(std::weak_ptr<ecore::EPackage > par_ePackage);




		public:
			//destructor
			virtual ~EEnumImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral> getEEnumLiteral(std::string name) const ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral> getEEnumLiteral(int value) const ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral> getEEnumLiteralByLiteral(std::string literal) const ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EEnumLiteral>> getELiterals() const ;
			
							
			
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
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<ecore::EcoreFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<EEnum> m_thisEEnumPtr;
	};
}
#endif /* end of include guard: ECORE_EENUMEENUMIMPL_HPP */