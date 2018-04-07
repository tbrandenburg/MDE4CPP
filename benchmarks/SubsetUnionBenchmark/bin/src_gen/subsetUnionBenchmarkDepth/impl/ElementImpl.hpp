//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARKDEPTH_ELEMENTELEMENTIMPL_HPP
#define SUBSETUNIONBENCHMARKDEPTH_ELEMENTELEMENTIMPL_HPP

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
#include "../Element.hpp"


#include "impl/EObjectImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace subsetUnionBenchmarkDepth 
{
	class ElementImpl :virtual public ecore::EObjectImpl,
virtual public Element 
	{
		public: 
			ElementImpl(const ElementImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ElementImpl& operator=(ElementImpl const&) = delete;

		protected:
			friend class SubsetUnionBenchmarkDepthFactoryImpl;
			ElementImpl();



		public:
			//destructor
			virtual ~ElementImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getName() const ;
			
			/*!
			 */ 
			virtual void setName (std::string _name); 
			
			
			
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
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: SUBSETUNIONBENCHMARKDEPTH_ELEMENTELEMENTIMPL_HPP */
