/*************************************************************************
	> File Name: symbolTableManager.h
	> Author:Maoting Ren 
	> Mail: mren@g.clemson.edu
	> Created Time: Sat 03 Dec 2016 04:41:12 PM EST
 ************************************************************************/

#ifndef _SYMBOLTABLEMANAGER_H
#define _SYMBOLTABLEMANAGER_H

#include <stack>
#include "symbolTable.h"

class SymbolTableManager
{
public:
    SymbolTableManager():stm(0), curScope(0){}
    int getScopeLevel() { return curScope; }
    SymbolTable& getScope() { return stm[curScope]; }
    void insertScope() { 
        SymbolTable newST;
        stm.push_back(newST); 
    }
    void popScope() { stm.pop_back(); }
        
private:
    std::vector<SymbolTable> stm;
    int curScope;
};
#endif
