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

#include <string>
#include <map>
#include <vector>
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
	class EClassifier:virtual public ENamedElement	{
		public:
 			EClassifier(const EClassifier &) {}
			EClassifier& operator=(EClassifier const&) = delete;
	
		protected:
			EClassifier(){}

		public:
			virtual ecore::EObject* copy() const = 0;

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
			virtual std::string getInstanceClassName() const = 0;
			
			/*!
			 */ 
			virtual void setInstanceClassName (std::string _instanceClassName)= 0; 
			
			/*!
			 */ 
			virtual void *  getInstanceClass() const = 0;
			
			/*!
			 */ 
			virtual void setInstanceClass (void *  _instanceClass)= 0; 
			
			/*!
			 */ 
			virtual boost::any getDefaultValue() const = 0;
			
			/*!
			 */ 
			virtual int getClassifierID() const = 0;
			
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
			virtual std::shared_ptr< ecore::EPackage >  getEPackage() const = 0;
			
			/*!
			 */
			virtual void setEPackage(std::shared_ptr<ecore::EPackage> _ePackage) = 0;
			/*!
			 */
			virtual std::shared_ptr< std::vector<std::shared_ptr<ecore::ETypeParameter> > > getETypeParameters() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			std::string m_instanceClassName ;
			/*!
			 */ 
			void *  m_instanceClass ;
			/*!
			 */ 
			boost::any m_defaultValue ;
			/*!
			 */ 
			int m_classifierID =  -1;
			/*!
			 */ 
			std::string m_instanceTypeName ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr< ecore::EPackage >  m_ePackage;
			/*!
			 */
			std::shared_ptr< std::vector<std::shared_ptr<ecore::ETypeParameter> > > m_eTypeParameters;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: ECORE_ECLASSIFIER_HPP */

