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
           std::cout << "= " << $2->getVal() << std::endl;
           makeGraph($2);
           if($2) delete $2;
           std::cout << "> ";
         }
       | calclist EOL // blank line or a comment
       | // empty
       ;

exp    : exp ADD exp { $$ = new AddNode($1, $3); }
       | exp MINUS exp { $$ = new MinusNode($1, $3); }
       | exp MUL exp { $$ = new MulNode($1, $3); }
       | exp DIVID exp { $$ = new DividNode($1, $3); }
       | exp EXPO exp  { $$ = new ExponentNode($1, $3); }
       | LEFT_BRACKET exp RIGHT_BRACKET { $$ = $2; }
       | MINUS exp { $$ = new SingleMinusNode($2, NULL); }
       | NUMBER   { $$ = new NumberNode($1); }
       ;
%%
