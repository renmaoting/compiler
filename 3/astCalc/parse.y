//  Source code for "flex & bison", by John Levine
//  Declarations for an AST calculator fb3-1
//  Adapted by Brian Malloy
%{
#include <iostream>
#include "ast.h"
  extern int yylex();
  void yyerror(const char *s) { std::cout << s << std::endl; }
  void yyerror(const char *s, const char ch) {
    std::cout << s << ch << std::endl;
  }
%}

%union {
  Ast* ast;
  double d;
}

%token ADD MINUS MUL DIVID EXPO LEFT_BRACKET RIGHT_BRACKET
%token <d> NUMBER
%token EOL
%type <ast> exp 
%left ADD MINUS
%left MUL DIVID
%left EXPO
%%

calclist 
       : calclist exp EOL {
           std::cout << "= " << eval($2) << std::endl;
           makeGraph($2);
           treeFree($2);
           std::cout << "> ";
         }
       | calclist EOL // blank line or a comment
       | // empty
       ;

exp    : exp ADD exp { $$ = new AstNode('+', $1,$3); }
       | exp MINUS exp { $$ = new AstNode('-', $1,$3); }
       | exp MUL exp { $$ = new AstNode('*', $1,$3); }
       | exp DIVID exp { $$ = new AstNode('/', $1,$3); }
       | exp EXPO exp  { $$ = new AstNode('E', $1,$3); }
       | LEFT_BRACKET exp RIGHT_BRACKET { $$ = $2; }
       | MINUS exp { $$ = new AstNode('M', $2, NULL); }
       | NUMBER   { $$ = new AstNumber('K', $1); }
       ;
%%
