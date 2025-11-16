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
#line 1 "yacc.y"

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;

#include "type.h"
#include "func.h"

extern int line_no, syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;

#line 85 "y.tab.c"

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
    GEQ = 299,                     /* GEQ  */
    EQL = 300,                     /* EQL  */
    NEQ = 301,                     /* NEQ  */
    AMPAMP = 302,                  /* AMPAMP  */
    BARBAR = 303,                  /* BARBAR  */
    LR = 304,                      /* LR  */
    RR = 305,                      /* RR  */
    LP = 306,                      /* LP  */
    RP = 307,                      /* RP  */
    LB = 308,                      /* LB  */
    RB = 309,                      /* RB  */
    SEMICOLON = 310,               /* SEMICOLON  */
    COLON = 311,                   /* COLON  */
    DOTDOTDOT = 312,               /* DOTDOTDOT  */
    PERIOD = 313                   /* PERIOD  */
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
#define GEQ 299
#define EQL 300
#define NEQ 301
#define AMPAMP 302
#define BARBAR 303
#define LR 304
#define RR 305
#define LP 306
#define RP 307
#define LB 308
#define RB 309
#define SEMICOLON 310
#define COLON 311
#define DOTDOTDOT 312
#define PERIOD 313

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
  YYSYMBOL_GEQ = 44,                       /* GEQ  */
  YYSYMBOL_EQL = 45,                       /* EQL  */
  YYSYMBOL_NEQ = 46,                       /* NEQ  */
  YYSYMBOL_AMPAMP = 47,                    /* AMPAMP  */
  YYSYMBOL_BARBAR = 48,                    /* BARBAR  */
  YYSYMBOL_LR = 49,                        /* LR  */
  YYSYMBOL_RR = 50,                        /* RR  */
  YYSYMBOL_LP = 51,                        /* LP  */
  YYSYMBOL_RP = 52,                        /* RP  */
  YYSYMBOL_LB = 53,                        /* LB  */
  YYSYMBOL_RB = 54,                        /* RB  */
  YYSYMBOL_SEMICOLON = 55,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 56,                     /* COLON  */
  YYSYMBOL_DOTDOTDOT = 57,                 /* DOTDOTDOT  */
  YYSYMBOL_PERIOD = 58,                    /* PERIOD  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_translation_unit = 61,          /* translation_unit  */
  YYSYMBOL_external_declaration = 62,      /* external_declaration  */
  YYSYMBOL_function_definition = 63,       /* function_definition  */
  YYSYMBOL_64_1 = 64,                      /* @1  */
  YYSYMBOL_65_2 = 65,                      /* @2  */
  YYSYMBOL_declaration_list_opt = 66,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 67,          /* declaration_list  */
  YYSYMBOL_declaration = 68,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 69,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 70,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 71,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 72,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 73,           /* init_declarator  */
  YYSYMBOL_initializer = 74,               /* initializer  */
  YYSYMBOL_initializer_list = 75,          /* initializer_list  */
  YYSYMBOL_type_specifier = 76,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 77,     /* struct_type_specifier  */
  YYSYMBOL_78_3 = 78,                      /* @3  */
  YYSYMBOL_79_4 = 79,                      /* @4  */
  YYSYMBOL_80_5 = 80,                      /* @5  */
  YYSYMBOL_81_6 = 81,                      /* @6  */
  YYSYMBOL_struct_or_union = 82,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 83,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 84,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 85,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 86,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 87,       /* enum_type_specifier  */
  YYSYMBOL_88_7 = 88,                      /* @7  */
  YYSYMBOL_89_8 = 89,                      /* @8  */
  YYSYMBOL_enumerator_list = 90,           /* enumerator_list  */
  YYSYMBOL_enumerator = 91,                /* enumerator  */
  YYSYMBOL_92_9 = 92,                      /* @9  */
  YYSYMBOL_declarator = 93,                /* declarator  */
  YYSYMBOL_pointer = 94,                   /* pointer  */
  YYSYMBOL_direct_declarator = 95,         /* direct_declarator  */
  YYSYMBOL_96_10 = 96,                     /* @10  */
  YYSYMBOL_parameter_type_list_opt = 97,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 98,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 99,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 100,    /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 101,  /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 102,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 103, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 104,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 105,           /* statement_list  */
  YYSYMBOL_statement = 106,                /* statement  */
  YYSYMBOL_labeled_statement = 107,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 108,       /* compound_statement  */
  YYSYMBOL_109_11 = 109,                   /* @11  */
  YYSYMBOL_expression_statement = 110,     /* expression_statement  */
  YYSYMBOL_selection_statement = 111,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 112,      /* iteration_statement  */
  YYSYMBOL_for_expression = 113,           /* for_expression  */
  YYSYMBOL_expression_opt = 114,           /* expression_opt  */
  YYSYMBOL_jump_statement = 115,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 116,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 117,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 118,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 119,      /* constant_expression  */
  YYSYMBOL_expression = 120,               /* expression  */
  YYSYMBOL_comma_expression = 121,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 122,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 123,   /* conditional_expression  */
  YYSYMBOL_logical_OR_expression = 124,    /* logical_OR_expression  */
  YYSYMBOL_logical_AND_expression = 125,   /* logical_AND_expression  */
  YYSYMBOL_bitwise_or_expression = 126,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 127,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 128,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 129,      /* equality_expression  */
  YYSYMBOL_relational_expression = 130,    /* relational_expression  */
  YYSYMBOL_shift_expression = 131,         /* shift_expression  */
  YYSYMBOL_additive_expression = 132,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 133, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 134,          /* cast_expression  */
  YYSYMBOL_unary_expression = 135,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 136,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 137,       /* primary_expression  */
  YYSYMBOL_type_name = 138                 /* type_name  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   455

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


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
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    29,    29,    33,    34,    37,    38,    41,    41,    43,
      43,    47,    48,    51,    52,    55,    58,    59,    60,    61,
      64,    65,    66,    69,    70,    73,    74,    77,    78,    81,
      82,    85,    86,    89,    90,    91,    94,    95,    94,    97,
      98,    97,   100,   103,   104,   107,   108,   111,   114,   115,
     118,   121,   121,   123,   123,   125,   128,   129,   132,   133,
     133,   137,   138,   141,   142,   145,   146,   147,   149,   149,
     155,   156,   159,   160,   163,   164,   167,   168,   171,   172,
     175,   176,   177,   180,   181,   182,   183,   184,   187,   188,
     191,   192,   195,   196,   197,   198,   199,   200,   203,   204,
     207,   207,   211,   212,   215,   216,   217,   220,   221,   222,
     225,   228,   229,   232,   233,   234,   237,   238,   241,   243,
     247,   248,   251,   254,   257,   260,   261,   264,   267,   268,
     272,   273,   277,   280,   283,   286,   287,   288,   291,   292,
     293,   294,   295,   298,   301,   302,   303,   306,   307,   308,
     309,   312,   313,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   328,   329,   330,   332,   333,   334,   335,
     338,   339,   340,   341,   342,   343,   346
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
  "PERCENT", "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "AMPAMP", "BARBAR",
  "LR", "RR", "LP", "RP", "LB", "RB", "SEMICOLON", "COLON", "DOTDOTDOT",
  "PERIOD", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2",
  "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_OR_expression", "logical_AND_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-194)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     404,  -194,  -194,  -194,  -194,  -194,  -194,  -194,    61,    40,
      28,    99,   404,  -194,  -194,  -194,    28,   292,   292,  -194,
     111,  -194,  -194,    18,    25,   104,   110,  -194,    86,  -194,
    -194,    68,   120,  -194,    11,  -194,  -194,   117,   128,   130,
      25,  -194,   344,   139,   213,  -194,  -194,    28,   175,   130,
     168,  -194,  -194,  -194,   292,  -194,  -194,  -194,  -194,  -194,
     344,   355,   355,   344,   344,   344,   344,   364,   308,   164,
    -194,  -194,  -194,  -194,  -194,   172,   176,  -194,  -194,  -194,
       6,   121,  -194,    74,    26,  -194,   190,   197,  -194,   213,
     193,    75,  -194,  -194,   196,   175,  -194,  -194,  -194,  -194,
     141,   292,    41,   180,  -194,   199,  -194,  -194,  -194,   344,
    -194,  -194,  -194,  -194,  -194,  -194,   308,  -194,    24,   181,
     182,  -194,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   232,  -194,  -194,   344,
     344,   237,    89,   216,   213,  -194,  -194,    92,   141,    28,
     122,  -194,   236,   292,  -194,    28,    33,   344,  -194,    38,
    -194,  -194,    71,  -194,    15,   194,   280,    90,  -194,  -194,
     344,   176,  -194,   121,   121,  -194,  -194,  -194,  -194,    26,
      26,  -194,  -194,  -194,  -194,  -194,   211,   221,  -194,   210,
    -194,  -194,   344,  -194,   175,  -194,   171,     7,  -194,  -194,
    -194,  -194,   344,   195,   214,   224,   225,   236,   226,   344,
     212,   223,  -194,   229,   236,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,   227,  -194,   228,   231,   234,    71,   292,   344,
    -194,  -194,  -194,  -194,  -194,   344,  -194,  -194,  -194,  -194,
      28,  -194,   230,   236,   344,   344,   344,   260,   344,   242,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,   246,
     245,  -194,  -194,   236,  -194,   248,   251,   256,   258,   267,
     269,  -194,  -194,  -194,  -194,   236,   236,   236,   344,   236,
     344,   306,  -194,  -194,   274,  -194,   272,   236,   273,   344,
    -194,  -194,  -194
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,    20,    21,    22,    43,    44,    53,    63,
       0,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,    55,     0,    64,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,     0,     0,    66,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   171,   172,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,   157,   151,     0,
     154,   155,   156,   158,   159,   160,     0,   161,    78,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   116,
       0,     0,     0,     0,     0,    54,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,     0,    70,    81,   176,   175,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   146,
     145,   148,   149,   150,   126,   167,     0,   117,   118,     0,
     166,    52,     0,    57,     0,    30,     0,     0,    48,    50,
      41,    46,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,   102,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   162,   152,   165,     0,   164,    60,    32,    38,
       0,    47,     0,     0,     0,     0,     0,     0,   111,     0,
     112,   114,   115,   101,    91,   103,    85,    83,    84,     0,
       0,   119,    49,     0,    99,     0,     0,     0,     0,     0,
       0,   113,    87,    86,    98,     0,     0,     0,     0,     0,
     111,   104,   106,   107,     0,   109,     0,     0,     0,   111,
     105,   108,   110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,   317,  -194,  -194,  -194,  -194,  -194,   -68,
       5,  -194,  -194,  -194,   283,   -85,  -194,   -89,  -194,  -194,
    -194,  -194,  -194,  -194,   184,  -116,  -194,    94,  -194,  -194,
    -194,   247,   191,  -194,    -9,    -5,   -15,  -194,   -52,  -194,
    -194,   173,   235,   -61,  -110,  -194,  -194,  -175,  -194,    69,
    -194,  -194,  -194,  -194,  -194,  -193,  -194,  -194,  -194,  -139,
     -45,   -42,  -194,  -119,  -194,  -194,   217,   233,  -194,  -194,
    -194,    49,    42,  -194,    84,   -51,    67,  -194,  -194,   238
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    43,
      26,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   269,   249,   221,   186,   187,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   120
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    28,   103,    97,    27,    16,    71,    34,    40,   107,
     146,   149,   112,   113,   114,   115,   184,    16,   226,     2,
     188,     1,    35,    36,     3,     4,   119,     5,     6,     7,
       8,     1,   247,   154,   201,   240,     1,     2,    94,   254,
      48,     1,     3,     4,     1,     5,     6,     7,     8,   227,
      97,   124,   125,    71,     9,   270,   132,   227,     9,   149,
      -7,   149,   241,     9,    25,   133,   134,   119,   264,    10,
       9,     9,   230,   118,   119,   166,    41,   157,    42,    10,
     201,   181,   182,   183,   156,   223,   157,   286,   274,   156,
     260,   157,   156,   158,   157,   225,   292,   159,   189,    29,
     281,   282,   283,   144,   285,   225,   155,   149,    53,   238,
     130,   131,   290,   167,    37,    71,   261,   144,    98,   233,
     194,   118,   228,    46,   229,   145,     2,   108,   110,   111,
     108,   108,   108,   108,   117,     6,     7,     8,    45,   191,
     199,   166,   195,   157,    40,     2,    94,    28,    47,    97,
     237,   159,    71,   -51,     6,     7,     8,   242,   155,    44,
      71,   167,   126,   127,   128,   129,   -36,   250,   175,   176,
     177,   178,   200,   173,   174,     2,   259,    51,    55,    52,
      56,    57,    58,    59,     6,     7,     8,    71,    89,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   265,   266,   267,    60,   250,    61,    62,    63,
      64,    65,    66,    67,   179,   180,    90,    99,   121,   135,
     122,   239,   -59,   123,    95,    48,    68,   164,   136,   137,
     138,   199,   163,   169,   170,   185,   284,   108,   250,    55,
     190,    56,    57,    58,    59,   192,   232,   250,   139,   235,
     140,   243,   202,   203,   204,   141,   205,   206,   207,   208,
     209,   210,   211,   234,   236,   244,    60,   251,    61,    62,
      63,    64,    65,    66,    67,   245,   246,   248,   252,   253,
     256,   268,   255,   257,     2,    52,   263,    68,   258,     3,
       4,   212,     5,     6,     7,     8,     2,   271,   272,   273,
     275,     3,     4,   276,     5,     6,     7,     8,   277,   278,
       9,    55,     2,    56,    57,    58,    59,     3,     4,   279,
       5,     6,     7,     8,   280,   287,   288,   289,   291,    30,
      93,   166,   196,   157,   262,   193,   142,   231,    60,   171,
      61,    62,    63,    64,    65,    66,    67,    55,     0,    56,
      57,    58,    59,   168,   165,     0,   172,     0,    55,    68,
      56,    57,    58,    59,     0,     0,     0,    55,     0,    56,
      57,    58,    59,     0,    60,     0,    61,    62,    63,    64,
      65,    66,    67,     0,     0,    60,     0,    61,    62,    63,
      64,    65,    66,    67,    60,    68,    61,    62,    63,    64,
      65,    66,    67,     0,     0,     0,   109,     1,     2,     0,
       0,     0,     0,     3,     4,   116,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      42,    10,    54,    48,     9,     0,    48,    16,    23,    60,
      95,   100,    63,    64,    65,    66,   135,    12,   157,     4,
     139,     3,    17,    18,     9,    10,    68,    12,    13,    14,
      15,     3,   207,   101,   150,    28,     3,     4,    47,   214,
      29,     3,     9,    10,     3,    12,    13,    14,    15,   159,
      95,    45,    46,    95,    30,   248,    30,   167,    30,   148,
      49,   150,    55,    30,     3,    39,    40,   109,   243,    51,
      30,    30,    57,    68,   116,    51,    51,    53,    53,    51,
     196,   132,   133,   134,    51,   153,    53,   280,   263,    51,
     229,    53,    51,   102,    53,   156,   289,   102,   140,     0,
     275,   276,   277,    28,   279,   166,   101,   196,    39,   194,
      36,    37,   287,   118,     3,   157,   235,    28,    49,   170,
      28,   116,    51,    55,    53,    50,     4,    60,    61,    62,
      63,    64,    65,    66,    67,    13,    14,    15,    52,    50,
     149,    51,    50,    53,   159,     4,   155,   156,    28,   194,
     192,   156,   194,    49,    13,    14,    15,   202,   153,    49,
     202,   166,    41,    42,    43,    44,    49,   209,   126,   127,
     128,   129,    50,   124,   125,     4,   228,    49,     3,    49,
       5,     6,     7,     8,    13,    14,    15,   229,    49,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   244,   245,   246,    30,   248,    32,    33,    34,
      35,    36,    37,    38,   130,   131,     3,    49,    54,    29,
      48,    50,    29,    47,    49,    29,    51,    28,    31,    32,
      33,   240,    52,    52,    52,     3,   278,   170,   280,     3,
       3,     5,     6,     7,     8,    29,    52,   289,    51,    28,
      53,    56,    16,    17,    18,    58,    20,    21,    22,    23,
      24,    25,    26,    52,    54,    51,    30,    55,    32,    33,
      34,    35,    36,    37,    38,    51,    51,    51,    55,    50,
      52,    21,    55,    52,     4,    49,    56,    51,    54,     9,
      10,    55,    12,    13,    14,    15,     4,    55,    52,    54,
      52,     9,    10,    52,    12,    13,    14,    15,    52,    51,
      30,     3,     4,     5,     6,     7,     8,     9,    10,    52,
      12,    13,    14,    15,    55,    19,    52,    55,    55,    12,
      47,    51,   148,    53,   240,   144,    89,   164,    30,   122,
      32,    33,    34,    35,    36,    37,    38,     3,    -1,     5,
       6,     7,     8,   118,   116,    -1,   123,    -1,     3,    51,
       5,     6,     7,     8,    -1,    -1,    -1,     3,    -1,     5,
       6,     7,     8,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    30,    51,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    51,     3,     4,    -1,
      -1,    -1,    -1,     9,    10,    51,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     9,    10,    12,    13,    14,    15,    30,
      51,    60,    61,    62,    63,    68,    69,    70,    76,    77,
      82,    87,    93,    94,    95,     3,    89,    94,    93,     0,
      62,    71,    72,    73,    93,    69,    69,     3,    80,    65,
      95,    51,    53,    88,    49,    52,    55,    28,    29,    64,
      78,    49,    49,   108,    96,     3,     5,     6,     7,     8,
      30,    32,    33,    34,    35,    36,    37,    38,    51,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    49,
       3,    90,    91,    73,    93,    49,    74,   119,   108,    49,
      81,   109,    69,    97,    98,    99,   100,   134,   135,    51,
     135,   135,   134,   134,   134,   134,    51,   135,    69,   120,
     138,    54,    48,    47,    45,    46,    41,    42,    43,    44,
      36,    37,    30,    39,    40,    29,    31,    32,    33,    51,
      53,    58,    90,    92,    28,    50,    74,    75,    79,    76,
      83,    84,    66,    67,    68,    69,    51,    53,    93,    94,
     101,   102,   103,    52,    28,   138,    51,    94,   101,    52,
      52,   125,   126,   130,   130,   131,   131,   131,   131,   133,
     133,   134,   134,   134,   122,     3,   116,   117,   122,   120,
       3,    50,    29,    91,    28,    50,    83,    85,    86,    93,
      50,    84,    16,    17,    18,    20,    21,    22,    23,    24,
      25,    26,    55,   104,   105,   106,   107,   108,   110,   111,
     112,   115,   120,    68,    97,   102,   118,   103,    51,    53,
      57,   100,    52,   134,    52,    28,    54,   120,    74,    50,
      28,    55,   119,    56,    51,    51,    51,   106,    51,   114,
     120,    55,    55,    50,   106,    55,    52,    52,    54,    97,
     118,   122,    86,    56,   106,   120,   120,   120,    21,   113,
     114,    55,    52,    54,   106,    52,    52,    52,    51,    52,
      55,   106,   106,   106,   120,   106,   114,    19,    52,    55,
     106,    55,   114
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    64,    63,    65,
      63,    66,    66,    67,    67,    68,    69,    69,    69,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    78,    79,    77,    80,
      81,    77,    77,    82,    82,    83,    83,    84,    85,    85,
      86,    88,    87,    89,    87,    87,    90,    90,    91,    92,
      91,    93,    93,    94,    94,    95,    95,    95,    96,    95,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   107,   107,
     109,   108,   110,   110,   111,   111,   111,   112,   112,   112,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   127,   128,   129,   129,   129,   130,   130,
     130,   130,   130,   131,   132,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   138
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     3,     4,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
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
  case 2: /* program: translation_unit  */
#line 30 "yacc.y"
    {root = makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1634 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 33 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 1640 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 34 "yacc.y"
                                            {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1646 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 37 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 1652 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 38 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 1658 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 41 "yacc.y"
                                        {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1664 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 42 "yacc.y"
                                        {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1670 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 43 "yacc.y"
                                        {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], makeSpecifier(int_type, 0));}
#line 1676 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 44 "yacc.y"
                                        {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1682 "y.tab.c"
    break;

  case 11: /* declaration_list_opt: %empty  */
#line 47 "yacc.y"
                                {yyval = NIL;}
#line 1688 "y.tab.c"
    break;

  case 12: /* declaration_list_opt: declaration_list  */
#line 48 "yacc.y"
                                {yyval = yyvsp[0];}
#line 1694 "y.tab.c"
    break;

  case 13: /* declaration_list: declaration  */
#line 51 "yacc.y"
                                    {yyval = yyvsp[0];}
#line 1700 "y.tab.c"
    break;

  case 14: /* declaration_list: declaration_list declaration  */
#line 52 "yacc.y"
                                    {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1706 "y.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 55 "yacc.y"
                                                                {yyval = setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1712 "y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier  */
#line 58 "yacc.y"
                                                        {yyval = makeSpecifier(yyvsp[0], 0);}
#line 1718 "y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier  */
#line 59 "yacc.y"
                                                        {yyval = makeSpecifier(0, yyvsp[0]);}
#line 1724 "y.tab.c"
    break;

  case 18: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 60 "yacc.y"
                                                        {yyval = updateSpecifier(yyvsp[0], yyvsp[-1], 0);}
#line 1730 "y.tab.c"
    break;

  case 19: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 61 "yacc.y"
                                                        {yyval = updateSpecifier(yyvsp[0], 0, yyvsp[-1]);}
#line 1736 "y.tab.c"
    break;

  case 20: /* storage_class_specifier: AUTO_SYM  */
#line 64 "yacc.y"
                    {yyval = S_AUTO;}
#line 1742 "y.tab.c"
    break;

  case 21: /* storage_class_specifier: STATIC_SYM  */
#line 65 "yacc.y"
                    {yyval = S_STATIC;}
#line 1748 "y.tab.c"
    break;

  case 22: /* storage_class_specifier: TYPEDEF_SYM  */
#line 66 "yacc.y"
                    {yyval = S_TYPEDEF;}
#line 1754 "y.tab.c"
    break;

  case 23: /* init_declarator_list_opt: %empty  */
#line 69 "yacc.y"
                            {yyval = makeDummyIdentifier();}
#line 1760 "y.tab.c"
    break;

  case 24: /* init_declarator_list_opt: init_declarator_list  */
#line 70 "yacc.y"
                            {yyval = yyvsp[0];}
#line 1766 "y.tab.c"
    break;

  case 25: /* init_declarator_list: init_declarator  */
#line 73 "yacc.y"
                                                    {yyval = yyvsp[0];}
#line 1772 "y.tab.c"
    break;

  case 26: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 74 "yacc.y"
                                                    {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1778 "y.tab.c"
    break;

  case 27: /* init_declarator: declarator  */
#line 77 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 1784 "y.tab.c"
    break;

  case 28: /* init_declarator: declarator ASSIGN initializer  */
#line 78 "yacc.y"
                                        {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1790 "y.tab.c"
    break;

  case 29: /* initializer: constant_expression  */
#line 81 "yacc.y"
                                        {yyval = makeNode(N_INIT_LIST_ONE, NIL, yyvsp[0], NIL);}
#line 1796 "y.tab.c"
    break;

  case 30: /* initializer: LR initializer_list RR  */
#line 82 "yacc.y"
                                        {yyval = yyvsp[-1];}
#line 1802 "y.tab.c"
    break;

  case 31: /* initializer_list: initializer  */
#line 85 "yacc.y"
                                            {yyval = makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
#line 1808 "y.tab.c"
    break;

  case 32: /* initializer_list: initializer_list COMMA initializer  */
#line 86 "yacc.y"
                                            {yyval = makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 1814 "y.tab.c"
    break;

  case 33: /* type_specifier: struct_type_specifier  */
#line 89 "yacc.y"
                                 {yyval = yyvsp[0];}
#line 1820 "y.tab.c"
    break;

  case 34: /* type_specifier: enum_type_specifier  */
#line 90 "yacc.y"
                                 {yyval = yyvsp[0];}
#line 1826 "y.tab.c"
    break;

  case 35: /* type_specifier: TYPE_IDENTIFIER  */
#line 91 "yacc.y"
                                 {yyval = yyvsp[0];}
#line 1832 "y.tab.c"
    break;

  case 36: /* @3: %empty  */
#line 94 "yacc.y"
                                    {yyval = setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1838 "y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 95 "yacc.y"
                                    {yyval = current_id; current_level++;}
#line 1844 "y.tab.c"
    break;

  case 38: /* struct_type_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 96 "yacc.y"
                                    {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id = yyvsp[-2];}
#line 1850 "y.tab.c"
    break;

  case 39: /* @5: %empty  */
#line 97 "yacc.y"
                                    {yyval = makeType(yyvsp[0]);}
#line 1856 "y.tab.c"
    break;

  case 40: /* @6: %empty  */
#line 98 "yacc.y"
                                    {yyval = current_id; current_level++;}
#line 1862 "y.tab.c"
    break;

  case 41: /* struct_type_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 99 "yacc.y"
                                    {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id = yyvsp[-2];}
#line 1868 "y.tab.c"
    break;

  case 42: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 100 "yacc.y"
                                    {yyval = getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1874 "y.tab.c"
    break;

  case 43: /* struct_or_union: STRUCT_SYM  */
#line 103 "yacc.y"
                        {yyval = T_STRUCT;}
#line 1880 "y.tab.c"
    break;

  case 44: /* struct_or_union: UNION_SYM  */
#line 104 "yacc.y"
                        {yyval = T_UNION;}
#line 1886 "y.tab.c"
    break;

  case 45: /* struct_declaration_list: struct_declaration  */
#line 107 "yacc.y"
                                                    {yyval = yyvsp[0];}
#line 1892 "y.tab.c"
    break;

  case 46: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 108 "yacc.y"
                                                    {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1898 "y.tab.c"
    break;

  case 47: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 111 "yacc.y"
                                                        {yyval = setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1904 "y.tab.c"
    break;

  case 48: /* struct_declarator_list: struct_declarator  */
#line 114 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 1910 "y.tab.c"
    break;

  case 49: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 115 "yacc.y"
                                                        {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1916 "y.tab.c"
    break;

  case 50: /* struct_declarator: declarator  */
#line 118 "yacc.y"
                    {yyval = yyvsp[0];}
#line 1922 "y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 121 "yacc.y"
                                {yyval = setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1928 "y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 122 "yacc.y"
                                {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1934 "y.tab.c"
    break;

  case 53: /* @8: %empty  */
#line 123 "yacc.y"
                                {yyval = makeType(T_ENUM);}
#line 1940 "y.tab.c"
    break;

  case 54: /* enum_type_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 124 "yacc.y"
                                {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1946 "y.tab.c"
    break;

  case 55: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 125 "yacc.y"
                                {yyval = getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1952 "y.tab.c"
    break;

  case 56: /* enumerator_list: enumerator  */
#line 128 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 1958 "y.tab.c"
    break;

  case 57: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 129 "yacc.y"
                                        {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1964 "y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER  */
#line 132 "yacc.y"
                       {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1970 "y.tab.c"
    break;

  case 59: /* @9: %empty  */
#line 133 "yacc.y"
                       {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1976 "y.tab.c"
    break;

  case 60: /* enumerator: IDENTIFIER @9 ASSIGN expression  */
#line 134 "yacc.y"
                       {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1982 "y.tab.c"
    break;

  case 61: /* declarator: pointer direct_declarator  */
#line 137 "yacc.y"
                                    {yyval = setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 1988 "y.tab.c"
    break;

  case 62: /* declarator: direct_declarator  */
#line 138 "yacc.y"
                                    {yyval = yyvsp[0];}
#line 1994 "y.tab.c"
    break;

  case 63: /* pointer: STAR  */
#line 141 "yacc.y"
                    {yyval = makeType(T_POINTER);}
#line 2000 "y.tab.c"
    break;

  case 64: /* pointer: STAR pointer  */
#line 142 "yacc.y"
                    {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2006 "y.tab.c"
    break;

  case 65: /* direct_declarator: IDENTIFIER  */
#line 145 "yacc.y"
                            {yyval = makeIdentifier(yyvsp[0]);}
#line 2012 "y.tab.c"
    break;

  case 66: /* direct_declarator: LP declarator RP  */
#line 146 "yacc.y"
                            {yyval = yyvsp[-1];}
#line 2018 "y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 148 "yacc.y"
                            {yyval = setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2024 "y.tab.c"
    break;

  case 68: /* @10: %empty  */
#line 149 "yacc.y"
                            {yyval = current_id; current_level++;}
#line 2030 "y.tab.c"
    break;

  case 69: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 151 "yacc.y"
                            {checkForwardReference(); current_id = yyvsp[-2]; current_level--;
                            yyval = setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 2037 "y.tab.c"
    break;

  case 70: /* parameter_type_list_opt: %empty  */
#line 155 "yacc.y"
                            {yyval = NIL;}
#line 2043 "y.tab.c"
    break;

  case 71: /* parameter_type_list_opt: parameter_type_list  */
#line 156 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2049 "y.tab.c"
    break;

  case 72: /* parameter_type_list: parameter_list  */
#line 159 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 2055 "y.tab.c"
    break;

  case 73: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 160 "yacc.y"
                                        {yyval = linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2061 "y.tab.c"
    break;

  case 74: /* parameter_list: parameter_declaration  */
#line 163 "yacc.y"
                                                    {yyval = yyvsp[0];}
#line 2067 "y.tab.c"
    break;

  case 75: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 164 "yacc.y"
                                                    {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2073 "y.tab.c"
    break;

  case 76: /* parameter_declaration: declaration_specifiers declarator  */
#line 167 "yacc.y"
                                                        {yyval = setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2079 "y.tab.c"
    break;

  case 77: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 168 "yacc.y"
                                                        {yyval = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2085 "y.tab.c"
    break;

  case 78: /* abstract_declarator_opt: %empty  */
#line 171 "yacc.y"
                                {yyval = NIL;}
#line 2091 "y.tab.c"
    break;

  case 79: /* abstract_declarator_opt: abstract_declarator  */
#line 172 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2097 "y.tab.c"
    break;

  case 80: /* abstract_declarator: direct_abstract_declarator  */
#line 175 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 2103 "y.tab.c"
    break;

  case 81: /* abstract_declarator: pointer  */
#line 176 "yacc.y"
                                            {yyval = makeType(T_POINTER);}
#line 2109 "y.tab.c"
    break;

  case 82: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 177 "yacc.y"
                                            {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2115 "y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 180 "yacc.y"
                                            {yyval = yyvsp[-1];}
#line 2121 "y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 181 "yacc.y"
                                            {yyval = setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2127 "y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 182 "yacc.y"
                                            {yyval = setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 2133 "y.tab.c"
    break;

  case 86: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 183 "yacc.y"
                                                                {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2139 "y.tab.c"
    break;

  case 87: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 184 "yacc.y"
                                                                {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 2145 "y.tab.c"
    break;

  case 88: /* statement_list_opt: %empty  */
#line 187 "yacc.y"
                        {yyval = makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 2151 "y.tab.c"
    break;

  case 89: /* statement_list_opt: statement_list  */
#line 188 "yacc.y"
                        {yyval = yyvsp[0];}
#line 2157 "y.tab.c"
    break;

  case 90: /* statement_list: statement  */
#line 191 "yacc.y"
                                {yyval = makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2163 "y.tab.c"
    break;

  case 91: /* statement_list: statement_list statement  */
#line 192 "yacc.y"
                                {yyval = makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2169 "y.tab.c"
    break;

  case 92: /* statement: labeled_statement  */
#line 195 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2175 "y.tab.c"
    break;

  case 93: /* statement: compound_statement  */
#line 196 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2181 "y.tab.c"
    break;

  case 94: /* statement: expression_statement  */
#line 197 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2187 "y.tab.c"
    break;

  case 95: /* statement: selection_statement  */
#line 198 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2193 "y.tab.c"
    break;

  case 96: /* statement: iteration_statement  */
#line 199 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2199 "y.tab.c"
    break;

  case 97: /* statement: jump_statement  */
#line 200 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2205 "y.tab.c"
    break;

  case 98: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 203 "yacc.y"
                                                    {yyval = makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2211 "y.tab.c"
    break;

  case 99: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 204 "yacc.y"
                                                    {yyval = makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2217 "y.tab.c"
    break;

  case 100: /* @11: %empty  */
#line 207 "yacc.y"
                            {yyval = current_id; current_level++;}
#line 2223 "y.tab.c"
    break;

  case 101: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 208 "yacc.y"
                            {checkForwardReference(); yyval = makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); current_id = yyvsp[-3]; current_level--;}
#line 2229 "y.tab.c"
    break;

  case 102: /* expression_statement: SEMICOLON  */
#line 211 "yacc.y"
                            {yyval = makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2235 "y.tab.c"
    break;

  case 103: /* expression_statement: expression SEMICOLON  */
#line 212 "yacc.y"
                            {yyval = makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2241 "y.tab.c"
    break;

  case 104: /* selection_statement: IF_SYM LP expression RP statement  */
#line 215 "yacc.y"
                                                            {yyval = makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2247 "y.tab.c"
    break;

  case 105: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 216 "yacc.y"
                                                            {yyval = makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2253 "y.tab.c"
    break;

  case 106: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 217 "yacc.y"
                                                            {yyval = makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2259 "y.tab.c"
    break;

  case 107: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 220 "yacc.y"
                                                            {yyval = makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2265 "y.tab.c"
    break;

  case 108: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 221 "yacc.y"
                                                            {yyval = makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2271 "y.tab.c"
    break;

  case 109: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 222 "yacc.y"
                                                            {yyval = makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2277 "y.tab.c"
    break;

  case 110: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 225 "yacc.y"
                                                                        {yyval = makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2283 "y.tab.c"
    break;

  case 111: /* expression_opt: %empty  */
#line 228 "yacc.y"
                    {yyval = NIL;}
#line 2289 "y.tab.c"
    break;

  case 112: /* expression_opt: expression  */
#line 229 "yacc.y"
                    {yyval = yyvsp[0];}
#line 2295 "y.tab.c"
    break;

  case 113: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 232 "yacc.y"
                                           {yyval = makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2301 "y.tab.c"
    break;

  case 114: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 233 "yacc.y"
                                           {yyval = makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2307 "y.tab.c"
    break;

  case 115: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 234 "yacc.y"
                                           {yyval = makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2313 "y.tab.c"
    break;

  case 116: /* arg_expression_list_opt: %empty  */
#line 237 "yacc.y"
                            {yyval = makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2319 "y.tab.c"
    break;

  case 117: /* arg_expression_list_opt: arg_expression_list  */
#line 238 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2325 "y.tab.c"
    break;

  case 118: /* arg_expression_list: assignment_expression  */
#line 242 "yacc.y"
    {yyval = makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2331 "y.tab.c"
    break;

  case 119: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 244 "yacc.y"
    {yyval = makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2337 "y.tab.c"
    break;

  case 120: /* constant_expression_opt: %empty  */
#line 247 "yacc.y"
                            {yyval = NIL;}
#line 2343 "y.tab.c"
    break;

  case 121: /* constant_expression_opt: constant_expression  */
#line 248 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2349 "y.tab.c"
    break;

  case 122: /* constant_expression: expression  */
#line 251 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2355 "y.tab.c"
    break;

  case 123: /* expression: comma_expression  */
#line 254 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2361 "y.tab.c"
    break;

  case 124: /* comma_expression: assignment_expression  */
#line 257 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2367 "y.tab.c"
    break;

  case 125: /* assignment_expression: conditional_expression  */
#line 260 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2373 "y.tab.c"
    break;

  case 126: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 261 "yacc.y"
                                                        {yyval = makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2379 "y.tab.c"
    break;

  case 127: /* conditional_expression: logical_OR_expression  */
#line 264 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2385 "y.tab.c"
    break;

  case 128: /* logical_OR_expression: logical_AND_expression  */
#line 267 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2391 "y.tab.c"
    break;

  case 129: /* logical_OR_expression: logical_OR_expression BARBAR logical_AND_expression  */
#line 269 "yacc.y"
                                {yyval = makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2397 "y.tab.c"
    break;

  case 130: /* logical_AND_expression: bitwise_or_expression  */
#line 272 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2403 "y.tab.c"
    break;

  case 131: /* logical_AND_expression: logical_AND_expression AMPAMP bitwise_or_expression  */
#line 274 "yacc.y"
                                {yyval = makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2409 "y.tab.c"
    break;

  case 132: /* bitwise_or_expression: bitwise_xor_expression  */
#line 277 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2415 "y.tab.c"
    break;

  case 133: /* bitwise_xor_expression: bitwise_and_expression  */
#line 280 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2421 "y.tab.c"
    break;

  case 134: /* bitwise_and_expression: equality_expression  */
#line 283 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2427 "y.tab.c"
    break;

  case 135: /* equality_expression: relational_expression  */
#line 286 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2433 "y.tab.c"
    break;

  case 136: /* equality_expression: equality_expression EQL relational_expression  */
#line 287 "yacc.y"
                                                        {yyval = makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2439 "y.tab.c"
    break;

  case 137: /* equality_expression: equality_expression NEQ relational_expression  */
#line 288 "yacc.y"
                                                        {yyval = makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2445 "y.tab.c"
    break;

  case 138: /* relational_expression: shift_expression  */
#line 291 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2451 "y.tab.c"
    break;

  case 139: /* relational_expression: relational_expression LSS shift_expression  */
#line 292 "yacc.y"
                                                        {yyval = makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2457 "y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression GTR shift_expression  */
#line 293 "yacc.y"
                                                        {yyval = makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2463 "y.tab.c"
    break;

  case 141: /* relational_expression: relational_expression LEQ shift_expression  */
#line 294 "yacc.y"
                                                        {yyval = makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2469 "y.tab.c"
    break;

  case 142: /* relational_expression: relational_expression GEQ shift_expression  */
#line 295 "yacc.y"
                                                        {yyval = makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2475 "y.tab.c"
    break;

  case 143: /* shift_expression: additive_expression  */
#line 298 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2481 "y.tab.c"
    break;

  case 144: /* additive_expression: multiplicative_expression  */
#line 301 "yacc.y"
                                                            {yyval = yyvsp[0];}
#line 2487 "y.tab.c"
    break;

  case 145: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 302 "yacc.y"
                                                            {yyval = makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2493 "y.tab.c"
    break;

  case 146: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 303 "yacc.y"
                                                            {yyval = makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2499 "y.tab.c"
    break;

  case 147: /* multiplicative_expression: cast_expression  */
#line 306 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2505 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 307 "yacc.y"
                                                        {yyval = makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2511 "y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 308 "yacc.y"
                                                        {yyval = makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2517 "y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 309 "yacc.y"
                                                        {yyval = makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2523 "y.tab.c"
    break;

  case 151: /* cast_expression: unary_expression  */
#line 312 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 2529 "y.tab.c"
    break;

  case 152: /* cast_expression: LP type_name RP cast_expression  */
#line 313 "yacc.y"
                                        {yyval = makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2535 "y.tab.c"
    break;

  case 153: /* unary_expression: postfix_expression  */
#line 316 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 2541 "y.tab.c"
    break;

  case 154: /* unary_expression: PLUSPLUS unary_expression  */
#line 317 "yacc.y"
                                        {yyval = makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2547 "y.tab.c"
    break;

  case 155: /* unary_expression: MINUSMINUS unary_expression  */
#line 318 "yacc.y"
                                        {yyval = makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2553 "y.tab.c"
    break;

  case 156: /* unary_expression: AMP cast_expression  */
#line 319 "yacc.y"
                                        {yyval = makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2559 "y.tab.c"
    break;

  case 157: /* unary_expression: STAR cast_expression  */
#line 320 "yacc.y"
                                        {yyval = makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2565 "y.tab.c"
    break;

  case 158: /* unary_expression: EXCL cast_expression  */
#line 321 "yacc.y"
                                        {yyval = makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2571 "y.tab.c"
    break;

  case 159: /* unary_expression: MINUS cast_expression  */
#line 322 "yacc.y"
                                        {yyval = makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2577 "y.tab.c"
    break;

  case 160: /* unary_expression: PLUS cast_expression  */
#line 323 "yacc.y"
                                        {yyval = makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2583 "y.tab.c"
    break;

  case 161: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 324 "yacc.y"
                                        {yyval = makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2589 "y.tab.c"
    break;

  case 162: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 325 "yacc.y"
                                        {yyval = makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2595 "y.tab.c"
    break;

  case 163: /* postfix_expression: primary_expression  */
#line 328 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 2601 "y.tab.c"
    break;

  case 164: /* postfix_expression: postfix_expression LB expression RB  */
#line 329 "yacc.y"
                                            {yyval = makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2607 "y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 331 "yacc.y"
                                            {yyval = makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2613 "y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 332 "yacc.y"
                                            {yyval = makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2619 "y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 333 "yacc.y"
                                            {yyval = makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2625 "y.tab.c"
    break;

  case 168: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 334 "yacc.y"
                                            {yyval = makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2631 "y.tab.c"
    break;

  case 169: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 335 "yacc.y"
                                            {yyval = makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2637 "y.tab.c"
    break;

  case 170: /* primary_expression: IDENTIFIER  */
#line 338 "yacc.y"
                            {yyval = makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2643 "y.tab.c"
    break;

  case 171: /* primary_expression: INTEGER_CONSTANT  */
#line 339 "yacc.y"
                            {yyval = makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2649 "y.tab.c"
    break;

  case 172: /* primary_expression: FLOAT_CONSTANT  */
#line 340 "yacc.y"
                            {yyval = makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2655 "y.tab.c"
    break;

  case 173: /* primary_expression: CHARACTER_CONSTANT  */
#line 341 "yacc.y"
                            {yyval = makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2661 "y.tab.c"
    break;

  case 174: /* primary_expression: STRING_LITERAL  */
#line 342 "yacc.y"
                            {yyval = makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2667 "y.tab.c"
    break;

  case 175: /* primary_expression: LP expression RP  */
#line 343 "yacc.y"
                            {yyval = yyvsp[-1];}
#line 2673 "y.tab.c"
    break;

  case 176: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 347 "yacc.y"
                            {yyval = setTypeNameSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2679 "y.tab.c"
    break;


#line 2683 "y.tab.c"

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

#line 349 "yacc.y"

extern char *yytext;
yyerror(char *s)
{
    syntax_err++;
    printf("line %d: %s near %s\n", line_no, s, yytext);
}
int yywrap() {
    return (1);
}
