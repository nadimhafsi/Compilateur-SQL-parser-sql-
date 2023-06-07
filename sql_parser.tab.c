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
#line 1 "sql_parser.y"

#include "sql_parser.tab.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int yylex();
int yyerror(const char *s);

int field_count = 0;




void detect_error(int error_code) {
    switch(error_code) {
        case 1:
            printf(ANSI_COLOR_RED"\nErreur : syntaxe incorrecte.\n"ANSI_COLOR_RESET);
            break;
        case 2:
            printf(ANSI_COLOR_RED"\nErreur : champ non valide.\n"ANSI_COLOR_RESET);
            break;
        case 3:
            printf(ANSI_COLOR_RED"\nErreur : Erreur de parentheses.\n"ANSI_COLOR_RESET);
            break;
        case 4:
            printf(ANSI_COLOR_RED"\nErreur : expression de comparaison non valide.\n"ANSI_COLOR_RESET);
            break;
        case 5:
            printf(ANSI_COLOR_RED"\nErreur : clause WHERE manquante.\n"ANSI_COLOR_RESET);
            break;
        case 6:
            printf(ANSI_COLOR_RED"\nErreur : clause FROM manquante.\n"ANSI_COLOR_RESET);
            break;
        case 7:
            printf(ANSI_COLOR_RED"\nErreur : opérateur de jointure non valide.\n"ANSI_COLOR_RESET);
            break;
        default:
            printf(ANSI_COLOR_RED"\nErreur inconnue.\n"ANSI_COLOR_RESET);
    }
}

#line 121 "sql_parser.tab.c"

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

#include "sql_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_SELECT = 5,                     /* SELECT  */
  YYSYMBOL_FROM = 6,                       /* FROM  */
  YYSYMBOL_WHERE = 7,                      /* WHERE  */
  YYSYMBOL_DELETE = 8,                     /* DELETE  */
  YYSYMBOL_UPDATE = 9,                     /* UPDATE  */
  YYSYMBOL_CREATE = 10,                    /* CREATE  */
  YYSYMBOL_SET = 11,                       /* SET  */
  YYSYMBOL_ASTERISK = 12,                  /* ASTERISK  */
  YYSYMBOL_COMMA = 13,                     /* COMMA  */
  YYSYMBOL_DOT = 14,                       /* DOT  */
  YYSYMBOL_OPEN = 15,                      /* OPEN  */
  YYSYMBOL_CLOSE = 16,                     /* CLOSE  */
  YYSYMBOL_EQUALS = 17,                    /* EQUALS  */
  YYSYMBOL_TABLE = 18,                     /* TABLE  */
  YYSYMBOL_ERROR = 19,                     /* ERROR  */
  YYSYMBOL_DISTINCT = 20,                  /* DISTINCT  */
  YYSYMBOL_BETWEEN = 21,                   /* BETWEEN  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_LT = 23,                        /* LT  */
  YYSYMBOL_GE = 24,                        /* GE  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_NE = 26,                        /* NE  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_PV = 29,                        /* PV  */
  YYSYMBOL_G = 30,                         /* G  */
  YYSYMBOL_INNER = 31,                     /* INNER  */
  YYSYMBOL_LEFT = 32,                      /* LEFT  */
  YYSYMBOL_RIGHT = 33,                     /* RIGHT  */
  YYSYMBOL_ON = 34,                        /* ON  */
  YYSYMBOL_JOIN = 35,                      /* JOIN  */
  YYSYMBOL_NOT = 36,                       /* NOT  */
  YYSYMBOL_IN = 37,                        /* IN  */
  YYSYMBOL_INTEGER = 38,                   /* INTEGER  */
  YYSYMBOL_CHAR = 39,                      /* CHAR  */
  YYSYMBOL_VARCHAR = 40,                   /* VARCHAR  */
  YYSYMBOL_BOOL = 41,                      /* BOOL  */
  YYSYMBOL_FLOAT = 42,                     /* FLOAT  */
  YYSYMBOL_NUMBER = 43,                    /* NUMBER  */
  YYSYMBOL_DATE = 44,                      /* DATE  */
  YYSYMBOL_COUNT = 45,                     /* COUNT  */
  YYSYMBOL_SUM = 46,                       /* SUM  */
  YYSYMBOL_AVG = 47,                       /* AVG  */
  YYSYMBOL_MIN = 48,                       /* MIN  */
  YYSYMBOL_MAX = 49,                       /* MAX  */
  YYSYMBOL_GROUP = 50,                     /* GROUP  */
  YYSYMBOL_BY = 51,                        /* BY  */
  YYSYMBOL_ORDER = 52,                     /* ORDER  */
  YYSYMBOL_ASC = 53,                       /* ASC  */
  YYSYMBOL_DESC = 54,                      /* DESC  */
  YYSYMBOL_AS = 55,                        /* AS  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_query = 57,                     /* query  */
  YYSYMBOL_select_query = 58,              /* select_query  */
  YYSYMBOL_ID = 59,                        /* ID  */
  YYSYMBOL_isdistinct = 60,                /* isdistinct  */
  YYSYMBOL_from_clause = 61,               /* from_clause  */
  YYSYMBOL_fields = 62,                    /* fields  */
  YYSYMBOL_field_list = 63,                /* field_list  */
  YYSYMBOL_ALIAS = 64,                     /* ALIAS  */
  YYSYMBOL_ELEM = 65,                      /* ELEM  */
  YYSYMBOL_field = 66,                     /* field  */
  YYSYMBOL_aggregation_function = 67,      /* aggregation_function  */
  YYSYMBOL_where_clause = 68,              /* where_clause  */
  YYSYMBOL_condition_between = 69,         /* condition_between  */
  YYSYMBOL_condition_IN = 70,              /* condition_IN  */
  YYSYMBOL_list = 71,                      /* list  */
  YYSYMBOL_condition = 72,                 /* condition  */
  YYSYMBOL_conjunction = 73,               /* conjunction  */
  YYSYMBOL_comparison = 74,                /* comparison  */
  YYSYMBOL_comparator = 75,                /* comparator  */
  YYSYMBOL_group_by_clause = 76,           /* group_by_clause  */
  YYSYMBOL_ID_list = 77,                   /* ID_list  */
  YYSYMBOL_order_by_clause = 78,           /* order_by_clause  */
  YYSYMBOL_FIN = 79,                       /* FIN  */
  YYSYMBOL_order_expr_list = 80,           /* order_expr_list  */
  YYSYMBOL_order_expr = 81,                /* order_expr  */
  YYSYMBOL_join_clause = 82,               /* join_clause  */
  YYSYMBOL_join_type = 83,                 /* join_type  */
  YYSYMBOL_delete_query = 84,              /* delete_query  */
  YYSYMBOL_update_query = 85,              /* update_query  */
  YYSYMBOL_assignment_list = 86,           /* assignment_list  */
  YYSYMBOL_assignment = 87,                /* assignment  */
  YYSYMBOL_create_query = 88,              /* create_query  */
  YYSYMBOL_col_ins = 89,                   /* col_ins  */
  YYSYMBOL_datatype = 90,                  /* datatype  */
  YYSYMBOL_OPEN_PAREN = 91,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_PAREN = 92                /* CLOSE_PAREN  */
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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   230

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
      55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    64,    64,    65,    66,    67,    71,    77,    79,    80,
      83,    85,    89,    90,    94,    95,    99,   100,   103,   105,
     106,   110,   111,   112,   116,   117,   118,   119,   123,   124,
     125,   126,   127,   130,   132,   133,   134,   135,   139,   140,
     144,   148,   149,   155,   156,   160,   161,   165,   166,   167,
     168,   169,   173,   174,   175,   176,   177,   178,   181,   183,
     187,   188,   191,   193,   196,   200,   201,   205,   206,   207,
     210,   212,   213,   217,   218,   219,   220,   224,   230,   236,
     237,   241,   242,   243,   244,   245,   249,   255,   256,   260,
     261,   262,   263,   264,   265,   266,   270,   271,   274,   275
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "INT",
  "SELECT", "FROM", "WHERE", "DELETE", "UPDATE", "CREATE", "SET",
  "ASTERISK", "COMMA", "DOT", "OPEN", "CLOSE", "EQUALS", "TABLE", "ERROR",
  "DISTINCT", "BETWEEN", "GT", "LT", "GE", "LE", "NE", "AND", "OR", "PV",
  "G", "INNER", "LEFT", "RIGHT", "ON", "JOIN", "NOT", "IN", "INTEGER",
  "CHAR", "VARCHAR", "BOOL", "FLOAT", "NUMBER", "DATE", "COUNT", "SUM",
  "AVG", "MIN", "MAX", "GROUP", "BY", "ORDER", "ASC", "DESC", "AS",
  "$accept", "query", "select_query", "ID", "isdistinct", "from_clause",
  "fields", "field_list", "ALIAS", "ELEM", "field", "aggregation_function",
  "where_clause", "condition_between", "condition_IN", "list", "condition",
  "conjunction", "comparison", "comparator", "group_by_clause", "ID_list",
  "order_by_clause", "FIN", "order_expr_list", "order_expr", "join_clause",
  "join_type", "delete_query", "update_query", "assignment_list",
  "assignment", "create_query", "col_ins", "datatype", "OPEN_PAREN",
  "CLOSE_PAREN", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-151)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-77)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     213,    -2,    19,    44,    60,    51,    78,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,   138,    60,    70,    69,    60,  -151,
      -2,  -151,  -151,  -151,  -151,  -151,  -151,    91,    20,    93,
      -1,     7,    18,   104,    41,     7,  -151,    60,    -2,  -151,
      59,   150,    60,  -151,  -151,    -2,  -151,    60,    -2,    65,
      -2,  -151,    -2,    92,    11,  -151,    60,  -151,  -151,    -1,
      58,    59,    -1,  -151,  -151,    12,  -151,    -2,   183,  -151,
    -151,    83,    85,  -151,  -151,  -151,    28,    41,    -2,   186,
      12,  -151,    -2,    60,  -151,  -151,  -151,   113,    81,   102,
    -151,    -2,  -151,  -151,  -151,  -151,   109,  -151,  -151,  -151,
    -151,  -151,    96,     7,    31,    65,    65,  -151,    73,  -151,
    -151,  -151,  -151,  -151,     7,  -151,  -151,  -151,  -151,   106,
      -2,  -151,    -1,    -2,    71,    90,    60,    66,  -151,    97,
     123,    98,  -151,    89,  -151,   145,    85,  -151,   100,   101,
     128,    60,  -151,  -151,   103,   105,    84,    60,   114,    -2,
    -151,   136,   120,    60,     4,   124,   125,  -151,  -151,    12,
    -151,    60,   107,    -2,   126,    65,   103,  -151,   155,   134,
     142,  -151,  -151,  -151,  -151,  -151,   161,    60,  -151,    65,
      83,  -151,  -151,    60,    60,    42,   163,  -151,    83,   147,
    -151,  -151,  -151,    60,  -151,  -151
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    10,     0,     0,     0,     0,     2,     3,     4,
       5,    64,     7,    11,     0,     0,     8,     0,     0,     1,
       0,    14,    28,    29,    30,    31,    32,    24,     0,    15,
      18,     0,     0,     0,     0,     0,    27,     0,     0,    12,
       0,     0,     0,    19,    16,     0,    96,     0,     0,     0,
       0,     9,     0,     0,     0,    79,     0,    25,    13,    18,
       0,     0,    18,    20,    97,     0,    37,     0,     0,    35,
      36,    34,    43,    45,    77,    85,     0,     0,     0,     0,
       0,    21,     0,     0,    73,    74,    75,     0,     0,     0,
      17,     0,    98,    26,    51,    52,     0,    53,    54,    55,
      56,    57,     0,     0,     0,     0,     0,    81,     0,    82,
      80,    78,    89,    90,     0,    92,    93,    94,    95,    87,
       0,    76,    18,     0,    58,     0,     0,     0,    99,     0,
       0,     0,    47,     0,    48,     0,    44,    46,     0,     0,
       0,     0,    86,    22,    37,     0,    62,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,    83,    84,     0,
      88,     0,     0,     0,     0,     0,    99,    38,     0,     0,
       0,    40,    49,    50,    91,    60,    59,     0,     6,     0,
      71,    39,    41,     0,     0,    67,    63,    65,    72,     0,
      61,    68,    69,     0,    42,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -151,    -4,  -151,  -151,  -151,  -151,   -58,   117,
     140,  -151,   -38,  -151,  -151,  -151,  -150,    77,    82,  -151,
    -151,  -151,  -151,     3,  -151,    -3,   112,   -81,  -151,  -151,
    -151,   115,  -151,    50,  -151,   -28,   -71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,    43,    14,    40,    28,    29,    44,    60,
      30,    31,    50,    69,    70,   154,    71,    72,    73,   104,
     146,   176,   163,    12,   186,   187,    87,    88,     8,     9,
      54,    55,    10,    80,   119,    61,    93
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    81,    16,    47,    90,    91,   125,    56,    45,   120,
      27,    32,    48,    91,    35,   180,    78,   170,    49,    48,
      92,    38,    46,    36,    77,    49,    39,    11,    92,   188,
      53,    16,   107,    57,    16,   132,    59,    27,    63,    13,
     -33,    58,    52,    65,    16,    68,   125,   -33,    64,   124,
      15,    66,    79,    74,    42,    75,   150,    59,   108,    82,
      45,   133,    16,    16,   143,   -70,    67,   149,    16,    18,
      94,    83,   109,    53,    46,   131,    16,   138,    19,   122,
      34,   111,    92,   171,    33,   121,   140,   -70,   174,    84,
      85,    86,    16,   155,   128,   191,   192,    84,    85,    86,
     134,   135,   135,    82,   139,    37,    41,    51,   -70,    76,
     -70,   105,   106,   129,   123,    83,   126,   130,   -70,   141,
      49,   145,   148,   142,   151,   147,   144,   152,   153,   156,
     157,   158,   159,    84,    85,    86,   162,    79,   -76,    20,
     167,    16,   -33,   164,    84,    85,    86,   168,   165,   169,
      21,    20,   166,    16,   172,   173,   161,   175,   177,   181,
     179,   135,    95,   -33,   182,   -33,   178,    97,    98,    99,
     100,   101,   183,   185,   184,   135,   193,   194,    89,   189,
     190,    62,   136,    22,    23,    24,    25,    26,   137,   185,
     195,   160,   110,     0,     0,    22,    23,    24,    25,    26,
      95,   127,     0,     0,    96,    97,    98,    99,   100,   101,
       0,     0,     0,     0,     1,     0,     0,     0,     2,   102,
     103,     3,     4,     5,   112,   113,   114,   115,   116,   117,
     118
};

static const yytype_int16 yycheck[] =
{
       4,    59,     3,    31,    62,     1,    87,    35,     1,    80,
      14,    15,     1,     1,    18,   165,    54,    13,     7,     1,
      16,     1,    15,    20,    13,     7,     6,    29,    16,   179,
      34,     3,     4,    37,     3,     4,    40,    41,    42,    20,
      29,    38,     1,    47,     3,    49,   127,    29,    45,    87,
       6,    48,    56,    50,    55,    52,   127,    61,    30,     1,
       1,    30,     3,     3,   122,     7,     1,     1,     3,    18,
      67,    13,    76,    77,    15,   103,     3,     4,     0,    83,
      11,    78,    16,   154,    14,    82,   114,    29,   159,    31,
      32,    33,     3,     4,    91,    53,    54,    31,    32,    33,
     104,   105,   106,     1,   108,    14,    13,     3,    50,    17,
      52,    28,    27,     4,     1,    13,    35,    21,    16,    13,
       7,    50,   126,   120,    27,    35,   123,     4,    30,   133,
      30,    30,     4,    31,    32,    33,    52,   141,    35,     1,
       4,     3,    29,   147,    31,    32,    33,    27,    34,   153,
      12,     1,   149,     3,    30,    30,    51,   161,    51,     4,
      34,   165,    17,    50,    30,    52,   163,    22,    23,    24,
      25,    26,    30,   177,    13,   179,    13,    30,    61,   183,
     184,    41,   105,    45,    46,    47,    48,    49,   106,   193,
     193,   141,    77,    -1,    -1,    45,    46,    47,    48,    49,
      17,    89,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,     5,    36,
      37,     8,     9,    10,    38,    39,    40,    41,    42,    43,
      44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,     8,     9,    10,    57,    58,    84,    85,
      88,    29,    79,    20,    60,     6,     3,    59,    18,     0,
       1,    12,    45,    46,    47,    48,    49,    59,    62,    63,
      66,    67,    59,    14,    11,    59,    79,    14,     1,     6,
      61,    13,    55,    59,    64,     1,    15,    91,     1,     7,
      68,     3,     1,    59,    86,    87,    91,    59,    79,    59,
      65,    91,    66,    59,    79,    59,    79,     1,    59,    69,
      70,    72,    73,    74,    79,    79,    17,    13,    68,    59,
      89,    64,     1,    13,    31,    32,    33,    82,    83,    65,
      64,     1,    16,    92,    79,    17,    21,    22,    23,    24,
      25,    26,    36,    37,    75,    28,    27,     4,    30,    59,
      87,    79,    38,    39,    40,    41,    42,    43,    44,    90,
      92,    79,    59,     1,    68,    83,    35,    82,    79,     4,
      21,    91,     4,    30,    59,    59,    73,    74,     4,    59,
      91,    13,    79,    64,    79,    50,    76,    35,    59,     1,
      92,    27,     4,    30,    71,     4,    59,    30,    30,     4,
      89,    51,    52,    78,    59,    34,    79,     4,    27,    59,
      13,    92,    30,    30,    92,    59,    77,    51,    79,    34,
      72,     4,    30,    30,    13,    59,    80,    81,    72,    59,
      59,    53,    54,    13,    30,    81
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    58,    58,    59,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    65,    65,    65,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    68,    69,    69,
      70,    71,    71,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    80,    80,    81,    81,    81,
      82,    82,    82,    83,    83,    83,    83,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,    10,     2,     1,     3,
       0,     1,     1,     2,     1,     1,     2,     4,     0,     1,
       2,     2,     4,     4,     1,     3,     4,     2,     1,     1,
       1,     1,     1,     0,     2,     2,     2,     2,     5,     6,
       5,     3,     5,     1,     3,     1,     3,     3,     3,     5,
       5,     2,     1,     1,     1,     1,     1,     1,     0,     3,
       1,     3,     0,     3,     1,     1,     3,     1,     2,     2,
       0,     5,     6,     1,     1,     1,     2,     5,     6,     1,
       3,     3,     3,     5,     5,     2,     7,     2,     4,     1,
       1,     4,     1,     1,     1,     1,     1,     2,     1,     2
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
  case 6: /* select_query: SELECT isdistinct fields from_clause ELEM join_clause where_clause group_by_clause order_by_clause FIN  */
#line 71 "sql_parser.y"
                                                                                                          {
         if(field_count==-1) printf("Nombre de champs à sélectionner: Tous\n");
         else
        printf("\nNombre de champs à sélectionner: %d\n", field_count);
        printf(ANSI_COLOR_BLUE"\nsuccessful (Select)\n"ANSI_COLOR_RESET);
    }
#line 1346 "sql_parser.tab.c"
    break;

  case 7: /* select_query: error FIN  */
#line 77 "sql_parser.y"
                { detect_error(1); }
#line 1352 "sql_parser.tab.c"
    break;

  case 13: /* from_clause: error FIN  */
#line 90 "sql_parser.y"
                      { detect_error(6); }
#line 1358 "sql_parser.tab.c"
    break;

  case 14: /* fields: ASTERISK  */
#line 94 "sql_parser.y"
             { field_count = -1; }
#line 1364 "sql_parser.tab.c"
    break;

  case 16: /* field_list: field ALIAS  */
#line 99 "sql_parser.y"
               { field_count = 1; }
#line 1370 "sql_parser.tab.c"
    break;

  case 17: /* field_list: field_list COMMA field ALIAS  */
#line 100 "sql_parser.y"
                                   { field_count++; }
#line 1376 "sql_parser.tab.c"
    break;

  case 27: /* field: error FIN  */
#line 119 "sql_parser.y"
                 { detect_error(2); }
#line 1382 "sql_parser.tab.c"
    break;

  case 37: /* where_clause: error FIN  */
#line 135 "sql_parser.y"
                { detect_error(5); }
#line 1388 "sql_parser.tab.c"
    break;

  case 51: /* comparison: error FIN  */
#line 169 "sql_parser.y"
                { detect_error(4); }
#line 1394 "sql_parser.tab.c"
    break;

  case 76: /* join_type: error FIN  */
#line 220 "sql_parser.y"
                   { detect_error(7); }
#line 1400 "sql_parser.tab.c"
    break;

  case 77: /* delete_query: DELETE FROM ID where_clause FIN  */
#line 224 "sql_parser.y"
                                   {
        printf(ANSI_COLOR_BLUE"\nSuccessful (Delete)\n"ANSI_COLOR_RESET);
    }
#line 1408 "sql_parser.tab.c"
    break;

  case 78: /* update_query: UPDATE ID SET assignment_list where_clause FIN  */
#line 230 "sql_parser.y"
                                                  {
        printf(ANSI_COLOR_BLUE"\nSuccessful (update)\n"ANSI_COLOR_RESET);
    }
#line 1416 "sql_parser.tab.c"
    break;

  case 85: /* assignment: error FIN  */
#line 245 "sql_parser.y"
                { detect_error(1); }
#line 1422 "sql_parser.tab.c"
    break;

  case 86: /* create_query: CREATE TABLE ID OPEN_PAREN col_ins CLOSE_PAREN FIN  */
#line 249 "sql_parser.y"
                                                        {
        printf("\nsuccessful (Create)\n");
    }
#line 1430 "sql_parser.tab.c"
    break;

  case 97: /* OPEN_PAREN: error FIN  */
#line 271 "sql_parser.y"
                 { detect_error(3); }
#line 1436 "sql_parser.tab.c"
    break;

  case 99: /* CLOSE_PAREN: error FIN  */
#line 275 "sql_parser.y"
                 { detect_error(3); }
#line 1442 "sql_parser.tab.c"
    break;


#line 1446 "sql_parser.tab.c"

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

#line 277 "sql_parser.y"


int main() {
    yyparse();
    getchar();
    return 0;
}

int yyerror(const char *s) {
    printf("Erreur : %s\n", s);
    return 0;
}

