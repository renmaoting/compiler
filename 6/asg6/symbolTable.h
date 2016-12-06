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
    //    for(auto val: table)
            //delete val.second;
    }

    void addSymbol(std::string str, Ast* ast)
    {
    //    if(table.count(str) && table[str]) delete table[str];
        table[str] = ast;
    }

    Ast* getAstNode(std::string str){
        if(table.count(str)==0) return NULL;
        return table[str]; 
    }

    int getSize()const  { return table.size();  }

    void deleteSymbol(std::string str, bool ifFree = true){
        if(table.count(str)==0) return;
        /*if(ifFree==true) delete table[str];
        table.erase(str);*/
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

    ~SymbolTableManager(){
        //for(int i = 0; i < (int)stm.size(); i++) 
            //delete stm[i];
    }

    int getScopeLevel()const { return curScope; }

    SymbolTable* getScope() { return stm[curScope]; }

    SymbolTable* getScope(int cnt) { return stm[cnt]; }

    void addSymbol(std::string str, Ast* node){
        getInstance().stm[curScope]->addSymbol(str, node);
    }

    Ast* getAstNode(std::string str){
        int cur = curScope;
        while(cur >= 0){
            if(getInstance().stm[cur]->getAstNode(str))
                break;
            cur--;
        }
        if(cur < 0){ 
            std::cerr << "can't find this symbol in symbol table!" << std::endl;
            exit(0);
        }
        return getInstance().stm[cur]->getAstNode(str);
    }

    void insertScope() { 
        SymbolTable *newST = new SymbolTable();
        stm.push_back(newST); 
        curScope++;
    }

    void popScope() { 
        if(stm.size()<1) {
            std::cerr << "can't pop scope" << std::endl;
            return;
        }
//        delete stm.back();
        stm.pop_back(); 
        curScope--;
    }
        
private:
    SymbolTableManager():stm(), curScope(0){
        SymbolTable *st = new SymbolTable();
        stm.push_back(st);
    }
    std::vector<SymbolTable*> stm;
    int curScope;
};
#endif
