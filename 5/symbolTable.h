/*************************************************************************
	> File Name: symbolTable.h
	> Author:Maoting Ren 
	> Mail: mren@g.clemson.edu
	> Created Time: Fri 18 Nov 2016 06:35:58 PM EST
 ************************************************************************/

#ifndef _SYMBOLTABLE_H
#define _SYMBOLTABLE_H

#include <unordered_map>
#include "ast.h"

class SymbolTable
{
public:
    static SymbolTable& getInstance();

    void addSymbol(std::string str, Ast* ast)
    {
        table[str] = ast;
    }

    Ast* getValue(std::string str){
        return table[str]; 
    }

private:
    SymbolTable() {}
    std::unordered_map<std::string, Ast*> table;
};

SymbolTable& SymbolTable::getInstance()
{
    static SymbolTable instance;
    return instance;
}
#endif
