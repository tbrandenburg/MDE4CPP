#ifndef NEWMODEL_CHECKIFPRIMECOANEXT_EXECUTION_HPP
#define NEWMODEL_CHECKIFPRIMECOANEXT_EXECUTION_HPP

//********************************************************************
//*    
//* Warning: This file was generated by Mesapp Generator
//*
//********************************************************************


#include "impl/OpaqueBehaviorExecutionImpl.hpp"

namespace NewModel {

class CoaNextExecution : public fUML::OpaqueBehaviorExecutionImpl 
{

public:
    CoaNextExecution(CoaNextExecution &obj);
    //constructor
    CoaNextExecution();
    //destructor
    virtual ~CoaNextExecution();

    virtual void doBody(QList<fUML::ParameterValue * > *  inputParameters,QList<fUML::ParameterValue * > *  outputParameters);

    virtual ecore::EObject * copy();
};

}

#endif /* end of include guard: NEWMODEL_CHECKIFPRIMECOANEXT_EXECUTION_HPP */
