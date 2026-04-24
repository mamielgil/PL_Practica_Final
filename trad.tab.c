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
#line 6 "trad.y"
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


#line 120 "trad.tab.c"

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
  YYSYMBOL_dec_func = 51,                  /* dec_func  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_func_params_declaration = 53,   /* func_params_declaration  */
  YYSYMBOL_func_params_declaration_cont = 54, /* func_params_declaration_cont  */
  YYSYMBOL_func_params_types = 55,         /* func_params_types  */
  YYSYMBOL_func_call = 56,                 /* func_call  */
  YYSYMBOL_func_params_call = 57,          /* func_params_call  */
  YYSYMBOL_func_params_call_cont = 58,     /* func_params_call_cont  */
  YYSYMBOL_r_axioma = 59,                  /* r_axioma  */
  YYSYMBOL_dec_main = 60,                  /* dec_main  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_r_sentencia = 62,               /* r_sentencia  */
  YYSYMBOL_if_cont = 63,                   /* if_cont  */
  YYSYMBOL_else_cont = 64,                 /* else_cont  */
  YYSYMBOL_sentencia = 65,                 /* sentencia  */
  YYSYMBOL_switch_cont = 66,               /* switch_cont  */
  YYSYMBOL_switch_cont2 = 67,              /* switch_cont2  */
  YYSYMBOL_switch_val = 68,                /* switch_val  */
  YYSYMBOL_for_operator = 69,              /* for_operator  */
  YYSYMBOL_for_var = 70,                   /* for_var  */
  YYSYMBOL_for_cont = 71,                  /* for_cont  */
  YYSYMBOL_for_cont2 = 72,                 /* for_cont2  */
  YYSYMBOL_while_cont = 73,                /* while_cont  */
  YYSYMBOL_printf_param = 74,              /* printf_param  */
  YYSYMBOL_printf_elem = 75,               /* printf_elem  */
  YYSYMBOL_printf_cont = 76,               /* printf_cont  */
  YYSYMBOL_dec_var = 77,                   /* dec_var  */
  YYSYMBOL_continue_ID = 78,               /* continue_ID  */
  YYSYMBOL_continue_comma = 79,            /* continue_comma  */
  YYSYMBOL_expresion = 80,                 /* expresion  */
  YYSYMBOL_array_index = 81,               /* array_index  */
  YYSYMBOL_expr_condicional = 82,          /* expr_condicional  */
  YYSYMBOL_expr_others = 83,               /* expr_others  */
  YYSYMBOL_termino = 84,                   /* termino  */
  YYSYMBOL_operando = 85                   /* operando  */
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
#define YYLAST   454

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

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
       0,    99,    99,    99,   102,   104,   112,   112,   120,   122,
     129,   131,   137,   139,   141,   147,   154,   156,   162,   164,
     170,   172,   177,   177,   185,   187,   190,   199,   208,   210,
     216,   225,   234,   237,   240,   243,   246,   248,   251,   260,
     265,   271,   273,   276,   282,   285,   288,   294,   302,   313,
     323,   328,   330,   333,   339,   344,   350,   353,   359,   361,
     367,   378,   381,   384,   387,   390,   396,   399,   404,   406,
     408,   410,   412,   417,   428,   431,   434,   437,   440,   443,
     446,   449,   455,   458,   461,   464,   467,   473,   475,   477,
     480,   486,   493,   496
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
  "axioma", "$@1", "dec_func", "$@2", "func_params_declaration",
  "func_params_declaration_cont", "func_params_types", "func_call",
  "func_params_call", "func_params_call_cont", "r_axioma", "dec_main",
  "$@3", "r_sentencia", "if_cont", "else_cont", "sentencia", "switch_cont",
  "switch_cont2", "switch_val", "for_operator", "for_var", "for_cont",
  "for_cont2", "while_cont", "printf_param", "printf_elem", "printf_cont",
  "dec_var", "continue_ID", "continue_comma", "expresion", "array_index",
  "expr_condicional", "expr_others", "termino", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-211)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,    -8,    32,    22,    65,    28,    56,    86,    35,    36,
      43,  -211,    12,  -211,  -211,  -211,  -211,    58,    73,    27,
      32,    85,  -211,  -211,  -211,    61,  -211,  -211,    62,    57,
      66,   106,   116,  -211,  -211,    45,    16,    16,    16,    85,
    -211,    -7,  -211,  -211,  -211,  -211,  -211,    12,  -211,  -211,
      86,  -211,  -211,    66,    66,    85,    85,  -211,  -211,  -211,
    -211,   242,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    66,  -211,   352,   352,   118,
    -211,  -211,    82,   170,   136,  -211,   418,   396,   163,   163,
      80,    80,    80,    80,    93,    93,  -211,  -211,  -211,  -211,
      54,    32,    85,    84,    89,    85,    91,    94,    85,    97,
    -211,   352,  -211,    57,  -211,    85,  -211,  -211,    85,    85,
     100,   194,   132,   147,   218,   158,   159,   272,  -211,  -211,
    -211,   170,   282,   143,  -211,   352,  -211,   122,   121,   149,
     352,  -211,   184,   153,   173,   352,  -211,  -211,   187,   177,
     179,    70,   180,   181,    85,    85,   195,  -211,    85,  -211,
    -211,  -211,   176,   389,  -211,   202,   389,   389,   200,   198,
    -211,   309,    70,  -211,   197,  -211,    -9,    37,  -211,   176,
     352,   201,   203,  -211,  -211,   238,   240,   199,  -211,   205,
     243,   258,  -211,  -211,   352,  -211,   221,   222,   239,   224,
     225,   229,   226,   226,    31,   373,  -211,  -211,    37,   223,
     231,    85,   373,   241,   232,   352,  -211,   319,  -211,  -211,
     352,   254,   373,   256,   244,  -211,   252,  -211,    31,  -211
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     8,    67,     0,
       0,     1,    20,     4,    12,    14,    13,     0,     0,     0,
       0,     0,    60,    61,     2,     0,    21,     5,     0,    10,
      67,     0,     0,    66,    92,    91,     0,     0,     0,     0,
      71,     0,    72,    68,    69,    70,    87,    20,    22,     6,
       0,     9,    62,    67,    67,    16,     0,    91,    88,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     3,    24,    24,     0,
      64,    63,     0,    18,     0,    93,    74,    75,    76,    77,
      79,    81,    78,    80,    83,    84,    85,    86,    82,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,     7,    10,    15,     0,    17,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    25,
      11,    18,     0,     0,    36,    24,    34,     0,     0,     0,
      24,    35,     0,     0,     0,    24,    19,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    54,
      33,    57,    58,    56,    32,    28,    49,     0,    68,     0,
      38,     0,     0,    55,     0,    27,     0,     0,    31,    58,
      24,     0,     0,    37,    46,     0,     0,     0,    59,     0,
       0,     0,    44,    45,    24,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    51,    47,    48,     0,     0,
       0,     0,    51,     0,     0,    24,    40,     0,    52,    50,
      24,     0,    51,     0,     0,    53,     0,    42,    41,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -211,   292,  -211,  -211,  -211,  -211,   188,   259,   -74,  -211,
     162,   247,  -211,  -211,   -73,  -211,  -211,  -190,  -211,    92,
     102,  -211,  -211,   125,  -210,  -211,  -211,   157,   140,   -19,
    -211,     1,   -21,  -211,   175,  -211,  -211,   107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    47,     5,    78,    17,    51,    18,    40,    82,
     116,    27,     6,    77,   110,   141,   175,   111,   170,   210,
     187,   183,   143,   206,   213,   136,   139,   162,   173,     9,
      22,    23,   163,    42,    43,    44,    45,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    33,   218,   109,   109,   112,    62,    63,    64,    65,
      66,    67,   225,   181,   182,   212,     1,     2,    61,    34,
      57,     3,   212,    68,    69,    70,    71,    72,    73,    74,
      30,    52,   212,     7,    83,    84,     8,   109,   129,    75,
     184,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    80,    81,   208,    39,   209,    31,
      32,   109,   149,    10,    19,    11,   109,   153,    12,   185,
     186,   109,   157,    34,    35,    24,    99,    29,   161,    20,
      21,   121,   120,   118,   124,    25,    55,   127,    34,    35,
      56,    14,    15,    16,   131,    55,    13,   132,   133,   119,
      28,    50,    36,    37,    48,    49,   109,   189,    38,    53,
      20,    39,    70,    71,    72,    73,    74,    36,    37,    54,
     109,   198,   113,    38,   114,   122,    39,    72,    73,    74,
     123,   109,   125,   166,   167,   126,   128,   171,   109,   134,
     137,   109,   221,    58,    59,    60,   109,   223,   109,    62,
      63,    64,    65,    66,    67,   138,    62,    63,    64,    65,
      66,    67,   142,   144,   150,   151,    68,    69,    70,    71,
      72,    73,    74,    68,    69,    70,    71,    72,    73,    74,
      66,    67,   117,    62,    63,    64,    65,    66,    67,   148,
     217,   152,   155,    68,    69,    70,    71,    72,    73,    74,
      68,    69,    70,    71,    72,    73,    74,    62,    63,    64,
      65,    66,    67,   154,   115,   156,   158,   159,   160,   164,
     172,   165,   174,   177,    68,    69,    70,    71,    72,    73,
      74,    62,    63,    64,    65,    66,    67,   135,   169,   176,
     180,   192,   190,   193,   191,   195,   194,   196,    68,    69,
      70,    71,    72,    73,    74,    62,    63,    64,    65,    66,
      67,   140,   197,   199,   200,   201,   202,   203,   204,   205,
     215,   216,    68,    69,    70,    71,    72,    73,    74,   220,
     224,   219,   226,   227,    85,    62,    63,    64,    65,    66,
      67,   228,     4,   146,    76,    62,    63,    64,    65,    66,
      67,   130,    68,    69,    70,    71,    72,    73,    74,    79,
     214,   145,    68,    69,    70,    71,    72,    73,    74,   188,
     229,   147,    62,    63,    64,    65,    66,    67,   207,   179,
     168,     0,    62,    63,    64,    65,    66,    67,     0,    68,
      69,    70,    71,    72,    73,    74,     0,     0,   178,    68,
      69,    70,    71,    72,    73,    74,   100,   101,   222,     0,
       0,     0,   102,   103,   104,     0,     0,     0,     0,     0,
       0,   105,     0,   106,     0,     0,   107,   100,   101,     0,
     108,     0,     0,   102,   103,   104,     0,     0,     0,     0,
       0,     0,   105,     0,   106,     0,     0,   107,     0,     0,
       0,   211,    62,    63,    64,    65,    66,    67,     0,    62,
       0,    64,    65,    66,    67,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    68,    69,    70,    71,
      72,    73,    74,    64,    65,    66,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74
};

static const yytype_int16 yycheck[] =
{
      21,    20,   212,    77,    78,    78,    13,    14,    15,    16,
      17,    18,   222,    22,    23,   205,     4,     5,    39,     3,
       4,     9,   212,    30,    31,    32,    33,    34,    35,    36,
       3,    30,   222,    41,    55,    56,     4,   111,   111,    46,
       3,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    53,    54,    25,    41,    27,    32,
      33,   135,   135,    41,    29,     0,   140,   140,    40,    32,
      33,   145,   145,     3,     4,    39,    75,     4,     8,    44,
      45,   102,   101,    29,   105,    42,    41,   108,     3,     4,
      45,     5,     6,     7,   115,    41,    40,   118,   119,    45,
      42,    44,    32,    33,    43,    43,   180,   180,    38,     3,
      44,    41,    32,    33,    34,    35,    36,    32,    33,     3,
     194,   194,     4,    38,    42,    41,    41,    34,    35,    36,
      41,   205,    41,   154,   155,    41,    39,   158,   212,    39,
       8,   215,   215,    36,    37,    38,   220,   220,   222,    13,
      14,    15,    16,    17,    18,     8,    13,    14,    15,    16,
      17,    18,     4,     4,    42,    44,    30,    31,    32,    33,
      34,    35,    36,    30,    31,    32,    33,    34,    35,    36,
      17,    18,    46,    13,    14,    15,    16,    17,    18,    46,
     211,    42,    39,    30,    31,    32,    33,    34,    35,    36,
      30,    31,    32,    33,    34,    35,    36,    13,    14,    15,
      16,    17,    18,    29,    44,    42,    29,    40,    39,    39,
      44,    40,    20,    25,    30,    31,    32,    33,    34,    35,
      36,    13,    14,    15,    16,    17,    18,    43,    43,    39,
      43,     3,    41,     3,    41,    40,    47,     4,    30,    31,
      32,    33,    34,    35,    36,    13,    14,    15,    16,    17,
      18,    43,     4,    42,    42,    26,    42,    42,    39,    43,
      47,    40,    30,    31,    32,    33,    34,    35,    36,    47,
      26,    40,    26,    39,    42,    13,    14,    15,    16,    17,
      18,    39,     0,   131,    47,    13,    14,    15,    16,    17,
      18,   113,    30,    31,    32,    33,    34,    35,    36,    50,
     208,    39,    30,    31,    32,    33,    34,    35,    36,   179,
     228,    39,    13,    14,    15,    16,    17,    18,   203,   172,
     155,    -1,    13,    14,    15,    16,    17,    18,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    30,
      31,    32,    33,    34,    35,    36,     4,     5,    39,    -1,
      -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    -1,    24,     4,     5,    -1,
      28,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    28,    13,    14,    15,    16,    17,    18,    -1,    13,
      -1,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    30,    31,    32,    33,
      34,    35,    36,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     9,    49,    51,    60,    41,     4,    77,
      41,     0,    40,    40,     5,     6,     7,    53,    55,    29,
      44,    45,    78,    79,    39,    42,    49,    59,    42,     4,
       3,    32,    33,    77,     3,     4,    32,    33,    38,    41,
      56,    80,    81,    82,    83,    84,    85,    50,    43,    43,
      44,    54,    79,     3,     3,    41,    45,     4,    85,    85,
      85,    80,    13,    14,    15,    16,    17,    18,    30,    31,
      32,    33,    34,    35,    36,    46,    59,    61,    52,    55,
      79,    79,    57,    80,    80,    42,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    79,
       4,     5,    10,    11,    12,    19,    21,    24,    28,    56,
      62,    65,    62,     4,    42,    44,    58,    46,    29,    45,
      77,    80,    41,    41,    80,    41,    41,    80,    39,    62,
      54,    80,    80,    80,    39,    43,    73,     8,     8,    74,
      43,    63,     4,    70,     4,    39,    58,    39,    46,    62,
      42,    44,    42,    62,    29,    39,    42,    62,    29,    40,
      39,     8,    75,    80,    39,    40,    80,    80,    82,    43,
      66,    80,    44,    76,    20,    64,    39,    25,    39,    75,
      43,    22,    23,    69,     3,    32,    33,    68,    76,    62,
      41,    41,     3,     3,    47,    40,     4,     4,    62,    42,
      42,    26,    42,    42,    39,    43,    71,    71,    25,    27,
      67,    28,    65,    72,    68,    47,    40,    80,    72,    40,
      47,    62,    39,    62,    26,    72,    26,    39,    39,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    50,    49,    49,    49,    52,    51,    53,    53,
      54,    54,    55,    55,    55,    56,    57,    57,    58,    58,
      59,    59,    61,    60,    62,    62,    62,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    67,    67,    67,    68,    68,    68,    69,    69,    70,
      71,    72,    72,    72,    73,    74,    75,    75,    76,    76,
      77,    78,    78,    78,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    85,    85,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     2,     3,     0,     7,     0,     3,
       0,     4,     1,     1,     1,     4,     0,     2,     0,     3,
       0,     1,     0,     6,     0,     2,     4,     4,     0,     4,
       4,     7,     5,     5,     3,     3,     3,     7,     5,     2,
       9,     0,     5,     7,     2,     2,     1,     6,     6,     3,
       3,     0,     2,     4,     3,     4,     1,     1,     0,     3,
       2,     1,     3,     4,     4,     4,     2,     0,     1,     1,
       1,     1,     1,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       2,     1,     1,     3
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
#line 99 "trad.y"
                                    {printf ("%s\n", yyvsp[-1].code); }
#line 1445 "trad.tab.c"
    break;

  case 3: /* axioma: INTEGER dec_var ';' $@1 r_axioma  */
#line 100 "trad.y"
                                    {;}
#line 1451 "trad.tab.c"
    break;

  case 4: /* axioma: dec_main '}'  */
#line 102 "trad.y"
                                    {;}
#line 1457 "trad.tab.c"
    break;

  case 5: /* axioma: dec_func '}' r_axioma  */
#line 104 "trad.y"
                                    {;}
#line 1463 "trad.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 112 "trad.y"
                                                    {strcpy(dentro_funcion, yyvsp[-4].code); local_variables_counter = 0;}
#line 1469 "trad.tab.c"
    break;

  case 7: /* dec_func: IDENTIF '(' func_params_declaration ')' '{' $@2 r_sentencia  */
#line 113 "trad.y"
                                                    {printf("(defun %s(%s)\n%s)\n", yyvsp[-6].code, yyvsp[-4].code, yyvsp[0].code);
                                                    strcpy(dentro_funcion, "global");}
#line 1476 "trad.tab.c"
    break;

  case 8: /* func_params_declaration: %empty  */
#line 120 "trad.y"
                                                                    {yyval.code = gen_code("");}
#line 1482 "trad.tab.c"
    break;

  case 9: /* func_params_declaration: func_params_types IDENTIF func_params_declaration_cont  */
#line 122 "trad.y"
                                                                    {sprintf(temp, "%s%s", yyvsp[-1].code, yyvsp[0].code);
                                                                    yyval.code = gen_code(temp);}
#line 1489 "trad.tab.c"
    break;

  case 10: /* func_params_declaration_cont: %empty  */
#line 129 "trad.y"
                                                                        {yyval.code = gen_code("");}
#line 1495 "trad.tab.c"
    break;

  case 11: /* func_params_declaration_cont: ',' func_params_types IDENTIF func_params_declaration_cont  */
#line 131 "trad.y"
                                                                        {sprintf(temp," %s%s", yyvsp[-1].code, yyvsp[0].code);
                                                                        yyval.code = gen_code(temp);}
#line 1502 "trad.tab.c"
    break;

  case 12: /* func_params_types: INTEGER  */
#line 137 "trad.y"
                    {yyval.code = gen_code("");}
#line 1508 "trad.tab.c"
    break;

  case 13: /* func_params_types: FLOAT  */
#line 139 "trad.y"
                    {yyval.code = gen_code("");}
#line 1514 "trad.tab.c"
    break;

  case 14: /* func_params_types: CHAR  */
#line 141 "trad.y"
                    {yyval.code = gen_code("");}
#line 1520 "trad.tab.c"
    break;

  case 15: /* func_call: IDENTIF '(' func_params_call ')'  */
#line 147 "trad.y"
                                        {sprintf(temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code);
                                        yyval.code = gen_code(temp);}
#line 1527 "trad.tab.c"
    break;

  case 16: /* func_params_call: %empty  */
#line 154 "trad.y"
                                            {yyval.code = gen_code("");}
#line 1533 "trad.tab.c"
    break;

  case 17: /* func_params_call: expresion func_params_call_cont  */
#line 156 "trad.y"
                                            {sprintf(temp, "%s%s", yyvsp[-1].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1540 "trad.tab.c"
    break;

  case 18: /* func_params_call_cont: %empty  */
#line 162 "trad.y"
                                                {yyval.code = gen_code("");}
#line 1546 "trad.tab.c"
    break;

  case 19: /* func_params_call_cont: ',' expresion func_params_call_cont  */
#line 164 "trad.y"
                                                {sprintf(temp," %s%s", yyvsp[-1].code, yyvsp[0].code);
                                                yyval.code = gen_code(temp);}
#line 1553 "trad.tab.c"
    break;

  case 20: /* r_axioma: %empty  */
#line 170 "trad.y"
                    { ; }
#line 1559 "trad.tab.c"
    break;

  case 21: /* r_axioma: axioma  */
#line 172 "trad.y"
                    { ; }
#line 1565 "trad.tab.c"
    break;

  case 22: /* $@3: %empty  */
#line 177 "trad.y"
                            {strcpy(dentro_funcion, "main"); local_variables_counter = 0;}
#line 1571 "trad.tab.c"
    break;

  case 23: /* dec_main: MAIN '(' ')' '{' $@3 r_sentencia  */
#line 178 "trad.y"
                            {printf("(defun %s ()\n%s)\n", yyvsp[-5].code, yyvsp[0].code); 
                            // Informamos que ya estamos dentro del main
                            strcpy(dentro_funcion,"global");}
#line 1579 "trad.tab.c"
    break;

  case 24: /* r_sentencia: %empty  */
#line 185 "trad.y"
                                            {yyval.code = gen_code("");}
#line 1585 "trad.tab.c"
    break;

  case 25: /* r_sentencia: sentencia r_sentencia  */
#line 187 "trad.y"
                                            {sprintf(temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1592 "trad.tab.c"
    break;

  case 26: /* r_sentencia: RETURN expresion ';' r_sentencia  */
#line 190 "trad.y"
                                            {if(strlen(yyvsp[0].code) == 0){
                                                sprintf(temp,"%s", yyvsp[-2].code);
                                            }else{
                                                sprintf(temp,"(return-from %s %s)\n%s", dentro_funcion, yyvsp[-2].code, yyvsp[0].code);
                                            }
                                            yyval.code = gen_code(temp);}
#line 1603 "trad.tab.c"
    break;

  case 27: /* if_cont: '{' r_sentencia '}' else_cont  */
#line 199 "trad.y"
                                            {if(strlen(yyvsp[0].code) != 0){ 
                                                sprintf(temp,"\n(progn\n%s)\n(progn\n%s)", yyvsp[-2].code, yyvsp[0].code);
                                            }else{
                                                sprintf(temp,"\n(progn\n%s)\n", yyvsp[-2].code);
                                            }
                                            yyval.code = gen_code(temp);}
#line 1614 "trad.tab.c"
    break;

  case 28: /* else_cont: %empty  */
#line 208 "trad.y"
                                    {yyval.code = gen_code("");}
#line 1620 "trad.tab.c"
    break;

  case 29: /* else_cont: ELSE '{' r_sentencia '}'  */
#line 210 "trad.y"
                                    {sprintf(temp, "%s", yyvsp[-1].code);
                                    yyval.code = gen_code(temp);}
#line 1627 "trad.tab.c"
    break;

  case 30: /* sentencia: IDENTIF '=' expresion ';'  */
#line 216 "trad.y"
                                                                {if (es_local(yyvsp[-3].code)) { // Regla para asignaciones de variables normales
                                                                    // Es local se le añade main_
                                                                    sprintf(temp, "(setf %s_%s %s)", dentro_funcion, yyvsp[-3].code, yyvsp[-1].code);
                                                                }else {
                                                                    // Es global se usa el nombre de la variable original
                                                                    sprintf(temp, "(setf %s %s)", yyvsp[-3].code, yyvsp[-1].code);
                                                                }
                                                                yyval.code = gen_code(temp);}
#line 1640 "trad.tab.c"
    break;

  case 31: /* sentencia: IDENTIF '[' expresion ']' '=' expresion ';'  */
#line 225 "trad.y"
                                                                {if (es_local(yyvsp[-6].code)) { // Regla para índices de arrays
                                                                    // Es local se le añade main_
                                                                    sprintf(temp, "(setf (aref %s_%s %s) %s)", dentro_funcion , yyvsp[-6].code, yyvsp[-4].code, yyvsp[-1].code);
                                                                } else {
                                                                    // Es global se usa el nombre de la variable original
                                                                    sprintf(temp, "(setf (aref %s %s) %s)", yyvsp[-6].code, yyvsp[-4].code, yyvsp[-1].code);
                                                                }
                                                                yyval.code = gen_code(temp);}
#line 1653 "trad.tab.c"
    break;

  case 32: /* sentencia: PRINTF '(' printf_param ')' ';'  */
#line 234 "trad.y"
                                                                {sprintf (temp, "%s", yyvsp[-2].code) ;  
                                                                yyval.code = gen_code (temp) ; }
#line 1660 "trad.tab.c"
    break;

  case 33: /* sentencia: PUTS '(' STRING ')' ';'  */
#line 237 "trad.y"
                                                                {sprintf(temp,"(print \"%s\")", yyvsp[-2].code);
                                                                yyval.code = gen_code(temp);}
#line 1667 "trad.tab.c"
    break;

  case 34: /* sentencia: WHILE expresion while_cont  */
#line 240 "trad.y"
                                                                {sprintf(temp,"(loop %s %s do\n%s)", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                yyval.code = gen_code(temp);}
#line 1674 "trad.tab.c"
    break;

  case 35: /* sentencia: IF expresion if_cont  */
#line 243 "trad.y"
                                                                {sprintf(temp, "(%s %s %s)", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code);
                                                                yyval.code = gen_code(temp);}
#line 1681 "trad.tab.c"
    break;

  case 36: /* sentencia: INTEGER dec_var ';'  */
#line 246 "trad.y"
                                                                {yyval.code = yyvsp[-1].code;}
#line 1687 "trad.tab.c"
    break;

  case 37: /* sentencia: FOR '(' for_var ';' expr_condicional ';' for_operator  */
#line 248 "trad.y"
                                                                {sprintf(temp,"%s\n(loop while %s do\n%s)", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code);
                                                                yyval.code = gen_code(temp);}
#line 1694 "trad.tab.c"
    break;

  case 38: /* sentencia: SWITCH '(' IDENTIF ')' switch_cont  */
#line 251 "trad.y"
                                                                {if (es_local(yyvsp[-2].code)) {
                                                                    // Es local se le añade main_
                                                                    sprintf(temp, "(case %s_%s\n%s)", dentro_funcion, yyvsp[-2].code, yyvsp[0].code);
                                                                }else{
                                                                    // Es global se usa el nombre de la variable original
                                                                    sprintf(temp, "(case %s\n%s)", yyvsp[-2].code, yyvsp[0].code);
                                                                }
                                                                yyval.code = gen_code(temp);}
#line 1707 "trad.tab.c"
    break;

  case 39: /* sentencia: func_call ';'  */
#line 260 "trad.y"
                                                                {yyval = yyvsp[-1];}
#line 1713 "trad.tab.c"
    break;

  case 40: /* switch_cont: '{' CASE switch_val ':' r_sentencia BREAK ';' switch_cont2 '}'  */
#line 265 "trad.y"
                                                                        {sprintf(temp,"(%s \n%s)%s",yyvsp[-6].code,yyvsp[-4].code,yyvsp[-1].code);
                                                                        yyval.code = gen_code(temp);}
#line 1720 "trad.tab.c"
    break;

  case 41: /* switch_cont2: %empty  */
#line 271 "trad.y"
        {yyval.code = gen_code("");}
#line 1726 "trad.tab.c"
    break;

  case 42: /* switch_cont2: DEFAULT ':' r_sentencia BREAK ';'  */
#line 273 "trad.y"
                                                                    {sprintf(temp,"(otherwise \n%s)\n", yyvsp[-2].code);
                                                                    yyval.code = gen_code(temp);}
#line 1733 "trad.tab.c"
    break;

  case 43: /* switch_cont2: CASE switch_val ':' r_sentencia BREAK ';' switch_cont2  */
#line 276 "trad.y"
                                                                    {sprintf(temp,"\n(%s \n%s)\n%s", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code);
                                                                    yyval.code = gen_code(temp);}
#line 1740 "trad.tab.c"
    break;

  case 44: /* switch_val: '+' NUMBER  */
#line 282 "trad.y"
                                        {sprintf(temp,"%d",yyvsp[0].value);
                                        yyval.code = gen_code(temp); }
#line 1747 "trad.tab.c"
    break;

  case 45: /* switch_val: '-' NUMBER  */
#line 285 "trad.y"
                                        {sprintf (temp, "(- %d)", yyvsp[0].value);
                                        yyval.code = gen_code (temp) ; }
#line 1754 "trad.tab.c"
    break;

  case 46: /* switch_val: NUMBER  */
#line 288 "trad.y"
                                        {sprintf (temp, "%d", yyvsp[0].value) ;
                                        yyval.code = gen_code (temp) ; }
#line 1761 "trad.tab.c"
    break;

  case 47: /* for_operator: INC '(' IDENTIF ')' ')' for_cont  */
#line 294 "trad.y"
                                            {if(es_local(yyvsp[-3].code)){ 
                                                sprintf(temp,"%s(setf %s_%s (+ %s_%s 1))", yyvsp[0].code, dentro_funcion, yyvsp[-3].code, dentro_funcion, yyvsp[-3].code);
                                            }else{
                                                sprintf(temp,"%s(setf %s (+ %s 1))",yyvsp[0].code, yyvsp[-3].code, yyvsp[-3].code);
                                            }
                                            yyval.code = gen_code(temp);
                                            }
#line 1773 "trad.tab.c"
    break;

  case 48: /* for_operator: DEC '(' IDENTIF ')' ')' for_cont  */
#line 302 "trad.y"
                                            {if(es_local(yyvsp[-3].code)){ 
                                            sprintf(temp,"%s(setf %s_%s (- %s_%s 1))", yyvsp[0].code, dentro_funcion, yyvsp[-3].code, dentro_funcion, yyvsp[-3].code);
                                            }else{
                                                sprintf(temp,"%s(setf %s (- %s 1))", yyvsp[0].code, yyvsp[-3].code, yyvsp[-3].code);
                                            }
                                            yyval.code = gen_code(temp);
                                            }
#line 1785 "trad.tab.c"
    break;

  case 49: /* for_var: IDENTIF '=' expresion  */
#line 313 "trad.y"
                                    {if(es_local(yyvsp[-2].code)){
                                        sprintf(temp, "(setf %s_%s %s)", dentro_funcion, yyvsp[-2].code, yyvsp[0].code);
                                    }else{
                                        sprintf(temp, "(setf %s %s)", yyvsp[-2].code, yyvsp[0].code);
                                    }
                                    yyval.code = gen_code(temp);
                                    }
#line 1797 "trad.tab.c"
    break;

  case 50: /* for_cont: '{' for_cont2 '}'  */
#line 323 "trad.y"
                          {yyval.code = yyvsp[-1].code;}
#line 1803 "trad.tab.c"
    break;

  case 51: /* for_cont2: %empty  */
#line 328 "trad.y"
                                            {yyval.code = gen_code("\n");}
#line 1809 "trad.tab.c"
    break;

  case 52: /* for_cont2: sentencia for_cont2  */
#line 330 "trad.y"
                                            {sprintf(temp,"%s%s", yyvsp[-1].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1816 "trad.tab.c"
    break;

  case 53: /* for_cont2: RETURN expresion ';' for_cont2  */
#line 333 "trad.y"
                                            {sprintf(temp,"(return-from %s %s)\n%s", dentro_funcion, yyvsp[-2].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1823 "trad.tab.c"
    break;

  case 54: /* while_cont: '{' r_sentencia '}'  */
#line 339 "trad.y"
                            {yyval.code = yyvsp[-1].code;}
#line 1829 "trad.tab.c"
    break;

  case 55: /* printf_param: STRING ',' printf_elem printf_cont  */
#line 344 "trad.y"
                                            {sprintf(temp,"%s%s", yyvsp[-1].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1836 "trad.tab.c"
    break;

  case 56: /* printf_elem: expresion  */
#line 350 "trad.y"
                    {sprintf(temp, "(princ %s)", yyvsp[0].code);
                    yyval.code = gen_code(temp);}
#line 1843 "trad.tab.c"
    break;

  case 57: /* printf_elem: STRING  */
#line 353 "trad.y"
                    {sprintf(temp, "(princ \"%s\")", yyvsp[0].code); 
                    yyval.code = gen_code(temp);}
#line 1850 "trad.tab.c"
    break;

  case 58: /* printf_cont: %empty  */
#line 359 "trad.y"
                                        {yyval.code = gen_code("");}
#line 1856 "trad.tab.c"
    break;

  case 59: /* printf_cont: ',' printf_elem printf_cont  */
#line 361 "trad.y"
                                        {sprintf(temp,"\n%s%s", yyvsp[-1].code, yyvsp[0].code);
                                        yyval.code = gen_code(temp);}
#line 1863 "trad.tab.c"
    break;

  case 60: /* dec_var: IDENTIF continue_ID  */
#line 367 "trad.y"
                            {if(strcmp(dentro_funcion,"global") == 0){
                                sprintf(temp, "(setq %s %s", yyvsp[-1].code, yyvsp[0].code);
                            }else{
                                sprintf(temp, "(setq %s_%s %s",dentro_funcion,yyvsp[-1].code, yyvsp[0].code);
                                añadir_variable_local(yyvsp[-1].code);
                            }
                            yyval.code = gen_code(temp);}
#line 1875 "trad.tab.c"
    break;

  case 61: /* continue_ID: continue_comma  */
#line 378 "trad.y"
                                            {sprintf(temp, "0)%s", yyvsp[0].code); 
                                            yyval.code = gen_code(temp);}
#line 1882 "trad.tab.c"
    break;

  case 62: /* continue_ID: '=' NUMBER continue_comma  */
#line 381 "trad.y"
                                            {sprintf(temp, "%d)%s", yyvsp[-1].value, yyvsp[0].code);
                                            yyval.code = gen_code(temp); }
#line 1889 "trad.tab.c"
    break;

  case 63: /* continue_ID: '=' '-' NUMBER continue_comma  */
#line 384 "trad.y"
                                            {sprintf(temp, "-%d)%s", yyvsp[-1].value, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1896 "trad.tab.c"
    break;

  case 64: /* continue_ID: '=' '+' NUMBER continue_comma  */
#line 387 "trad.y"
                                            {sprintf(temp, "%d)%s", yyvsp[-1].value, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1903 "trad.tab.c"
    break;

  case 65: /* continue_ID: '[' expresion ']' continue_comma  */
#line 390 "trad.y"
                                            {sprintf(temp, "(make-array %s))%s", yyvsp[-2].code, yyvsp[0].code);
                                            yyval.code = gen_code(temp);}
#line 1910 "trad.tab.c"
    break;

  case 66: /* continue_comma: ',' dec_var  */
#line 396 "trad.y"
                        {sprintf(temp,"\n%s",yyvsp[0].code);
                        yyval.code = gen_code(temp);}
#line 1917 "trad.tab.c"
    break;

  case 67: /* continue_comma: %empty  */
#line 399 "trad.y"
                        {yyval.code = "";}
#line 1923 "trad.tab.c"
    break;

  case 68: /* expresion: expr_condicional  */
#line 404 "trad.y"
                            {yyval = yyvsp[0];}
#line 1929 "trad.tab.c"
    break;

  case 69: /* expresion: expr_others  */
#line 406 "trad.y"
                            {yyval = yyvsp[0];}
#line 1935 "trad.tab.c"
    break;

  case 70: /* expresion: termino  */
#line 408 "trad.y"
                            {yyval = yyvsp[0];}
#line 1941 "trad.tab.c"
    break;

  case 71: /* expresion: func_call  */
#line 410 "trad.y"
                            {yyval = yyvsp[0];}
#line 1947 "trad.tab.c"
    break;

  case 72: /* expresion: array_index  */
#line 412 "trad.y"
                            {yyval = yyvsp[0];}
#line 1953 "trad.tab.c"
    break;

  case 73: /* array_index: IDENTIF '[' expresion ']'  */
#line 417 "trad.y"
                                        {if (es_local(yyvsp[-3].code)) { // Regla para índices de arrays
                                            // Es local se le añade main_
                                            sprintf(temp, "(aref %s_%s %s)", dentro_funcion ,yyvsp[-3].code, yyvsp[-1].code);
                                        }else{
                                            // Es global se usa el nombre de la variable original
                                            sprintf(temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code);
                                        }
                                        yyval.code = gen_code(temp);}
#line 1966 "trad.tab.c"
    break;

  case 74: /* expr_condicional: expresion AND expresion  */
#line 428 "trad.y"
                                            {sprintf (temp, "(and %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                            yyval.code = gen_code (temp);}
#line 1973 "trad.tab.c"
    break;

  case 75: /* expr_condicional: expresion OR expresion  */
#line 431 "trad.y"
                                            {sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                            yyval.code = gen_code (temp);}
#line 1980 "trad.tab.c"
    break;

  case 76: /* expr_condicional: expresion NOT_EQUAL expresion  */
#line 434 "trad.y"
                                            {sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                            yyval.code = gen_code (temp);}
#line 1987 "trad.tab.c"
    break;

  case 77: /* expr_condicional: expresion EQUAL expresion  */
#line 437 "trad.y"
                                            {sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                            yyval.code = gen_code (temp);}
#line 1994 "trad.tab.c"
    break;

  case 78: /* expr_condicional: expresion '<' expresion  */
#line 440 "trad.y"
                                            {sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                            yyval.code = gen_code (temp);}
#line 2001 "trad.tab.c"
    break;

  case 79: /* expr_condicional: expresion LOE expresion  */
#line 443 "trad.y"
                                            {sprintf (temp, "(%s %s %s)", yyvsp[-1].code, yyvsp[-2].code, yyvsp[0].code) ;
                                            yyval.code = gen_code (temp);}
#line 2008 "trad.tab.c"
    break;

  case 80: /* expr_condicional: expresion '>' expresion  */
#line 446 "trad.y"
                                            {sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                            yyval.code = gen_code (temp);}
#line 2015 "trad.tab.c"
    break;

  case 81: /* expr_condicional: expresion GOE expresion  */
#line 449 "trad.y"
                                            {sprintf (temp, "(%s %s %s)", yyvsp[-1].code, yyvsp[-2].code, yyvsp[0].code) ;
                                            yyval.code = gen_code (temp);}
#line 2022 "trad.tab.c"
    break;

  case 82: /* expr_others: expresion '%' expresion  */
#line 455 "trad.y"
                                        {sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ;}
#line 2029 "trad.tab.c"
    break;

  case 83: /* expr_others: expresion '+' expresion  */
#line 458 "trad.y"
                                        {sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ;}
#line 2036 "trad.tab.c"
    break;

  case 84: /* expr_others: expresion '-' expresion  */
#line 461 "trad.y"
                                        {sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ;}
#line 2043 "trad.tab.c"
    break;

  case 85: /* expr_others: expresion '*' expresion  */
#line 464 "trad.y"
                                        {sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ;}
#line 2050 "trad.tab.c"
    break;

  case 86: /* expr_others: expresion '/' expresion  */
#line 467 "trad.y"
                                        {sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ;}
#line 2057 "trad.tab.c"
    break;

  case 87: /* termino: operando  */
#line 473 "trad.y"
                                                {yyval = yyvsp[0];}
#line 2063 "trad.tab.c"
    break;

  case 88: /* termino: '+' operando  */
#line 475 "trad.y"
                                                {yyval = yyvsp[-1];}
#line 2069 "trad.tab.c"
    break;

  case 89: /* termino: '-' operando  */
#line 477 "trad.y"
                                                {sprintf (temp, "(- %s)", yyvsp[0].code);
                                                yyval.code = gen_code (temp);}
#line 2076 "trad.tab.c"
    break;

  case 90: /* termino: '!' operando  */
#line 480 "trad.y"
                                                {sprintf (temp, "(not %s)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp);}
#line 2083 "trad.tab.c"
    break;

  case 91: /* operando: IDENTIF  */
#line 486 "trad.y"
                                {if (es_local(yyvsp[0].code)) {
                                    sprintf(temp, "%s_%s", dentro_funcion,yyvsp[0].code);
                                }else{
                                    sprintf(temp, "%s", yyvsp[0].code);
                                }
                                yyval.code = gen_code(temp);}
#line 2094 "trad.tab.c"
    break;

  case 92: /* operando: NUMBER  */
#line 493 "trad.y"
                                {sprintf (temp, "%d", yyvsp[0].value) ;
                                yyval.code = gen_code (temp) ; }
#line 2101 "trad.tab.c"
    break;

  case 93: /* operando: '(' expresion ')'  */
#line 496 "trad.y"
                                { yyval = yyvsp[-1] ; }
#line 2107 "trad.tab.c"
    break;


#line 2111 "trad.tab.c"

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

#line 500 "trad.y"
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
