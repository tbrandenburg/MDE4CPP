//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef CALCMODEL_PLUGINIMPL_HPP
#define CALCMODEL_PLUGINIMPL_HPP

#include "CalcModel/CalcModelPlugin.hpp"

namespace CalcModel 
{
	class CalcModelPluginImpl : virtual public CalcModelPlugin 
	{
		public:
			CalcModelPluginImpl();
			virtual ~CalcModelPluginImpl();
		
			virtual std::string eclipseURI();
			virtual std::string eNAME();
			virtual std::string eNS_URI();
			virtual std::string eNS_PREFIX();
	
			virtual std::shared_ptr<ecore::EObject> create(const std::string& name);
			virtual std::shared_ptr<uml::Factory> getFactory();
			virtual std::shared_ptr<uml::Package> getPackage();
	};
}
#endif /* end of include guard: CALCMODEL_PLUGINIMPL_HPP */
