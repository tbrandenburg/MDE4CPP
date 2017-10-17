//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ECLASSIFIER_HPP
#define ECORE_ECLASSIFIER_HPP

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

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class ENamedElement;
}

namespace ecore 
{
	class EPackage;
}

namespace ecore 
{
	class ETypeParameter;
}

// base class includes
#include "ENamedElement.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EClassifier:virtual public ENamedElement
	{
		public:
 			EClassifier(const EClassifier &) {}
			EClassifier& operator=(EClassifier const&) = delete;

		protected:
			EClassifier(){}


			//Additional constructors for the containments back reference

			EClassifier(std::weak_ptr<ecore::EPackage > par_ePackage);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EClassifier() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool isInstance(boost::any object)  const  = 0;
			
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getClassifierID() const = 0;
			
			/*!
			 */ 
			virtual boost::any getDefaultValue() const = 0;
			
			/*!
			 */ 
			virtual void *  getInstanceClass() const = 0;
			
			/*!
			 */ 
			virtual void setInstanceClass (void *  _instanceClass)= 0; 
			
			/*!
			 */ 
			virtual std::string getInstanceClassName() const = 0;
			
			/*!
			 */ 
			virtual void setInstanceClassName (std::string _instanceClassName)= 0; 
			
			/*!
			 */ 
			virtual std::string getInstanceTypeName() const = 0;
			
			/*!
			 */ 
			virtual void setInstanceTypeName (std::string _instanceTypeName)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<ecore::EPackage > getEPackage() const = 0;
			
			/*!
			 */
			virtual void setEPackage(std::shared_ptr<ecore::EPackage> _ePackage_ePackage) = 0;
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::ETypeParameter> > getETypeParameters() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			int m_classifierID =  -1;
			/*!
			 */ 
			boost::any m_defaultValue ;
			/*!
			 */ 
			void *  m_instanceClass ;
			/*!
			 */ 
			std::string m_instanceClassName ;
			/*!
			 */ 
			std::string m_instanceTypeName ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<ecore::EPackage > m_ePackage;
			/*!
			 */
			std::shared_ptr< Bag<ecore::ETypeParameter> > m_eTypeParameters;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: ECORE_ECLASSIFIER_HPP */
