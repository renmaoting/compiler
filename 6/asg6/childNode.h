/*************************************************************************
	> File Name: childNode.h
	> Author:Maoting Ren 
	> Mail: mren@g.clemson.edu
	> Created Time: Sun 04 Dec 2016 08:40:53 PM EST
 ************************************************************************/

#ifndef _CHILDNODE_H
#define _CHILDNODE_H

#include "ast.h"
#include "symbolTable.h"

class AddNode:public Ast{
public:
    AddNode(Ast* l, Ast* r): Ast("+", l, r) {
        int flag = (Ast::getLeft()->getType() == 'D'||Ast::getRight()->getType() == 'D')?0:1;
        flag? Ast::setType('I'): Ast::setType('D');
    }

    double getVal(){ 
        return Ast::getLeft()->getVal() + Ast::getRight()->getVal(); 
    }
};

class MinusNode:public Ast{
public:
    MinusNode(Ast* l, Ast* r): Ast("-", l, r){
        int flag = (Ast::getLeft()->getType() == 'D'||Ast::getRight()->getType() == 'D')?0:1;
        flag? Ast::setType('I'): Ast::setType('D');
    }

    double getVal(){
        return Ast::getLeft()->getVal() - Ast::getRight()->getVal(); 
    }
};

class MulNode:public Ast{
public:
    MulNode(Ast* l, Ast* r): Ast("*", l, r){
        int flag = (Ast::getLeft()->getType() == 'D'||Ast::getRight()->getType() == 'D')?0:1;
        flag? Ast::setType('I'): Ast::setType('D');
    }

    double getVal(){ 
        return Ast::getLeft()->getVal() * Ast::getRight()->getVal(); 
    }
};

class DividNode:public Ast{
public:
    DividNode(Ast* l, Ast* r): Ast("/", l, r){
        int flag = (Ast::getLeft()->getType() == 'D'||Ast::getRight()->getType() == 'D')?0:1;
        flag? Ast::setType('I'): Ast::setType('D');
    }

    double getVal(){
        double left = Ast::getLeft()->getVal(), right = Ast::getRight()->getVal();
        if(right ==0){
            std::cerr << "denominator should not be 0" << std::endl; 
            exit(0);
        } 
        if(Ast::getType()=='I') return floor(left/right); 
        return left/right; 
    }
};

class DoubleDividNode:public Ast{
public:
    DoubleDividNode(Ast*l, Ast* r): Ast("//", l, r){
        int flag = (Ast::getLeft()->getType() == 'D'||Ast::getRight()->getType() == 'D')?0:1;
        flag? Ast::setType('I'): Ast::setType('D');
    }

    double getVal(){
        if(Ast::getRight()->getVal()==0) {
            std::cerr << "denominator should not be 0" << std::endl; 
            exit(0);
        }
        return floor(Ast::getLeft()->getVal()/Ast::getRight()->getVal()); 
    }
};

class PercentNode:public Ast{
public:
    PercentNode(Ast* l, Ast* r): Ast("/", l, r){
        int flag = (Ast::getLeft()->getType() == 'D'||Ast::getRight()->getType() == 'D')?0:1;
        flag? Ast::setType('I'): Ast::setType('D');
    }

    double getVal(){ 
        double left = Ast::getLeft()->getVal(), right = Ast::getRight()->getVal();
        if(right == 0) {
            std::cerr << "denominator should not be 0" << std::endl; 
            exit(0);
        }
        return (left - right*floor(left/right));
    }
};

// this node store an exponent expression
class ExponentNode:public Ast{
public:
    ExponentNode(Ast* l, Ast* r): Ast("**", l, r){
        int flag = (Ast::getLeft()->getType() == 'D'||Ast::getRight()->getType() == 'D')?0:1;
        flag? Ast::setType('I'): Ast::setType('D');
    }

    double getVal(){ return pow(Ast::getLeft()->getVal() , Ast::getRight()->getVal()); }
};

// this node store a single minus expression
class SingleMinusNode:public Ast{
public:
    SingleMinusNode(Ast* l, Ast* r): Ast("-", l, r){
        int flag = (Ast::getLeft()->getType() == 'D')?0:1;
        flag? Ast::setType('I'): Ast::setType('D');
    }

    double getVal(){ return -Ast::getLeft()->getVal(); }
};

// this node store a single plus expression
class SinglePlusNode:public Ast{
public:
    SinglePlusNode(Ast* l, Ast* r): Ast("+", l, r){
        int flag = (Ast::getLeft()->getType() == 'D'||Ast::getRight()->getType() == 'D')?0:1;
        flag? Ast::setType('I'): Ast::setType('D');
    }

    double getVal(){ return Ast::getLeft()->getVal(); }
};

// this node store an integer or double number
class NumberNode:public Ast{ // type = 'I' or 'D'
public:
    NumberNode(double val, char type): Ast("", NULL, NULL), value(val){
        Ast::setType(type);
        std::ostringstream os;
        os << val;
        Ast::setLabel(os.str());
    }

    void setLabel(std::string label) { Ast::setLabel(label); }

    double getVal(){ 
        if(Ast::getType()=='S'){
            std::cerr << "undefined symbol" << std::endl;
            exit(0);
        }
        return value; 
    }

    void setVal(double val) { value = val; }
private:
    double value;
};

class PrintNode:public Ast{ // type = 'P'
public:
    PrintNode(Ast* n):Ast("print", NULL, NULL), node(n) {
        Ast::setType('P');
    } 

    double getVal(){
        double val = node->getVal();
        std::cout << std::setprecision(12);
        if(node->getType()=='D' && val == (int)val){
        std::cout << val << ".0" << std::endl;
        }
        else std::cout << val << std::endl;
        return -1;
    }

private:
    Ast* node;
};

class ReturnNode:public Ast{
public:
    ReturnNode(Ast* n):Ast("return", NULL, NULL), node(n){
        Ast::setType('R');
    }

    double getVal(){
        return node->getVal();
    }

private:
    Ast* node;
};

class AssignNode:public Ast{ // type = 'A',  example: x = 10
public:
    AssignNode(Ast* l, Ast* r):Ast("assign", l, r){
        Ast::setType('A');
    }

    double getVal(){
        Ast::getRight()->getVal();
        SymbolTableManager::getInstance().getScope().addSymbol(Ast::getLeft()->getLabel(), Ast::getRight());
        return -1;
    }
};

class SuiteNode:public Ast{ // type = 'F'
public:
    SuiteNode(std::vector<Ast*>* v):Ast("", NULL, NULL), vec(v) {
        Ast::setType('F');
        std::cout << vec->size() << std::endl;
    }

    double getVal(){
        for(int i = 0; i < (int)vec->size(); i++){// evalue each statement in function
            if((*vec)[i]->getType()=='F'){  //if this is a function define, just add this function name into curent scope
                SymbolTableManager::getInstance().getScope().addSymbol((*vec)[i]->getLabel(), (*vec)[i]);
                continue;
            }
            (*vec)[i]->getVal();
        }
        if(vec->back() && vec->back()->getType() == 'R')
            return SymbolTableManager::getInstance().getScope().getAstNode(vec->back()->getLabel())->getVal();            
        return -1;
    }

    std::vector<Ast*>* getVec(){
        return vec;
    }

private:
    std::vector<Ast*>* vec;
};

class FuncNode:public Ast{ // type = 'C'
public:
    FuncNode(std::string str):Ast(str, NULL, NULL){
        Ast::setType('C');
    }

    double getVal(){
        Ast* node = SymbolTableManager::getInstance().getScope().getAstNode(Ast::getLabel());
        /*if(!node){
            std::cerr << "No such a function!" << std::endl;
            exit(0);
        }*/
        /*std::cout << "call name = " << Ast::getLabel() << std::endl;
        SymbolTableManager::getInstance().insertScope();
        double val = -1;
    //    val = node->getVal(); 
        SymbolTableManager::getInstance().popScope();
        return val;*/
        return -1;
    }
};

class StringNode:public Ast{ // type = 'S'
public:
    StringNode(std::string str) {
        Ast::setLabel(str);
        Ast::setType('S');
    }

    double getVal(){
        int curScope = SymbolTableManager::getInstance().getScopeLevel();
        while(curScope >= 0){
            if(SymbolTableManager::getInstance().getScope().ifExist(Ast::getLabel()))
                break;
            curScope--;
        }
        if(curScope < 0){ 
            std::cerr << "can't find this symbol in symbol table!" << std::endl;
            exit(0);
        }
        return SymbolTableManager::getInstance().getScope(curScope).getAstNode(Ast::getLabel())->getVal();
    }
};
#endif
