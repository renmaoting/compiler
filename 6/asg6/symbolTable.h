/*************************************************************************
	> File Name: symbolTable.h
	> Author:Maoting Ren 
	> Mail: mren@g.clemson.edu
	> Created Time: Fri 18 Nov 2016 06:35:58 PM EST
 ************************************************************************/

#ifndef _SYMBOLTABLE_H
#define _SYMBOLTABLE_H

#include <unordered_map>
#include <vector>
#include "ast.h"

class SymbolTable
{
public:
    ~SymbolTable(){ 
        for(auto val: table)
            delete val.second;
    }

    void addSymbol(std::string str, Ast* ast)
    {
        table[str] = ast;
    }

    Ast* getAstNode(std::string str){
        if(table.count(str)==0) return NULL;
        return table[str]; 
    }

private:
    std::unordered_map<std::string, Ast*> table;
};


class SymbolTableManager
{
public:
    static SymbolTableManager& getInstance(){
        static SymbolTableManager instance;
        return instance;
    }

    int getScopeLevel() { return curScope; }

    SymbolTable& getScope() { return stm[curScope]; }

    void insertScope() { 
        SymbolTable newST;
        stm.push_back(newST); 
    }

    void popScope() { stm.pop_back(); }
        
private:
    SymbolTableManager():stm(), curScope(0){}
    std::vector<SymbolTable> stm;
    int curScope;
};
#endif
