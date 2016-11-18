//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>
extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class Ast {
public:
  Ast(): mLabel(""), left(NULL), right(NULL) {}
  Ast(std::string label, Ast* l, Ast* r) : mLabel(label), left(l), right(r) {}
  virtual ~Ast() { if(left) delete left; if(right) delete right; }
  virtual Ast* getLeft() const { return left; }
  virtual Ast* getRight() const { return right; }
  virtual double getVal() const { throw std::string("No Number"); }
  void setLabel(std::string label) { mLabel = label; }
  std::string getLabel() { return mLabel; }
private:
  std::string mLabel;
  Ast *left;
  Ast *right;
};

class AddNode:public Ast{
public:
    AddNode(Ast* l, Ast* r): Ast("+", l, r) {}
    double getVal()const { return Ast::getLeft()->getVal() + Ast::getRight()->getVal(); }
};

class MinusNode:public Ast{
public:
    MinusNode(Ast* l, Ast* r): Ast("-", l, r){}
    double getVal()const { return Ast::getLeft()->getVal() - Ast::getRight()->getVal(); }
};

class MulNode:public Ast{
public:
    MulNode(Ast* l, Ast* r): Ast("*", l, r){}
    double getVal()const { return Ast::getLeft()->getVal() * Ast::getRight()->getVal(); }
};

class DividNode:public Ast{
public:
    DividNode(Ast* l, Ast* r): Ast("/", l, r){}
    double getVal()const { return Ast::getLeft()->getVal() / Ast::getRight()->getVal(); }
};

class ExponentNode:public Ast{
public:
    ExponentNode(Ast* l, Ast* r): Ast("**", l, r){}
    double getVal()const { return pow(Ast::getLeft()->getVal() , Ast::getRight()->getVal()); }
};

class SingleMinusNode:public Ast{
public:
    SingleMinusNode(Ast* l, Ast* r): Ast("-", l, r){}
    double getVal()const { return -Ast::getLeft()->getVal(); }
};

class NumberNode:public Ast{
public:
    NumberNode(double val): Ast("", NULL, NULL), value(val){
        std::ostringstream os;
        os << val;
        Ast::setLabel(os.str());
    }
    double getVal()const { return value; }
private:
    double value;
};

void printNodeFormat(Ast *node, char ID, std::ofstream& fout);
void makeGraph(Ast*);
void preOrder(Ast* node, std::ofstream& fout, char preId, int &curNode);

