//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef FUMLMULTIPLEPINS_TESTCLASS_TESTMULTIPLEPINS_TESTMULTIPLEPINSIMPL_HPP
#define FUMLMULTIPLEPINS_TESTCLASS_TESTMULTIPLEPINS_TESTMULTIPLEPINSIMPL_HPP

#include <functional>

//Model includes
#include "../TestMultiplePins.hpp"
#include "uml/impl/ClassImpl.hpp"
#include "uml/Property.hpp"

namespace boost
{
	class any;
}

namespace uml
{
	class Property;
}

//*********************************
namespace fUMLMultiplePins
{
	class TestMultiplePinsImpl : virtual public uml::ClassImpl, virtual public TestMultiplePins
	{
		private:    
			TestMultiplePinsImpl(TestMultiplePinsImpl const&) = delete;
			TestMultiplePinsImpl& operator=(TestMultiplePinsImpl const&) = delete;

		protected:
			friend class FUMLMultiplePinsFactoryImpl;
			//constructor
			TestMultiplePinsImpl();
			virtual std::shared_ptr<TestMultiplePins> getThisTestMultiplePinsPtr();
			virtual void setThisTestMultiplePinsPtr(std::weak_ptr<TestMultiplePins> thisTestMultiplePinsPtr);


		public:
			//destructor
			virtual ~TestMultiplePinsImpl();

			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			

		protected:
			virtual std::shared_ptr<uml::Class> getMetaClass();

		public:
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			virtual boost::any get(std::shared_ptr<uml::Property> _property) const ;
			virtual void set(std::shared_ptr<uml::Property> _property,boost::any value) ;
			virtual void unset(std::shared_ptr<uml::Property> _property) ;
		
		private:
			std::weak_ptr<TestMultiplePins> m_thisTestMultiplePinsPtr;
			std::map<std::string,std::function<boost::any()>> m_getterMap;
			std::map<std::string,std::function<void(boost::any)>> m_setterMap;
			std::map<std::string,std::function<void()>> m_unsetterMap;
	};
}
#endif /* end of include guard: FUMLMULTIPLEPINS_TESTCLASS_TESTMULTIPLEPINS_TESTMULTIPLEPINSIMPL_HPP */