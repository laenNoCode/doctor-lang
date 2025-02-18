
// Generated from DoctorLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "DoctorLangParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by DoctorLangParser.
 */
class  DoctorLangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by DoctorLangParser.
   */
    virtual std::any visitFile(DoctorLangParser::FileContext *context) = 0;

    virtual std::any visitLine(DoctorLangParser::LineContext *context) = 0;

    virtual std::any visitType(DoctorLangParser::TypeContext *context) = 0;

    virtual std::any visitVariable(DoctorLangParser::VariableContext *context) = 0;

    virtual std::any visitFunction(DoctorLangParser::FunctionContext *context) = 0;

    virtual std::any visitFd(DoctorLangParser::FdContext *context) = 0;


};

