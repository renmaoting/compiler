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
        if(table.count(str)) delete table[str];
        table[str] = ast;
    }

    bool ifExist(std::string str){
        return table.count(str);
    }

    Ast* getAstNode(std::string str){
        if(table.count(str)==0) return NULL;
        return table[str]; 
    }

    int getSize()const  { return table.size();  }

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

    int getScopeLevel()const { return curScope; }

    SymbolTable& getScope() { return stm[curScope]; }

    SymbolTable& getScope(int cnt) { return stm[cnt]; }

    void insertScope() { 
        SymbolTable newST;
        stm.push_back(newST); 
        curScope++;
    }

    void popScope() { 
        if(stm.size()<1) {
            std::cerr << "can't pop scope" << std::endl;
            return;
        }
        stm.pop_back(); 
        curScope--;
    }
        
private:
    SymbolTableManager():stm(), curScope(0){
        SymbolTable st;
        stm.push_back(st);
    }
    std::vector<SymbolTable> stm;
    int curScope;
};
#endif
