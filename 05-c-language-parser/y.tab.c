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
  YYSYMBOL_declaration = 64,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 65,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 66,   /* storage_class_specifier  */
  YYSYMBOL_type_qualifier = 67,            /* type_qualifier  */
  YYSYMBOL_init_declarator_list = 68,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 69,           /* init_declarator  */
  YYSYMBOL_type_specifier = 70,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 71,          /* struct_specifier  */
  YYSYMBOL_struct_or_union = 72,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 73,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 74,        /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 75,  /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 76,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 77,         /* struct_declarator  */
  YYSYMBOL_enum_specifier = 78,            /* enum_specifier  */
  YYSYMBOL_enumerator_list = 79,           /* enumerator_list  */
  YYSYMBOL_enumerator = 80,                /* enumerator  */
  YYSYMBOL_declarator = 81,                /* declarator  */
  YYSYMBOL_pointer = 82,                   /* pointer  */
  YYSYMBOL_direct_declarator = 83,         /* direct_declarator  */
  YYSYMBOL_constant_expression_opt = 84,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 85,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 86,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 87,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 88,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 89,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 90,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 91, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 92,               /* initializer  */
  YYSYMBOL_initializer_list = 93,          /* initializer_list  */
  YYSYMBOL_statement = 94,                 /* statement  */
  YYSYMBOL_labeled_statement = 95,         /* labeled_statement  */
  YYSYMBOL_compound_statement = 96,        /* compound_statement  */
  YYSYMBOL_declaration_list = 97,          /* declaration_list  */
  YYSYMBOL_statement_list = 98,            /* statement_list  */
  YYSYMBOL_expression_statement = 99,      /* expression_statement  */
  YYSYMBOL_selection_statement = 100,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 101,      /* iteration_statement  */
  YYSYMBOL_expression_opt = 102,           /* expression_opt  */
  YYSYMBOL_jump_statement = 103,           /* jump_statement  */
  YYSYMBOL_primary_expression = 104,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 105,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 106,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 107,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 108,         /* unary_expression  */
  YYSYMBOL_cast_expression = 109,          /* cast_expression  */
  YYSYMBOL_type_name = 110,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 111, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 112,      /* additive_expression  */
  YYSYMBOL_shift_expression = 113,         /* shift_expression  */
  YYSYMBOL_relational_expression = 114,    /* relational_expression  */
  YYSYMBOL_equality_expression = 115,      /* equality_expression  */
  YYSYMBOL_AND_expression = 116,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 117,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 118,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 119,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 120,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 121,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 122,    /* assignment_expression  */
  YYSYMBOL_comma_expression = 123,         /* comma_expression  */
  YYSYMBOL_expression = 124,               /* expression  */
  YYSYMBOL_constant_expression = 125       /* constant_expression  */
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
#define YYLAST   539

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

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
       0,    15,    15,    18,    19,    22,    23,    26,    27,    30,
      33,    34,    35,    36,    37,    38,    41,    42,    43,    46,
      49,    50,    53,    54,    57,    58,    59,    62,    63,    64,
      67,    68,    71,    72,    75,    78,    79,    80,    81,    84,
      85,    88,    89,    90,    93,    94,    95,    98,    99,   102,
     103,   106,   107,   110,   111,   114,   115,   116,   117,   120,
     121,   124,   125,   128,   129,   132,   133,   136,   137,   140,
     141,   144,   145,   146,   149,   150,   151,   152,   153,   156,
     157,   158,   161,   162,   164,   165,   166,   167,   168,   169,
     172,   173,   174,   177,   180,   181,   184,   185,   188,   189,
     192,   193,   194,   197,   198,   199,   202,   203,   206,   207,
     208,   209,   212,   213,   214,   215,   216,   217,   220,   221,
     222,   223,   224,   225,   226,   229,   230,   233,   234,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   248,   249,
     252,   253,   256,   257,   258,   259,   262,   263,   264,   267,
     270,   271,   272,   273,   274,   277,   278,   279,   282,   283,
     286,   289,   292,   293,   296,   297,   300,   303,   304,   307,
     310,   313
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

#define YYPACT_NINF (-205)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     488,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,    18,
      34,     9,    20,   488,  -205,  -205,  -205,     9,   349,   349,
     349,  -205,    62,  -205,   -15,    13,    64,    26,    46,    28,
      57,  -205,  -205,   101,  -205,   -11,  -205,  -205,  -205,    52,
     219,  -205,  -205,    64,   349,   425,    46,    99,     0,  -205,
    -205,  -205,     9,  -205,   378,  -205,   219,   219,   219,    33,
    -205,     3,   349,    73,    82,  -205,   113,  -205,  -205,  -205,
    -205,  -205,  -205,   435,   435,   425,   425,   425,   425,   445,
     388,    91,  -205,    89,   120,  -205,   161,    32,  -205,   176,
     180,   155,  -205,  -205,   146,   154,  -205,  -205,  -205,  -205,
    -205,   132,   425,    46,  -205,  -205,   202,   378,  -205,  -205,
     140,  -205,  -205,  -205,  -205,   425,   107,  -205,   196,  -205,
       9,   240,   325,   425,  -205,    49,  -205,  -205,   106,  -205,
     194,   425,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   388,
    -205,    97,   201,   203,  -205,   251,  -205,  -205,   425,   425,
     256,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,  -205,  -205,  -205,  -205,
     137,  -205,  -205,     3,  -205,   425,   212,   425,   213,   220,
     229,   234,   276,   235,   425,   215,   232,   285,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,   249,   253,   254,
     261,   106,   349,   425,  -205,  -205,   255,   337,   141,  -205,
     425,  -205,  -205,   264,   289,  -205,   265,  -205,  -205,  -205,
    -205,  -205,   161,   161,  -205,  -205,  -205,  -205,   176,   176,
     180,  -205,   146,   178,  -205,  -205,  -205,   276,   262,   276,
     425,   425,   425,   299,   425,   266,  -205,  -205,  -205,   267,
    -205,  -205,  -205,  -205,   271,   270,  -205,  -205,  -205,   425,
    -205,  -205,  -205,  -205,   276,  -205,   274,   278,   280,   282,
     287,  -205,  -205,  -205,  -205,  -205,  -205,   276,   276,   276,
     425,   425,   324,  -205,  -205,   292,   290,   276,   301,   425,
    -205,  -205,   302,   276,  -205
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    55,    26,    16,    17,    19,    18,    30,    31,     0,
       0,     0,     0,     2,     3,     5,     6,     0,    11,    12,
      10,    24,     0,    25,     0,     0,    52,    46,     0,    53,
       0,     1,     4,     0,    20,    22,    14,    15,    13,    29,
       0,    94,     8,    51,    61,    59,     0,    49,     0,    47,
      54,    56,     0,     9,     0,     7,     0,    36,    35,     0,
      32,     0,    96,    69,     0,    62,    63,    65,   112,   113,
     114,   115,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   129,   138,   142,   146,   149,   150,   155,
     158,   160,   161,   162,   164,   166,   167,   169,   170,   171,
      60,     0,     0,     0,    45,    21,    22,     0,    23,    79,
       0,    38,    37,    28,    33,     0,     0,    39,    41,    95,
       0,     0,    61,    59,    67,    71,    68,    70,    72,    58,
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
    -205,  -205,  -205,   344,  -205,   303,     4,  -205,    15,  -205,
     314,    23,  -205,  -205,   312,   -49,   164,  -205,   197,  -205,
     323,   268,   -10,   -27,   -12,  -104,   -41,  -205,  -205,   242,
    -205,   -36,  -111,  -102,  -205,  -141,  -205,    -9,  -205,  -205,
    -205,  -205,  -205,  -204,  -205,  -205,  -205,  -205,  -205,    14,
     -46,   236,    86,  -205,    80,    88,   210,  -205,  -205,   216,
     209,  -205,  -205,  -140,  -205,   -45,   -59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,    13,    14,    15,    16,    63,    18,    19,    33,
      34,    20,    21,    22,    59,    60,    61,   116,   117,    23,
      48,    49,    24,    25,    26,    81,   198,    65,    66,    67,
     126,   199,   128,   108,   170,   190,   191,   192,    62,   121,
     193,   194,   195,   245,   196,    82,    83,   213,   214,    84,
      85,   142,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   197,   100
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,    30,    50,    64,    17,   169,     1,    35,   215,   109,
     114,   218,     1,    43,   201,    42,     1,    17,    54,   200,
      31,    27,    36,    37,    38,    29,    55,   127,   103,   135,
     136,   137,   138,    10,    41,   143,   125,     2,    41,    10,
     270,   243,   106,   167,     5,     5,     7,     8,     9,    47,
     104,   118,     1,   124,    11,    57,   172,    99,    10,   115,
      11,   114,   109,    58,    11,    39,   120,    28,   155,   156,
      99,    57,    57,    57,    57,    46,     1,   286,    99,    58,
      58,    58,    58,   113,   141,   292,   143,   132,   133,   134,
     134,   134,   134,   140,   143,   125,   263,   201,   265,   255,
     122,    56,   123,    10,   216,   209,   219,   220,   221,    51,
     106,    40,    30,    43,   208,    44,   236,    45,   238,   275,
     145,   146,   147,   276,   122,    57,   123,    10,   102,    52,
      99,   262,    99,    58,   129,   173,   282,   283,   284,   246,
     148,   130,   149,   141,     2,   144,   290,   150,   207,   151,
     123,     5,   294,     7,     8,     9,    53,   202,    99,   203,
     103,   254,   174,   118,   257,   233,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     208,    68,   166,    69,    70,    71,    72,   234,   109,   163,
     171,   152,   207,   164,   123,   266,   267,   268,     2,   246,
     153,   154,   165,     3,     4,     5,     6,     7,     8,     9,
      73,    74,    75,    76,    77,    78,    79,   157,   158,   159,
     160,   111,   112,     2,   134,   161,   162,   107,   261,    80,
       5,    54,     7,     8,     9,   285,   246,   224,   225,   226,
     227,   222,   223,   176,   246,    69,    70,    71,    72,   228,
     229,   204,   175,   210,   212,   211,   177,   178,   179,   217,
     180,   181,   182,   183,   184,   185,   186,   187,   237,   239,
     247,   240,    73,    74,    75,    76,    77,    78,    79,   176,
     241,    69,    70,    71,    72,   242,   244,   248,   249,    41,
     188,    80,   177,   178,   179,   189,   180,   181,   182,   183,
     184,   185,   186,   187,   250,   251,   252,   256,    73,    74,
      75,    76,    77,    78,    79,   253,   258,   259,   264,   260,
     269,   271,   272,   273,   274,    41,   277,    80,     1,     2,
     278,   189,   279,   280,     3,     4,     5,     6,     7,     8,
       9,     2,   281,   287,   288,   289,     3,     4,     5,     6,
       7,     8,     9,     2,   293,    10,   291,    32,     3,     4,
       5,     6,     7,     8,     9,   119,   105,    10,   110,   101,
     235,   168,   205,   230,   232,   206,   122,     0,   123,     0,
     231,    68,     0,    69,    70,    71,    72,     0,   207,     0,
     123,    68,     2,    69,    70,    71,    72,     3,     4,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,   107,    68,    80,
      69,    70,    71,    72,     0,     0,     0,     0,    68,    80,
      69,    70,    71,    72,     0,     0,     0,     0,    68,     0,
      69,    70,    71,    72,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,    80,    73,    74,    75,
      76,    77,    78,    79,     0,     0,   131,     0,     0,     0,
       0,     1,     2,     0,     0,     0,   139,     3,     4,     5,
       6,     7,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11
};

static const yytype_int16 yycheck[] =
{
      45,    11,    29,    44,     0,   107,     3,    17,   148,    54,
      59,   151,     3,    25,   125,    24,     3,    13,    29,   123,
       0,     3,    18,    19,    20,    10,    35,    63,    28,    75,
      76,    77,    78,    30,    49,    80,    63,     4,    49,    30,
     244,   182,    52,   102,    11,    11,    13,    14,    15,     3,
      50,    61,     3,    63,    51,    40,   115,   102,    30,    56,
      51,   110,   107,    40,    51,     3,    62,    49,    36,    37,
     115,    56,    57,    58,    59,    49,     3,   281,   123,    56,
      57,    58,    59,    50,    80,   289,   131,    73,    74,    75,
      76,    77,    78,    79,   139,   122,   237,   208,   239,   203,
      51,    49,    53,    30,   149,   141,   152,   153,   154,    52,
     120,    49,   122,   125,   141,    51,   175,    53,   177,   259,
      31,    32,    33,   264,    51,   110,    53,    30,    29,    28,
     175,   233,   177,   110,    52,    28,   277,   278,   279,   184,
      51,    28,    53,   139,     4,    54,   287,    58,    51,    29,
      53,    11,   293,    13,    14,    15,    55,    51,   203,    53,
      28,   202,    55,   173,   210,    28,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     207,     3,    50,     5,     6,     7,     8,    50,   233,    34,
      50,    30,    51,    47,    53,   240,   241,   242,     4,   244,
      39,    40,    48,     9,    10,    11,    12,    13,    14,    15,
      32,    33,    34,    35,    36,    37,    38,    41,    42,    43,
      44,    57,    58,     4,   210,    45,    46,    49,    50,    51,
      11,    29,    13,    14,    15,   280,   281,   157,   158,   159,
     160,   155,   156,     3,   289,     5,     6,     7,     8,   161,
     162,    57,    56,    52,     3,    52,    16,    17,    18,     3,
      20,    21,    22,    23,    24,    25,    26,    27,    56,    56,
      55,    51,    32,    33,    34,    35,    36,    37,    38,     3,
      51,     5,     6,     7,     8,    51,    51,    55,     3,    49,
      50,    51,    16,    17,    18,    55,    20,    21,    22,    23,
      24,    25,    26,    27,    55,    52,    52,    52,    32,    33,
      34,    35,    36,    37,    38,    54,    52,    28,    56,    54,
      21,    55,    55,    52,    54,    49,    52,    51,     3,     4,
      52,    55,    52,    51,     9,    10,    11,    12,    13,    14,
      15,     4,    55,    19,    52,    55,     9,    10,    11,    12,
      13,    14,    15,     4,    52,    30,    55,    13,     9,    10,
      11,    12,    13,    14,    15,    62,    52,    30,    56,    46,
     173,   103,   130,   163,   165,   139,    51,    -1,    53,    -1,
     164,     3,    -1,     5,     6,     7,     8,    -1,    51,    -1,
      53,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    49,     3,    51,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,     3,    51,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,     3,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    51,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    51,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,    51,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     9,    10,    11,    12,    13,    14,    15,
      30,    51,    60,    61,    62,    63,    64,    65,    66,    67,
      70,    71,    72,    78,    81,    82,    83,     3,    49,    67,
      81,     0,    62,    68,    69,    81,    65,    65,    65,     3,
      49,    49,    96,    83,    51,    53,    49,     3,    79,    80,
      82,    52,    28,    55,    29,    96,    49,    67,    70,    73,
      74,    75,    97,    65,    85,    86,    87,    88,     3,     5,
       6,     7,     8,    32,    33,    34,    35,    36,    37,    38,
      51,    84,   104,   105,   108,   109,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    79,    29,    28,    50,    69,    81,    49,    92,   124,
      73,    75,    75,    50,    74,    56,    76,    77,    81,    64,
      65,    98,    51,    53,    81,    82,    89,    90,    91,    52,
      28,    51,   108,   108,   108,   109,   109,   109,   109,    51,
     108,    65,   110,   124,    54,    31,    32,    33,    51,    53,
      58,    29,    30,    39,    40,    36,    37,    41,    42,    43,
      44,    45,    46,    34,    47,    48,    50,   125,    80,    92,
      93,    50,   125,    28,    55,    56,     3,    16,    17,    18,
      20,    21,    22,    23,    24,    25,    26,    27,    50,    55,
      94,    95,    96,    99,   100,   101,   103,   124,    85,    90,
      84,    91,    51,    53,    57,    88,   110,    51,    82,    90,
      52,    52,     3,   106,   107,   122,   124,     3,   122,   109,
     109,   109,   111,   111,   113,   113,   113,   113,   114,   114,
     115,   118,   119,    28,    50,    77,   125,    56,   125,    56,
      51,    51,    51,    94,    51,   102,   124,    55,    55,     3,
      55,    52,    52,    54,    85,    84,    52,   109,    52,    28,
      54,    50,    92,    94,    56,    94,   124,   124,   124,    21,
     102,    55,    55,    52,    54,   122,    94,    52,    52,    52,
      51,    55,    94,    94,    94,   124,   102,    19,    52,    55,
      94,    55,   102,    52,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    63,    63,    64,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    67,
      68,    68,    69,    69,    70,    70,    70,    71,    71,    71,
      72,    72,    73,    73,    74,    75,    75,    75,    75,    76,
      76,    77,    77,    77,    78,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    90,    91,    91,    91,    91,    91,    92,
      92,    92,    93,    93,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   101,   102,   102,   103,   103,
     103,   103,   104,   104,   104,   104,   104,   104,   105,   105,
     105,   105,   105,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   111,   111,   112,   112,   112,   113,
     114,   114,   114,   114,   114,   115,   115,   115,   116,   116,
     117,   118,   119,   119,   120,   120,   121,   122,   122,   123,
     124,   125
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     3,
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

#line 1615 "y.tab.c"

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

#line 315 "c-grammar.y"

#include <stdio.h>
int line_no = 1;
extern char *yytext;
void yyerror(char *s){
    printf("Syntax Error in line %d: %s near %s\n", line_no, s, yytext);
}
