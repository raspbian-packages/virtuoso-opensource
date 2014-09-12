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
     JSON_OBJ_BEGIN = 258,
     JSON_OBJ_END = 259,
     JSON_ARR_BEGIN = 260,
     JSON_ARR_END = 261,
     JSON_COLON = 262,
     JSON_COMMA = 263,
     JSON_NAME = 264,
     JSON_SQSTRING = 265,
     JSON_DQSTRING = 266,
     JSON_NUMBER = 267,
     JSON_TRUE_L = 268,
     JSON_FALSE_L = 269,
     JSON_NULL_L = 270
   };
#endif
/* Tokens.  */
#define JSON_OBJ_BEGIN 258
#define JSON_OBJ_END 259
#define JSON_ARR_BEGIN 260
#define JSON_ARR_END 261
#define JSON_COLON 262
#define JSON_COMMA 263
#define JSON_NAME 264
#define JSON_SQSTRING 265
#define JSON_DQSTRING 266
#define JSON_NUMBER 267
#define JSON_TRUE_L 268
#define JSON_FALSE_L 269
#define JSON_NULL_L 270




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 39 "./json.y"
{
  caddr_t box;
  caddr_t *list;
  dk_set_t revlist;
}
/* Line 1529 of yacc.c.  */
#line 85 "json_p.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE jsonyylval;

