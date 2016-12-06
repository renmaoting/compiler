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
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){ 
        return Ast::getLeft()->getVal() + Ast::getRight()->getVal(); 
    }
};

class MinusNode:public Ast{
public:
    MinusNode(Ast* l, Ast* r): Ast("-", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){
        return Ast::getLeft()->getVal() - Ast::getRight()->getVal(); 
    }
};

class MulNode:public Ast{
public:
    MulNode(Ast* l, Ast* r): Ast("*", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){ 
        /*std::cout << Ast::getLeft()->getType() << " " << Ast::getLeft()->getValueType() << std::endl;
        std::cout << Ast::getRight()->getType() << " " << Ast::getRight()->getValueType() << std::endl;*/
        return Ast::getLeft()->getVal() * Ast::getRight()->getVal(); 
    }
};

class DividNode:public Ast{
public:
    DividNode(Ast* l, Ast* r): Ast("/", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){
        double left = Ast::getLeft()->getVal(), right = Ast::getRight()->getVal();
        if(right ==0){
            std::cerr << "denominator should not be 0" << std::endl; 
            exit(0);
        } 
        if(Ast::getValueType()=='I') return floor(left/right); 
        return left/right; 
    }
};

class DoubleDividNode:public Ast{
public:
    DoubleDividNode(Ast*l, Ast* r): Ast("//", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
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
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
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

// this node store an integer or double number
class NumberNode:public Ast{ // type = 'I' or 'D'
public:
    NumberNode(double val, char type): Ast("", NULL, NULL), value(val){
        Ast::setType(type);
        Ast::setValueType(type);
        std::ostringstream os;
        os << val;
        Ast::setLabel(os.str());
    }

    void setLabel(std::string label) { Ast::setLabel(label); }

    double getVal(){ 
        return value; 
    }

    void setVal(double val) { value = val; }
private:
    double value;
};


// this node store an exponent expression
class ExponentNode:public Ast{
public:
    ExponentNode(Ast* l, Ast* r): Ast("**", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){ return pow(Ast::getLeft()->getVal() , Ast::getRight()->getVal()); }
};

class PlusEqualNode:public Ast{
public:
    PlusEqualNode(Ast* l, Ast* r): Ast("+=", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){ 
        Ast *left = Ast::getLeft(), *right = Ast::getRight();
        if(left->getType()!='S') {
            std::cerr << "Not lvalue" << std::endl;
            exit(0);
        }
        Ast* node = SymbolTableManager::getInstance().getAstNode(left->getLabel());
        double ans = node->getVal() + right->getVal();
        char t = (left->getValueType()=='D'||right->getValueType()=='D')?'D':'I';
        Ast* tem = new NumberNode(ans, t);
        SymbolTableManager::getInstance().addSymbol(left->getLabel(), tem);
        if(node->isGlobal()) SymbolTableManager::getInstance().getScope(0)->addSymbol(left->getLabel(), tem);
        return -1;
    }
};

class MinusEqualNode:public Ast{
public:
    MinusEqualNode(Ast* l, Ast* r): Ast("-=", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){
        Ast *left = Ast::getLeft(), *right = Ast::getRight();
        if(Ast::getLeft()->getType()!='S') {
            std::cerr << "Not lvalue" << std::endl;
            exit(0);
        }
        Ast* node = SymbolTableManager::getInstance().getAstNode(left->getLabel());
        double ans = node->getVal() - right->getVal();
        char t = (left->getValueType()=='D'||right->getValueType()=='D')?'D':'I';
        Ast* tem = new NumberNode(ans, t);
        SymbolTableManager::getInstance().addSymbol(left->getLabel(), tem);
        if(node->isGlobal()) SymbolTableManager::getInstance().getScope(0)->addSymbol(left->getLabel(), tem);
        return -1;
    }
};

class StarEqualNode:public Ast{
public:
    StarEqualNode(Ast* l, Ast* r): Ast("*=", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){
        Ast *left = Ast::getLeft(), *right = Ast::getRight();
        if(Ast::getLeft()->getType()!='S') {
            std::cerr << "Not lvalue" << std::endl;
            exit(0);
        }
        Ast* node = SymbolTableManager::getInstance().getAstNode(left->getLabel());
        double ans = node->getVal() * right->getVal();
        char t = (left->getValueType()=='D'||right->getValueType()=='D')?'D':'I';
        Ast* tem = new NumberNode(ans, t);
        SymbolTableManager::getInstance().addSymbol(left->getLabel(), tem);
        if(node->isGlobal()) SymbolTableManager::getInstance().getScope(0)->addSymbol(left->getLabel(), tem);
        return -1;
    }
};

class SlashEqualNode:public Ast{
public:
    SlashEqualNode(Ast* l, Ast* r): Ast("/=", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){
        Ast *left = Ast::getLeft(), *right = Ast::getRight();
        if(Ast::getLeft()->getType()!='S') {
            std::cerr << "Not lvalue" << std::endl;
            exit(0);
        }
        double rightvalue = right->getVal();
        if(rightvalue == 0){
            std::cerr << "denominator should not be 0" << std::endl;
            exit(0);
        }
        Ast* node = SymbolTableManager::getInstance().getAstNode(left->getLabel());
        char t = (left->getValueType()=='D'||right->getValueType()=='D')?'D':'I';
        double ans = t=='D'?(node->getVal() / rightvalue):floor(node->getVal()/rightvalue);
        Ast* tem = new NumberNode(ans, t);
        SymbolTableManager::getInstance().addSymbol(left->getLabel(), tem);
        if(node->isGlobal()) SymbolTableManager::getInstance().getScope(0)->addSymbol(left->getLabel(), tem);
        return -1; 
    }
};

class PercentEqualNode:public Ast{
public:
    PercentEqualNode(Ast* l, Ast* r): Ast("%=", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){
        Ast *left = Ast::getLeft(), *right = Ast::getRight();
        if(Ast::getLeft()->getType()!='S') {
            std::cerr << "Not lvalue" << std::endl;
            exit(0);
        }
        Ast* node = SymbolTableManager::getInstance().getAstNode(left->getLabel());
        double leftValue = node->getVal(), rightValue = right->getVal();
        double ans = leftValue-rightValue*floor(leftValue/rightValue);
        char t = (left->getValueType()=='D'||right->getValueType()=='D')?'D':'I';
        Ast* tem = new NumberNode(ans, t);
        SymbolTableManager::getInstance().addSymbol(left->getLabel(), tem);
        if(node->isGlobal()) SymbolTableManager::getInstance().getScope(0)->addSymbol(left->getLabel(), tem);
        return -1;
    }
};

class DoubleSlashEqualNode:public Ast{
public:
    DoubleSlashEqualNode(Ast* l, Ast* r):Ast("//=", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D'||Ast::getRight()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){
        Ast *left = Ast::getLeft(), *right = Ast::getRight();
        if(Ast::getLeft()->getType()!='S') {
            std::cerr << "Not lvalue" << std::endl;
            exit(0);
        }
        Ast* node = SymbolTableManager::getInstance().getAstNode(left->getLabel());
        double ans = floor(node->getVal()/right->getVal());
        char t = (left->getValueType()=='D'||right->getValueType()=='D')?'D':'I';
        Ast* tem = new NumberNode(ans, t);
        SymbolTableManager::getInstance().addSymbol(left->getLabel(), tem);
        if(node->isGlobal()) SymbolTableManager::getInstance().getScope(0)->addSymbol(left->getLabel(), tem);
        return -1;
    }
};

// this node store a single minus expression
class SingleMinusNode:public Ast{
public:
    SingleMinusNode(Ast* l, Ast* r): Ast("-", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){ return -Ast::getLeft()->getVal(); }
};

// this node store a single plus expression
class SinglePlusNode:public Ast{
public:
    SinglePlusNode(Ast* l, Ast* r): Ast("+", l, r){
        int flag = (Ast::getLeft()->getValueType() == 'D')?0:1;
        flag? Ast::setValueType('I'): Ast::setValueType('D');
    }

    double getVal(){ return Ast::getLeft()->getVal(); }
};

class PrintNode:public Ast{ // type = 'P'
public:
    PrintNode(Ast* n):Ast("print", NULL, NULL), node(n) {
        Ast::setType('P');
    } 

    double getVal(){
        double val = node->getVal();
        std::cout << std::setprecision(12);
        if(node->getValueType()=='D' && val == (int)val){
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
        Ast::setValueType(node->getValueType());
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
        /*std::cout << Ast::getRight()->getValueType() << std::endl;*/
        SymbolTableManager::getInstance().addSymbol(Ast::getLeft()->getLabel(), Ast::getRight());
        return -1;
    }
};

class SuiteNode:public Ast{ // type = 'F'
public:
    SuiteNode(std::vector<Ast*>* v):Ast("", NULL, NULL), vec(v) {
        Ast::setType('F');
    }

    double getVal(){
        for(int i = 0; i < (int)vec->size(); i++){// evalue each statement in function
            if((*vec)[i]->getType()=='F'){  //if this is a function define, just add this function name into curent scope
                SymbolTableManager::getInstance().addSymbol((*vec)[i]->getLabel(), (*vec)[i]);
                continue;
            }
            (*vec)[i]->getVal();
        }
        if(vec->back() && vec->back()->getType() == 'R'){
            Ast::setValueType(vec->back()->getValueType());  
            return vec->back()->getVal();
        }
        return -1;
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
        Ast* node = SymbolTableManager::getInstance().getAstNode(Ast::getLabel());
        SymbolTableManager::getInstance().insertScope();
        double val = node->getVal(); 
        SymbolTableManager::getInstance().popScope();
        return val;
    }
};

class StringNode:public Ast{ // type = 'S'
public:
    StringNode(std::string str):Ast(str, NULL, NULL) {
        Ast::setType('S');
    }

    char getValueType(){
        Ast* node = SymbolTableManager::getInstance().getAstNode(Ast::getLabel());
        return node->getValueType(); 
    }

    double getVal(){
        Ast* node = SymbolTableManager::getInstance().getAstNode(Ast::getLabel());
        /*std::cout << Ast::getLabel() << " " << node->getValueType() << std::endl;*/
        return node->getVal();
    }
};

class GlobalNode:public Ast{
public:
    GlobalNode(std::string str):Ast(str, NULL, NULL), vec(){}
    void addName(std::string name){
        vec.push_back(name);
    }
    
    double getVal(){
        for(auto str: vec){
            Ast* node1 = SymbolTableManager::getInstance().getScope()->getAstNode(str);
            Ast* node2 = SymbolTableManager::getInstance().getScope(0)->getAstNode(str);
            if(node1 && node2){
                SymbolTableManager::getInstance().getScope(0)->addSymbol(str, node1);
            }
            else if(node1) {
                SymbolTableManager::getInstance().getScope(0)->addSymbol(str, node1); 
            }   
            else if(node2){
                SymbolTableManager::getInstance().getScope()->addSymbol(str, node2);
            }
            else {
                Ast* newAst = new NumberNode(-1, 'I');
                SymbolTableManager::getInstance().getScope(0)->addSymbol(str, newAst);
                SymbolTableManager::getInstance().getScope()->addSymbol(str, newAst);
            }
            SymbolTableManager::getInstance().getAstNode(str)->setGlobal(true);
        } 
        return -1;
    }

private:
    std::vector<std::string> vec;
};


#endif
