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
    static SymbolTable& getInstance()
    {
        static SymbolTable instance;
        return instance;
    }

    ~SymbolTable(){}

    void addSymbol(std::string str, Ast* ast)
    {
        table[str] = ast;
    }

    Ast* getAstNode(std::string str){
        if(table.count(str)==0) return NULL;
        return table[str]; 
    }

private:
    SymbolTable() {}
    SymbolTable(SymbolTable&) {}
    std::unordered_map<std::string, Ast*> table;
};
#endif
