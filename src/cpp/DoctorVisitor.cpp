#include "../head/DoctorVisitor.h"
#include <iostream>
#include <any>
std::any DoctorVisitor::visitFile(DoctorLangParser::FileContext* ctx){
	for (DoctorLangParser::LineContext* line: ctx -> lines){
		visitLine(line);
	}
	return 0;
}
std::any DoctorVisitor::visitLine(DoctorLangParser::LineContext *ctx){
	if (ctx -> fd()){
		visitFd(ctx -> fd());
	}
	
	return 0;
}

std::any DoctorVisitor::visitFd(DoctorLangParser::FdContext *ctx){
	if (ctx -> function())
		visitFunction(ctx -> function());
	return 0;
}

std::any DoctorVisitor::visitFunction(DoctorLangParser::FunctionContext *ctx){
	typeAndName functionName = std::any_cast<typeAndName>(visitVariable(ctx -> var));
	std::cout << functionName.type << " " << functionName.name << std::endl;
	return 0;
}

std::any DoctorVisitor::visitVariable(DoctorLangParser::VariableContext *ctx){
	std::string name = ctx -> name -> getText();
	std::string typ("any");
	if (ctx ->typ)
		typ = ctx -> typ -> getText();
	return typeAndName(name, typ);
}