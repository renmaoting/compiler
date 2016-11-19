/*************************************************************************
	> File Name: stringNode.h
	> Author:Maoting Ren 
	> Mail: mren@g.clemson.edu
	> Created Time: Sat 19 Nov 2016 12:34:18 AM EST
 ************************************************************************/

#ifndef _STRINGNODE_H
#define _STRINGNODE_H

#include "ast.h"
#include "symbolTable.h"

// this node store a string
class StringNode:public Ast{
public:
    StringNode(std::string s): Ast("S", NULL, NULL), str(s){ }
    double getVal(){
        Ast* node = SymbolTable::getInstance().getValue(str);
        Ast::setType(node->getType());
        return node->getVal(); 
    }
    std::string getStr()const { return str; }

private:
    std::string str;
};
#endif
