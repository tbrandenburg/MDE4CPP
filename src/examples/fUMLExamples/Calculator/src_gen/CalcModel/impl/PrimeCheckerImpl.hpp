//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef CALCMODEL_PRIMECHECKER_PRIMECHECKERIMPL_HPP
#define CALCMODEL_PRIMECHECKER_PRIMECHECKERIMPL_HPP

#include <functional>

//Model includes
#include "../PrimeChecker.hpp"
#include "uml/impl/ClassImpl.hpp"
#include "uml/Property.hpp"

class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

namespace uml
{
	class Property;
}

//*********************************
namespace CalcModel
{
	class PrimeCheckerImpl : virtual public uml::ClassImpl, virtual public PrimeChecker
	{
		private:    
			PrimeCheckerImpl(PrimeCheckerImpl const&) = delete;
			PrimeCheckerImpl& operator=(PrimeCheckerImpl const&) = delete;

		protected:
			friend class CalcModelFactoryImpl;
			//constructor
			PrimeCheckerImpl();
			virtual std::shared_ptr<PrimeChecker> getThisPrimeCheckerPtr();
			virtual void setThisPrimeCheckerPtr(std::weak_ptr<PrimeChecker> thisPrimeCheckerPtr);


		public:
			//destructor
			virtual ~PrimeCheckerImpl();

			//*********************************
			// Operations
			//*********************************
			virtual bool divides() ;
			virtual void next() ;
			virtual void printIsPrime() ;
			virtual void printNotPrime() ;
			virtual bool isOdd() ;
			virtual bool isNotFinished() ;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			virtual int getNumber() const ;
			virtual void setNumber (int _number); 
			virtual int getDivider() const ;
			virtual void setDivider (int _divider); 
			

		protected:
			virtual std::shared_ptr<uml::Class> getMetaClass();

		public:
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			virtual Any get(std::shared_ptr<uml::Property> _property) const ;
			virtual void set(std::shared_ptr<uml::Property> _property, Any value) ;
			virtual void unset(std::shared_ptr<uml::Property> _property) ;
			
		
		private:
			std::weak_ptr<PrimeChecker> m_thisPrimeCheckerPtr;
			std::map<std::string,std::function<Any()>> m_getterMap;
			std::map<std::string,std::function<void(Any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: CALCMODEL_PRIMECHECKER_PRIMECHECKERIMPL_HPP */
