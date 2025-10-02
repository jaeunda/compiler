/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "c-grammer.y"

#include "type.h"
extern int line_no, syntax_err;


#line 77 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 5,           /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 6,             /* FLOAT_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 7,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 8,             /* STRING_LITERAL  */
  YYSYMBOL_AUTO_SYM = 9,                   /* AUTO_SYM  */
  YYSYMBOL_STATIC_SYM = 10,                /* STATIC_SYM  */
  YYSYMBOL_CONST_SYM = 11,                 /* CONST_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 12,               /* TYPEDEF_SYM  */
  YYSYMBOL_STRUCT_SYM = 13,                /* STRUCT_SYM  */
  YYSYMBOL_UNION_SYM = 14,                 /* UNION_SYM  */
  YYSYMBOL_ENUM_SYM = 15,                  /* ENUM_SYM  */
  YYSYMBOL_CASE_SYM = 16,                  /* CASE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 17,               /* DEFAULT_SYM  */
  YYSYMBOL_IF_SYM = 18,                    /* IF_SYM  */
  YYSYMBOL_ELSE_SYM = 19,                  /* ELSE_SYM  */
  YYSYMBOL_SWITCH_SYM = 20,                /* SWITCH_SYM  */
  YYSYMBOL_WHILE_SYM = 21,                 /* WHILE_SYM  */
  YYSYMBOL_DO_SYM = 22,                    /* DO_SYM  */
  YYSYMBOL_FOR_SYM = 23,                   /* FOR_SYM  */
  YYSYMBOL_RETURN_SYM = 24,                /* RETURN_SYM  */
  YYSYMBOL_CONTINUE_SYM = 25,              /* CONTINUE_SYM  */
  YYSYMBOL_BREAK_SYM = 26,                 /* BREAK_SYM  */
  YYSYMBOL_GOTO_SYM = 27,                  /* GOTO_SYM  */
  YYSYMBOL_COMMA = 28,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_STAR = 30,                      /* STAR  */
  YYSYMBOL_ARROW = 31,                     /* ARROW  */
  YYSYMBOL_PLUSPLUS = 32,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 33,                /* MINUSMINUS  */
  YYSYMBOL_AMP = 34,                       /* AMP  */
  YYSYMBOL_EXCL = 35,                      /* EXCL  */
  YYSYMBOL_MINUS = 36,                     /* MINUS  */
  YYSYMBOL_PLUS = 37,                      /* PLUS  */
  YYSYMBOL_SIZEOF_SYM = 38,                /* SIZEOF_SYM  */
  YYSYMBOL_SLASH = 39,                     /* SLASH  */
  YYSYMBOL_PERCENT = 40,                   /* PERCENT  */
  YYSYMBOL_LSS = 41,                       /* LSS  */
  YYSYMBOL_GTR = 42,                       /* GTR  */
  YYSYMBOL_LEQ = 43,                       /* LEQ  */
  YYSYMBOL_REQ = 44,                       /* REQ  */
  YYSYMBOL_GEQ = 45,                       /* GEQ  */
  YYSYMBOL_EQL = 46,                       /* EQL  */
  YYSYMBOL_NEQ = 47,                       /* NEQ  */
  YYSYMBOL_AMPAMP = 48,                    /* AMPAMP  */
  YYSYMBOL_BARBAR = 49,                    /* BARBAR  */
  YYSYMBOL_LR = 50,                        /* LR  */
  YYSYMBOL_RR = 51,                        /* RR  */
  YYSYMBOL_LP = 52,                        /* LP  */
  YYSYMBOL_RP = 53,                        /* RP  */
  YYSYMBOL_LB = 54,                        /* LB  */
  YYSYMBOL_RB = 55,                        /* RB  */
  YYSYMBOL_SEMICOLON = 56,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 57,                     /* COLON  */
  YYSYMBOL_DOTDOTDOT = 58,                 /* DOTDOTDOT  */
  YYSYMBOL_PERIOD = 59,                    /* PERIOD  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_translation_unit = 62,          /* translation_unit  */
  YYSYMBOL_external_declaration = 63,      /* external_declaration  */
  YYSYMBOL_function_definition = 64,       /* function_definition  */
  YYSYMBOL_declaration = 65,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 66,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 67,   /* storage_class_specifier  */
  YYSYMBOL_type_qualifier = 68,            /* type_qualifier  */
  YYSYMBOL_init_declarator_list = 69,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 70,           /* init_declarator  */
  YYSYMBOL_type_specifier = 71,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 72,          /* struct_specifier  */
  YYSYMBOL_struct_or_union = 73,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 74,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 75,        /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 76,  /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 77,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 78,         /* struct_declarator  */
  YYSYMBOL_enum_specifier = 79,            /* enum_specifier  */
  YYSYMBOL_enumerator_list = 80,           /* enumerator_list  */
  YYSYMBOL_enumerator = 81,                /* enumerator  */
  YYSYMBOL_declarator = 82,                /* declarator  */
  YYSYMBOL_pointer = 83,                   /* pointer  */
  YYSYMBOL_direct_declarator = 84,         /* direct_declarator  */
  YYSYMBOL_constant_expression_opt = 85,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 86,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 87,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 88,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 89,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 90,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 91,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 92, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 93,               /* initializer  */
  YYSYMBOL_initializer_list = 94,          /* initializer_list  */
  YYSYMBOL_statement = 95,                 /* statement  */
  YYSYMBOL_labeled_statement = 96,         /* labeled_statement  */
  YYSYMBOL_compound_statement = 97,        /* compound_statement  */
  YYSYMBOL_declaration_list = 98,          /* declaration_list  */
  YYSYMBOL_statement_list = 99,            /* statement_list  */
  YYSYMBOL_expression_statement = 100,     /* expression_statement  */
  YYSYMBOL_selection_statement = 101,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 102,      /* iteration_statement  */
  YYSYMBOL_expression_opt = 103,           /* expression_opt  */
  YYSYMBOL_jump_statement = 104,           /* jump_statement  */
  YYSYMBOL_primary_expression = 105,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 106,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 107,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 108,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 109,         /* unary_expression  */
  YYSYMBOL_cast_expression = 110,          /* cast_expression  */
  YYSYMBOL_type_name = 111,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 112, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 113,      /* additive_expression  */
  YYSYMBOL_shift_expression = 114,         /* shift_expression  */
  YYSYMBOL_relational_expression = 115,    /* relational_expression  */
  YYSYMBOL_equality_expression = 116,      /* equality_expression  */
  YYSYMBOL_AND_expression = 117,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 118,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 119,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 120,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 121,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 122,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 123,    /* assignment_expression  */
  YYSYMBOL_comma_expression = 124,         /* comma_expression  */
  YYSYMBOL_expression = 125,               /* expression  */
  YYSYMBOL_constant_expression = 126       /* constant_expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   549

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    20,    20,    23,    24,    27,    28,    31,    32,    35,
      38,    39,    40,    41,    42,    43,    46,    47,    48,    51,
      54,    55,    58,    59,    62,    63,    64,    67,    68,    69,
      72,    73,    76,    77,    80,    83,    84,    85,    86,    89,
      90,    93,    94,    95,    98,    99,   100,   103,   104,   107,
     108,   111,   112,   115,   116,   119,   120,   121,   122,   125,
     126,   129,   130,   133,   134,   137,   138,   141,   142,   145,
     146,   149,   150,   151,   154,   155,   156,   157,   158,   161,
     162,   163,   166,   167,   169,   170,   171,   172,   173,   174,
     177,   178,   179,   182,   185,   186,   189,   190,   193,   194,
     197,   198,   199,   202,   203,   204,   207,   208,   211,   212,
     213,   214,   217,   218,   219,   220,   221,   222,   225,   226,
     227,   228,   229,   230,   231,   234,   235,   238,   239,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   253,   254,
     257,   258,   261,   262,   263,   264,   267,   268,   269,   272,
     275,   276,   277,   278,   279,   282,   283,   284,   287,   288,
     291,   294,   297,   298,   301,   302,   305,   308,   309,   312,
     315,   318
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "INTEGER_CONSTANT", "FLOAT_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "AUTO_SYM", "STATIC_SYM",
  "CONST_SYM", "TYPEDEF_SYM", "STRUCT_SYM", "UNION_SYM", "ENUM_SYM",
  "CASE_SYM", "DEFAULT_SYM", "IF_SYM", "ELSE_SYM", "SWITCH_SYM",
  "WHILE_SYM", "DO_SYM", "FOR_SYM", "RETURN_SYM", "CONTINUE_SYM",
  "BREAK_SYM", "GOTO_SYM", "COMMA", "ASSIGN", "STAR", "ARROW", "PLUSPLUS",
  "MINUSMINUS", "AMP", "EXCL", "MINUS", "PLUS", "SIZEOF_SYM", "SLASH",
  "PERCENT", "LSS", "GTR", "LEQ", "REQ", "GEQ", "EQL", "NEQ", "AMPAMP",
  "BARBAR", "LR", "RR", "LP", "RP", "LB", "RB", "SEMICOLON", "COLON",
  "DOTDOTDOT", "PERIOD", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "declaration",
  "declaration_specifiers", "storage_class_specifier", "type_qualifier",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_specifier", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "pointer",
  "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "expression_opt", "jump_statement", "primary_expression",
  "postfix_expression", "arg_expression_list_opt", "arg_expression_list",
  "unary_expression", "cast_expression", "type_name",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "comma_expression",
  "expression", "constant_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-171)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     497,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,    17,
      37,   101,    43,   497,  -171,  -171,  -171,   497,   213,   213,
     213,  -171,    18,  -171,     1,    26,    60,    22,    82,    77,
      65,  -171,  -171,    70,   497,   111,  -171,     1,  -171,  -171,
    -171,    96,   225,  -171,  -171,    60,   213,   440,    82,   126,
       4,  -171,  -171,  -171,   431,  -171,   497,  -171,   225,   225,
     225,   137,  -171,     9,   213,    56,   104,  -171,   168,  -171,
    -171,  -171,  -171,  -171,  -171,   452,   452,   440,   440,   440,
     440,   488,   392,   110,  -171,   128,   191,  -171,   124,    -3,
    -171,   134,   166,   198,  -171,  -171,   187,   188,  -171,  -171,
    -171,  -171,  -171,    55,   440,    82,  -171,   431,  -171,  -171,
    -171,   170,  -171,  -171,  -171,  -171,   440,     8,  -171,   184,
    -171,   241,   328,   440,  -171,    19,  -171,  -171,    84,  -171,
     158,   440,  -171,  -171,  -171,  -171,  -171,  -171,  -171,   392,
    -171,    23,   190,   192,  -171,   247,  -171,  -171,   440,   440,
     248,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,  -171,  -171,  -171,  -171,
      89,  -171,  -171,     9,  -171,   440,   195,   440,   196,   202,
     203,   208,   278,   217,   440,   214,   215,   269,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,   224,   229,   234,
     233,    84,   213,   440,  -171,  -171,   236,   340,    90,  -171,
     440,  -171,  -171,   237,   279,  -171,   251,  -171,  -171,  -171,
    -171,  -171,   124,   124,  -171,  -171,  -171,  -171,   134,   134,
     166,  -171,   187,   381,  -171,  -171,  -171,   278,   252,   278,
     440,   440,   440,   287,   440,   261,  -171,  -171,  -171,   262,
    -171,  -171,  -171,  -171,   266,   265,  -171,  -171,  -171,   440,
    -171,  -171,  -171,  -171,   278,  -171,   268,   270,   271,   273,
     277,  -171,  -171,  -171,  -171,  -171,  -171,   278,   278,   278,
     440,   440,   303,  -171,  -171,   274,   280,   278,   289,   440,
    -171,  -171,   276,   278,  -171
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    55,    26,    16,    17,    19,    18,    30,    31,     0,
       0,     0,     0,     2,     3,     5,     6,     0,    11,    12,
      10,    24,     0,    25,     0,     0,    52,    46,     0,    53,
       0,     1,     4,     0,     0,     9,    20,    22,    14,    15,
      13,    29,     0,    94,     8,    51,    61,    59,     0,    49,
       0,    47,    54,    56,     0,    22,     0,     7,     0,    36,
      35,     0,    32,     0,    96,    69,     0,    62,    63,    65,
     112,   113,   114,   115,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,   129,   138,   142,   146,   149,
     150,   155,   158,   160,   161,   162,   164,   166,   167,   169,
     170,   171,    60,     0,     0,     0,    45,     0,    23,    79,
      21,     0,    38,    37,    28,    33,     0,     0,    39,    41,
      95,     0,    61,    59,    67,    71,    68,    70,    72,    58,
       0,     0,   130,   131,   138,   132,   133,   134,   135,     0,
     136,   140,     0,     0,    57,     0,   123,   124,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,    50,    48,    82,
       0,    27,    42,     0,    34,     0,   112,     0,     0,     0,
       0,     0,     0,     0,   106,     0,     0,     0,    93,    98,
      97,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,    73,    61,    59,    64,    66,     0,    61,    71,   141,
       0,   117,   122,     0,   126,   127,     0,   121,   168,   143,
     144,   145,   148,   147,   151,   152,   153,   154,   156,   157,
     159,   163,   165,     0,    80,    40,    43,     0,     0,     0,
       0,     0,     0,     0,   106,     0,   107,   109,   110,     0,
      99,    76,    74,    75,     0,     0,   137,   139,   120,     0,
     119,    81,    83,    92,     0,    91,     0,     0,     0,     0,
       0,   108,   111,    78,    77,   128,    90,     0,     0,     0,
       0,   106,   100,   102,   103,     0,     0,     0,     0,   106,
     101,   104,     0,     0,   105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,   313,  -171,    41,     6,  -171,    21,  -171,
     290,   -14,  -171,  -171,   298,   -11,   155,  -171,   162,  -171,
     299,   243,    -7,   -28,   -16,  -105,   -44,  -171,  -171,   227,
    -171,   -54,  -112,  -104,  -171,  -144,  -171,    28,  -171,  -171,
    -171,  -171,  -171,  -170,  -171,  -171,  -171,  -171,  -171,    46,
     -63,   220,    63,  -171,    32,    69,   197,  -171,  -171,   199,
     200,  -171,  -171,  -143,  -171,   -47,   -74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,    13,    14,    15,    33,    65,    18,    19,    35,
      36,    20,    21,    22,    61,    62,    63,   117,   118,    23,
      50,    51,    24,    25,    26,    83,   198,    67,    68,    69,
     126,   199,   128,   108,   170,   190,   191,   192,    64,   121,
     193,   194,   195,   245,   196,    84,    85,   213,   214,    86,
      87,   142,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   197,   102
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     101,    52,    66,   169,    30,   215,    17,   109,   218,    45,
      37,   127,     1,   201,   135,   136,   137,   138,   200,    17,
      27,    41,     1,    34,    38,    39,    40,    55,    60,     1,
     167,    29,   105,   155,   156,   143,   173,   125,   243,    10,
      34,    16,   172,    31,    60,    60,    60,    60,     5,    55,
     115,    43,    44,    10,    16,   106,   119,   101,   124,     1,
     109,    11,    34,    59,   174,    57,   116,    28,    42,   101,
      34,   122,    48,   123,   270,   207,   101,   123,    11,    59,
      59,    59,    59,   105,   143,    49,    10,   209,   141,   219,
     220,   221,   143,   263,   125,   265,   201,    60,   255,    54,
     115,   236,   216,   238,     1,   120,   166,    10,   122,    45,
     123,   286,    46,   208,    47,    30,   275,   233,    53,   292,
     276,   132,   133,   134,   134,   134,   134,   140,   101,   262,
     101,    10,    59,   282,   283,   284,   202,   246,   203,    56,
     234,     2,   207,   290,   123,   141,    58,   257,     5,   294,
       7,     8,     9,    11,   152,   104,   101,   129,   254,   145,
     146,   147,     2,   153,   154,   144,   119,     3,     4,     5,
       6,     7,     8,     9,     2,   157,   158,   159,   160,   208,
     148,     5,   149,     7,     8,     9,   109,   150,   114,   224,
     225,   226,   227,   266,   267,   268,   130,   246,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   161,   162,   112,   113,   204,     2,   222,   223,
     151,   171,     3,     4,     5,     6,     7,     8,     9,     2,
     228,   229,   163,   285,   246,   164,     5,   165,     7,     8,
       9,   175,   246,   210,   176,   211,    71,    72,    73,    74,
     212,   217,   237,   239,   240,   241,   134,   177,   178,   179,
     242,   180,   181,   182,   183,   184,   185,   186,   187,   244,
     247,   248,   249,    75,    76,    77,    78,    79,    80,    81,
     250,   176,   251,    71,    72,    73,    74,   252,   253,   256,
     258,    43,   188,    82,   177,   178,   179,   189,   180,   181,
     182,   183,   184,   185,   186,   187,   260,   259,   269,   264,
      75,    76,    77,    78,    79,    80,    81,   271,   272,   273,
     274,   277,   287,   278,   279,   280,    32,   288,    43,   293,
      82,     1,     2,   281,   189,   235,   289,     3,     4,     5,
       6,     7,     8,     9,     2,   291,   110,   103,   168,     3,
       4,     5,     6,     7,     8,     9,   111,   205,    10,   206,
     230,     0,     0,   231,     0,   232,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,   123,     0,    70,     0,    71,    72,    73,    74,
       0,     0,   207,     0,   123,    70,     2,    71,    72,    73,
      74,     3,     4,     5,     6,     7,     8,     9,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,   107,   261,    82,    70,     0,    71,    72,    73,    74,
       0,     0,     0,    70,    82,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,    70,     0,    71,    72,    73,
      74,     0,     0,    75,    76,    77,    78,    79,    80,    81,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,   107,     0,    82,    75,    76,    77,    78,    79,    80,
      81,    70,    82,    71,    72,    73,    74,     0,     0,     0,
       1,     2,     0,     0,   131,     0,     3,     4,     5,     6,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     0,     0,     0,     0,     0,     0,     0,     0,    11
};

static const yytype_int16 yycheck[] =
{
      47,    29,    46,   107,    11,   148,     0,    54,   151,    25,
      17,    65,     3,   125,    77,    78,    79,    80,   123,    13,
       3,     3,     3,    17,    18,    19,    20,    34,    42,     3,
     104,    10,    28,    36,    37,    82,    28,    65,   182,    30,
      34,     0,   116,     0,    58,    59,    60,    61,    11,    56,
      61,    50,    24,    30,    13,    51,    63,   104,    65,     3,
     107,    52,    56,    42,    56,    37,    57,    50,    50,   116,
      64,    52,    50,    54,   244,    52,   123,    54,    52,    58,
      59,    60,    61,    28,   131,     3,    30,   141,    82,   152,
     153,   154,   139,   237,   122,   239,   208,   111,   203,    29,
     111,   175,   149,   177,     3,    64,    51,    30,    52,   125,
      54,   281,    52,   141,    54,   122,   259,    28,    53,   289,
     264,    75,    76,    77,    78,    79,    80,    81,   175,   233,
     177,    30,   111,   277,   278,   279,    52,   184,    54,    28,
      51,     4,    52,   287,    54,   139,    50,   210,    11,   293,
      13,    14,    15,    52,    30,    29,   203,    53,   202,    31,
      32,    33,     4,    39,    40,    55,   173,     9,    10,    11,
      12,    13,    14,    15,     4,    41,    42,    43,    44,   207,
      52,    11,    54,    13,    14,    15,   233,    59,    51,   157,
     158,   159,   160,   240,   241,   242,    28,   244,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,    46,    47,    59,    60,    58,     4,   155,   156,
      29,    51,     9,    10,    11,    12,    13,    14,    15,     4,
     161,   162,    34,   280,   281,    48,    11,    49,    13,    14,
      15,    57,   289,    53,     3,    53,     5,     6,     7,     8,
       3,     3,    57,    57,    52,    52,   210,    16,    17,    18,
      52,    20,    21,    22,    23,    24,    25,    26,    27,    52,
      56,    56,     3,    32,    33,    34,    35,    36,    37,    38,
      56,     3,    53,     5,     6,     7,     8,    53,    55,    53,
      53,    50,    51,    52,    16,    17,    18,    56,    20,    21,
      22,    23,    24,    25,    26,    27,    55,    28,    21,    57,
      32,    33,    34,    35,    36,    37,    38,    56,    56,    53,
      55,    53,    19,    53,    53,    52,    13,    53,    50,    53,
      52,     3,     4,    56,    56,   173,    56,     9,    10,    11,
      12,    13,    14,    15,     4,    56,    56,    48,   105,     9,
      10,    11,    12,    13,    14,    15,    58,   130,    30,   139,
     163,    -1,    -1,   164,    -1,   165,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    54,    -1,     3,    -1,     5,     6,     7,     8,
      -1,    -1,    52,    -1,    54,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    50,    51,    52,     3,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,     3,    52,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,     7,
       8,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    50,    -1,    52,    32,    33,    34,    35,    36,    37,
      38,     3,    52,     5,     6,     7,     8,    -1,    -1,    -1,
       3,     4,    -1,    -1,    52,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     9,    10,    11,    12,    13,    14,    15,
      30,    52,    61,    62,    63,    64,    65,    66,    67,    68,
      71,    72,    73,    79,    82,    83,    84,     3,    50,    68,
      82,     0,    63,    65,    66,    69,    70,    82,    66,    66,
      66,     3,    50,    50,    97,    84,    52,    54,    50,     3,
      80,    81,    83,    53,    29,    82,    28,    97,    50,    68,
      71,    74,    75,    76,    98,    66,    86,    87,    88,    89,
       3,     5,     6,     7,     8,    32,    33,    34,    35,    36,
      37,    38,    52,    85,   105,   106,   109,   110,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    80,    29,    28,    51,    50,    93,   125,
      70,    74,    76,    76,    51,    75,    57,    77,    78,    82,
      65,    99,    52,    54,    82,    83,    90,    91,    92,    53,
      28,    52,   109,   109,   109,   110,   110,   110,   110,    52,
     109,    66,   111,   125,    55,    31,    32,    33,    52,    54,
      59,    29,    30,    39,    40,    36,    37,    41,    42,    43,
      44,    46,    47,    34,    48,    49,    51,   126,    81,    93,
      94,    51,   126,    28,    56,    57,     3,    16,    17,    18,
      20,    21,    22,    23,    24,    25,    26,    27,    51,    56,
      95,    96,    97,   100,   101,   102,   104,   125,    86,    91,
      85,    92,    52,    54,    58,    89,   111,    52,    83,    91,
      53,    53,     3,   107,   108,   123,   125,     3,   123,   110,
     110,   110,   112,   112,   114,   114,   114,   114,   115,   115,
     116,   119,   120,    28,    51,    78,   126,    57,   126,    57,
      52,    52,    52,    95,    52,   103,   125,    56,    56,     3,
      56,    53,    53,    55,    86,    85,    53,   110,    53,    28,
      55,    51,    93,    95,    57,    95,   125,   125,   125,    21,
     103,    56,    56,    53,    55,   123,    95,    53,    53,    53,
      52,    56,    95,    95,    95,   125,   103,    19,    53,    56,
      95,    56,   103,    53,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    64,    64,    65,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    68,
      69,    69,    70,    70,    71,    71,    71,    72,    72,    72,
      73,    73,    74,    74,    75,    76,    76,    76,    76,    77,
      77,    78,    78,    78,    79,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    91,    92,    92,    92,    92,    92,    93,
      93,    93,    94,    94,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   103,   103,   104,   104,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   112,   112,   112,   112,   113,   113,   113,   114,
     115,   115,   115,   115,   115,   116,   116,   116,   117,   117,
     118,   119,   120,   120,   121,   121,   122,   123,   123,   124,
     125,   126
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     2,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     3,     1,     1,     2,     2,     1,
       3,     1,     2,     3,     5,     4,     2,     1,     3,     1,
       3,     2,     1,     2,     3,     1,     3,     4,     4,     0,
       1,     0,     1,     1,     3,     1,     3,     2,     2,     0,
       1,     1,     1,     2,     3,     3,     3,     4,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     4,     0,     2,     0,     2,     1,     2,
       5,     7,     5,     5,     7,     9,     0,     1,     3,     2,
       2,     3,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     0,     1,     1,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     4,     1,     4,
       1,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     3,     1,     3,     1,     1,     3,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1628 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 320 "c-grammer.y"


extern char *yytext;
yyerror(char *s){
    syntax_err++;
    printf("line %d: %s near %s\n", line_no, s, yytext);
}
