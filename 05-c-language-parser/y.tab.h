/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 259,         /* TYPE_IDENTIFIER  */
    INTEGER_CONSTANT = 260,        /* INTEGER_CONSTANT  */
    FLOAT_CONSTANT = 261,          /* FLOAT_CONSTANT  */
    CHARACTER_CONSTANT = 262,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 263,          /* STRING_LITERAL  */
    AUTO_SYM = 264,                /* AUTO_SYM  */
    STATIC_SYM = 265,              /* STATIC_SYM  */
    CONST_SYM = 266,               /* CONST_SYM  */
    TYPEDEF_SYM = 267,             /* TYPEDEF_SYM  */
    STRUCT_SYM = 268,              /* STRUCT_SYM  */
    UNION_SYM = 269,               /* UNION_SYM  */
    ENUM_SYM = 270,                /* ENUM_SYM  */
    CASE_SYM = 271,                /* CASE_SYM  */
    DEFAULT_SYM = 272,             /* DEFAULT_SYM  */
    IF_SYM = 273,                  /* IF_SYM  */
    ELSE_SYM = 274,                /* ELSE_SYM  */
    SWITCH_SYM = 275,              /* SWITCH_SYM  */
    WHILE_SYM = 276,               /* WHILE_SYM  */
    DO_SYM = 277,                  /* DO_SYM  */
    FOR_SYM = 278,                 /* FOR_SYM  */
    RETURN_SYM = 279,              /* RETURN_SYM  */
    CONTINUE_SYM = 280,            /* CONTINUE_SYM  */
    BREAK_SYM = 281,               /* BREAK_SYM  */
    GOTO_SYM = 282,                /* GOTO_SYM  */
    COMMA = 283,                   /* COMMA  */
    ASSIGN = 284,                  /* ASSIGN  */
    STAR = 285,                    /* STAR  */
    ARROW = 286,                   /* ARROW  */
    PLUSPLUS = 287,                /* PLUSPLUS  */
    MINUSMINUS = 288,              /* MINUSMINUS  */
    AMP = 289,                     /* AMP  */
    EXCL = 290,                    /* EXCL  */
    MINUS = 291,                   /* MINUS  */
    PLUS = 292,                    /* PLUS  */
    SIZEOF_SYM = 293,              /* SIZEOF_SYM  */
    SLASH = 294,                   /* SLASH  */
    PERCENT = 295,                 /* PERCENT  */
    LSS = 296,                     /* LSS  */
    GTR = 297,                     /* GTR  */
    LEQ = 298,                     /* LEQ  */
    REQ = 299,                     /* REQ  */
    GEQ = 300,                     /* GEQ  */
    EQL = 301,                     /* EQL  */
    NEQ = 302,                     /* NEQ  */
    AMPAMP = 303,                  /* AMPAMP  */
    BARBAR = 304,                  /* BARBAR  */
    LR = 305,                      /* LR  */
    RR = 306,                      /* RR  */
    LP = 307,                      /* LP  */
    RP = 308,                      /* RP  */
    LB = 309,                      /* LB  */
    RB = 310,                      /* RB  */
    SEMICOLON = 311,               /* SEMICOLON  */
    COLON = 312,                   /* COLON  */
    DOTDOTDOT = 313,               /* DOTDOTDOT  */
    PERIOD = 314                   /* PERIOD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define INTEGER_CONSTANT 260
#define FLOAT_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define AUTO_SYM 264
#define STATIC_SYM 265
#define CONST_SYM 266
#define TYPEDEF_SYM 267
#define STRUCT_SYM 268
#define UNION_SYM 269
#define ENUM_SYM 270
#define CASE_SYM 271
#define DEFAULT_SYM 272
#define IF_SYM 273
#define ELSE_SYM 274
#define SWITCH_SYM 275
#define WHILE_SYM 276
#define DO_SYM 277
#define FOR_SYM 278
#define RETURN_SYM 279
#define CONTINUE_SYM 280
#define BREAK_SYM 281
#define GOTO_SYM 282
#define COMMA 283
#define ASSIGN 284
#define STAR 285
#define ARROW 286
#define PLUSPLUS 287
#define MINUSMINUS 288
#define AMP 289
#define EXCL 290
#define MINUS 291
#define PLUS 292
#define SIZEOF_SYM 293
#define SLASH 294
#define PERCENT 295
#define LSS 296
#define GTR 297
#define LEQ 298
#define REQ 299
#define GEQ 300
#define EQL 301
#define NEQ 302
#define AMPAMP 303
#define BARBAR 304
#define LR 305
#define RR 306
#define LP 307
#define RP 308
#define LB 309
#define RB 310
#define SEMICOLON 311
#define COLON 312
#define DOTDOTDOT 313
#define PERIOD 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
