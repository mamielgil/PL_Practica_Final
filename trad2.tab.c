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
#line 6 "trad2.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata
#define INC(x) x=x+1 // Operaciones para modificar el iterador del bucle FOR
#define DEC(x) x=x-1

int yylex () ;
int yyerror () ;
char *mi_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;
void añadir_variable_local(char *nombre) ;
int es_local(char *var_name) ;

char *local_variables[2048]; // Tabla de variables locales
int local_variables_counter = 0; // Contador de variable locales que tenemos
char dentro_funcion[500] = "global"; // Variable para saber en que scope nos encontramos

char temp [2048] ;

// Abstract Syntax Tree (AST) Node Structure

typedef struct ASTnode t_node ;

struct ASTnode {
    char *op ;
    int type ;		// leaf, unary or binary nodes
    t_node *left ;
    t_node *right ;
} ;


// Definitions for explicit attributes

typedef struct s_attr {
    int value ;    // - Numeric value of a NUMBER 
    char *code ;   // - to pass IDENTIFIER names, and other translations 
    t_node *node ; // - for possible future use of AST
} t_attr ;

#define YYSTYPE t_attr


#line 121 "trad2.tab.c"

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
    NUMBER = 258,                  /* NUMBER  */
    IDENTIF = 259,                 /* IDENTIF  */
    INTEGER = 260,                 /* INTEGER  */
    CHAR = 261,                    /* CHAR  */
    FLOAT = 262,                   /* FLOAT  */
    STRING = 263,                  /* STRING  */
    MAIN = 264,                    /* MAIN  */
    WHILE = 265,                   /* WHILE  */
    PUTS = 266,                    /* PUTS  */
    PRINTF = 267,                  /* PRINTF  */
    AND = 268,                     /* AND  */
    OR = 269,                      /* OR  */
    NOT_EQUAL = 270,               /* NOT_EQUAL  */
    EQUAL = 271,                   /* EQUAL  */
    LOE = 272,                     /* LOE  */
    GOE = 273,                     /* GOE  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    FOR = 276,                     /* FOR  */
    INC = 277,                     /* INC  */
    DEC = 278,                     /* DEC  */
    SWITCH = 279,                  /* SWITCH  */
    CASE = 280,                    /* CASE  */
    BREAK = 281,                   /* BREAK  */
    DEFAULT = 282,                 /* DEFAULT  */
    RETURN = 283,                  /* RETURN  */
    UNARY_SIGN = 284               /* UNARY_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIF = 4,                    /* IDENTIF  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_MAIN = 9,                       /* MAIN  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_PUTS = 11,                      /* PUTS  */
  YYSYMBOL_PRINTF = 12,                    /* PRINTF  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_NOT_EQUAL = 15,                 /* NOT_EQUAL  */
  YYSYMBOL_EQUAL = 16,                     /* EQUAL  */
  YYSYMBOL_LOE = 17,                       /* LOE  */
  YYSYMBOL_GOE = 18,                       /* GOE  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_INC = 22,                       /* INC  */
  YYSYMBOL_DEC = 23,                       /* DEC  */
  YYSYMBOL_SWITCH = 24,                    /* SWITCH  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_RETURN = 28,                    /* RETURN  */
  YYSYMBOL_29_ = 29,                       /* '='  */
  YYSYMBOL_30_ = 30,                       /* '<'  */
  YYSYMBOL_31_ = 31,                       /* '>'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_36_ = 36,                       /* '%'  */
  YYSYMBOL_UNARY_SIGN = 37,                /* UNARY_SIGN  */
  YYSYMBOL_38_ = 38,                       /* '!'  */
  YYSYMBOL_39_ = 39,                       /* ';'  */
  YYSYMBOL_40_ = 40,                       /* '}'  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '['  */
  YYSYMBOL_46_ = 46,                       /* ']'  */
  YYSYMBOL_47_ = 47,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_axioma = 49,                    /* axioma  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_dec_func = 52,                  /* dec_func  */
  YYSYMBOL_53_3 = 53,                      /* $@3  */
  YYSYMBOL_func_params_declaration = 54,   /* func_params_declaration  */
  YYSYMBOL_func_params_declaration_cont = 55, /* func_params_declaration_cont  */
  YYSYMBOL_func_params_types = 56,         /* func_params_types  */
  YYSYMBOL_func_return_al_final = 57,      /* func_return_al_final  */
  YYSYMBOL_func_call = 58,                 /* func_call  */
  YYSYMBOL_func_params_call = 59,          /* func_params_call  */
  YYSYMBOL_func_params_call_cont = 60,     /* func_params_call_cont  */
  YYSYMBOL_r_axioma = 61,                  /* r_axioma  */
  YYSYMBOL_dec_main = 62,                  /* dec_main  */
  YYSYMBOL_63_4 = 63,                      /* $@4  */
  YYSYMBOL_r_sentencia = 64,               /* r_sentencia  */
  YYSYMBOL_if_cont = 65,                   /* if_cont  */
  YYSYMBOL_if_sentencia = 66,              /* if_sentencia  */
  YYSYMBOL_multiples_sentencias = 67,      /* multiples_sentencias  */
  YYSYMBOL_else_cont = 68,                 /* else_cont  */
  YYSYMBOL_sentencia = 69,                 /* sentencia  */
  YYSYMBOL_switch_cont = 70,               /* switch_cont  */
  YYSYMBOL_switch_cont2 = 71,              /* switch_cont2  */
  YYSYMBOL_switch_val = 72,                /* switch_val  */
  YYSYMBOL_for_operator = 73,              /* for_operator  */
  YYSYMBOL_for_var = 74,                   /* for_var  */
  YYSYMBOL_while_cont = 75,                /* while_cont  */
  YYSYMBOL_printf_param = 76,              /* printf_param  */
  YYSYMBOL_printf_elem = 77,               /* printf_elem  */
  YYSYMBOL_printf_cont = 78,               /* printf_cont  */
  YYSYMBOL_dec_var = 79,                   /* dec_var  */
  YYSYMBOL_continue_ID = 80,               /* continue_ID  */
  YYSYMBOL_continue_comma = 81,            /* continue_comma  */
  YYSYMBOL_expresion = 82,                 /* expresion  */
  YYSYMBOL_array_index = 83,               /* array_index  */
  YYSYMBOL_expr_condicional = 84,          /* expr_condicional  */
  YYSYMBOL_expr_others = 85,               /* expr_others  */
  YYSYMBOL_termino = 86,                   /* termino  */
  YYSYMBOL_operando = 87                   /* operando  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
       2,     2,     2,    38,     2,     2,     2,    36,     2,     2,
      41,    42,    34,    32,    44,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    39,
      30,    29,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    40,     2,     2,     2,     2,
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
      25,    26,    27,    28,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   100,   100,   100,   103,   105,   105,   114,   114,   120,
     121,   127,   128,   134,   135,   136,   141,   147,   153,   154,
     159,   160,   165,   166,   169,   169,   175,   176,   180,   186,
     187,   192,   195,   199,   200,   204,   213,   222,   224,   227,
     230,   233,   235,   238,   247,   250,   254,   259,   260,   263,
     268,   270,   272,   277,   284,   293,   304,   309,   314,   317,
     321,   322,   327,   336,   339,   342,   345,   348,   352,   354,
     358,   359,   360,   361,   362,   366,   377,   380,   383,   386,
     389,   392,   395,   398,   402,   405,   408,   411,   414,   418,
     419,   420,   422,   426,   433,   435
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
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIF",
  "INTEGER", "CHAR", "FLOAT", "STRING", "MAIN", "WHILE", "PUTS", "PRINTF",
  "AND", "OR", "NOT_EQUAL", "EQUAL", "LOE", "GOE", "IF", "ELSE", "FOR",
  "INC", "DEC", "SWITCH", "CASE", "BREAK", "DEFAULT", "RETURN", "'='",
  "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "UNARY_SIGN", "'!'",
  "';'", "'}'", "'('", "')'", "'{'", "','", "'['", "']'", "':'", "$accept",
  "axioma", "$@1", "$@2", "dec_func", "$@3", "func_params_declaration",
  "func_params_declaration_cont", "func_params_types",
  "func_return_al_final", "func_call", "func_params_call",
  "func_params_call_cont", "r_axioma", "dec_main", "$@4", "r_sentencia",
  "if_cont", "if_sentencia", "multiples_sentencias", "else_cont",
  "sentencia", "switch_cont", "switch_cont2", "switch_val", "for_operator",
  "for_var", "while_cont", "printf_param", "printf_elem", "printf_cont",
  "dec_var", "continue_ID", "continue_comma", "expresion", "array_index",
  "expr_condicional", "expr_others", "termino", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-130)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      67,   -32,     7,   -28,    16,   -12,     1,    74,    33,    18,
      74,  -130,  -130,  -130,  -130,  -130,  -130,    13,    69,    64,
       7,    28,  -130,  -130,  -130,    40,    67,    32,    44,    61,
     108,   109,  -130,  -130,   -35,    15,    15,    15,    28,  -130,
     117,  -130,  -130,  -130,  -130,  -130,    67,    77,  -130,  -130,
    -130,    74,  -130,  -130,    61,    61,    28,    28,  -130,  -130,
    -130,  -130,   261,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    61,  -130,  -130,   361,
     121,  -130,  -130,    84,   189,   141,  -130,   406,   384,   -10,
     -10,    82,    82,    82,    82,    73,    73,  -130,  -130,  -130,
    -130,   361,    65,     7,    28,    88,    95,    28,    96,    97,
      28,    89,  -130,   361,    44,  -130,    28,  -130,  -130,  -130,
      28,    28,   102,   213,   135,   137,   237,   156,   157,   291,
    -130,  -130,  -130,  -130,   189,  -130,   301,   165,  -130,   361,
    -130,   120,   122,   123,   361,  -130,   138,   125,   126,  -130,
    -130,  -130,   140,   130,   145,    60,   146,   148,   361,   361,
      28,    28,   143,    28,  -130,  -130,  -130,   147,   377,  -130,
     169,  -130,  -130,   377,   377,   151,   167,  -130,   328,    60,
    -130,   150,  -130,    11,    71,  -130,   147,   361,   153,   168,
    -130,  -130,   205,   207,   166,  -130,   172,   210,   211,  -130,
    -130,   361,  -130,   174,   175,   192,   190,   193,   195,   194,
     194,   -24,  -130,  -130,    71,   191,   196,   212,   361,  -130,
     361,   214,   215,   200,   203,  -130,   -24,  -130
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     9,    69,     0,
       9,     1,     5,     4,    13,    15,    14,     0,     0,     0,
       0,     0,    62,    63,     2,     0,    22,     0,    11,    69,
       0,     0,    68,    94,    93,     0,     0,     0,     0,    73,
       0,    74,    70,    71,    72,    89,    22,     0,    23,     6,
       7,     0,    10,    64,    69,    69,    18,     0,    93,    90,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,     3,    24,    26,
       0,    66,    65,     0,    20,     0,    95,    76,    77,    78,
      79,    81,    83,    80,    82,    85,    86,    87,    88,    84,
      67,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    26,    11,    17,     0,    19,    75,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     8,    27,    12,    20,    25,     0,     0,    41,    26,
      39,     0,     0,     0,     0,    40,     0,     0,     0,    44,
      21,    35,     0,     0,     0,     0,     0,     0,    30,    29,
       0,     0,     0,     0,    56,    38,    59,    60,    58,    37,
      33,    32,    31,    55,     0,    70,     0,    43,     0,     0,
      57,     0,    28,     0,     0,    36,    60,     0,     0,     0,
      42,    52,     0,     0,     0,    61,     0,     0,     0,    50,
      51,    26,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    53,    54,     0,     0,     0,     0,    26,    46,
      26,     0,     0,     0,     0,    48,    47,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,   257,  -130,  -130,  -130,  -130,   248,   149,   209,   142,
     -74,  -130,   128,   218,  -130,  -130,   -99,  -130,    78,  -130,
    -130,  -129,  -130,    55,    52,  -130,  -130,  -119,  -130,   103,
      98,   -16,  -130,   -17,   -21,  -130,   124,  -130,  -130,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    48,    46,    26,     5,    79,    17,    52,    18,   131,
      39,    83,   117,    49,     6,   101,   112,   145,   157,   158,
     182,   113,   177,   216,   194,   190,   147,   140,   143,   167,
     180,     9,    22,    23,   168,    41,    42,    43,    44,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,   214,   119,   215,    32,   111,    56,    67,    68,     7,
      57,     8,    53,    10,   132,   159,    11,    62,    33,    58,
      69,    70,    71,    72,    73,    74,    75,   111,    12,   171,
     172,    33,    34,   188,   189,    84,    85,    81,    82,   111,
     153,    13,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    27,    38,    24,   159,   100,
      35,    36,    19,    33,    34,   111,    37,    29,   166,    38,
     111,     1,     2,    28,   191,    50,     3,    20,    21,    14,
      15,    16,    47,   123,   111,   111,   126,   122,    51,   129,
     212,   213,    35,    36,   120,   134,    30,    31,    37,   136,
     137,    38,   205,   192,   193,    20,    56,    73,    74,    75,
     121,    54,    55,   111,    71,    72,    73,    74,    75,   221,
      78,   222,    59,    60,    61,   114,   115,   111,   130,   124,
      63,    64,    65,    66,    67,    68,   125,   127,   128,   173,
     174,   138,   178,   141,   111,   142,   111,    69,    70,    71,
      72,    73,    74,    75,    63,    64,    65,    66,    67,    68,
     146,   148,   154,    76,   161,   156,   155,   160,   162,   163,
     164,    69,    70,    71,    72,    73,    74,    75,    63,    64,
      65,    66,    67,    68,   165,   169,   176,   118,   170,   181,
     183,   179,   184,   187,   197,    69,    70,    71,    72,    73,
      74,    75,    63,    64,    65,    66,    67,    68,   199,   198,
     200,   152,   202,   201,   203,   204,   206,   207,   208,    69,
      70,    71,    72,    73,    74,    75,    63,    64,    65,    66,
      67,    68,   209,   116,   211,   210,   219,   139,   218,   225,
     223,   224,   226,    69,    70,    71,    72,    73,    74,    75,
      63,    64,    65,    66,    67,    68,   139,     4,    25,   220,
      80,   135,   150,   133,    77,   196,   217,    69,    70,    71,
      72,    73,    74,    75,    63,    64,    65,    66,    67,    68,
     144,   227,   186,     0,   195,   175,     0,     0,     0,     0,
       0,    69,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,    86,    63,    64,    65,    66,    67,    68,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,    75,     0,     0,
     149,    69,    70,    71,    72,    73,    74,    75,     0,     0,
     151,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    70,
      71,    72,    73,    74,    75,   102,   103,   185,     0,     0,
       0,   104,   105,   106,     0,     0,     0,     0,     0,     0,
     107,     0,   108,     0,     0,   109,     0,     0,     0,   110,
      63,    64,    65,    66,    67,    68,     0,    63,     0,    65,
      66,    67,    68,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    69,    70,    71,    72,    73,    74,
      75,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,    71,    72,
      73,    74,    75
};

static const yytype_int16 yycheck[] =
{
      21,    25,   101,    27,    20,    79,    41,    17,    18,    41,
      45,     4,    29,    41,   113,   144,     0,    38,     3,     4,
      30,    31,    32,    33,    34,    35,    36,   101,    40,   158,
     159,     3,     4,    22,    23,    56,    57,    54,    55,   113,
     139,    40,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    42,    41,    39,   187,    76,
      32,    33,    29,     3,     4,   139,    38,     3,     8,    41,
     144,     4,     5,     4,     3,    43,     9,    44,    45,     5,
       6,     7,    42,   104,   158,   159,   107,   103,    44,   110,
     209,   210,    32,    33,    29,   116,    32,    33,    38,   120,
     121,    41,   201,    32,    33,    44,    41,    34,    35,    36,
      45,     3,     3,   187,    32,    33,    34,    35,    36,   218,
      43,   220,    35,    36,    37,     4,    42,   201,    39,    41,
      13,    14,    15,    16,    17,    18,    41,    41,    41,   160,
     161,    39,   163,     8,   218,     8,   220,    30,    31,    32,
      33,    34,    35,    36,    13,    14,    15,    16,    17,    18,
       4,     4,    42,    46,    39,    42,    44,    29,    42,    29,
      40,    30,    31,    32,    33,    34,    35,    36,    13,    14,
      15,    16,    17,    18,    39,    39,    43,    46,    40,    20,
      39,    44,    25,    43,    41,    30,    31,    32,    33,    34,
      35,    36,    13,    14,    15,    16,    17,    18,     3,    41,
       3,    46,    40,    47,     4,     4,    42,    42,    26,    30,
      31,    32,    33,    34,    35,    36,    13,    14,    15,    16,
      17,    18,    42,    44,    39,    42,    40,    43,    47,    39,
      26,    26,    39,    30,    31,    32,    33,    34,    35,    36,
      13,    14,    15,    16,    17,    18,    43,     0,    10,    47,
      51,   119,   134,   114,    46,   187,   214,    30,    31,    32,
      33,    34,    35,    36,    13,    14,    15,    16,    17,    18,
      43,   226,   179,    -1,   186,   161,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    42,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,     4,     5,    39,    -1,    -1,
      -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,
      13,    14,    15,    16,    17,    18,    -1,    13,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    30,    31,    32,    33,    34,    35,
      36,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     9,    49,    52,    62,    41,     4,    79,
      41,     0,    40,    40,     5,     6,     7,    54,    56,    29,
      44,    45,    80,    81,    39,    54,    51,    42,     4,     3,
      32,    33,    79,     3,     4,    32,    33,    38,    41,    58,
      82,    83,    84,    85,    86,    87,    50,    42,    49,    61,
      43,    44,    55,    81,     3,     3,    41,    45,     4,    87,
      87,    87,    82,    13,    14,    15,    16,    17,    18,    30,
      31,    32,    33,    34,    35,    36,    46,    61,    43,    53,
      56,    81,    81,    59,    82,    82,    42,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      81,    63,     4,     5,    10,    11,    12,    19,    21,    24,
      28,    58,    64,    69,     4,    42,    44,    60,    46,    64,
      29,    45,    79,    82,    41,    41,    82,    41,    41,    82,
      39,    57,    64,    55,    82,    57,    82,    82,    39,    43,
      75,     8,     8,    76,    43,    65,     4,    74,     4,    39,
      60,    39,    46,    64,    42,    44,    42,    66,    67,    69,
      29,    39,    42,    29,    40,    39,     8,    77,    82,    39,
      40,    69,    69,    82,    82,    84,    43,    70,    82,    44,
      78,    20,    68,    39,    25,    39,    77,    43,    22,    23,
      73,     3,    32,    33,    72,    78,    66,    41,    41,     3,
       3,    47,    40,     4,     4,    64,    42,    42,    26,    42,
      42,    39,    75,    75,    25,    27,    71,    72,    47,    40,
      47,    64,    64,    26,    26,    39,    39,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    49,    51,    49,    53,    52,    54,
      54,    55,    55,    56,    56,    56,    57,    58,    59,    59,
      60,    60,    61,    61,    63,    62,    64,    64,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    71,    71,    71,
      72,    72,    72,    73,    73,    74,    75,    76,    77,    77,
      78,    78,    79,    80,    80,    80,    80,    80,    81,    81,
      82,    82,    82,    82,    82,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    85,    86,
      86,    86,    86,    87,    87,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     2,     0,     4,     0,     8,     0,
       3,     0,     4,     1,     1,     1,     0,     4,     0,     2,
       0,     3,     0,     1,     0,     8,     0,     2,     4,     1,
       1,     2,     2,     0,     4,     4,     7,     5,     5,     3,
       3,     3,     7,     5,     3,     2,     9,     0,     5,     7,
       2,     2,     1,     6,     6,     3,     3,     4,     1,     1,
       0,     3,     2,     1,     3,     4,     4,     4,     2,     0,
       1,     1,     1,     1,     1,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     1,     1,     3
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
  case 2: /* $@1: %empty  */
#line 100 "trad2.y"
                        { printf ("%s\n", yyvsp[-1].code) ; }
#line 1447 "trad2.tab.c"
    break;

  case 3: /* axioma: INTEGER dec_var ';' $@1 r_axioma  */
#line 101 "trad2.y"
             {;}
#line 1453 "trad2.tab.c"
    break;

  case 4: /* axioma: dec_main '}'  */
#line 103 "trad2.y"
                  { printf("%s\n(main)\n", yyvsp[-1].code); }
#line 1459 "trad2.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 105 "trad2.y"
                   { printf("%s\n",yyvsp[-1].code); }
#line 1465 "trad2.tab.c"
    break;

  case 6: /* axioma: dec_func '}' $@2 r_axioma  */
#line 105 "trad2.y"
                                                        {;}
#line 1471 "trad2.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 114 "trad2.y"
                                             { strcpy(dentro_funcion, yyvsp[-4].code); local_variables_counter = 0;}
#line 1477 "trad2.tab.c"
    break;

  case 8: /* dec_func: IDENTIF '(' func_params_declaration ')' '{' $@3 r_sentencia func_return_al_final  */
#line 114 "trad2.y"
                                                                                                                                               { sprintf(temp,"(defun %s(%s)\n%s%s)",yyvsp[-7].code ,yyvsp[-5].code, yyvsp[-1].code, yyvsp[0].code);
                        yyval.code = gen_code(temp);
                        strcpy(dentro_funcion, "global");}
#line 1485 "trad2.tab.c"
    break;

  case 9: /* func_params_declaration: %empty  */
#line 120 "trad2.y"
        {yyval.code = gen_code("");}
#line 1491 "trad2.tab.c"
    break;

  case 10: /* func_params_declaration: func_params_types IDENTIF func_params_declaration_cont  */
#line 121 "trad2.y"
                                                                 { sprintf(temp, "%s%s",yyvsp[-1].code, yyvsp[0].code);
                            yyval.code = gen_code(temp);}
#line 1498 "trad2.tab.c"
    break;

  case 11: /* func_params_declaration_cont: %empty  */
#line 127 "trad2.y"
        {yyval.code = gen_code("");}
#line 1504 "trad2.tab.c"
    break;

  case 12: /* func_params_declaration_cont: ',' func_params_types IDENTIF func_params_declaration_cont  */
#line 128 "trad2.y"
                                                                     { sprintf(temp," %s%s",yyvsp[-1].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1511 "trad2.tab.c"
    break;

  case 13: /* func_params_types: INTEGER  */
#line 134 "trad2.y"
            {yyval.code = gen_code("");}
#line 1517 "trad2.tab.c"
    break;

  case 14: /* func_params_types: FLOAT  */
#line 135 "trad2.y"
            {yyval.code = gen_code("");}
#line 1523 "trad2.tab.c"
    break;

  case 15: /* func_params_types: CHAR  */
#line 136 "trad2.y"
            {yyval.code = gen_code("");}
#line 1529 "trad2.tab.c"
    break;

  case 16: /* func_return_al_final: %empty  */
#line 141 "trad2.y"
        {yyval.code = gen_code("");}
#line 1535 "trad2.tab.c"
    break;

  case 17: /* func_call: IDENTIF '(' func_params_call ')'  */
#line 147 "trad2.y"
                                   { sprintf(temp, "(%s %s)",yyvsp[-3].code, yyvsp[-1].code);
                                yyval.code = gen_code(temp);}
#line 1542 "trad2.tab.c"
    break;

  case 18: /* func_params_call: %empty  */
#line 153 "trad2.y"
    {yyval.code = gen_code("");}
#line 1548 "trad2.tab.c"
    break;

  case 19: /* func_params_call: expresion func_params_call_cont  */
#line 154 "trad2.y"
                                      { sprintf(temp, "%s%s",yyvsp[-1].code, yyvsp[0].code);
                                    yyval.code = gen_code(temp);}
#line 1555 "trad2.tab.c"
    break;

  case 20: /* func_params_call_cont: %empty  */
#line 159 "trad2.y"
    {yyval.code = gen_code("");}
#line 1561 "trad2.tab.c"
    break;

  case 21: /* func_params_call_cont: ',' expresion func_params_call_cont  */
#line 160 "trad2.y"
                                         { sprintf(temp," %s%s",yyvsp[-1].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1568 "trad2.tab.c"
    break;

  case 22: /* r_axioma: %empty  */
#line 165 "trad2.y"
            { ; }
#line 1574 "trad2.tab.c"
    break;

  case 23: /* r_axioma: axioma  */
#line 166 "trad2.y"
             { ; }
#line 1580 "trad2.tab.c"
    break;

  case 24: /* $@4: %empty  */
#line 169 "trad2.y"
                                                     {strcpy(dentro_funcion, "main"); local_variables_counter = 0;}
#line 1586 "trad2.tab.c"
    break;

  case 25: /* dec_main: MAIN '(' func_params_declaration ')' '{' $@4 r_sentencia func_return_al_final  */
#line 169 "trad2.y"
                                                                                                                                                     { sprintf(temp, "(defun %s (%s)\n%s%s)", yyvsp[-7].code, yyvsp[-5].code, yyvsp[-1].code, yyvsp[0].code); 
                                                // Informamos que ya estamos dentro del main
                                                strcpy(dentro_funcion,"global");
                                                yyval.code = gen_code(temp) ;          }
#line 1595 "trad2.tab.c"
    break;

  case 26: /* r_sentencia: %empty  */
#line 175 "trad2.y"
                                      {yyval.code = gen_code("");}
#line 1601 "trad2.tab.c"
    break;

  case 27: /* r_sentencia: sentencia r_sentencia  */
#line 176 "trad2.y"
                                       { sprintf(temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                                                                yyval.code = gen_code(temp);}
#line 1608 "trad2.tab.c"
    break;

  case 28: /* if_cont: '{' if_sentencia '}' else_cont  */
#line 180 "trad2.y"
                                        { sprintf(temp,"\n%s\n%s", yyvsp[-2].code, yyvsp[0].code);
                                        yyval.code = gen_code(temp);}
#line 1615 "trad2.tab.c"
    break;

  case 29: /* if_sentencia: sentencia  */
#line 186 "trad2.y"
                  { yyval.code = yyvsp[0].code;}
#line 1621 "trad2.tab.c"
    break;

  case 30: /* if_sentencia: multiples_sentencias  */
#line 187 "trad2.y"
                               { sprintf(temp, "(progn %s)",yyvsp[0].code);
                                yyval.code = gen_code(temp);}
#line 1628 "trad2.tab.c"
    break;

  case 31: /* multiples_sentencias: sentencia sentencia  */
#line 192 "trad2.y"
                            { sprintf(temp, "%s\n%s",yyvsp[-1].code, yyvsp[0].code);
                            yyval.code = gen_code(temp);}
#line 1635 "trad2.tab.c"
    break;

  case 32: /* multiples_sentencias: multiples_sentencias sentencia  */
#line 195 "trad2.y"
                                         { sprintf(temp, "%s\n%s",yyvsp[-1].code, yyvsp[0].code);
                            yyval.code = gen_code(temp);}
#line 1642 "trad2.tab.c"
    break;

  case 33: /* else_cont: %empty  */
#line 199 "trad2.y"
             {yyval.code = gen_code("");}
#line 1648 "trad2.tab.c"
    break;

  case 34: /* else_cont: ELSE '{' if_sentencia '}'  */
#line 200 "trad2.y"
                                    { sprintf(temp, "%s\n", yyvsp[-1].code);
                                    yyval.code = gen_code(temp);}
#line 1655 "trad2.tab.c"
    break;

  case 35: /* sentencia: IDENTIF '=' expresion ';'  */
#line 204 "trad2.y"
                                             {if (es_local(yyvsp[-3].code)) { // Regla para asignaciones de variables normales
                                                // Es local se le añade main_
                                                sprintf(temp, "(setf %s_%s %s)", dentro_funcion ,yyvsp[-3].code, yyvsp[-1].code);
                                            } else {
                                                // Es global se usa el nombre de la variable original
                                                sprintf(temp, "(setf %s %s)", yyvsp[-3].code, yyvsp[-1].code);
                                            }
                                            yyval.code = gen_code(temp);}
#line 1668 "trad2.tab.c"
    break;

  case 36: /* sentencia: IDENTIF '[' expresion ']' '=' expresion ';'  */
#line 213 "trad2.y"
                                                          {if (es_local(yyvsp[-6].code)) { // Regla para índices de arrays
                                                            // Es local se le añade main_
                                                            sprintf(temp, "(setf (aref %s_%s %s) %s)", dentro_funcion ,yyvsp[-6].code, yyvsp[-4].code, yyvsp[-1].code);
                                                        } else {
                                                            // Es global se usa el nombre de la variable original
                                                            sprintf(temp, "(setf (aref %s %s) %s)", yyvsp[-6].code, yyvsp[-4].code, yyvsp[-1].code);
                                                        }
                                                        yyval.code = gen_code(temp);}
#line 1681 "trad2.tab.c"
    break;

  case 37: /* sentencia: PRINTF '(' printf_param ')' ';'  */
#line 222 "trad2.y"
                                              { sprintf (temp, "%s", yyvsp[-2].code) ;  
                                           yyval.code = gen_code (temp) ; }
#line 1688 "trad2.tab.c"
    break;

  case 38: /* sentencia: PUTS '(' STRING ')' ';'  */
#line 224 "trad2.y"
                                            {  sprintf(temp,"(print \"%s\")",yyvsp[-2].code);
                                            yyval.code = gen_code(temp);}
#line 1695 "trad2.tab.c"
    break;

  case 39: /* sentencia: WHILE expresion while_cont  */
#line 227 "trad2.y"
                                           { sprintf(temp,"(loop %s %s do\n%s)", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                             yyval.code = gen_code(temp);}
#line 1702 "trad2.tab.c"
    break;

  case 40: /* sentencia: IF expresion if_cont  */
#line 230 "trad2.y"
                                            { sprintf(temp, "(%s %s %s)",yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                yyval.code = gen_code(temp);}
#line 1709 "trad2.tab.c"
    break;

  case 41: /* sentencia: INTEGER dec_var ';'  */
#line 233 "trad2.y"
                                  {yyval.code = yyvsp[-1].code;}
#line 1715 "trad2.tab.c"
    break;

  case 42: /* sentencia: FOR '(' for_var ';' expr_condicional ';' for_operator  */
#line 235 "trad2.y"
                                                                    { sprintf(temp,"%s\n(loop while %s do\n%s)", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code);
                                                                    yyval.code = gen_code(temp);}
#line 1722 "trad2.tab.c"
    break;

  case 43: /* sentencia: SWITCH '(' IDENTIF ')' switch_cont  */
#line 238 "trad2.y"
                                               {if (es_local(yyvsp[-2].code)) {
                                                // Es local se le añade main_
                                                sprintf(temp, "(case %s_%s\n%s)", dentro_funcion,yyvsp[-2].code, yyvsp[0].code);
                                            } else {
                                                // Es global se usa el nombre de la variable original
                                                sprintf(temp, "(case %s\n%s)", yyvsp[-2].code, yyvsp[0].code);
                                            }
                                            yyval.code = gen_code(temp);}
#line 1735 "trad2.tab.c"
    break;

  case 44: /* sentencia: RETURN expresion ';'  */
#line 247 "trad2.y"
                                   { sprintf(temp,"(return-from %s %s)",dentro_funcion, yyvsp[-1].code);
                                    yyval.code = gen_code(temp);}
#line 1742 "trad2.tab.c"
    break;

  case 45: /* sentencia: func_call ';'  */
#line 250 "trad2.y"
                            {yyval = yyvsp[-1];}
#line 1748 "trad2.tab.c"
    break;

  case 46: /* switch_cont: '{' CASE switch_val ':' r_sentencia BREAK ';' switch_cont2 '}'  */
#line 254 "trad2.y"
                                                                   { sprintf(temp,"(%s \n%s)%s",yyvsp[-6].code,yyvsp[-4].code,yyvsp[-1].code);
                                                                    yyval.code = gen_code(temp);}
#line 1755 "trad2.tab.c"
    break;

  case 47: /* switch_cont2: %empty  */
#line 259 "trad2.y"
    {yyval.code = gen_code("");}
#line 1761 "trad2.tab.c"
    break;

  case 48: /* switch_cont2: DEFAULT ':' r_sentencia BREAK ';'  */
#line 260 "trad2.y"
                                       { sprintf(temp,"(otherwise \n%s)\n",yyvsp[-2].code);
                                        yyval.code = gen_code(temp);}
#line 1768 "trad2.tab.c"
    break;

  case 49: /* switch_cont2: CASE switch_val ':' r_sentencia BREAK ';' switch_cont2  */
#line 263 "trad2.y"
                                                             { sprintf(temp,"\n(%s \n%s)\n%s",yyvsp[-5].code,yyvsp[-3].code,yyvsp[0].code);
                                                    yyval.code = gen_code(temp);}
#line 1775 "trad2.tab.c"
    break;

  case 50: /* switch_val: '+' NUMBER  */
#line 268 "trad2.y"
                                          { sprintf(temp,"%d",yyvsp[0].value);
                                            yyval.code = gen_code(temp); }
#line 1782 "trad2.tab.c"
    break;

  case 51: /* switch_val: '-' NUMBER  */
#line 270 "trad2.y"
                                            { sprintf (temp, "(- %d)", yyvsp[0].value);
                                                     yyval.code = gen_code (temp) ; }
#line 1789 "trad2.tab.c"
    break;

  case 52: /* switch_val: NUMBER  */
#line 272 "trad2.y"
                   { sprintf (temp, "%d", yyvsp[0].value) ;
                    yyval.code = gen_code (temp) ; }
#line 1796 "trad2.tab.c"
    break;

  case 53: /* for_operator: INC '(' IDENTIF ')' ')' while_cont  */
#line 277 "trad2.y"
                                       { if(es_local(yyvsp[-3].code)){ 
                                    sprintf(temp,"%s\n(setf %s_%s (+ %s_%s 1))",yyvsp[0].code,dentro_funcion,yyvsp[-3].code, dentro_funcion ,yyvsp[-3].code);
                                    }else{
                                    sprintf(temp,"%s\n(setf %s (+ %s 1))",yyvsp[0].code, yyvsp[-3].code, yyvsp[-3].code);
                                    }
                                     yyval.code = gen_code(temp);
                                   }
#line 1808 "trad2.tab.c"
    break;

  case 54: /* for_operator: DEC '(' IDENTIF ')' ')' while_cont  */
#line 284 "trad2.y"
                                           { if(es_local(yyvsp[-3].code)){ 
                                    sprintf(temp,"%s\n(setf %s_%s (- %s_%s 1))",yyvsp[0].code,dentro_funcion,yyvsp[-3].code, dentro_funcion, yyvsp[-3].code);
                                    }else{
                                        sprintf(temp,"%s\n(setf %s (- %s 1))",yyvsp[0].code, yyvsp[-3].code, yyvsp[-3].code);
                                    }
                                     yyval.code = gen_code(temp);
                                    }
#line 1820 "trad2.tab.c"
    break;

  case 55: /* for_var: IDENTIF '=' expresion  */
#line 293 "trad2.y"
                                    { if(es_local(yyvsp[-2].code)){
                                    sprintf(temp, "(setf %s_%s %s)", dentro_funcion, yyvsp[-2].code, yyvsp[0].code);
                                    
                                    }else{
                                        sprintf(temp, "(setq %s_%s %s)", dentro_funcion, yyvsp[-2].code, yyvsp[0].code);
                                        añadir_variable_local(yyvsp[-2].code);
                                    }
                                    yyval.code = gen_code(temp);
                                    }
#line 1834 "trad2.tab.c"
    break;

  case 56: /* while_cont: '{' r_sentencia '}'  */
#line 304 "trad2.y"
                         {yyval.code = yyvsp[-1].code;}
#line 1840 "trad2.tab.c"
    break;

  case 57: /* printf_param: STRING ',' printf_elem printf_cont  */
#line 309 "trad2.y"
                                       {sprintf(temp,"%s%s", yyvsp[-1].code, yyvsp[0].code);
                                        yyval.code = gen_code(temp);}
#line 1847 "trad2.tab.c"
    break;

  case 58: /* printf_elem: expresion  */
#line 314 "trad2.y"
              { sprintf(temp, "(princ %s)", yyvsp[0].code);
                yyval.code = gen_code(temp); }
#line 1854 "trad2.tab.c"
    break;

  case 59: /* printf_elem: STRING  */
#line 317 "trad2.y"
                { sprintf(temp, "(princ \"%s\")", yyvsp[0].code); 
                yyval.code = gen_code(temp); }
#line 1861 "trad2.tab.c"
    break;

  case 60: /* printf_cont: %empty  */
#line 321 "trad2.y"
             {yyval.code = gen_code("");}
#line 1867 "trad2.tab.c"
    break;

  case 61: /* printf_cont: ',' printf_elem printf_cont  */
#line 322 "trad2.y"
                                  { sprintf(temp,"\n%s%s", yyvsp[-1].code, yyvsp[0].code);
                                    yyval.code = gen_code(temp);}
#line 1874 "trad2.tab.c"
    break;

  case 62: /* dec_var: IDENTIF continue_ID  */
#line 327 "trad2.y"
                         {  if(strcmp(dentro_funcion,"global") == 0){
                                sprintf(temp, "(setq %s %s", yyvsp[-1].code, yyvsp[0].code);
                            }else{
                                sprintf(temp, "(setq %s_%s %s",dentro_funcion,yyvsp[-1].code, yyvsp[0].code);
                                añadir_variable_local(yyvsp[-1].code);
                                }
                                yyval.code = gen_code(temp);}
#line 1886 "trad2.tab.c"
    break;

  case 63: /* continue_ID: continue_comma  */
#line 336 "trad2.y"
                              { sprintf(temp, "0)%s", yyvsp[0].code); 
                              yyval.code = gen_code(temp);}
#line 1893 "trad2.tab.c"
    break;

  case 64: /* continue_ID: '=' NUMBER continue_comma  */
#line 339 "trad2.y"
                                    { sprintf(temp, "%d)%s", yyvsp[-1].value, yyvsp[0].code);
                                    yyval.code = gen_code(temp); }
#line 1900 "trad2.tab.c"
    break;

  case 65: /* continue_ID: '=' '-' NUMBER continue_comma  */
#line 342 "trad2.y"
                                        { sprintf(temp, "-%d)%s", yyvsp[-1].value, yyvsp[0].code);
                                    yyval.code = gen_code(temp); }
#line 1907 "trad2.tab.c"
    break;

  case 66: /* continue_ID: '=' '+' NUMBER continue_comma  */
#line 345 "trad2.y"
                                        { sprintf(temp, "%d)%s", yyvsp[-1].value, yyvsp[0].code);
                                    yyval.code = gen_code(temp); }
#line 1914 "trad2.tab.c"
    break;

  case 67: /* continue_ID: '[' expresion ']' continue_comma  */
#line 348 "trad2.y"
                                           { sprintf(temp, "(make-array %s))%s", yyvsp[-2].code, yyvsp[0].code);
                            yyval.code = gen_code(temp); }
#line 1921 "trad2.tab.c"
    break;

  case 68: /* continue_comma: ',' dec_var  */
#line 352 "trad2.y"
                             { sprintf(temp,"\n%s",yyvsp[0].code);
                            yyval.code = gen_code(temp);}
#line 1928 "trad2.tab.c"
    break;

  case 69: /* continue_comma: %empty  */
#line 354 "trad2.y"
           { yyval.code = "";}
#line 1934 "trad2.tab.c"
    break;

  case 70: /* expresion: expr_condicional  */
#line 358 "trad2.y"
                         {yyval = yyvsp[0];}
#line 1940 "trad2.tab.c"
    break;

  case 71: /* expresion: expr_others  */
#line 359 "trad2.y"
                      {yyval = yyvsp[0];}
#line 1946 "trad2.tab.c"
    break;

  case 72: /* expresion: termino  */
#line 360 "trad2.y"
                    { yyval = yyvsp[0];}
#line 1952 "trad2.tab.c"
    break;

  case 73: /* expresion: func_call  */
#line 361 "trad2.y"
                    {yyval = yyvsp[0];}
#line 1958 "trad2.tab.c"
    break;

  case 74: /* expresion: array_index  */
#line 362 "trad2.y"
                      {yyval = yyvsp[0];}
#line 1964 "trad2.tab.c"
    break;

  case 75: /* array_index: IDENTIF '[' expresion ']'  */
#line 366 "trad2.y"
                                   {if (es_local(yyvsp[-3].code)) { // Regla para índices de arrays
                                    // Es local se le añade main_
                                    sprintf(temp, "(aref %s_%s %s)", dentro_funcion ,yyvsp[-3].code, yyvsp[-1].code);
                                } else {
                                    // Es global se usa el nombre de la variable original
                                    sprintf(temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code);
                                }
                                    yyval.code = gen_code(temp);}
#line 1977 "trad2.tab.c"
    break;

  case 76: /* expr_condicional: expresion AND expresion  */
#line 377 "trad2.y"
                                     { sprintf (temp, "(and %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ;}
#line 1984 "trad2.tab.c"
    break;

  case 77: /* expr_condicional: expresion OR expresion  */
#line 380 "trad2.y"
                                     { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ;}
#line 1991 "trad2.tab.c"
    break;

  case 78: /* expr_condicional: expresion NOT_EQUAL expresion  */
#line 383 "trad2.y"
                                            { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ;}
#line 1998 "trad2.tab.c"
    break;

  case 79: /* expr_condicional: expresion EQUAL expresion  */
#line 386 "trad2.y"
                                        { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ;}
#line 2005 "trad2.tab.c"
    break;

  case 80: /* expr_condicional: expresion '<' expresion  */
#line 389 "trad2.y"
                                      { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ;}
#line 2012 "trad2.tab.c"
    break;

  case 81: /* expr_condicional: expresion LOE expresion  */
#line 392 "trad2.y"
                                      { sprintf (temp, "(%s %s %s)", yyvsp[-1].code , yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ;}
#line 2019 "trad2.tab.c"
    break;

  case 82: /* expr_condicional: expresion '>' expresion  */
#line 395 "trad2.y"
                                      { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ;}
#line 2026 "trad2.tab.c"
    break;

  case 83: /* expr_condicional: expresion GOE expresion  */
#line 398 "trad2.y"
                                      { sprintf (temp, "(%s %s %s)", yyvsp[-1].code ,yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ;}
#line 2033 "trad2.tab.c"
    break;

  case 84: /* expr_others: expresion '%' expresion  */
#line 402 "trad2.y"
                                      { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ;}
#line 2040 "trad2.tab.c"
    break;

  case 85: /* expr_others: expresion '+' expresion  */
#line 405 "trad2.y"
                                         { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2047 "trad2.tab.c"
    break;

  case 86: /* expr_others: expresion '-' expresion  */
#line 408 "trad2.y"
                                         { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2054 "trad2.tab.c"
    break;

  case 87: /* expr_others: expresion '*' expresion  */
#line 411 "trad2.y"
                                         { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2061 "trad2.tab.c"
    break;

  case 88: /* expr_others: expresion '/' expresion  */
#line 414 "trad2.y"
                                         { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2068 "trad2.tab.c"
    break;

  case 89: /* termino: operando  */
#line 418 "trad2.y"
                                                   { yyval = yyvsp[0] ; }
#line 2074 "trad2.tab.c"
    break;

  case 90: /* termino: '+' operando  */
#line 419 "trad2.y"
                                                   { yyval = yyvsp[-1] ; }
#line 2080 "trad2.tab.c"
    break;

  case 91: /* termino: '-' operando  */
#line 420 "trad2.y"
                                                   { sprintf (temp, "(- %s)", yyvsp[0].code);
                                                     yyval.code = gen_code (temp) ; }
#line 2087 "trad2.tab.c"
    break;

  case 92: /* termino: '!' operando  */
#line 422 "trad2.y"
                                                     { sprintf (temp, "(not %s)", yyvsp[0].code) ;
                                                        yyval.code = gen_code (temp) ; }
#line 2094 "trad2.tab.c"
    break;

  case 93: /* operando: IDENTIF  */
#line 426 "trad2.y"
                                        { if (es_local(yyvsp[0].code)) {
                                            sprintf(temp, "%s_%s", dentro_funcion,yyvsp[0].code);
                                        } else {
                                            sprintf(temp, "%s", yyvsp[0].code);
                                        }
                                        yyval.code = gen_code(temp);
                                        }
#line 2106 "trad2.tab.c"
    break;

  case 94: /* operando: NUMBER  */
#line 433 "trad2.y"
                                         { sprintf (temp, "%d", yyvsp[0].value) ;
                                           yyval.code = gen_code (temp) ; }
#line 2113 "trad2.tab.c"
    break;

  case 95: /* operando: '(' expresion ')'  */
#line 435 "trad2.y"
                                         { yyval = yyvsp[-1] ; }
#line 2119 "trad2.tab.c"
    break;


#line 2123 "trad2.tab.c"

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

#line 439 "trad2.y"
                            // SECCION 4    Codigo en C

int n_line = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s en la linea %d\n", mensaje, n_line) ;
    printf ( "\n") ;	// bye
}

char *int_to_string (int n)
{
    char ltemp [2048] ;

    sprintf (ltemp, "%d", n) ;

    return gen_code (ltemp) ;
}

char *char_to_string (char c)
{
    char ltemp [2048] ;

    sprintf (ltemp, "%c", c) ;

    return gen_code (ltemp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No queda memoria para %d bytes mas\n", nbytes) ;
        fprintf (stderr, "Reservados %ld bytes en %d llamadas\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
    "main",         MAIN,           // y los token asociados
    "while",        WHILE,
    "int",          INTEGER,
    "char",         CHAR,  
    "float",        FLOAT,  
    "puts",         PUTS,
    "printf",       PRINTF, 
    "&&",           AND,
    "||",           OR,
    "!=",           NOT_EQUAL,
    "==",           EQUAL,
    "<=",           LOE,
    ">=",           GOE,
    "if",           IF,
    "else",         ELSE,
    "for",          FOR,
    "inc",          INC,
    "dec",          DEC,
    "switch",       SWITCH,
    "case",         CASE,
    "break",        BREAK,
    "default",      DEFAULT,
    "return",       RETURN,
    NULL,            0               // para marcar el fin de la tabla
} ;

int es_local(char *var_name){
    for(int i = 0; i < local_variables_counter; i++){
        if(strcmp(var_name,local_variables[i]) == 0){
            // Si coincide el nombre de la variable con alguna del array, entonces es local.
            return 1;
        }
    }
    // Si no hubo ninguna coincidencia, entonces es global
    return 0;

}

void añadir_variable_local(char *nombre){
    // Añadimos la variable al array y aumentamos el contador
    local_variables[local_variables_counter] = gen_code(nombre);
    local_variables_counter++;
}

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
		                             // strcmp(a, b) devuelve == 0 si a==b
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
// NO MODIFICAR ESTA FUNCION SIN PERMISO
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char ops_expandibles [] = "!<=|>%&/+-*" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do {
        c = getchar () ;

        if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
            do {		//	OJO que puede funcionar mal si una linea contiene #
                c = getchar () ;
            } while (c != '\n') ;
        }

        if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
            cc = getchar () ;
            if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ;	// ...
                if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
                    do {		// Se trata de codigo inline (Codigo embebido en C)
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else {		// ==> comentario, ignorar la linea
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        } else if (c == '\\') c = getchar () ;
		
        if (c == '\n')
            n_line++ ;

    } while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("AVISO: string con mas de 255 caracteres en linea %d\n", n_line) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ;
            c = getchar () ;
        }
        temp_str [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.code = gen_code (temp_str) ;
        symbol = search_keyword (yylval.code) ;
        if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (ops_expandibles, c) != NULL) { // busca c en ops_expandibles
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // aunque no se use
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}
