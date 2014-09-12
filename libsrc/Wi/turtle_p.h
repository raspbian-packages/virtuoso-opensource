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
     __TTL_PUNCT_BEGIN = 258,
     _CARET_WS = 259,
     _CARET_NOWS = 260,
     _CARET_CARET = 261,
     _COLON = 262,
     _COMMA = 263,
     _DOT_WS = 264,
     _LBRA = 265,
     _LBRA_TOP_TRIG = 266,
     _LPAR = 267,
     _LSQBRA = 268,
     _LSQBRA_RSQBRA = 269,
     _RBRA = 270,
     _RPAR = 271,
     _RSQBRA = 272,
     _SEMI = 273,
     _EQ = 274,
     _EQ_TOP_TRIG = 275,
     _EQ_GT = 276,
     _LT_EQ = 277,
     _BANG = 278,
     _AT_a_L = 279,
     _AT_base_L = 280,
     _AT_has_L = 281,
     _AT_is_L = 282,
     _AT_keywords_L = 283,
     _AT_of_L = 284,
     _AT_prefix_L = 285,
     _AT_this_L = 286,
     _MINUS_INF_L = 287,
     INF_L = 288,
     NaN_L = 289,
     false_L = 290,
     true_L = 291,
     __TTL_PUNCT_END = 292,
     __TTL_NONPUNCT_START = 293,
     TURTLE_INTEGER = 294,
     TURTLE_DECIMAL = 295,
     TURTLE_DOUBLE = 296,
     TURTLE_STRING = 297,
     KEYWORD = 298,
     LANGTAG = 299,
     QNAME = 300,
     QNAME_NS = 301,
     VARIABLE = 302,
     BLANK_NODE_LABEL = 303,
     Q_IRI_REF = 304,
     _GARBAGE_BEFORE_DOT_WS = 305,
     TTL_RECOVERABLE_ERROR = 306,
     __TTL_NONPUNCT_END = 307
   };
#endif
/* Tokens.  */
#define __TTL_PUNCT_BEGIN 258
#define _CARET_WS 259
#define _CARET_NOWS 260
#define _CARET_CARET 261
#define _COLON 262
#define _COMMA 263
#define _DOT_WS 264
#define _LBRA 265
#define _LBRA_TOP_TRIG 266
#define _LPAR 267
#define _LSQBRA 268
#define _LSQBRA_RSQBRA 269
#define _RBRA 270
#define _RPAR 271
#define _RSQBRA 272
#define _SEMI 273
#define _EQ 274
#define _EQ_TOP_TRIG 275
#define _EQ_GT 276
#define _LT_EQ 277
#define _BANG 278
#define _AT_a_L 279
#define _AT_base_L 280
#define _AT_has_L 281
#define _AT_is_L 282
#define _AT_keywords_L 283
#define _AT_of_L 284
#define _AT_prefix_L 285
#define _AT_this_L 286
#define _MINUS_INF_L 287
#define INF_L 288
#define NaN_L 289
#define false_L 290
#define true_L 291
#define __TTL_PUNCT_END 292
#define __TTL_NONPUNCT_START 293
#define TURTLE_INTEGER 294
#define TURTLE_DECIMAL 295
#define TURTLE_DOUBLE 296
#define TURTLE_STRING 297
#define KEYWORD 298
#define LANGTAG 299
#define QNAME 300
#define QNAME_NS 301
#define VARIABLE 302
#define BLANK_NODE_LABEL 303
#define Q_IRI_REF 304
#define _GARBAGE_BEFORE_DOT_WS 305
#define TTL_RECOVERABLE_ERROR 306
#define __TTL_NONPUNCT_END 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 72 "./turtle_p.y"
{
  caddr_t box;
  ptrlong token_type;
  void *nothing;
  ptrlong lexlineno;
}
/* Line 1529 of yacc.c.  */
#line 160 "turtle_p.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



