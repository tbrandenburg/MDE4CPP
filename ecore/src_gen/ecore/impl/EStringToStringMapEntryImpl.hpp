//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ESTRINGTOSTRINGMAPENTRYESTRINGTOSTRINGMAPENTRYIMPL_HPP
#define ECORE_ESTRINGTOSTRINGMAPENTRYESTRINGTOSTRINGMAPENTRYIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../EStringToStringMapEntry.hpp"

#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace ecore 
{
	class EStringToStringMapEntryImpl :virtual public EObjectImpl, virtual public EStringToStringMapEntry 
	{
		public: 
			EStringToStringMapEntryImpl(const EStringToStringMapEntryImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EStringToStringMapEntryImpl& operator=(EStringToStringMapEntryImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EStringToStringMapEntryImpl();



		public:
			//destructor
			virtual ~EStringToStringMapEntryImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getKey() const ;
			
			/*!
			 */ 
			virtual void setKey (std::string _key); 
			
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
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_ESTRINGTOSTRINGMAPENTRYESTRINGTOSTRINGMAPENTRYIMPL_HPP */
