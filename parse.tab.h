/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tSTRING = 258,
     tFLOAT = 259,
     tNUMBER = 260,
     tID = 261,
     tCONSTANT = 262,
     tEQUAL = 263,
     tGT = 264,
     tLT = 265,
     tGTE = 266,
     tLTE = 267,
     tNEQUAL = 268,
     tPLUS = 269,
     tMINUS = 270,
     tMULT = 271,
     tDIV = 272,
     tMOD = 273,
     tEMARK = 274,
     tQMARK = 275,
     tAND = 276,
     tOR = 277,
     tLSBRACE = 278,
     tRSBRACE = 279,
     tLPAREN = 280,
     tRPAREN = 281,
     tLBRACE = 282,
     tRBRACE = 283,
     tAT = 284,
     tDOT = 285,
     tCOMMA = 286,
     tCOLON = 287,
     kCLASS = 288,
     kEND = 289,
     kDEF = 290
   };
#endif
/* Tokens.  */
#define tSTRING 258
#define tFLOAT 259
#define tNUMBER 260
#define tID 261
#define tCONSTANT 262
#define tEQUAL 263
#define tGT 264
#define tLT 265
#define tGTE 266
#define tLTE 267
#define tNEQUAL 268
#define tPLUS 269
#define tMINUS 270
#define tMULT 271
#define tDIV 272
#define tMOD 273
#define tEMARK 274
#define tQMARK 275
#define tAND 276
#define tOR 277
#define tLSBRACE 278
#define tRSBRACE 279
#define tLPAREN 280
#define tRPAREN 281
#define tLBRACE 282
#define tRBRACE 283
#define tAT 284
#define tDOT 285
#define tCOMMA 286
#define tCOLON 287
#define kCLASS 288
#define kEND 289
#define kDEF 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "parse.y"
{
  int ival;
  float fval;
  char *sval;
}
/* Line 1529 of yacc.c.  */
#line 125 "parse.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



