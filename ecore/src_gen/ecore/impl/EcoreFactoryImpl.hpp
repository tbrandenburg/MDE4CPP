//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECOREFACTORYIMPL_HPP
#define ECOREFACTORYIMPL_HPP

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

#include "impl/EFactoryImpl.hpp"

#include "EAnnotationImpl.hpp"
#include "EAttributeImpl.hpp"
#include "EClassImpl.hpp"
#include "EClassifierImpl.hpp"
#include "EDataTypeImpl.hpp"
#include "EEnumImpl.hpp"
#include "EEnumLiteralImpl.hpp"
#include "EFactoryImpl.hpp"
#include "EGenericTypeImpl.hpp"
#include "EModelElementImpl.hpp"
#include "ENamedElementImpl.hpp"
#include "EObjectImpl.hpp"
#include "EOperationImpl.hpp"
#include "EPackageImpl.hpp"
#include "EParameterImpl.hpp"
#include "EReferenceImpl.hpp"
#include "EStringToStringMapEntryImpl.hpp"
#include "EStructuralFeatureImpl.hpp"
#include "ETypeParameterImpl.hpp"
#include "ETypedElementImpl.hpp"

#include "EcoreFactory.hpp"

namespace ecore 
{
	class EcoreFactoryImpl : virtual public EFactoryImpl , virtual public EcoreFactory 
	{
		private:    
			EcoreFactoryImpl(EcoreFactoryImpl const&) = delete;
			EcoreFactoryImpl& operator=(EcoreFactoryImpl const&) = delete;

		protected:
			friend class EcoreFactory;
			// Constructor
			EcoreFactoryImpl();

		public:
			virtual ~EcoreFactoryImpl();
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<EObject> create(std::shared_ptr<EClass> _class, std::shared_ptr<EObject> _container = nullptr) const;
			virtual std::shared_ptr<EObject> create(std::string _className) const;

			//Creator functions
			virtual std::shared_ptr<EAnnotation> createEAnnotation() const ;
			//Add containing object
			virtual std::shared_ptr<EAnnotation> createEAnnotation_in_EModelElement(std::weak_ptr<ecore::EModelElement > par_eModelElement) const ;
			
			virtual std::shared_ptr<EAttribute> createEAttribute() const ;
			//Add containing object
			virtual std::shared_ptr<EAttribute> createEAttribute_in_EContainingClass(std::weak_ptr<ecore::EClass > par_eContainingClass) const ;
			
			virtual std::shared_ptr<EClass> createEClass() const ;
			//Add containing object
			virtual std::shared_ptr<EClass> createEClass_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage) const ;
			
			virtual std::shared_ptr<EDataType> createEDataType() const ;
			//Add containing object
			virtual std::shared_ptr<EDataType> createEDataType_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage) const ;
			
			virtual std::shared_ptr<EEnum> createEEnum() const ;
			//Add containing object
			virtual std::shared_ptr<EEnum> createEEnum_in_EPackage(std::weak_ptr<ecore::EPackage > par_ePackage) const ;
			
			virtual std::shared_ptr<EEnumLiteral> createEEnumLiteral() const ;
			//Add containing object
			virtual std::shared_ptr<EEnumLiteral> createEEnumLiteral_in_EEnum(std::weak_ptr<ecore::EEnum > par_eEnum) const ;
			
			virtual std::shared_ptr<EFactory> createEFactory() const ;
			
			virtual std::shared_ptr<EGenericType> createEGenericType() const ;
			
			virtual std::shared_ptr<EObject> createEObject() const ;
			
			virtual std::shared_ptr<EOperation> createEOperation() const ;
			//Add containing object
			virtual std::shared_ptr<EOperation> createEOperation_in_EContainingClass(std::weak_ptr<ecore::EClass > par_eContainingClass) const ;
			
			virtual std::shared_ptr<EPackage> createEPackage() const ;
			//Add containing object
			virtual std::shared_ptr<EPackage> createEPackage_in_ESuperPackage(std::weak_ptr<ecore::EPackage > par_eSuperPackage) const ;
			
			virtual std::shared_ptr<EParameter> createEParameter() const ;
			//Add containing object
			virtual std::shared_ptr<EParameter> createEParameter_in_EOperation(std::weak_ptr<ecore::EOperation > par_eOperation) const ;
			
			virtual std::shared_ptr<EReference> createEReference() const ;
			//Add containing object
			virtual std::shared_ptr<EReference> createEReference_in_EContainingClass(std::weak_ptr<ecore::EClass > par_eContainingClass) const ;
			
			virtual std::shared_ptr<EStringToStringMapEntry> createEStringToStringMapEntry() const ;
			
			virtual std::shared_ptr<ETypeParameter> createETypeParameter() const ;
			
			

			//Package
			virtual std::shared_ptr<EcorePackage> getEcorePackage() const;

		private:
			static EcoreFactory* create();
            std::map<std::string,unsigned int> m_idMap;
			virtual void init() {}

	};
}
#endif /* end of include guard: ECOREFACTORYIMPL_HPP */
