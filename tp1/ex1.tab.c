/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ex1.y"

  #include <ctype.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include <limits.h>
  #include <stdarg.h>
  #include "stable.h"

  int yylex(void);
  void yyerror(char const *);
  #define STACK_CAPACITY 50
  #define MAXBUF 500
  #define OK 1
  #define ERR 0
  #define T_BOOL 2
  #define T_INT 3

  #define PROGRAM_START			"program:debut"

  #define NEG_VRAI				"neg:vrai"
  #define NEG_FAUX				"neg:faux"
  #define NEG_FIN				"neg:fin"

  #define OR_VRAI				"or:vrai"
  #define OR_FAUX				"or:faux"
  #define OR_FIN				"or:fin"

  #define EQ_FIN 				"eq:fin"
  #define EQ_VRAI 				"eq:vrai"
  #define EQ_FAUX 				"eq:faux"

  #define INF_FIN 				"inf:fin"
  #define INF_VRAI 				"inf:vrai"
  #define INF_FAUX 				"inf:faux"

  #define SUP_FIN 				"sup:fin"
  #define SUP_VRAI 				"sup:vrai"
  #define SUP_FAUX 				"sup:faux"

  #define INF_EQ_FIN 			"inf:eq:fin"
  #define INF_EQ_VRAI 			"inf:eq:vrai"
  #define INF_EQ_FAUX 			"inf:eq:faux"

  #define SUP_EQ_FIN 			"sup:eq:fin"
  #define SUP_EQ_VRAI 			"sup:eq:vrai"
  #define SUP_EQ_FAUX 			"sup:eq:faux"

  #define FUN_DEF 				"fun:def"
  #define FUN_DEF_FIN			"fun:def:fin"

  #define VAR_GLOBAL			"var:global"
  #define VAR_GLOBAL_VAL 		"var:global:val"

  #define VAR_LOCAL				"var:local"
  #define VAR_LOCAL_VAL 		"var:local:val"

  #define VAR_PARAM 			"var:fun:param"
  #define VAR_PARAM_VAL 		"var:fun:param:val"

  #define VAR_PARAM_INIT		"var:fun:param:init"
  #define VAR_PARAM_INIT_FIN	"var:fun:param:init:fin"

  #define ERR_DIV_ZERO			"err:div0"
  #define ERR_DIV_ZERO_MSG		"err:div0:msg"

  #define BOOL_STR_FALSE		"bool:str:faux"
  #define BOOL_STR_TRUE			"bool:str:vrai"

  #define PRINT_TRUE			"bool:affichage:vrai"
  #define PRINT_FALSE			"bool:affichage:faux"
  #define PRINT_FIN				"bool:affichage:fin"

  char buffer1[MAXBUF];
  char buffer2[MAXBUF];

  static unsigned int new_label_number();
  static void create_label(char *buf, size_t buf_size, const char *format, ...);
  void fail_with(const char *format, ...);

  symbol_table_entry* funDef = NULL;


#line 153 "ex1.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_EX1_TAB_H_INCLUDED
# define YY_YY_EX1_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    AND = 259,
    EQ = 260,
    OR = 261,
    NEG = 262,
    TRUE = 263,
    FALSE = 264,
    BOOL_LEX = 265,
    INT_LEX = 266,
    VOID_LEX = 267,
    ID = 268,
    IF = 269,
    WHILE = 270,
    PRINT = 271,
    ELSE = 272,
    NON_ELSE = 273,
    RETURN = 274,
    SUP = 275,
    SUP_EQ = 276,
    INF = 277,
    INF_EQ = 278
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 84 "ex1.y"
 int entier; char* chaine; 

#line 232 "ex1.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_EX1_TAB_H_INCLUDED  */



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
typedef yytype_int8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   338

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  119

#define YYUNDEFTOK  2
#define YYMAXUTOK   278


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    26,    24,    31,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   105,   105,   106,   107,   108,   109,   110,   111,   115,
     116,   117,   120,   134,   135,   136,   141,   165,   141,   200,
     201,   206,   247,   291,   300,   301,   305,   306,   310,   311,
     315,   316,   323,   324,   328,   329,   334,   336,   350,   368,
     373,   388,   388,   401,   407,   411,   407,   426,   472,   534,
     576,   610,   626,   641,   656,   673,   684,   686,   735,   784,
     830,   883,   934,   950,  1001,  1047,  1056,  1065
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "AND", "EQ", "OR", "NEG",
  "TRUE", "FALSE", "BOOL_LEX", "INT_LEX", "VOID_LEX", "ID", "IF", "WHILE",
  "PRINT", "ELSE", "NON_ELSE", "RETURN", "SUP", "SUP_EQ", "INF", "INF_EQ",
  "'+'", "'-'", "'*'", "'/'", "'\\n'", "'('", "')'", "','", "'{'", "'}'",
  "';'", "'='", "$accept", "lignes", "ligne", "fixif", "type", "deffun",
  "$@1", "$@2", "largV", "largs", "blocinstr", "sdeclV", "sdecl",
  "sinstrV", "sinstr", "lexpr", "lexprV", "instr", "$@3", "@4", "$@5",
  "decl", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    43,    45,    42,    47,    10,    40,
      41,    44,   123,   125,    59,    61
};
# endif

#define YYPACT_NINF (-36)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     119,    -7,   -36,    11,   -36,   -36,   -36,   -36,   -36,   -23,
      -6,    -4,    11,    29,   -36,    11,     5,    89,     2,    18,
     -36,   -36,   -36,   -36,   135,   -36,     4,   -36,    11,    11,
      11,   -36,   159,   -36,   183,   275,    21,   259,     5,   -36,
     -36,    13,   -36,    15,    16,   -36,   -30,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,    11,   -36,     8,
      26,   288,   207,   288,    11,   -36,   -36,   -36,   -30,    24,
     259,   -36,   -36,   -36,   -36,   -36,   -36,    11,    30,   311,
      42,   299,    42,    42,    42,    42,   -18,   -18,   -36,   -36,
      11,   -36,   -36,    31,   288,   -36,   -36,   231,     5,   288,
     259,    34,   -36,    47,    40,    43,    54,   259,   -36,   -36,
       5,   -36,   -36,    41,    63,   259,   -36,   -36,   -36
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    55,     0,    65,    66,    13,    14,    15,    67,
       0,     0,     0,     0,     8,     0,    24,     0,     0,     0,
      11,    36,     9,    10,     0,     4,    67,    64,    34,     0,
       0,    44,     0,    37,     0,     0,     0,    28,    25,    26,
       1,     0,     6,     0,     0,     7,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    35,
       0,    32,     0,    12,     0,    47,    38,    56,     0,     0,
      29,    30,    27,     2,     5,     3,    49,     0,     0,    62,
      57,    63,    59,    61,    58,    60,    51,    52,    53,    54,
       0,    50,    40,     0,    45,    23,    31,     0,    19,    33,
       0,     0,    48,     0,     0,    20,    43,     0,    21,    17,
       0,    41,    46,     0,     0,     0,    18,    22,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -36,   -36,    60,   -36,   -16,   -36,   -36,   -36,   -36,   -36,
     -34,   -36,   -36,   -36,   -36,   -36,   -36,   -35,   -36,   -36,
     -36,    -9,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    17,    18,    93,    19,    20,    78,   113,   104,   105,
      21,    37,    38,    69,    70,    59,    60,    22,   115,    64,
     101,    23,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      36,    27,    71,    44,    76,    77,    28,    39,    56,    57,
      32,    34,    29,    35,     2,     6,     7,     8,     3,     4,
       5,    25,    36,    30,    26,    31,    61,    62,    63,    72,
      45,    46,     2,    28,    68,    96,     3,     4,     5,    90,
      15,    73,    26,    74,    75,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    91,    95,    15,    98,
     108,   100,    94,    33,   107,   106,    54,    55,    56,    57,
     109,   111,   112,    16,   110,    97,   117,    43,     0,   116,
     118,     0,   103,     0,     0,     0,     0,     0,    99,    40,
      41,     0,     2,     0,   114,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    15,     0,
       1,    16,     2,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    13,    47,
      48,    49,     0,     0,     0,     0,     0,    14,    15,     0,
       0,    16,     0,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    47,    48,    49,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,    52,    53,    54,    55,    56,    57,    47,    48,    49,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    47,    48,    49,     0,     0,     0,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,    52,
      53,    54,    55,    56,    57,    47,    48,    49,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,    52,    53,    54,    55,    56,    57,     0,
       0,     0,     2,     0,     0,   102,     3,     4,     5,     0,
       0,     0,     9,    10,    11,    12,     0,     0,    13,    47,
      48,    49,     0,     0,     0,     0,     0,     0,    15,     0,
       0,    16,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    47,    48,    67,     0,     0,    50,    51,
      52,    53,    54,    55,    56,    57,    48,     0,     0,    50,
      51,    52,    53,    54,    55,    56,    57,     0,     0,     0,
       0,    50,    51,    52,    53,    54,    55,    56,    57
};

static const yytype_int8 yycheck[] =
{
      16,     3,    37,     1,    34,    35,    29,    16,    26,    27,
      12,    13,    35,    15,     3,    10,    11,    12,     7,     8,
       9,    28,    38,    29,    13,    29,    28,    29,    30,    38,
      28,    13,     3,    29,    13,    70,     7,     8,     9,    31,
      29,    28,    13,    28,    28,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    30,    33,    29,    29,
      13,    30,    64,    34,    30,   100,    24,    25,    26,    27,
      30,    17,   107,    32,    31,    77,    13,    17,    -1,   113,
     115,    -1,    98,    -1,    -1,    -1,    -1,    -1,    90,     0,
       1,    -1,     3,    -1,   110,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
       1,    32,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    19,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    32,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,     4,     5,     6,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,     4,     5,     6,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,     4,     5,     6,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,     4,     5,     6,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,     3,    -1,    -1,    34,     7,     8,     9,    -1,
      -1,    -1,    13,    14,    15,    16,    -1,    -1,    19,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    32,     4,     5,     6,    20,    21,    22,    23,    24,
      25,    26,    27,     4,     5,    30,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,     5,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    19,    28,    29,    32,    37,    38,    40,
      41,    46,    53,    57,    58,    28,    13,    58,    29,    35,
      29,    29,    58,    34,    58,    58,    40,    47,    48,    57,
       0,     1,    28,    38,     1,    28,    13,     4,     5,     6,
      20,    21,    22,    23,    24,    25,    26,    27,    34,    51,
      52,    58,    58,    58,    55,    34,    34,    30,    13,    49,
      50,    53,    57,    28,    28,    28,    34,    35,    42,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      31,    30,    34,    39,    58,    33,    53,    58,    29,    58,
      30,    56,    34,    40,    44,    45,    53,    30,    13,    30,
      31,    17,    53,    43,    40,    54,    46,    13,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    37,    37,    37,    37,    37,    38,
      38,    38,    39,    40,    40,    40,    42,    43,    41,    44,
      44,    45,    45,    46,    47,    47,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    54,    53,    53,    55,    56,    53,    53,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     2,     3,     2,     2,     1,     1,
       1,     1,     0,     1,     1,     1,     0,     0,     8,     0,
       1,     2,     4,     4,     0,     1,     1,     2,     0,     1,
       1,     2,     1,     3,     0,     1,     1,     2,     3,     2,
       4,     0,     9,     6,     0,     0,     7,     3,     5,     3,
       4,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 105 "ex1.y"
                        {yyerrok;}
#line 1526 "ex1.tab.c"
    break;

  case 3:
#line 106 "ex1.y"
                        {yyerrok; }
#line 1532 "ex1.tab.c"
    break;

  case 4:
#line 107 "ex1.y"
                        {yyerrok; }
#line 1538 "ex1.tab.c"
    break;

  case 12:
#line 121 "ex1.y"
{
	unsigned int number = new_label_number();
	(yyval.entier) = number;
	printf("; If No %d\n"
	"\tpop ax\n"
	"\tconst bx,0\n"
	"\tconst cx,if:test:neg:%d\n"
	"\tcmp ax,bx\n"
	"\tjmpc cx\n"
	, number, number);
}
#line 1554 "ex1.tab.c"
    break;

  case 13:
#line 134 "ex1.y"
                { (yyval.entier) = BOOL_T; }
#line 1560 "ex1.tab.c"
    break;

  case 14:
#line 135 "ex1.y"
                { (yyval.entier) = INT_T; }
#line 1566 "ex1.tab.c"
    break;

  case 15:
#line 136 "ex1.y"
                { (yyval.entier) = VOID_T; }
#line 1572 "ex1.tab.c"
    break;

  case 16:
#line 141 "ex1.y"
                {

			 
			// Vérification de l'unicité de l'identifiant de la fonction
				funDef = search_symbol_table((yyvsp[0].chaine));
				if (funDef != NULL) {
					fail_with("ID existe deja\n");
				}

			/* Ajout de l'identifiant de la fontion dans la
			table des symboles et préparation du traitement 
			de la définition de la fontion */
				funDef = new_symbol_table_entry((yyvsp[0].chaine));
				funDef->class = FUNCTION;
				funDef->nParams = 0;
				funDef->nLocalVariables = 0;
				funDef->desc[0] = (yyvsp[-1].entier);
				printf(
					"; Saut à fin définition %s()\n"
					"\tconst dx,"FUN_DEF_FIN":%s\n"
					"\tjmp dx\n\n",
				funDef->name,
				funDef->name);
				
			}
#line 1602 "ex1.tab.c"
    break;

  case 17:
#line 165 "ex1.y"
                                        {
					printf(":"FUN_DEF":%s\n", (yyvsp[-4].chaine));

				for (int i = funDef->nParams; i > 0 ; i--) {
					printf(
						"; Saut à l'initialisation du paramètre %d de %s()\n"
						"\tconst dx,"VAR_PARAM_INIT":%s:%d\n"
						"\tjmp dx\n\n"
						":"VAR_PARAM_INIT_FIN":%s:%d\n",
					i, funDef->name,
					funDef->name, i,
					funDef->name, i
					);
				}
				printf(
					"; Début de l'exécution de %s()\n",
				funDef->name);

			}
#line 1626 "ex1.tab.c"
    break;

  case 18:
#line 183 "ex1.y"
                                    {

			/* Fin de traitement de la définition de la fonction donc
			 libération  des ressources */
				for (int i = 0; i < funDef->nParams; i++){
					free_first_symbol_table_entry();
				}
				printf(
					"; Saut à la fin de l'exécution du code de %s()\n"
					":"FUN_DEF_FIN":%s\n",
				funDef->name,
				funDef->name);
				funDef = NULL;
			}
#line 1645 "ex1.tab.c"
    break;

  case 19:
#line 200 "ex1.y"
                        { (yyval.entier) = 0; }
#line 1651 "ex1.tab.c"
    break;

  case 20:
#line 201 "ex1.y"
                        { (yyval.entier) = (yyvsp[0].entier); }
#line 1657 "ex1.tab.c"
    break;

  case 21:
#line 206 "ex1.y"
                                {
					// Vérification de l'unicité de l'identifiant de l'argument
						symbol_table_entry* funArg = search_symbol_table((yyvsp[0].chaine));
						if (funArg != NULL){
							fail_with("ID existe deja\n");
						}

					/* Ajout de l'identifiant de l'argument dans la
					table des symboles */
						funArg =  new_symbol_table_entry((yyvsp[0].chaine));
						funArg->class = LOCAL_VARIABLE;
						funArg->desc[0] = (yyvsp[-1].entier);

					/* Mise à jour des informations de définition de
					la fontion dans la table des symboles */
						funDef->desc[funDef->nParams] = (yyvsp[-1].entier);
						funDef->nParams++;

						printf(
							"; Code de définition et d'initialisation du paramètre %s de %s()\n"
							":"VAR_PARAM_INIT":%s:%lu\n"
							"\tconst ax,"VAR_LOCAL_VAL":%s:%s\n"
							"\tjmp ax\n\n"
							":"VAR_LOCAL":%s:%s\n"
							"@int 0\n"
							":"VAR_LOCAL_VAL":%s:%s\n"
							"\tpop ax\n"
							"\tconst bx,"VAR_LOCAL":%s:%s\n"
							"\tstorew ax,bx\n"
							"\tconst cx,"VAR_PARAM_INIT_FIN":%s:%lu\n"
							"\tjmp cx\n\n",
						(yyvsp[0].chaine), funDef->name,
						funDef->name, funDef->nParams,
						funDef->name, (yyvsp[0].chaine),
						funDef->name, (yyvsp[0].chaine),
						funDef->name, (yyvsp[0].chaine),
						funDef->name, (yyvsp[0].chaine),
						funDef->name, funDef->nParams
						);
					}
#line 1702 "ex1.tab.c"
    break;

  case 22:
#line 247 "ex1.y"
                        {
					// Vérification de l'unicité de l'identifiant de l'argument
						symbol_table_entry* funArg = search_symbol_table((yyvsp[0].chaine));
						if (funArg != NULL){
							fail_with("ID existe deja\n");
						}

					/* Ajout de l'identifiant de l'argument dans la
					table des symboles */
						funArg =  new_symbol_table_entry((yyvsp[0].chaine));
						funArg->class = LOCAL_VARIABLE;
						funArg->desc[0] = (yyvsp[-1].entier);

					/* Mise à jour des informations de définition de
					la fontion dans la table des symboles */
						funDef->nParams++;
						funDef->desc[funDef->nParams] = (yyvsp[-1].entier);

						
						printf(
							"; Code de définition du paramètre %s de %s()\n"
							":"VAR_PARAM_INIT":%s:%lu\n"
							"\tconst ax,"VAR_LOCAL_VAL":%s:%s\n"
							"\tjmp ax\n\n"
							":"VAR_LOCAL":%s:%s\n"
							"@int 0\n"
							":"VAR_LOCAL_VAL":%s:%s\n"
							"\tpop ax\n"
							"\tconst bx,"VAR_LOCAL":%s:%s\n"
							"\tstorew ax,bx\n"
							"\tconst dx,"VAR_PARAM_INIT_FIN":%s:%lu\n"
							"\tjmp dx\n\n",
						(yyvsp[0].chaine), funDef->name,
						funDef->name, funDef->nParams,
						funDef->name, (yyvsp[0].chaine),
						funDef->name, (yyvsp[0].chaine),
						funDef->name, (yyvsp[0].chaine),
						funDef->name, (yyvsp[0].chaine),
						funDef->name, funDef->nParams
						);
					}
#line 1748 "ex1.tab.c"
    break;

  case 23:
#line 291 "ex1.y"
                        {
							for (int i = 0; i < (yyvsp[-2].entier); i++) {
								free_first_symbol_table_entry();
							}
							(yyval.entier) = (yyvsp[-2].entier) + (yyvsp[-1].entier);
						}
#line 1759 "ex1.tab.c"
    break;

  case 24:
#line 300 "ex1.y"
                        { (yyval.entier) = 0; }
#line 1765 "ex1.tab.c"
    break;

  case 25:
#line 301 "ex1.y"
                        { (yyval.entier) = (yyvsp[0].entier); }
#line 1771 "ex1.tab.c"
    break;

  case 26:
#line 305 "ex1.y"
                        { (yyval.entier) = 1; }
#line 1777 "ex1.tab.c"
    break;

  case 27:
#line 306 "ex1.y"
                { (yyval.entier) = (yyvsp[-1].entier) + 1; }
#line 1783 "ex1.tab.c"
    break;

  case 28:
#line 310 "ex1.y"
                        { (yyval.entier) = 0; }
#line 1789 "ex1.tab.c"
    break;

  case 29:
#line 311 "ex1.y"
                        { (yyval.entier) = (yyvsp[0].entier); }
#line 1795 "ex1.tab.c"
    break;

  case 30:
#line 315 "ex1.y"
                        { (yyval.entier) = 1; }
#line 1801 "ex1.tab.c"
    break;

  case 31:
#line 316 "ex1.y"
                { (yyval.entier) = (yyvsp[-1].entier) +1; }
#line 1807 "ex1.tab.c"
    break;

  case 32:
#line 323 "ex1.y"
                        { (yyval.entier) = 1;  }
#line 1813 "ex1.tab.c"
    break;

  case 33:
#line 324 "ex1.y"
                        { (yyval.entier) = (yyvsp[-2].entier) + 1;}
#line 1819 "ex1.tab.c"
    break;

  case 34:
#line 328 "ex1.y"
                        { (yyval.entier) = 0; }
#line 1825 "ex1.tab.c"
    break;

  case 35:
#line 329 "ex1.y"
                        { (yyval.entier) = (yyvsp[0].entier); }
#line 1831 "ex1.tab.c"
    break;

  case 36:
#line 334 "ex1.y"
                                { (yyval.entier) = (yyvsp[0].entier); }
#line 1837 "ex1.tab.c"
    break;

  case 37:
#line 336 "ex1.y"
                        {
						if (funDef == NULL) {
							fail_with("Espace global, retour de valeur impossible !");
								(yyval.entier) = ERR;
						} else {
							if (funDef->desc[0] != VOID_T) {
								fail_with("Types de retour incompatible !");
								(yyval.entier) = ERR;
							} else {
								(yyval.entier) = VOID_T;
							}
						}
					}
#line 1855 "ex1.tab.c"
    break;

  case 38:
#line 350 "ex1.y"
                        {
						if ((yyvsp[-1].entier) != ERR) {
							if (funDef == NULL) {
								fail_with("Espace global, retour de valeur impossible !");
								(yyval.entier) = ERR;
							} else {
								if ((funDef->desc[0] == INT_T && (yyvsp[-1].entier) != T_INT)
									|| (funDef->desc[0] == BOOL_T && (yyvsp[-1].entier) != T_BOOL)
									|| (funDef->desc[0] == VOID_T)) {
										fail_with("Types de retour incompatible !");
										(yyval.entier) = ERR;
								} else {
									(yyval.entier) = (yyvsp[-1].entier);
								}
							}
						}
					}
#line 1877 "ex1.tab.c"
    break;

  case 39:
#line 368 "ex1.y"
                                {
 					if ((yyvsp[-1].entier) != ERR){
 						printf("\tpop\n");
 					}
 				}
#line 1887 "ex1.tab.c"
    break;

  case 40:
#line 373 "ex1.y"
                                {
					symbol_table_entry* ste = search_symbol_table((yyvsp[-3].chaine));
					if(ste == NULL){
						fail_with("ID n'existe pas");
					}
					if( (ste->desc[0] == INT_T && (yyvsp[-1].entier) != T_INT) || (ste->desc[0] == BOOL_T && (yyvsp[-1].entier) != T_BOOL)){
						fail_with("Type incompatible");
					}
					printf("; Code affectation variable %s\n"
					"\tpop ax\n"
					"\tconst bx,"VAR_GLOBAL":%s\n"
					"\tstorew ax,bx\n",
					 ste->name, ste->name);
				}
#line 1906 "ex1.tab.c"
    break;

  case 41:
#line 388 "ex1.y"
                                   {
					printf(";si if No %d vrai et instr executé\n"
					"\tconst ax,if:fin:%d\n"
					"\tjmp ax\n\n"
					";si if No %d est faux\n"
					":if:test:neg:%d\n"
					, (yyvsp[-3].entier), (yyvsp[-3].entier), (yyvsp[-3].entier), (yyvsp[-3].entier));
				}
#line 1919 "ex1.tab.c"
    break;

  case 42:
#line 395 "ex1.y"
                                        {
						if ( (yyvsp[-6].entier) != T_BOOL ) { fail_with("condition du if non booleenne \n"); }
						printf(";fin du if No %d\n"
						":if:fin:%d\n"
						, (yyvsp[-5].entier), (yyvsp[-5].entier));
					}
#line 1930 "ex1.tab.c"
    break;

  case 43:
#line 401 "ex1.y"
                              {
				if ( (yyvsp[-3].entier) != T_BOOL ) { fail_with("condition du if non booleenne \n"); }
				printf(";si if No %d est faux\n"
				":if:test:neg:%d\n"
				, (yyvsp[-2].entier), (yyvsp[-2].entier));
			}
#line 1941 "ex1.tab.c"
    break;

  case 44:
#line 407 "ex1.y"
           {
	unsigned int number = new_label_number();
	(yyval.entier) = number;
	printf(":debut:while:%u\n",number);
	}
#line 1951 "ex1.tab.c"
    break;

  case 45:
#line 411 "ex1.y"
             {
		printf("; while No %u\n"
		"\tpop ax\n"
		"\tconst bx,0\n"
		"\tconst cx,fin:while:%u\n"
		"\tcmp ax,bx\n"
		"\tjmpc cx\n"
		, (yyvsp[-1].entier), (yyvsp[-1].entier));
				}
#line 1965 "ex1.tab.c"
    break;

  case 46:
#line 419 "ex1.y"
                                          {
						if( (yyvsp[-3].entier) != T_BOOL ){ fail_with("condition non booléenne\n");}
						printf("; fin tour de boucle\n"
						"\tconst cx,debut:while:%u\n"
						"\tjmp cx\n\n"
						":fin:while:%u\n", (yyvsp[-4].entier), (yyvsp[-4].entier));
							}
#line 1977 "ex1.tab.c"
    break;

  case 47:
#line 426 "ex1.y"
                                {
					if ((yyvsp[-1].entier) == T_INT) {
 						printf("; Pour afficher la valeur calculée, qui se trouve normalement en sommet de pile\n"
						"\tcp ax,sp\n"
						"\tcallprintfd ax\n"
						"\tpop ax\n");
 					} else if ((yyvsp[-1].entier) == T_BOOL) {
						
						unsigned int labelNumber = new_label_number();
						create_label(buffer1, MAXBUF, "%s:%u", PRINT_TRUE, labelNumber);
						create_label(buffer2, MAXBUF, "%s:%u", PRINT_FIN, labelNumber);

 						printf(
							"; Affichage booleen (%d)\n"
							"\tpop ax\n"
							"\tconst bx,1\n"
							"\tconst cx,%s\n"
						// Test (expr1 == true)
							"; Comparaison de expr1 à true\n"
							"\tcmp ax,bx\n"
							"\tjmpc cx\n"
							"; Si expr1 == true saut à "PRINT_TRUE"\n"
						// PRINT_FALSE
							"; Code cible "PRINT_FALSE"\n"
							"\tconst cx,"BOOL_STR_FALSE"\n"
							"\tcallprintfs cx\n"
							"\tconst cx,%s\n"
							"\tjmp cx\n\n"
							"; Saut à "PRINT_FIN"\n\n"
						// PRINT_TRUE
							"; Code cible "PRINT_TRUE"\n"
							":%s\n"
							"\tconst cx,"BOOL_STR_TRUE"\n"
							"\tcallprintfs cx\n\n"
						// PRINT_FIN
							":%s\n",
						labelNumber,
						buffer1,
						buffer2,
						buffer1,
						buffer2);
 					}
				}
#line 2025 "ex1.tab.c"
    break;

  case 48:
#line 472 "ex1.y"
                        {
	 					// Vérifier la comatibilité des types
						// Ajouter l'ID dans la table des symboles en fontion
						//  de la portée de la varible
						// 		* Si analyes de definition de fonction variable locale
						//		* Sinon variable globale
							if (((yyvsp[-1].entier) == T_INT && (yyvsp[-4].entier) == INT_T) || ((yyvsp[-1].entier) == T_BOOL && (yyvsp[-4].entier) == BOOL_T) ) {
								
								symbol_table_entry* var = search_symbol_table((yyvsp[-3].chaine));
								if (var != NULL){
									fail_with("ID existe deja\n");
								}
								
								var = new_symbol_table_entry((yyvsp[-3].chaine));
								var->desc[0] = (yyvsp[-4].entier);

								if (funDef != NULL) {
							// Analyse d'une fonction la variable est locale
							// Mise à jour de la définition de la fonction
									var->class = LOCAL_VARIABLE;
									funDef->nLocalVariables++;
									printf(
										"; Code nouvelle variable locale (%s, %s)\n"
										"\tconst ax,"VAR_LOCAL_VAL":%s:%s\n"
										"\tjmp ax\n\n"
										"; Saut à "VAR_LOCAL_VAL"\n\n"
										":"VAR_LOCAL":%s:%s\n"
										"@int 0\n\n"
										":"VAR_LOCAL_VAL":%s:%s\n"
										"\tpop ax\n"
										"\tconst bx,"VAR_LOCAL":%s:%s\n"
										"\tstorew ax,bx\n",
									funDef->name, (yyvsp[-3].chaine),
									funDef->name, (yyvsp[-3].chaine),
									funDef->name, (yyvsp[-3].chaine),
									funDef->name, (yyvsp[-3].chaine),
									funDef->name, (yyvsp[-3].chaine));
								} else {
							// Aucune analyse de fonction en cours, la variable est globale
									var->class = GLOBAL_VARIABLE;

									printf(
										"; Code nouvelle variable globale %s\n"
										"\tconst ax,"VAR_GLOBAL_VAL":%s\n"
										"\tjmp ax\n\n"
										"; Saut à "VAR_GLOBAL_VAL"\n\n"
										":"VAR_GLOBAL":%s\n"
										"@int 0\n\n"
										":"VAR_GLOBAL_VAL":%s\n"
										"\tpop ax\n"
										"\tconst bx,"VAR_GLOBAL":%s\n"
										"\tstorew ax,bx\n",
									(yyvsp[-3].chaine), (yyvsp[-3].chaine), (yyvsp[-3].chaine), (yyvsp[-3].chaine), (yyvsp[-3].chaine));
								}

								(yyval.entier) = (yyvsp[-1].entier);

							} else {
								(yyval.entier) = ERR;
								fail_with("Type imcompatible !");
							}
						}
#line 2092 "ex1.tab.c"
    break;

  case 49:
#line 534 "ex1.y"
                {
						// Ajouter l'ID dans la table des symboles en fontion
						//  de la portée de la varible
						// 		* Si analye de definition de fonction variable locale
						//		* Sinon variable globale
								symbol_table_entry* var = search_symbol_table((yyvsp[-1].chaine));
								if (var != NULL){
									fail_with("ID existe deja\n");
								}

								var = new_symbol_table_entry((yyvsp[-1].chaine));
								var->desc[0] = (yyvsp[-2].entier);
								
								if (funDef != NULL) {
							// Analyse d'une fonction la variable est locale
							// Mise à jour de la définition de la fonction
									var->class = LOCAL_VARIABLE;
									funDef->nLocalVariables++;
									printf(
										"; Code nouvelle variable locale (%s, %s)\n"
										":"VAR_LOCAL":%s:%s\n"
										"@int 0\n",
									funDef->name, (yyvsp[-1].chaine),
									funDef->name, (yyvsp[-1].chaine));

								} else {
							// Aucune analyse de fonction en cours, la variable est globale
									var->class = GLOBAL_VARIABLE;

									printf(
										"; Code nouvelle variable globale %s\n"
										":"VAR_GLOBAL":%s\n"
										"@int 0\n",
									(yyvsp[-1].chaine), (yyvsp[-1].chaine));
								}

								(yyval.entier) = ((yyvsp[-2].entier) == INT_T) ? T_INT : T_BOOL;
						}
#line 2135 "ex1.tab.c"
    break;

  case 50:
#line 576 "ex1.y"
                                {
						// Vérifation de l'existance de la définition de la fonction
							symbol_table_entry* fun = search_symbol_table((yyvsp[-3].chaine));

							if (fun == NULL) {
								fail_with("ID n'existe pas déja\n");
								(yyval.entier) = ERR;
							}


						// Traitement de l'appel de la function 
						// Vérification de l'appel avec nombre de paramètres correct
							if ((yyvsp[-1].entier) != fun->nParams ) {
								fail_with(
									"Syntaxe incorrecte:\n"
									"\t%s() a %d arguments\n",
								(yyvsp[-3].chaine), (yyvsp[-1].entier));
							}


							//- Exécution de la fonction */
							printf(
								"; Saut à la défintion de %s() pour exécution\n"
								"\tconst dx,"FUN_DEF":%s\n"
								"\tjmp dx\n\n"
								":"FUN_DEF_FIN"%s",
							fun->name,
							fun->name,
							fun->name);

							(yyval.entier) = (fun->desc[0] == INT_T)
								? T_INT
								: T_BOOL;
						}
#line 2174 "ex1.tab.c"
    break;

  case 51:
#line 610 "ex1.y"
                        {
						// Vérifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis évaluer l'addition
						if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT ){
							printf(
								"; Debut addition\n"
								"\tpop ax\n"
								"\tpop bx\n"
								"\tadd bx,ax\n"
								"\tpush bx\n");

							(yyval.entier) = T_INT;
						} else {
							(yyval.entier) = ERR;
						}
					}
#line 2195 "ex1.tab.c"
    break;

  case 52:
#line 626 "ex1.y"
                                {
						// Vérifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis évaluer la soustraction
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT){
								printf(
									"; Debut soustraction\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tsub bx,ax\n"
									"\tpush bx\n");
								(yyval.entier) = T_INT;
							} else {
								(yyval.entier) = ERR;
							}
						}
#line 2215 "ex1.tab.c"
    break;

  case 53:
#line 641 "ex1.y"
                                {
						// Vérifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis évaluer la multiplication
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT){
								printf(
									"; Debut multiplication\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tmul bx,ax\n"
									"\tpush bx\n");
								(yyval.entier) = T_INT;
							} else {
								(yyval.entier) = ERR;
							}
						}
#line 2235 "ex1.tab.c"
    break;

  case 54:
#line 656 "ex1.y"
                                {
						// Vérifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis évaluer la division
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT){
								printf(
									"; Debut division"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tconst cx,"ERR_DIV_ZERO"\n"
									"\tdiv bx,ax\n"
									"\tjmpe cx\n"
									"\tpush bx\n");
								(yyval.entier) = T_INT;
							} else {
								(yyval.entier) = ERR;
							}
						}
#line 2257 "ex1.tab.c"
    break;

  case 55:
#line 673 "ex1.y"
                                        {
							printf(
								"; Ajout du nombre %d\n"
								"\tconst ax,%d\n"
								"\tpush ax\n",
							(yyvsp[0].entier),
							(yyvsp[0].entier));

							(yyval.entier) = T_INT;
						}
#line 2272 "ex1.tab.c"
    break;

  case 56:
#line 684 "ex1.y"
                                { (yyval.entier) = (yyvsp[-1].entier); }
#line 2278 "ex1.tab.c"
    break;

  case 57:
#line 686 "ex1.y"
                                {
						// Vérifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Créer un nouveau label pour anticiper la récursivité
						// puis évaluer le EQ
							if ((yyvsp[-2].entier) == (yyvsp[0].entier) && (yyvsp[-2].entier) != ERR) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", EQ_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", EQ_FIN, labelNumber);

								printf(
									"; Debut EQ (%d)\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tconst cx,%s\n"
								// Test (expr1 == expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Si expr1 == expr2 saut à "EQ_VRAI"\n"
									"; Si expr1 != expr2 code cible "EQ_FAUX"\n"
								//EQ_FAUX
									"; Code cible "EQ_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut à "EQ_FIN"\n"
								//EQ_VRAI
									"; Code cible "EQ_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
								// EQ_FIN
									"; Code cible "EQ_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								(yyval.entier) = T_BOOL;
							} else {
								(yyval.entier) = ERR;
								printf("Erreur de sémentique !\n");
								exit(0);
							}
								printf("; Fin EQ\n");
						}
#line 2332 "ex1.tab.c"
    break;

  case 58:
#line 735 "ex1.y"
                                {
						// Vérifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Créer un nouveau label pour anticiper la récursivité
						// puis évaluer le INF
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", INF_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", INF_FIN, labelNumber);

								printf(
									"; Debut INF (%d)\n"
									"\tpop bx\n"
									"\tpop ax\n"
									"\tconst cx,%s\n"
									// Test (expr1 < expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tsless ax,bx\n"
									"\tjmpc cx\n"
									"; Si (expr1 < expr2) saut à "INF_VRAI"\n"
									"; Si (expr1 !(<) expr2) code cible "INF_FAUX"\n"
									//INF_FAUX
									"; Code cible "INF_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut à "INF_FIN"\n"
									//INF_VRAI
									"; Code cible "INF_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
									// INF_FIN
									"; Code cible "INF_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								(yyval.entier) = T_BOOL;
							} else {
								(yyval.entier) = ERR;
								printf("Erreur de sémentique !\n");
								exit(0);
							}
							printf("; Fin INF\n");
						}
#line 2386 "ex1.tab.c"
    break;

  case 59:
#line 784 "ex1.y"
                        {
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", SUP_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", SUP_FIN, labelNumber);

								printf(
									"; Debut SUP %d\n"
									"\tpop bx\n"
									"\tpop ax\n"
									"\tconst cx,%s\n"
									// Test (expr2 < expr1)
									"; Comparaison de expr1 et expr2\n"
									"\tsless bx,ax\n"
									"\tjmpc cx\n"
									"; Si expr2 < expr1 saut à "SUP_VRAI"\n"
									"; Si expr2 !(<) expr1 code cible "SUP_FAUX"\n"
									//EQ_FAUX
									"; Code cible "SUP_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut à "SUP_FIN"\n"
									//EQ_VRAI
									"; Code cible "SUP_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
									// EQ_FIN
									"; Code cible "SUP_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								(yyval.entier) = T_BOOL;
							} else {
								(yyval.entier) = ERR;
								printf("Erreur de sémentique !\n");
								exit(0);
							}
							printf("; Fin SUP\n");
						}
#line 2437 "ex1.tab.c"
    break;

  case 60:
#line 830 "ex1.y"
                                {
						// Vérifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Créer un nouveau label pour anticiper la récursivité
						// puis évaluer le INF_EQ
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", INF_EQ_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", INF_EQ_FIN, labelNumber);
								
								printf(
									"; Debut INF_EQ %d\n"
									"\tpop bx\n"
									"\tpop ax\n"
									"\tconst cx,%s\n"
									// Test (expr1 == expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Si (expr1 == expr2) saut à "INF_EQ_VRAI"\n"
									// Test (expr1 < expr2)
									"\tsless ax,bx\n"
									"\tjmpc cx\n"
									"; Si (expr1 < expr2) saut à "INF_EQ_VRAI"\n"
									"; Si (expr1 !(<=) expr2) code cible "INF_EQ_FAUX"\n"
									//INF_EQ_FAUX
									"; Code cible "INF_EQ_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									"; Saut à "INF_EQ_FIN"\n"
									//INF_EQ_VRAI
									"; Code cible "INF_EQ_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
									// INF_EQ_FIN
									"; Code cible "INF_EQ_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								(yyval.entier) = T_BOOL;
							} else {
								(yyval.entier) = ERR;
								printf("Erreur de sémentique !\n");
								exit(0);
							}
							printf("; Fin INF_EQ\n");
                      	}
#line 2495 "ex1.tab.c"
    break;

  case 61:
#line 883 "ex1.y"
                                {
						// Vérifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Créer un nouveau label pour anticiper la récursivité
						// puis évaluer le SUP_EQ
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", SUP_EQ_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", SUP_EQ_FIN, labelNumber);
								printf(
									"; Debut SUP_EQ (%d)\n"
									"\tpop bx\n"
									"\tpop ax\n"
									"\tconst cx,%s\n"
								// Test (expr1 == expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Si (expr1 == expr2) saut à "SUP_EQ_VRAI"\n"
								// Test (expr1 < expr2)
									"\tsless bx,ax\n"
									"\tjmpc cx\n"
									"; Si (expr2 < expr1) saut à "SUP_EQ_VRAI"\n"
									"; Si (expr2 !(<=) expr1) code cible "SUP_EQ_FAUX"\n"
								// SUP_EQ_FAUX
									"; Code cible "SUP_EQ_FAUX"\n"
									"\tconst dx,0\n"
									"; Saut à "SUP_EQ_FIN"\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
								// SUP_EQ_VRAI
									"; Code cible "SUP_EQ_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
								// SUP_EQ_FIN
									"; Code cible "SUP_EQ_FIN"\n"
									":%s\n"
									"\tpush dx\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								(yyval.entier) = T_BOOL;
							} else {
								(yyval.entier) = ERR;
								printf("Erreur de sémentique !\n");
								exit(0);
							}
							printf(";Fin INF_EQ\n");
                      	}
#line 2551 "ex1.tab.c"
    break;

  case 62:
#line 934 "ex1.y"
                                {
						// Vérifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// puis évaluer le ET (epxr1 * expr2 car true = 1)
							if ((yyvsp[-2].entier) == T_BOOL && (yyvsp[0].entier) == T_BOOL){
								printf(
									"; Code cible AND\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tmul bx,ax\n"
									"\tpush bx\n");
								(yyval.entier) = T_BOOL;
							} else {
								(yyval.entier) = ERR;
							}
							printf("; Fin AND\n");
						}
#line 2572 "ex1.tab.c"
    break;

  case 63:
#line 950 "ex1.y"
                                {
						// Vérifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Créer un nouveau label pour anticiper la récursivité
						// puis évaluer le OU
							if ((yyvsp[-2].entier) == T_BOOL && (yyvsp[0].entier) == T_BOOL) {
									unsigned int labelNumber = new_label_number();
									create_label(buffer1, MAXBUF, "%s:%u", OR_VRAI, labelNumber);
									create_label(buffer2, MAXBUF, "%s:%u", OR_FIN, labelNumber);
									
									printf(
										"; Debut OU (%d)\n"
										"\tconst cx,%s\n"
										"\tpop bx\n"
										"\tpop ax\n"
									// Test (expr1 == true)
										"; Comparaison à true de expr1\n"
										"\tconst dx,1\n"
										"\tcmp ax,dx\n"
										"\tjmpc cx\n"
										"; Saut à "OR_VRAI" si expr1 == vrai\n"
									// Test (expr2 == true)
										"; Comparaison à true de expr2\n"
										"\tcmp bx,dx\n"
										"\tjmpc cx\n"
										"; Saut à "OR_VRAI" si expr2 est vrai\n"
										"; L'esxpressin est évaluée à false\n"
									// OR_FAUX
										"; Code cible "OR_FAUX"\n"
										"\tconst bx,0\n"
										"\tpush bx\n"
										"\tconst dx,%s\n"
										"\tjmp dx\n\n"
									// OR_VRAI
										"; Code cible "OR_VRAI"\n"
										":%s\n"
										"\tconst bx,1\n"
										"\tpush bx\n"
									// OR_FIN
										"; Code cible "OR_FIN"\n"
										":%s\n",
									labelNumber,
									buffer1,
									buffer2,
									buffer1,
									buffer2);
									(yyval.entier) = T_BOOL;
							} else {
								(yyval.entier) = ERR;
							}
							printf("; Fin OR\n");
						}
#line 2628 "ex1.tab.c"
    break;

  case 64:
#line 1001 "ex1.y"
                                        {
						// Vérifier que expr est de type bool sinon erreur de typage
						// Créer un nouveau label pour anticiper la récursivité
						// puis évaluer la négation
							if ((yyvsp[0].entier) == T_BOOL) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", NEG_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", NEG_FIN, labelNumber);
								printf(
									"; Debut NEG (%d)\n"
									"\tconst cx,%s\n"
									"\tpop ax\n"
								// Test (expr == false)
									"; Comparaison à false\n"
									"\tconst bx,0\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Saut  à "NEG_VRAI" en cas d'égalité\n"
								// NEG_FAUX
									"; La comparison est évaluée à true\n"
									"; Code cible "NEG_FAUX"\n"
									"\tpush bx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									"; Saut  à "NEG_FIN"\n"
								// NEG VRAI
									"; Code cible "NEG_VRAI"\n"
									":%s\n"
									"\tconst bx,1\n"
									"\tpush bx\n"
								// NEG_FIN
									"; Code cible "NEG_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								(yyval.entier) = T_BOOL;

							}else{
								(yyval.entier) = ERR;
							}
							printf("; Fin NEG\n");
						}
#line 2679 "ex1.tab.c"
    break;

  case 65:
#line 1047 "ex1.y"
                                        {
						// Ajouter true en pile
							printf(
								"; Ajout de TRUE\n"
								"\tconst ax,%u\n"
								"\tpush ax\n",
							1);
							(yyval.entier) = T_BOOL;
						}
#line 2693 "ex1.tab.c"
    break;

  case 66:
#line 1056 "ex1.y"
                                        {
						// Ajouter false en pile
							printf(
								"; Ajout de FALSE\n"
								"\tconst ax,%u\n"
								"\tpush ax\n",
							0);
							(yyval.entier) = T_BOOL;
						}
#line 2707 "ex1.tab.c"
    break;

  case 67:
#line 1065 "ex1.y"
                                        {
						// Vérifation de l'existance de la déclaration de la variable
							symbol_table_entry* var = search_symbol_table((yyvsp[0].chaine));

							if (var == NULL){
								//fail_with("%s n'a pas été déclaré\n", $1);
								(yyval.entier) = ERR;
							} else if (funDef == NULL && var->class == GLOBAL_VARIABLE) {
						// Accès à une varibale globale
								printf(
									"; Debut évaluation ID (variable globale)\n"
									"; Recuperation valeur de %s et mise en pile\n"
									"\tconst bx,"VAR_GLOBAL":%s\n"
									"\tloadw ax,bx\n"
									"\tpush ax\n",
								var->name,
								var->name);

								(yyval.entier) = (var->desc[0] == INT_T)
									? T_INT
									: T_BOOL;

							} else if (funDef != NULL && var->class == LOCAL_VARIABLE) {
						// Accès à une varibale locale ou un paramètre
								printf(
									"; Debut évaluation ID (variable locale)\n"
									"; Recuperation valeur de %s:%s et mise en pile\n"
									"\tconst bx,"VAR_LOCAL":%s:%s\n"
									"\tloadw ax,bx\n"
									"\tpush ax\n",
								funDef->name, (yyvsp[0].chaine),
								funDef->name, (yyvsp[0].chaine));
								(yyval.entier) = (var->desc[0] == INT_T)
									? T_INT
									: T_BOOL;
							} else {
						// ID n'est pas une varibale ou un paramètre
								(yyval.entier) = ERR;
							}
						}
#line 2752 "ex1.tab.c"
    break;


#line 2756 "ex1.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1106 "ex1.y"


void yyerror(char const *s) {
  fprintf(stderr, "%s\n", s);
}

static unsigned int new_label_number() {
	static unsigned int current_label_number = 0u;
	if ( current_label_number == UINT_MAX ) {
		fail_with("Error: maximum label number reached!\n");
	}
	return current_label_number++;
}
/*
* char buffer1[MAXBUF], char buffer2[MAXBUF];
* unsigned ln = new_label_number();
* create_label(buffer1, MAXBUF, "%s:%u:%s", "loop", ln, "begin"); // "loop:10:begin"
* create_label(buffer2, MAXBUF, "%s:%u:%s", "loop", ln, "end");  //  "loop:10:end"
*/

static void create_label(char *buf, size_t buf_size, const char *format, ...) {
	va_list ap;
	va_start(ap, format);
	if ( vsnprintf(buf, buf_size, format, ap) >= buf_size ) {
		va_end(ap);
		fail_with("Error in label generation: size of label exceeds maximum size!\n");
	}
	va_end(ap);
}

void fail_with(const char *format, ...) {
	va_list ap;
	va_start(ap, format);
	vfprintf(stderr, format, ap);
	va_end(ap);
	exit(EXIT_FAILURE);
}

int main (int argc, char** argv){
	printf(
		"; Calculette\n"
		"\tconst ax,"PROGRAM_START"\n"
		"\tjmp ax\n\n"
		":"PROGRAM_START"\n"
		"; Préparation de la pile\n"
		"\tconst bp,pile\n"
		"\tconst sp,pile\n"
		"\tconst ax,2\n"
		"\tsub sp,ax\n");

	yyparse();

	printf(
		"\tend\n"
		"; La zone de pile\n"
		":pile\n"
		"@int 0\n\n"
		"; Définition Chaine de charactère boolean faux\n"
		":"BOOL_STR_FALSE"\n"
		"@string \"false\"\n\n"
		"; Définition Chaine de charactère boolean true\n"
		":"BOOL_STR_TRUE"\n"
		"@string \"true\"\n\n"
		"; Définition chaine de charactère erreur de division par zéro\n"
		":"ERR_DIV_ZERO_MSG"\n"
		"@string \"Erreur: division par 0\"\n\n"
		"; Code cible erreur de division par zéro\n"
		":"ERR_DIV_ZERO"\n"
		"\tconst ax,"ERR_DIV_ZERO_MSG"\n"
		"\tcallprintfs ax\n"
		"\tend\n"
	);
	return 0;
}
