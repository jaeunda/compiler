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

#include "type.h"
extern int line_no, syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;

#line 80 "y.tab.c"

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
  YYSYMBOL_declaration = 66,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 67,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 68,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list = 69,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 70,           /* init_declarator  */
  YYSYMBOL_initializer = 71,               /* initializer  */
  YYSYMBOL_initializer_list = 72,          /* initializer_list  */
  YYSYMBOL_type_specifier = 73,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 74,     /* struct_type_specifier  */
  YYSYMBOL_75_3 = 75,                      /* @3  */
  YYSYMBOL_76_4 = 76,                      /* @4  */
  YYSYMBOL_77_5 = 77,                      /* @5  */
  YYSYMBOL_78_6 = 78,                      /* @6  */
  YYSYMBOL_struct_or_union = 79,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 80,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 81,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 82,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 83,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 84,       /* enum_type_specifier  */
  YYSYMBOL_85_7 = 85,                      /* @7  */
  YYSYMBOL_86_8 = 86,                      /* @8  */
  YYSYMBOL_enumerator_list = 87,           /* enumerator_list  */
  YYSYMBOL_enumerator = 88,                /* enumerator  */
  YYSYMBOL_89_9 = 89,                      /* @9  */
  YYSYMBOL_declarator = 90,                /* declarator  */
  YYSYMBOL_pointer = 91,                   /* pointer  */
  YYSYMBOL_direct_declarator = 92,         /* direct_declarator  */
  YYSYMBOL_93_10 = 93,                     /* @10  */
  YYSYMBOL_parameter_type_list_opt = 94,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 95,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 96,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 97,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 98,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 99,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 100, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 101,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 102,           /* statement_list  */
  YYSYMBOL_statement = 103,                /* statement  */
  YYSYMBOL_labeled_statement = 104,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 105,       /* compound_statement  */
  YYSYMBOL_106_11 = 106,                   /* @11  */
  YYSYMBOL_expression_statement = 107,     /* expression_statement  */
  YYSYMBOL_selection_statement = 108,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 109,      /* iteration_statement  */
  YYSYMBOL_for_expression = 110,           /* for_expression  */
  YYSYMBOL_expression_opt = 111,           /* expression_opt  */
  YYSYMBOL_jump_statement = 112,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 113,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 114,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 115,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 116,      /* constant_expression  */
  YYSYMBOL_expression = 117,               /* expression  */
  YYSYMBOL_comma_expression = 118,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 119,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 120,   /* conditional_expression  */
  YYSYMBOL_logical_OR_expression = 121,    /* logical_OR_expression  */
  YYSYMBOL_logical_AND_expression = 122,   /* logical_AND_expression  */
  YYSYMBOL_bitwise_or_expression = 123,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 124,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 125,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 126,      /* equality_expression  */
  YYSYMBOL_relational_expression = 127,    /* relational_expression  */
  YYSYMBOL_shift_expression = 128,         /* shift_expression  */
  YYSYMBOL_additive_expression = 129,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 130, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 131,          /* cast_expression  */
  YYSYMBOL_unary_expression = 132,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 133,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 134,       /* primary_expression  */
  YYSYMBOL_type_name = 135                 /* type_name  */
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
#define YYLAST   497

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  287

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
       0,    24,    24,    28,    29,    32,    33,    36,    36,    38,
      38,    50,    53,    54,    55,    56,    59,    60,    61,    68,
      69,    72,    73,    76,    77,    80,    81,    84,    85,    86,
      89,    90,    89,    92,    93,    92,    95,    98,    99,   102,
     103,   106,   109,   110,   113,   116,   116,   118,   118,   120,
     123,   124,   127,   128,   128,   132,   133,   136,   137,   140,
     141,   142,   144,   144,   150,   151,   154,   155,   158,   159,
     162,   163,   166,   167,   170,   171,   172,   175,   176,   177,
     178,   179,   182,   183,   186,   187,   190,   191,   192,   193,
     194,   195,   198,   199,   202,   202,   206,   207,   210,   211,
     212,   215,   216,   217,   220,   223,   224,   227,   228,   229,
     232,   233,   236,   238,   242,   243,   246,   249,   252,   255,
     256,   259,   262,   263,   267,   268,   272,   275,   278,   281,
     282,   283,   286,   287,   288,   289,   290,   293,   296,   297,
     298,   301,   302,   303,   304,   307,   308,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   323,   324,   325,
     327,   328,   329,   330,   333,   334,   335,   336,   337,   338,
     341
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
  "external_declaration", "function_definition", "@1", "@2", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list", "init_declarator", "initializer",
  "initializer_list", "type_specifier", "struct_type_specifier", "@3",
  "@4", "@5", "@6", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_type_specifier", "@7", "@8", "enumerator_list", "enumerator", "@9",
  "declarator", "pointer", "direct_declarator", "@10",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator",
  "statement_list_opt", "statement_list", "statement", "labeled_statement",
  "compound_statement", "@11", "expression_statement",
  "selection_statement", "iteration_statement", "for_expression",
  "expression_opt", "jump_statement", "arg_expression_list_opt",
  "arg_expression_list", "constant_expression_opt", "constant_expression",
  "expression", "comma_expression", "assignment_expression",
  "conditional_expression", "logical_OR_expression",
  "logical_AND_expression", "bitwise_or_expression",
  "bitwise_xor_expression", "bitwise_and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "postfix_expression", "primary_expression",
  "type_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-213)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     446,  -213,  -213,  -213,  -213,  -213,  -213,  -213,    53,    -8,
      39,    68,   446,  -213,  -213,  -213,    39,   203,   203,  -213,
      86,  -213,  -213,    55,    97,    59,    74,  -213,    50,  -213,
    -213,   -17,  -213,    -1,  -213,  -213,    82,    92,   108,    97,
    -213,   366,   115,   162,  -213,    39,  -213,   346,   108,   128,
    -213,  -213,  -213,   203,  -213,  -213,  -213,  -213,  -213,   366,
     386,   386,   366,   366,   366,   366,   406,   310,   116,  -213,
    -213,  -213,  -213,  -213,   130,   137,  -213,  -213,  -213,    19,
      77,  -213,    90,    73,  -213,   157,   170,  -213,   162,   160,
       1,  -213,  -213,   165,   346,  -213,  -213,  -213,  -213,   129,
     238,    40,   143,  -213,   169,  -213,  -213,  -213,   366,  -213,
    -213,  -213,  -213,  -213,  -213,   310,  -213,    10,   146,   152,
    -213,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   211,  -213,  -213,   366,   366,
     216,    16,   191,   162,  -213,  -213,    79,   129,    39,   101,
    -213,   366,   166,   173,   174,   176,   238,   179,   366,   177,
     181,  -213,   183,   238,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,   182,   196,   366,  -213,    43,  -213,  -213,   102,  -213,
     178,   186,   282,   107,  -213,  -213,   366,   137,  -213,    77,
      77,  -213,  -213,  -213,  -213,    73,    73,  -213,  -213,  -213,
    -213,  -213,   188,   206,  -213,   194,  -213,  -213,   366,  -213,
     346,  -213,   121,    -5,  -213,  -213,  -213,  -213,   195,   238,
     366,   366,   366,   229,   366,   197,  -213,  -213,  -213,  -213,
    -213,  -213,   201,   205,   212,   102,   203,   366,  -213,  -213,
    -213,  -213,  -213,   366,  -213,  -213,  -213,  -213,    39,  -213,
     238,  -213,   213,   215,   217,   226,   227,   223,  -213,  -213,
    -213,  -213,   228,   230,  -213,  -213,  -213,   238,   238,   238,
     366,   238,   366,  -213,  -213,   262,  -213,  -213,   231,  -213,
     233,   238,   235,   366,  -213,  -213,  -213
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    59,    29,    16,    17,    18,    37,    38,    47,    57,
       0,     0,     2,     3,     5,     6,     0,    13,    12,    27,
      33,    28,     9,     0,    56,    49,     0,    58,     0,     1,
       4,     0,    19,    21,    15,    14,    36,     0,     0,    55,
      62,   114,     0,     0,    60,     0,    11,     0,     0,     0,
      34,    94,    10,    64,   164,   165,   166,   167,   168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
     116,   117,   118,   119,   121,   122,   124,   126,   127,   128,
     129,   132,   137,   138,   141,   145,   147,   157,     0,    52,
       0,    50,    20,    21,     0,    22,    23,     8,    31,     0,
      82,    72,     0,    65,    66,    68,   151,   145,     0,   148,
     149,   150,   152,   153,   154,     0,   155,    72,     0,     0,
      61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   162,   163,   110,     0,
       0,     0,     0,     0,    48,    25,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,   105,     0,
       0,    96,     0,    83,    84,    86,    87,    88,    89,    90,
      91,     0,    64,   114,    70,    75,    71,    73,    74,    63,
       0,     0,    64,    75,   170,   169,     0,   123,   125,   130,
     131,   133,   134,   135,   136,   140,   139,   142,   143,   144,
     120,   161,     0,   111,   112,     0,   160,    46,     0,    51,
       0,    24,     0,     0,    42,    44,    35,    40,     0,     0,
       0,     0,     0,     0,   105,     0,   106,   108,   109,    95,
      85,    97,     0,     0,     0,    76,    64,   114,    67,    69,
     156,   146,   159,     0,   158,    54,    26,    32,     0,    41,
       0,    93,     0,     0,     0,     0,     0,     0,   107,    79,
      77,    78,     0,     0,   113,    43,    92,     0,     0,     0,
       0,     0,   105,    81,    80,    98,   100,   101,     0,   103,
       0,     0,     0,   105,    99,   102,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,   270,  -213,  -213,  -213,  -213,    37,  -213,
    -213,   240,   -86,  -213,   -90,  -213,  -213,  -213,  -213,  -213,
    -213,   151,  -139,  -213,    51,  -213,  -213,  -213,   214,   158,
    -213,    -9,    -6,   -19,  -213,   -51,  -213,  -213,   120,   187,
    -137,  -136,  -213,  -213,  -122,  -213,    24,  -213,  -213,  -213,
    -213,  -213,  -212,  -213,  -213,  -213,  -149,   -42,   -41,  -213,
    -113,  -213,  -213,   184,   185,  -213,  -213,  -213,    14,    47,
    -213,    32,   -32,   -46,  -213,  -213,   193
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    48,    38,    15,   101,    17,
      31,    32,    95,   146,    18,    19,    49,   147,    37,    99,
      20,   149,   150,   213,   214,    21,    42,    26,    90,    91,
     142,    22,    23,    24,    53,   232,   103,   104,   105,   176,
     177,   178,   162,   163,   164,   165,   166,   100,   167,   168,
     169,   256,   225,   170,   202,   203,    68,    69,   171,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,   119
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    28,   102,    27,    39,    96,    70,    33,   145,   148,
     217,    45,   257,   107,   109,   110,   107,   107,   107,   107,
     116,   200,     9,   248,   234,   204,   118,   106,    47,   143,
     111,   112,   113,   114,   223,   233,    93,    16,    46,   235,
       9,   230,     1,     1,   143,   233,     1,   235,    -7,    16,
     249,   144,    96,    70,    34,    35,    25,   148,     1,   148,
     280,   182,    52,   173,   123,   124,   207,   118,    29,     9,
       9,   286,    97,   217,   118,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   263,    36,
      10,   172,   174,   173,   172,   175,   173,   251,   205,   197,
     198,   199,    44,   131,   117,     2,    10,   210,   -45,   218,
      70,   183,   132,   133,     6,     7,     8,   226,   125,   126,
     127,   128,   148,    43,   246,     2,   129,   130,   266,   211,
     264,   -30,    70,     2,     6,     7,     8,   189,   190,   215,
     107,    50,     6,     7,     8,   275,   276,   277,    40,   279,
      41,   216,   117,   236,   241,   237,    39,    51,   182,   284,
     173,   195,   196,    28,    88,    89,   175,   245,    96,    70,
     120,   247,   191,   192,   193,   194,   183,    98,   121,   252,
     253,   254,     2,   226,   122,   262,   134,     3,     4,   -53,
       5,     6,     7,     8,    47,   179,    70,   180,   185,     1,
       2,   135,   136,   137,   186,     3,     4,     2,     5,     6,
       7,     8,     3,     4,   201,     5,     6,     7,     8,   206,
     208,   138,   219,   139,   220,   221,     9,   222,   140,   278,
     224,   226,   227,   229,   243,   238,   228,   231,   240,   215,
     242,    54,   226,    55,    56,    57,    58,   172,   244,   173,
     255,   250,   258,   259,   151,   152,   153,   260,   154,   155,
     156,   157,   158,   159,   160,   267,   261,   268,    59,   269,
      60,    61,    62,    63,    64,    65,    66,   270,   272,   271,
     273,   281,    30,   282,   274,    92,     2,    51,   283,    67,
     285,     3,     4,   161,     5,     6,     7,     8,   212,   265,
     239,   209,   141,     0,   184,   187,     0,   188,   181,     0,
       0,     0,     9,    54,     2,    55,    56,    57,    58,     3,
       4,     0,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,   182,     0,   173,     0,     0,     0,     0,
      59,     0,    60,    61,    62,    63,    64,    65,    66,    54,
       0,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,    54,
       0,    55,    56,    57,    58,     0,    59,     0,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,    54,
       0,    55,    56,    57,    58,    94,    59,    67,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,    54,
       0,    55,    56,    57,    58,     0,    59,    67,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,   108,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     1,
       2,     0,     0,     0,     0,     3,     4,   115,     5,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      41,    10,    53,     9,    23,    47,    47,    16,    94,    99,
     149,    28,   224,    59,    60,    61,    62,    63,    64,    65,
      66,   134,    30,    28,   173,   138,    67,    59,    29,    28,
      62,    63,    64,    65,   156,   172,    45,     0,    55,   175,
      30,   163,     3,     3,    28,   182,     3,   183,    49,    12,
      55,    50,    94,    94,    17,    18,     3,   147,     3,   149,
     272,    51,    38,    53,    45,    46,    50,   108,     0,    30,
      30,   283,    48,   212,   115,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   237,     3,
      51,    51,   101,    53,    51,   101,    53,   219,   139,   131,
     132,   133,    52,    30,    67,     4,    51,    28,    49,   151,
     151,   117,    39,    40,    13,    14,    15,   158,    41,    42,
      43,    44,   212,    49,   210,     4,    36,    37,   250,    50,
     243,    49,   173,     4,    13,    14,    15,   123,   124,   148,
     186,    49,    13,    14,    15,   267,   268,   269,    51,   271,
      53,    50,   115,    51,   186,    53,   175,    49,    51,   281,
      53,   129,   130,   172,    49,     3,   172,   208,   210,   210,
      54,    50,   125,   126,   127,   128,   182,    49,    48,   220,
     221,   222,     4,   224,    47,   236,    29,     9,    10,    29,
      12,    13,    14,    15,    29,    52,   237,    28,    52,     3,
       4,    31,    32,    33,    52,     9,    10,     4,    12,    13,
      14,    15,     9,    10,     3,    12,    13,    14,    15,     3,
      29,    51,    56,    53,    51,    51,    30,    51,    58,   270,
      51,   272,    55,    50,    28,    57,    55,    55,    52,   248,
      52,     3,   283,     5,     6,     7,     8,    51,    54,    53,
      21,    56,    55,    52,    16,    17,    18,    52,    20,    21,
      22,    23,    24,    25,    26,    52,    54,    52,    30,    52,
      32,    33,    34,    35,    36,    37,    38,    51,    55,    52,
      52,    19,    12,    52,    54,    45,     4,    49,    55,    51,
      55,     9,    10,    55,    12,    13,    14,    15,   147,   248,
     180,   143,    88,    -1,   117,   121,    -1,   122,   115,    -1,
      -1,    -1,    30,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,     3,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,     5,     6,     7,     8,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,     3,
      -1,     5,     6,     7,     8,    49,    30,    51,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,     3,
      -1,     5,     6,     7,     8,    -1,    30,    51,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    51,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,     9,    10,    51,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     9,    10,    12,    13,    14,    15,    30,
      51,    60,    61,    62,    63,    66,    67,    68,    73,    74,
      79,    84,    90,    91,    92,     3,    86,    91,    90,     0,
      62,    69,    70,    90,    67,    67,     3,    77,    65,    92,
      51,    53,    85,    49,    52,    28,    55,    29,    64,    75,
      49,    49,   105,    93,     3,     5,     6,     7,     8,    30,
      32,    33,    34,    35,    36,    37,    38,    51,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    49,     3,
      87,    88,    70,    90,    49,    71,   116,   105,    49,    78,
     106,    67,    94,    95,    96,    97,   131,   132,    51,   132,
     132,   131,   131,   131,   131,    51,   132,    67,   117,   135,
      54,    48,    47,    45,    46,    41,    42,    43,    44,    36,
      37,    30,    39,    40,    29,    31,    32,    33,    51,    53,
      58,    87,    89,    28,    50,    71,    72,    76,    73,    80,
      81,    16,    17,    18,    20,    21,    22,    23,    24,    25,
      26,    55,   101,   102,   103,   104,   105,   107,   108,   109,
     112,   117,    51,    53,    90,    91,    98,    99,   100,    52,
      28,   135,    51,    91,    98,    52,    52,   122,   123,   127,
     127,   128,   128,   128,   128,   130,   130,   131,   131,   131,
     119,     3,   113,   114,   119,   117,     3,    50,    29,    88,
      28,    50,    80,    82,    83,    90,    50,    81,   116,    56,
      51,    51,    51,   103,    51,   111,   117,    55,    55,    50,
     103,    55,    94,    99,   115,   100,    51,    53,    57,    97,
      52,   131,    52,    28,    54,   117,    71,    50,    28,    55,
      56,   103,   117,   117,   117,    21,   110,   111,    55,    52,
      52,    54,    94,   115,   119,    83,   103,    52,    52,    52,
      51,    52,    55,    52,    54,   103,   103,   103,   117,   103,
     111,    19,    52,    55,   103,    55,   111
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    64,    63,    65,
      63,    66,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    73,
      75,    76,    74,    77,    78,    74,    74,    79,    79,    80,
      80,    81,    82,    82,    83,    85,    84,    86,    84,    84,
      87,    87,    88,    89,    88,    90,    90,    91,    91,    92,
      92,    92,    93,    92,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,    99,   100,   100,   100,
     100,   100,   101,   101,   102,   102,   103,   103,   103,   103,
     103,   103,   104,   104,   106,   105,   107,   107,   108,   108,
     108,   109,   109,   109,   110,   111,   111,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   117,   118,   119,
     119,   120,   121,   121,   122,   122,   123,   124,   125,   126,
     126,   126,   127,   127,   127,   127,   127,   128,   129,   129,
     129,   130,   130,   130,   130,   131,   131,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   133,   133,
     133,   133,   133,   133,   134,   134,   134,   134,   134,   134,
     135
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     3,     1,     1,     2,     2,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       0,     0,     7,     0,     0,     6,     2,     1,     1,     1,
       2,     3,     1,     3,     1,     0,     6,     0,     5,     2,
       1,     3,     1,     0,     4,     2,     1,     1,     2,     1,
       3,     4,     0,     5,     0,     1,     1,     3,     1,     3,
       2,     2,     0,     1,     1,     1,     2,     3,     3,     3,
       4,     4,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     4,     3,     0,     4,     1,     2,     5,     7,
       5,     5,     7,     5,     5,     0,     1,     3,     2,     2,
       0,     1,     1,     3,     0,     1,     1,     1,     1,     1,
       3,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     4,     4,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     3,
       2
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
#line 25 "yacc.y"
    {root = makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkFowardReference();}
#line 1630 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 28 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 1636 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 29 "yacc.y"
                                            {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1642 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 32 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 1648 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 33 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 1654 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 36 "yacc.y"
                                        {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1660 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 37 "yacc.y"
                                        {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1666 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 38 "yacc.y"
                                        {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], makeSpecifier(int_type, 0));}
#line 1672 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 39 "yacc.y"
                                        {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1678 "y.tab.c"
    break;

  case 11: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 50 "yacc.y"
                                                            {yyval = setDeclaratorList(yyvsp[-2], yyvsp[-1]);}
#line 1684 "y.tab.c"
    break;

  case 12: /* declaration_specifiers: type_specifier  */
#line 53 "yacc.y"
                                                        {yyval = makeSpecifier(yyvsp[0], 0);}
#line 1690 "y.tab.c"
    break;

  case 13: /* declaration_specifiers: storage_class_specifier  */
#line 54 "yacc.y"
                                                        {yyval = makeSpecifier(0, yyvsp[0]);}
#line 1696 "y.tab.c"
    break;

  case 14: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 55 "yacc.y"
                                                        {yyval = updateSpecifier(yyvsp[0], yyvsp[-1], 0);}
#line 1702 "y.tab.c"
    break;

  case 15: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 56 "yacc.y"
                                                        {yyval = updateSpecifier(yyvsp[0], 0, yyvsp[-1]);}
#line 1708 "y.tab.c"
    break;

  case 16: /* storage_class_specifier: AUTO_SYM  */
#line 59 "yacc.y"
                    {yyval = S_AUTO;}
#line 1714 "y.tab.c"
    break;

  case 17: /* storage_class_specifier: STATIC_SYM  */
#line 60 "yacc.y"
                    {yyval = S_STATIC;}
#line 1720 "y.tab.c"
    break;

  case 18: /* storage_class_specifier: TYPEDEF_SYM  */
#line 61 "yacc.y"
                    {yyval = S_TYPEDEF;}
#line 1726 "y.tab.c"
    break;

  case 19: /* init_declarator_list: init_declarator  */
#line 68 "yacc.y"
                                                    {yyval = yyvsp[0];}
#line 1732 "y.tab.c"
    break;

  case 20: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 69 "yacc.y"
                                                    {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1738 "y.tab.c"
    break;

  case 21: /* init_declarator: declarator  */
#line 72 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 1744 "y.tab.c"
    break;

  case 22: /* init_declarator: declarator ASSIGN initializer  */
#line 73 "yacc.y"
                                        {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1750 "y.tab.c"
    break;

  case 23: /* initializer: constant_expression  */
#line 76 "yacc.y"
                                        {yyval = makeNode(N_INIT_LIST_ONE, NIL, yyvsp[0], NIL);}
#line 1756 "y.tab.c"
    break;

  case 24: /* initializer: LR initializer_list RR  */
#line 77 "yacc.y"
                                        {yyval = yyvsp[-1];}
#line 1762 "y.tab.c"
    break;

  case 25: /* initializer_list: initializer  */
#line 80 "yacc.y"
                                            {yyval = makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL));}
#line 1768 "y.tab.c"
    break;

  case 26: /* initializer_list: initializer_list COMMA initializer  */
#line 81 "yacc.y"
                                            {yyval = makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 1774 "y.tab.c"
    break;

  case 27: /* type_specifier: struct_type_specifier  */
#line 84 "yacc.y"
                                 {yyval = yyvsp[0];}
#line 1780 "y.tab.c"
    break;

  case 28: /* type_specifier: enum_type_specifier  */
#line 85 "yacc.y"
                                 {yyval = yyvsp[0];}
#line 1786 "y.tab.c"
    break;

  case 29: /* type_specifier: TYPE_IDENTIFIER  */
#line 86 "yacc.y"
                            {yyval = yyvsp[0];}
#line 1792 "y.tab.c"
    break;

  case 30: /* @3: %empty  */
#line 89 "yacc.y"
                                    {yyval = setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1798 "y.tab.c"
    break;

  case 31: /* @4: %empty  */
#line 90 "yacc.y"
                                    {yyval = current_id; current_level++;}
#line 1804 "y.tab.c"
    break;

  case 32: /* struct_type_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 91 "yacc.y"
                                    {checkFowardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id = yyvsp[-2];}
#line 1810 "y.tab.c"
    break;

  case 33: /* @5: %empty  */
#line 92 "yacc.y"
                                    {yyval = makeType(yyvsp[0]);}
#line 1816 "y.tab.c"
    break;

  case 34: /* @6: %empty  */
#line 93 "yacc.y"
                                    {yyval = current_id; current_level++;}
#line 1822 "y.tab.c"
    break;

  case 35: /* struct_type_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 94 "yacc.y"
                                    {checkFowardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id = yyvsp[-2];}
#line 1828 "y.tab.c"
    break;

  case 36: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 95 "yacc.y"
                                    {yyval = getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1834 "y.tab.c"
    break;

  case 37: /* struct_or_union: STRUCT_SYM  */
#line 98 "yacc.y"
                        {yyval = T_STRUCT;}
#line 1840 "y.tab.c"
    break;

  case 38: /* struct_or_union: UNION_SYM  */
#line 99 "yacc.y"
                        {yyval = T_UNION;}
#line 1846 "y.tab.c"
    break;

  case 39: /* struct_declaration_list: struct_declaration  */
#line 102 "yacc.y"
                                                    {yyval = yyvsp[0];}
#line 1852 "y.tab.c"
    break;

  case 40: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 103 "yacc.y"
                                                    {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1858 "y.tab.c"
    break;

  case 41: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 106 "yacc.y"
                                                        {yyval = setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1864 "y.tab.c"
    break;

  case 42: /* struct_declarator_list: struct_declarator  */
#line 109 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 1870 "y.tab.c"
    break;

  case 43: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 110 "yacc.y"
                                                        {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1876 "y.tab.c"
    break;

  case 44: /* struct_declarator: declarator  */
#line 113 "yacc.y"
                    {yyval = yyvsp[0];}
#line 1882 "y.tab.c"
    break;

  case 45: /* @7: %empty  */
#line 116 "yacc.y"
                                {yyval = setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1888 "y.tab.c"
    break;

  case 46: /* enum_type_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 117 "yacc.y"
                                {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1894 "y.tab.c"
    break;

  case 47: /* @8: %empty  */
#line 118 "yacc.y"
                                {yyval = makeType(T_ENUM);}
#line 1900 "y.tab.c"
    break;

  case 48: /* enum_type_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 119 "yacc.y"
                                {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1906 "y.tab.c"
    break;

  case 49: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 120 "yacc.y"
                                {yyval = getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1912 "y.tab.c"
    break;

  case 50: /* enumerator_list: enumerator  */
#line 123 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 1918 "y.tab.c"
    break;

  case 51: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 124 "yacc.y"
                                        {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1924 "y.tab.c"
    break;

  case 52: /* enumerator: IDENTIFIER  */
#line 127 "yacc.y"
                       {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1930 "y.tab.c"
    break;

  case 53: /* @9: %empty  */
#line 128 "yacc.y"
                       {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1936 "y.tab.c"
    break;

  case 54: /* enumerator: IDENTIFIER @9 ASSIGN expression  */
#line 129 "yacc.y"
                       {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1942 "y.tab.c"
    break;

  case 55: /* declarator: pointer direct_declarator  */
#line 132 "yacc.y"
                                    {yyval = setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 1948 "y.tab.c"
    break;

  case 56: /* declarator: direct_declarator  */
#line 133 "yacc.y"
                                    {yyval = yyvsp[0];}
#line 1954 "y.tab.c"
    break;

  case 57: /* pointer: STAR  */
#line 136 "yacc.y"
                    {yyval = makeType(T_POINTER);}
#line 1960 "y.tab.c"
    break;

  case 58: /* pointer: STAR pointer  */
#line 137 "yacc.y"
                    {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 1966 "y.tab.c"
    break;

  case 59: /* direct_declarator: IDENTIFIER  */
#line 140 "yacc.y"
                            {yyval = makeIdentifier(yyvsp[0]);}
#line 1972 "y.tab.c"
    break;

  case 60: /* direct_declarator: LP declarator RP  */
#line 141 "yacc.y"
                            {yyval = yyvsp[-1];}
#line 1978 "y.tab.c"
    break;

  case 61: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 143 "yacc.y"
                            {yyval = setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 1984 "y.tab.c"
    break;

  case 62: /* @10: %empty  */
#line 144 "yacc.y"
                            {yyval = current_id; current_level++;}
#line 1990 "y.tab.c"
    break;

  case 63: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 146 "yacc.y"
                            {checkFowardReference(); current_id = yyvsp[-2]; current_level--;
                            yyval = setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 1997 "y.tab.c"
    break;

  case 64: /* parameter_type_list_opt: %empty  */
#line 150 "yacc.y"
                            {yyval = NIL;}
#line 2003 "y.tab.c"
    break;

  case 65: /* parameter_type_list_opt: parameter_type_list  */
#line 151 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2009 "y.tab.c"
    break;

  case 66: /* parameter_type_list: parameter_list  */
#line 154 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 2015 "y.tab.c"
    break;

  case 67: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 155 "yacc.y"
                                        {yyval = linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2021 "y.tab.c"
    break;

  case 68: /* parameter_list: parameter_declaration  */
#line 158 "yacc.y"
                                                    {yyval = yyvsp[0];}
#line 2027 "y.tab.c"
    break;

  case 69: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 159 "yacc.y"
                                                    {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2033 "y.tab.c"
    break;

  case 70: /* parameter_declaration: declaration_specifiers declarator  */
#line 162 "yacc.y"
                                                        {yyval = setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2039 "y.tab.c"
    break;

  case 71: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 163 "yacc.y"
                                                        {yyval = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2045 "y.tab.c"
    break;

  case 72: /* abstract_declarator_opt: %empty  */
#line 166 "yacc.y"
                                {yyval = NIL;}
#line 2051 "y.tab.c"
    break;

  case 73: /* abstract_declarator_opt: abstract_declarator  */
#line 167 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2057 "y.tab.c"
    break;

  case 74: /* abstract_declarator: direct_abstract_declarator  */
#line 170 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 2063 "y.tab.c"
    break;

  case 75: /* abstract_declarator: pointer  */
#line 171 "yacc.y"
                                            {yyval = makeType(T_POINTER);}
#line 2069 "y.tab.c"
    break;

  case 76: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 172 "yacc.y"
                                            {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2075 "y.tab.c"
    break;

  case 77: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 175 "yacc.y"
                                            {yyval = yyvsp[-1];}
#line 2081 "y.tab.c"
    break;

  case 78: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 176 "yacc.y"
                                            {yyval = setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2087 "y.tab.c"
    break;

  case 79: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 177 "yacc.y"
                                            {yyval = setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 2093 "y.tab.c"
    break;

  case 80: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 178 "yacc.y"
                                                                {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2099 "y.tab.c"
    break;

  case 81: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 179 "yacc.y"
                                                                {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 2105 "y.tab.c"
    break;

  case 82: /* statement_list_opt: %empty  */
#line 182 "yacc.y"
                        {yyval = makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 2111 "y.tab.c"
    break;

  case 83: /* statement_list_opt: statement_list  */
#line 183 "yacc.y"
                        {yyval = yyvsp[0];}
#line 2117 "y.tab.c"
    break;

  case 84: /* statement_list: statement  */
#line 186 "yacc.y"
                                {yyval = makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
#line 2123 "y.tab.c"
    break;

  case 85: /* statement_list: statement_list statement  */
#line 187 "yacc.y"
                                {yyval = makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2129 "y.tab.c"
    break;

  case 86: /* statement: labeled_statement  */
#line 190 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2135 "y.tab.c"
    break;

  case 87: /* statement: compound_statement  */
#line 191 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2141 "y.tab.c"
    break;

  case 88: /* statement: expression_statement  */
#line 192 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2147 "y.tab.c"
    break;

  case 89: /* statement: selection_statement  */
#line 193 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2153 "y.tab.c"
    break;

  case 90: /* statement: iteration_statement  */
#line 194 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2159 "y.tab.c"
    break;

  case 91: /* statement: jump_statement  */
#line 195 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2165 "y.tab.c"
    break;

  case 92: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 198 "yacc.y"
                                                    {yyval = makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2171 "y.tab.c"
    break;

  case 93: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 199 "yacc.y"
                                                    {yyval = makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2177 "y.tab.c"
    break;

  case 94: /* @11: %empty  */
#line 202 "yacc.y"
                            {yyval = current_id; current_level++;}
#line 2183 "y.tab.c"
    break;

  case 95: /* compound_statement: LR @11 statement_list_opt RR  */
#line 203 "yacc.y"
                            {checkFowardReference(); yyval = makeNode(N_STMT_COMPOUND, yyvsp[-1], NIL, yyvsp[0]); current_id = yyvsp[-2]; current_level--;}
#line 2189 "y.tab.c"
    break;

  case 96: /* expression_statement: SEMICOLON  */
#line 206 "yacc.y"
                            {yyval = makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2195 "y.tab.c"
    break;

  case 97: /* expression_statement: expression SEMICOLON  */
#line 207 "yacc.y"
                            {yyval = makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2201 "y.tab.c"
    break;

  case 98: /* selection_statement: IF_SYM LP expression RP statement  */
#line 210 "yacc.y"
                                                            {yyval = makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2207 "y.tab.c"
    break;

  case 99: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 211 "yacc.y"
                                                            {yyval = makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2213 "y.tab.c"
    break;

  case 100: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 212 "yacc.y"
                                                            {yyval = makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2219 "y.tab.c"
    break;

  case 101: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 215 "yacc.y"
                                                            {yyval = makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2225 "y.tab.c"
    break;

  case 102: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 216 "yacc.y"
                                                            {yyval = makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2231 "y.tab.c"
    break;

  case 103: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 217 "yacc.y"
                                                            {yyval = makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2237 "y.tab.c"
    break;

  case 104: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 220 "yacc.y"
                                                                        {yyval = makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2243 "y.tab.c"
    break;

  case 105: /* expression_opt: %empty  */
#line 223 "yacc.y"
                    {yyval = NIL;}
#line 2249 "y.tab.c"
    break;

  case 106: /* expression_opt: expression  */
#line 224 "yacc.y"
                    {yyval = yyvsp[0];}
#line 2255 "y.tab.c"
    break;

  case 107: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 227 "yacc.y"
                                           {yyval = makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2261 "y.tab.c"
    break;

  case 108: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 228 "yacc.y"
                                           {yyval = makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2267 "y.tab.c"
    break;

  case 109: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 229 "yacc.y"
                                           {yyval = makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2273 "y.tab.c"
    break;

  case 110: /* arg_expression_list_opt: %empty  */
#line 232 "yacc.y"
                            {yyval = makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2279 "y.tab.c"
    break;

  case 111: /* arg_expression_list_opt: arg_expression_list  */
#line 233 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2285 "y.tab.c"
    break;

  case 112: /* arg_expression_list: assignment_expression  */
#line 237 "yacc.y"
    {yyval = makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2291 "y.tab.c"
    break;

  case 113: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 239 "yacc.y"
    {yyval = makeNode(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2297 "y.tab.c"
    break;

  case 114: /* constant_expression_opt: %empty  */
#line 242 "yacc.y"
                            {yyval = NIL;}
#line 2303 "y.tab.c"
    break;

  case 115: /* constant_expression_opt: constant_expression  */
#line 243 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2309 "y.tab.c"
    break;

  case 116: /* constant_expression: expression  */
#line 246 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2315 "y.tab.c"
    break;

  case 117: /* expression: comma_expression  */
#line 249 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2321 "y.tab.c"
    break;

  case 118: /* comma_expression: assignment_expression  */
#line 252 "yacc.y"
                            {yyval = yyvsp[0];}
#line 2327 "y.tab.c"
    break;

  case 119: /* assignment_expression: conditional_expression  */
#line 255 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2333 "y.tab.c"
    break;

  case 120: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 256 "yacc.y"
                                                        {yyval = makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2339 "y.tab.c"
    break;

  case 121: /* conditional_expression: logical_OR_expression  */
#line 259 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2345 "y.tab.c"
    break;

  case 122: /* logical_OR_expression: logical_AND_expression  */
#line 262 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2351 "y.tab.c"
    break;

  case 123: /* logical_OR_expression: logical_OR_expression BARBAR logical_AND_expression  */
#line 264 "yacc.y"
                                {yyval = makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2357 "y.tab.c"
    break;

  case 124: /* logical_AND_expression: bitwise_or_expression  */
#line 267 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2363 "y.tab.c"
    break;

  case 125: /* logical_AND_expression: logical_AND_expression AMPAMP bitwise_or_expression  */
#line 269 "yacc.y"
                                {yyval = makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2369 "y.tab.c"
    break;

  case 126: /* bitwise_or_expression: bitwise_xor_expression  */
#line 272 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2375 "y.tab.c"
    break;

  case 127: /* bitwise_xor_expression: bitwise_and_expression  */
#line 275 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2381 "y.tab.c"
    break;

  case 128: /* bitwise_and_expression: equality_expression  */
#line 278 "yacc.y"
                                {yyval = yyvsp[0];}
#line 2387 "y.tab.c"
    break;

  case 129: /* equality_expression: relational_expression  */
#line 281 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2393 "y.tab.c"
    break;

  case 130: /* equality_expression: equality_expression EQL relational_expression  */
#line 282 "yacc.y"
                                                        {yyval = makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2399 "y.tab.c"
    break;

  case 131: /* equality_expression: equality_expression NEQ relational_expression  */
#line 283 "yacc.y"
                                                        {yyval = makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2405 "y.tab.c"
    break;

  case 132: /* relational_expression: shift_expression  */
#line 286 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2411 "y.tab.c"
    break;

  case 133: /* relational_expression: relational_expression LSS shift_expression  */
#line 287 "yacc.y"
                                                        {yyval = makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2417 "y.tab.c"
    break;

  case 134: /* relational_expression: relational_expression GTR shift_expression  */
#line 288 "yacc.y"
                                                        {yyval = makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2423 "y.tab.c"
    break;

  case 135: /* relational_expression: relational_expression LEQ shift_expression  */
#line 289 "yacc.y"
                                                        {yyval = makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2429 "y.tab.c"
    break;

  case 136: /* relational_expression: relational_expression GEQ shift_expression  */
#line 290 "yacc.y"
                                                        {yyval = makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2435 "y.tab.c"
    break;

  case 137: /* shift_expression: additive_expression  */
#line 293 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2441 "y.tab.c"
    break;

  case 138: /* additive_expression: multiplicative_expression  */
#line 296 "yacc.y"
                                                            {yyval = yyvsp[0];}
#line 2447 "y.tab.c"
    break;

  case 139: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 297 "yacc.y"
                                                            {yyval = makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2453 "y.tab.c"
    break;

  case 140: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 298 "yacc.y"
                                                            {yyval = makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2459 "y.tab.c"
    break;

  case 141: /* multiplicative_expression: cast_expression  */
#line 301 "yacc.y"
                                                        {yyval = yyvsp[0];}
#line 2465 "y.tab.c"
    break;

  case 142: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 302 "yacc.y"
                                                        {yyval = makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2471 "y.tab.c"
    break;

  case 143: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 303 "yacc.y"
                                                        {yyval = makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2477 "y.tab.c"
    break;

  case 144: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 304 "yacc.y"
                                                        {yyval = makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2483 "y.tab.c"
    break;

  case 145: /* cast_expression: unary_expression  */
#line 307 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 2489 "y.tab.c"
    break;

  case 146: /* cast_expression: LP type_name RP cast_expression  */
#line 308 "yacc.y"
                                        {yyval = makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2495 "y.tab.c"
    break;

  case 147: /* unary_expression: postfix_expression  */
#line 311 "yacc.y"
                                        {yyval = yyvsp[0];}
#line 2501 "y.tab.c"
    break;

  case 148: /* unary_expression: PLUSPLUS unary_expression  */
#line 312 "yacc.y"
                                        {yyval = makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2507 "y.tab.c"
    break;

  case 149: /* unary_expression: MINUSMINUS unary_expression  */
#line 313 "yacc.y"
                                        {yyval = makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2513 "y.tab.c"
    break;

  case 150: /* unary_expression: AMP cast_expression  */
#line 314 "yacc.y"
                                        {yyval = makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2519 "y.tab.c"
    break;

  case 151: /* unary_expression: STAR cast_expression  */
#line 315 "yacc.y"
                                        {yyval = makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2525 "y.tab.c"
    break;

  case 152: /* unary_expression: EXCL cast_expression  */
#line 316 "yacc.y"
                                        {yyval = makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2531 "y.tab.c"
    break;

  case 153: /* unary_expression: MINUS cast_expression  */
#line 317 "yacc.y"
                                        {yyval = makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2537 "y.tab.c"
    break;

  case 154: /* unary_expression: PLUS cast_expression  */
#line 318 "yacc.y"
                                        {yyval = makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2543 "y.tab.c"
    break;

  case 155: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 319 "yacc.y"
                                        {yyval = makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2549 "y.tab.c"
    break;

  case 156: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 320 "yacc.y"
                                        {yyval = makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2555 "y.tab.c"
    break;

  case 157: /* postfix_expression: primary_expression  */
#line 323 "yacc.y"
                                            {yyval = yyvsp[0];}
#line 2561 "y.tab.c"
    break;

  case 158: /* postfix_expression: postfix_expression LB expression RB  */
#line 324 "yacc.y"
                                            {yyval = makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2567 "y.tab.c"
    break;

  case 159: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 326 "yacc.y"
                                            {yyval = makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2573 "y.tab.c"
    break;

  case 160: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 327 "yacc.y"
                                            {yyval = makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2579 "y.tab.c"
    break;

  case 161: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 328 "yacc.y"
                                            {yyval = makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2585 "y.tab.c"
    break;

  case 162: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 329 "yacc.y"
                                            {yyval = makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2591 "y.tab.c"
    break;

  case 163: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 330 "yacc.y"
                                            {yyval = makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2597 "y.tab.c"
    break;

  case 164: /* primary_expression: IDENTIFIER  */
#line 333 "yacc.y"
                            {yyval = makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2603 "y.tab.c"
    break;

  case 165: /* primary_expression: INTEGER_CONSTANT  */
#line 334 "yacc.y"
                            {yyval = makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2609 "y.tab.c"
    break;

  case 166: /* primary_expression: FLOAT_CONSTANT  */
#line 335 "yacc.y"
                            {yyval = makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2615 "y.tab.c"
    break;

  case 167: /* primary_expression: CHARACTER_CONSTANT  */
#line 336 "yacc.y"
                            {yyval = makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2621 "y.tab.c"
    break;

  case 168: /* primary_expression: STRING_LITERAL  */
#line 337 "yacc.y"
                            {yyval = makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2627 "y.tab.c"
    break;

  case 169: /* primary_expression: LP expression RP  */
#line 338 "yacc.y"
                            {yyval = yyvsp[-1];}
#line 2633 "y.tab.c"
    break;

  case 170: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 342 "yacc.y"
                            {yyval = setTypeNameSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2639 "y.tab.c"
    break;


#line 2643 "y.tab.c"

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

#line 344 "yacc.y"

extern char *yytext;
yyerror(char *s)
{
    syntax_err++;
    printf("line %d: %s near %s\n", line_no, s, yytext);
}
