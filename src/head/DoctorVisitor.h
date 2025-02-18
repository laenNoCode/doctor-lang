
#pragma once


#include "../generated/DoctorLangBaseVisitor.h"
#include "antlr4-runtime.h"
#include <any>
#include <string>


class typeAndName{
    public:
    std::string name;
    std::string type;
    typeAndName(std::string name, std::string type="any"):name {name}, type{type}{}
};

/**
 * This class defines an abstract visitor for a parse tree
 * produced by DoctorLangParser.
 */
class  DoctorVisitor : DoctorLangBaseVisitor{
public:
    virtual std::any visitFile(DoctorLangParser::FileContext *context);

    virtual std::any visitLine(DoctorLangParser::LineContext *context);

    //virtual std::any visitType(DoctorLangParser::TypeContext *context) = 0;

    virtual std::any visitVariable(DoctorLangParser::VariableContext *context);

    virtual std::any visitFunction(DoctorLangParser::FunctionContext *context);

    virtual std::any visitFd(DoctorLangParser::FdContext *context);



};

