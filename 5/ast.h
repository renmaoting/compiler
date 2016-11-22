//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy

#ifndef AST_H
#define AST_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>
extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class Ast {
public:
  Ast(): type('0'), mLabel(""), left(NULL), right(NULL) {}
  Ast(std::string label, Ast* l, Ast* r) :type('0'), mLabel(label), left(l), right(r) {}
  virtual ~Ast() { if(left) delete left; if(right) delete right; }
  Ast* getLeft() const { return left; }
  Ast* getRight() const { return right; }
  virtual double getVal() { throw std::string("No Number"); }
  virtual void setVal(double) { throw std::string("No Number To Be Set"); }
  void setLabel(std::string label) { mLabel = label; }
  std::string getLabel() { return mLabel; }
  void setType(char t) { type = t; }
  char getType() const { return type; }

private:
  char type;// integer, double or string
  std::string mLabel;
  Ast *left;
  Ast *right;
};

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
class NumberNode:public Ast{
public:
    NumberNode(double val, char type): Ast("", NULL, NULL), ref(0), value(val){
        Ast::setType(type);
        std::ostringstream os;
        os << val;
        Ast::setLabel(os.str());
    }
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

#endif
