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
  Ast(): type('0'), mLabel(""), left(NULL), right(NULL), valueType('0'), global(false){}
  Ast(std::string label, Ast* l, Ast* r) :type('0'), mLabel(label), left(l), right(r),valueType('0') {}
  virtual ~Ast() { if(left) delete left; if(right) delete right; }
  Ast* getLeft() const { return left; }
  void setLeft(Ast* l) { left = l; }
  Ast* getRight() const { return right; }
  void setRight(Ast* r) { right = r; }
  virtual double getVal() { throw std::string("No Number"); }
  virtual void setVal(double) { throw std::string("No Number To Be Set"); }
  virtual void setLabel(std::string label) { mLabel = label; }
  virtual void addName(std::string ) { throw std::string("Havn't override this function "); }
  bool isGlobal() { return global; }
  void setGlobal(bool st) { global = st; }
  std::string getLabel() { return mLabel; }
  void setType(char t) { type = t; }
  char getType() const { return type; }
  virtual void setValueType(char t) { valueType = t; }
  virtual char getValueType(){ return valueType; }

private:
  char type;// integer, double or string
  std::string mLabel;
  Ast *left;
  Ast *right;
  char valueType;
  bool global;
};

#endif
