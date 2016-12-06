//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy

#ifndef AST_H
#define AST_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <math.h>
extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class Ast {
public:
  Ast(): type('0'), mLabel(""), left(NULL), right(NULL) {}
  Ast(std::string label, Ast* l, Ast* r) :type('0'), mLabel(label), left(l), right(r) {}
  virtual ~Ast() { if(left) delete left; if(right) delete right; }
  Ast* getLeft() const { return left; }
  void setLeft(Ast* l) { left = l; }
  Ast* getRight() const { return right; }
  void setRight(Ast* r) { right = r; }
  virtual double getVal() { throw std::string("No Number"); }
  virtual void setVal(double) { throw std::string("No Number To Be Set"); }
  virtual void setLabel(std::string label) { mLabel = label; }
  std::string getLabel() { return mLabel; }
  void setType(char t) { type = t; }
  char getType() const { return type; }

private:
  char type;// integer, double or string
  std::string mLabel;
  Ast *left;
  Ast *right;
};

#endif
