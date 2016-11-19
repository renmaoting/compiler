// Companion source code for "flex & bison", published by O'Reilly
// helper functions for fb3-1
#  include <iostream>
#  include <stdlib.h>
#  include "ast.h"
#  include "symbolTable.h"

/*
double AddNode::getVal()const { 
    return Ast::getLeft()->getVal() + Ast::getRight()->getVal(); 
}


double MinusNode::getVal()const {
    return Ast::getLeft()->getVal() - Ast::getRight()->getVal(); 
}

double MulNode::getVal()const { 
    return Ast::getLeft()->getVal() * Ast::getRight()->getVal(); 
}

double DividNode::getVal()const {
    double left = Ast::getLeft()->getVal(), right = Ast::getRight()->getVal();
    if(Ast::getType()=='I') return floor(left/right); 
    return left/right; 
}

double DoubleDividNode::getVal()const{
    return floor(Ast::getLeft()->getVal()/Ast::getRight()->getVal()); 
}

double PercentNode::getVal()const { 
    double left = Ast::getLeft()->getVal(), right = Ast::getRight()->getVal();
    return (int)(left - right*floor(left/right));
}

double ExponentNode::getVal()const { 
    return pow(Ast::getLeft()->getVal() , Ast::getRight()->getVal()); 
}

double SingleMinusNode::getVal()const { 
    return -Ast::getLeft()->getVal(); 
}

double SinglePlusNode::getVal()const { 
    return Ast::getLeft()->getVal(); 
}

double NumberNode::getVal()const { 
    return value; 
}

std::string StringNode::getStr()const{
    return str;
}*/
