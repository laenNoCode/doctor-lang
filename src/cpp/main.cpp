#include <iostream>

#include "antlr4-runtime.h"
#include "../generated/DoctorLangLexer.h"
#include "../generated/DoctorLangParser.h"
#include "../head/DoctorVisitor.h"
using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("input.dr");
    
    ANTLRInputStream input(stream);
    DoctorLangLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    DoctorLangParser parser(&tokens);    
    DoctorLangParser::FileContext* tree = parser.file();
    DoctorVisitor visitor;
    visitor.visitFile(tree);
    /*SceneParser::FileContext* tree = parser.file();

    ImageVisitor visitor;
    Scene scene = std::any_cast<Scene>(visitor.visitFile(tree));
    scene.draw();*/	

    return 0;
}