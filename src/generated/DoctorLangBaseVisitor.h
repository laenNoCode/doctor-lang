
// Generated from DoctorLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "DoctorLangVisitor.h"


/**
 * This class provides an empty implementation of DoctorLangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  DoctorLangBaseVisitor : public DoctorLangVisitor {
public:

  virtual std::any visitFile(DoctorLangParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine(DoctorLangParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(DoctorLangParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(DoctorLangParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(DoctorLangParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFd(DoctorLangParser::FdContext *ctx) override {
    return visitChildren(ctx);
  }


};

