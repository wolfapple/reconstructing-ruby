%{
  #include "node.h"
  #include <stdio.h>
  extern void yyerror(struct parser_state *state, char const *s);
%}

%pure-parser
%parse-param { parser_state *state }
%lex-param { state }

%union {
  int ival;
  float fval;
  char *sval;
}

%{
  extern int yylex(YYSTYPE *yylval, parser_state *state);
%}

%token  tSTRING tFLOAT tNUMBER tID tCONSTANT tEQUAL tGT tLT tGTE tLTE
%token  tNEQUAL tPLUS tMINUS tMULT tDIV tMOD tEMARK tQMARK tAND tOR
%token  tLSBRACE tRSBRACE tLPAREN tRPAREN tLBRACE tRBRACE tAT tDOT 
%token  tCOMMA tCOLON
%token  kCLASS kEND kDEF

%left   tPLUS
%right  tEQUAL

%start  program

%%

program: expressions { printf("%s\n", state->source_file); }

expressions: expressions expression
           | expression

expression: class_definition
          | binary_expression
          | method_definition
          | variable
          | assignment
          | method_call
          | value

binary_expression: expression tPLUS expression

assignment: variable tEQUAL expression

class_definition: kCLASS tCONSTANT expressions kEND

method_definition: kDEF tID expressions kEND
                 | kDEF tID tLPAREN tID tRPAREN expressions kEND

method_call: variable tDOT tID
           | tCONSTANT tDOT tID tLPAREN tSTRING tRPAREN
           | tID tSTRING

variable: tID
        | tAT tID

value: tNUMBER