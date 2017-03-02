//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EENUM_HPP
#define ECORE_EENUM_HPP

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
	class EDataType;
}

namespace ecore 
{
	class EEnumLiteral;
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
#include "EDataType.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EEnum:virtual public EDataType	{
		public:
 			EEnum(const EEnum &) {}
			EEnum& operator=(EEnum const&) = delete;
	
		protected:
			EEnum(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~EEnum() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral>  getEEnumLiteral(std::string name)  const  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral>  getEEnumLiteral(int value)  const  = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EEnumLiteral>  getEEnumLiteralByLiteral(std::string literal)  const  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< std::vector<std::shared_ptr<ecore::EEnumLiteral> > > getELiterals() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr< std::vector<std::shared_ptr<ecore::EEnumLiteral> > > m_eLiterals;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			 
	};

}
#endif /* end of include guard: ECORE_EENUM_HPP */

