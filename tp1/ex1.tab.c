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

  #define DIF_FIN 				"d"IF_FIN""
  #define DIF_VRAI 				"dif:vrai"
  #define DIF_FAUX 				"dif:faux"

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

  #define IF_FIN				"if:fin"
  #define IF_TEST_NEG			"if:test:neg"
  #define DEBUT_WHILE			"debut:while"

  #define WHILE_FAUX			"while:faux"
  #define WHILE_FIN				"fin:while"

  char buffer1[MAXBUF];
  char buffer2[MAXBUF];

  static unsigned int new_label_number();
  static void create_label(char *buf, size_t buf_size, const char *format, ...);
  void fail_with(const char *format, ...);

  symbol_table_entry* funDef = NULL;


#line 164 "ex1.tab.c"

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
    ID = 258,
    VOID_LEX = 259,
    INT_LEX = 260,
    NUMBER = 261,
    BOOL_LEX = 262,
    TRUE = 263,
    FALSE = 264,
    AND = 265,
    OR = 266,
    NEG = 267,
    IF = 268,
    WHILE = 269,
    ELSE = 270,
    NON_ELSE = 271,
    PRINT = 272,
    RETURN = 273,
    EQ = 274,
    DIF = 275,
    SUP = 276,
    SUP_EQ = 277,
    INF = 278,
    INF_EQ = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 95 "ex1.y"
 int entier; char* chaine; 

#line 244 "ex1.tab.c"

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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   355

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

#define YYUNDEFTOK  2
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    29,     2,     2,
      31,    32,    27,    25,    33,    26,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
       2,    37,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   123,   123,   124,   125,   126,   127,   128,   129,   133,
     134,   135,   138,   152,   153,   154,   159,   186,   159,   221,
     222,   227,   270,   315,   326,   327,   331,   332,   336,   337,
     341,   342,   349,   350,   354,   355,   360,   362,   383,   404,
     430,   438,   485,   485,   510,   523,   527,   523,   554,   600,
     675,   725,   761,   778,   794,   810,   828,   849,   860,   862,
     911,   960,  1008,  1053,  1105,  1155,  1172,  1223,  1270,  1279,
    1288
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "VOID_LEX", "INT_LEX", "NUMBER",
  "BOOL_LEX", "TRUE", "FALSE", "AND", "OR", "NEG", "IF", "WHILE", "ELSE",
  "NON_ELSE", "PRINT", "RETURN", "EQ", "DIF", "SUP", "SUP_EQ", "INF",
  "INF_EQ", "'+'", "'-'", "'*'", "'/'", "'%'", "'\\n'", "'('", "')'",
  "','", "'{'", "'}'", "';'", "'='", "$accept", "lignes", "ligne", "fixif",
  "type", "deffun", "$@1", "$@2", "largV", "largs", "blocinstr", "sdeclV",
  "sdecl", "sinstrV", "sinstr", "lexpr", "lexprV", "instr", "$@3", "@4",
  "$@5", "decl", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    43,    45,    42,    47,    37,
      10,    40,    41,    44,   123,   125,    59,    61
};
# endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     130,   -18,   -23,   -38,   -38,   -38,   -38,   -38,   -38,     7,
     -14,   -13,     7,    24,   -38,     7,    67,    98,     1,    19,
     -38,   -38,   -38,   -38,   175,   -38,     7,     7,    -2,     5,
       7,   -38,   195,   -10,   -38,   215,   275,    32,   159,    67,
     -38,   -38,     9,   -38,    10,    11,   -38,   -32,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,   -38,    23,    26,   295,   235,   295,     7,   -38,   -38,
     -38,   -38,   -32,    33,   159,   -38,   -38,   -38,   -38,   -38,
     -38,     7,    28,   326,   315,    37,   295,    37,    37,    37,
      37,    50,    50,     5,     5,     5,     7,   -38,   -38,    35,
     295,   -38,   -38,   255,    67,   295,   159,    41,   -38,    77,
      49,    52,    68,   159,   -38,   -38,    67,   -38,   -38,    48,
      83,   159,   -38,   -38,   -38
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    70,    15,    14,    57,    13,    68,    69,     0,
       0,     0,     0,     0,     8,     0,    24,     0,     0,     0,
      11,    36,     9,    10,     0,     4,    34,     0,    70,    67,
       0,    45,     0,     0,    37,     0,     0,     0,    28,    25,
      26,     1,     0,     6,     0,     0,     7,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    35,     0,    32,     0,    12,     0,    48,    38,
      39,    58,     0,     0,    29,    30,    27,     2,     5,     3,
      50,     0,     0,    65,    66,    59,    60,    62,    64,    61,
      63,    52,    53,    54,    55,    56,     0,    51,    41,     0,
      46,    23,    31,     0,    19,    33,     0,     0,    49,     0,
       0,    20,    44,     0,    21,    17,     0,    42,    47,     0,
       0,     0,    18,    22,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,    70,   -38,   -16,   -38,   -38,   -38,   -38,   -38,
     -30,   -38,   -38,   -38,   -38,   -38,   -38,   -37,   -38,   -38,
     -38,    -5,    -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    17,    18,    99,    19,    20,    82,   119,   110,   111,
      21,    38,    39,    73,    74,    62,    63,    22,   121,    67,
     107,    23,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      37,    75,    45,    29,    80,    81,    32,    35,    26,    36,
      28,    40,    25,     5,    27,     7,     8,    30,    31,     9,
      64,    65,    47,    37,    66,    51,    69,    28,    33,    26,
       5,    46,     7,     8,    76,    72,     9,   102,    15,    77,
      78,    79,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    15,    96,    51,    97,   104,
      34,   100,    56,    57,    58,    59,    60,   106,   101,   112,
      51,     3,     4,   113,     6,   103,   118,    58,    59,    60,
     114,   115,    16,   117,   124,   116,   123,    44,   109,   122,
     105,     0,     0,     0,     0,     0,     0,     0,    41,    42,
     120,     2,     3,     4,     5,     6,     7,     8,     0,     0,
       9,    10,    11,     0,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    15,
       0,     1,    16,     2,     3,     4,     5,     6,     7,     8,
       0,     0,     9,    10,    11,     0,     0,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     2,     0,    16,     5,     0,     7,     8,     0,
       0,     9,    10,    11,     0,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
      15,     0,     0,    16,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    48,    49,     0,     0,     0,
       0,    61,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    48,    49,     0,     0,     0,
       0,    68,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    48,    49,     0,     0,     0,
       0,    70,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    48,    49,     0,     0,     0,
       0,    98,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    48,    49,     0,     0,     0,
       0,   108,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    48,    49,    71,     0,     0,
       0,     0,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    48,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

static const yytype_int8 yycheck[] =
{
      16,    38,     1,     9,    36,    37,    12,    13,    31,    15,
       3,    16,    30,     6,    37,     8,     9,    31,    31,    12,
      26,    27,     3,    39,    30,    20,    36,     3,     4,    31,
       6,    30,     8,     9,    39,     3,    12,    74,    31,    30,
      30,    30,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    31,    33,    20,    32,    31,
      36,    67,    25,    26,    27,    28,    29,    32,    35,   106,
      20,     4,     5,    32,     7,    81,   113,    27,    28,    29,
       3,    32,    34,    15,   121,    33,     3,    17,   104,   119,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,
     116,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,     1,    34,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,     3,    -1,    34,     6,    -1,     8,     9,    -1,
      -1,    12,    13,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,
      31,    -1,    -1,    34,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    10,    11,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    10,    11,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    10,    11,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    10,    11,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    10,    11,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    10,    11,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    12,
      13,    14,    17,    18,    30,    31,    34,    39,    40,    42,
      43,    48,    55,    59,    60,    30,    31,    37,     3,    60,
      31,    31,    60,     4,    36,    60,    60,    42,    49,    50,
      59,     0,     1,    30,    40,     1,    30,     3,    10,    11,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    36,    53,    54,    60,    60,    60,    57,    36,    36,
      36,    32,     3,    51,    52,    55,    59,    30,    30,    30,
      36,    37,    44,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    33,    32,    36,    41,
      60,    35,    55,    60,    31,    60,    32,    58,    36,    42,
      46,    47,    55,    32,     3,    32,    33,    15,    55,    45,
      42,    56,    48,     3,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    39,    39,    39,    39,    39,    40,
      40,    40,    41,    42,    42,    42,    44,    45,    43,    46,
      46,    47,    47,    48,    49,    49,    50,    50,    51,    51,
      52,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    56,    55,    55,    57,    58,    55,    55,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     2,     3,     2,     2,     1,     1,
       1,     1,     0,     1,     1,     1,     0,     0,     8,     0,
       1,     2,     4,     4,     0,     1,     1,     2,     0,     1,
       1,     2,     1,     3,     0,     1,     1,     2,     3,     3,
       2,     4,     0,     9,     6,     0,     0,     7,     3,     5,
       3,     4,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       1
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
#line 123 "ex1.y"
                        {yyerrok;}
#line 1548 "ex1.tab.c"
    break;

  case 3:
#line 124 "ex1.y"
                        {yyerrok; }
#line 1554 "ex1.tab.c"
    break;

  case 4:
#line 125 "ex1.y"
                        {yyerrok; }
#line 1560 "ex1.tab.c"
    break;

  case 12:
#line 139 "ex1.y"
{
	unsigned int number = new_label_number();
	(yyval.entier) = number;
	printf("; If No %d\n"
	"\tpop ax\n"
	"\tconst bx,0\n"
	"\tconst cx,"IF_TEST_NEG":%d\n"
	"\tcmp ax,bx\n"
	"\tjmpc cx\n"
	, number, number);
}
#line 1576 "ex1.tab.c"
    break;

  case 13:
#line 152 "ex1.y"
                { (yyval.entier) = BOOL_T; }
#line 1582 "ex1.tab.c"
    break;

  case 14:
#line 153 "ex1.y"
                { (yyval.entier) = INT_T; }
#line 1588 "ex1.tab.c"
    break;

  case 15:
#line 154 "ex1.y"
                { (yyval.entier) = VOID_T; }
#line 1594 "ex1.tab.c"
    break;

  case 16:
#line 159 "ex1.y"
                {

			// V??rifier qu'aucune fontion n'est en analyse
				if (funDef != NULL) {
					fail_with("Erreur syntaxique: d??finition de fonction dans l'espace locale de %s() \n\n", funDef->name);
				}
			// V??rification de l'unicit?? de l'identifiant de la fonction
				funDef = search_symbol_table((yyvsp[0].chaine));
				if (funDef != NULL) {
					fail_with("Erreur: %s() est d??j?? d??fini\n\n", (yyvsp[0].chaine));
				}

			/* Ajout de l'identifiant de la fontion dans la
			table des symboles et pr??paration du traitement 
			de la d??finition de la fontion */
				funDef = new_symbol_table_entry((yyvsp[0].chaine));
				funDef->class = FUNCTION;
				funDef->nParams = 0;
				funDef->nLocalVariables = 0;
				funDef->desc[0] = (yyvsp[-1].entier);
				printf(
					"; Saut ?? fin d??finition %s()\n"
					"\tconst dx,"FUN_DEF_FIN":%s\n"
					"\tjmp dx\n\n",
				funDef->name,
				funDef->name);

			}
#line 1627 "ex1.tab.c"
    break;

  case 17:
#line 186 "ex1.y"
                                        {
					printf(":"FUN_DEF":%s\n", (yyvsp[-4].chaine));

				for (int i = funDef->nParams; i > 0 ; i--) {
					printf(
						"; Saut ?? l'initialisation du param??tre %d de %s()\n"
						"\tconst dx,"VAR_PARAM_INIT":%s:%d\n"
						"\tjmp dx\n\n"
						":"VAR_PARAM_INIT_FIN":%s:%d\n",
					i, funDef->name,
					funDef->name, i,
					funDef->name, i
					);
				}
				printf(
					"; D??but de l'ex??cution de %s()\n",
				funDef->name);

			}
#line 1651 "ex1.tab.c"
    break;

  case 18:
#line 204 "ex1.y"
                                    {

			/* Fin de traitement de la d??finition de la fonction donc
			 lib??ration  des ressources */
				for (int i = 0; i < funDef->nParams; i++){
					free_first_symbol_table_entry();
				}
				printf(
					"; Saut ?? la fin de l'ex??cution du code de %s()\n"
					":"FUN_DEF_FIN":%s\n",
				funDef->name,
				funDef->name);
				funDef = NULL;
			}
#line 1670 "ex1.tab.c"
    break;

  case 19:
#line 221 "ex1.y"
                        { (yyval.entier) = 0; }
#line 1676 "ex1.tab.c"
    break;

  case 20:
#line 222 "ex1.y"
                        { (yyval.entier) = (yyvsp[0].entier); }
#line 1682 "ex1.tab.c"
    break;

  case 21:
#line 227 "ex1.y"
                                {
					// V??rification de l'unicit?? de l'identifiant de l'argument
						symbol_table_entry* funArg = search_symbol_table((yyvsp[0].chaine));
						if (funArg != NULL){
							fail_with(
								"Erreur: %s est d??j?? d??fini dans %s()\n\n",
							(yyvsp[0].chaine), funDef->name);
						}

					/* Ajout de l'identifiant de l'argument dans la
					table des symboles */
						funArg =  new_symbol_table_entry((yyvsp[0].chaine));
						funArg->class = LOCAL_VARIABLE;
						funArg->desc[0] = (yyvsp[-1].entier);

					/* Mise ?? jour des informations de d??finition de
					la fontion dans la table des symboles */
						funDef->desc[funDef->nParams] = (yyvsp[-1].entier);
						funDef->nParams++;

						printf(
							"; Code de d??finition et d'initialisation du param??tre %s de %s()\n"
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
#line 1729 "ex1.tab.c"
    break;

  case 22:
#line 270 "ex1.y"
                        {
					// V??rification de l'unicit?? de l'identifiant de l'argument
						symbol_table_entry* funArg = search_symbol_table((yyvsp[0].chaine));
						if (funArg != NULL){
							fail_with("Erreur: %s est d??j?? d??fini dans %s()\n\n",
							(yyvsp[0].chaine), funDef->name);
						}

					/* Ajout de l'identifiant de l'argument dans la
					table des symboles */
						funArg =  new_symbol_table_entry((yyvsp[0].chaine));
						funArg->class = LOCAL_VARIABLE;
						funArg->desc[0] = (yyvsp[-1].entier);

					/* Mise ?? jour des informations de d??finition de
					la fontion dans la table des symboles */
						funDef->nParams++;
						funDef->desc[funDef->nParams] = (yyvsp[-1].entier);

						
						printf(
							"; Code de d??finition du param??tre %s de %s()\n"
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
#line 1776 "ex1.tab.c"
    break;

  case 23:
#line 315 "ex1.y"
                        {
	 					// Lib??rer les d??finitions de varibles locales
						// de la table des symbolse
							for (int i = 0; i < (yyvsp[-2].entier); i++) {
								free_first_symbol_table_entry();
							}
							(yyval.entier) = (yyvsp[-2].entier) + (yyvsp[-1].entier);
						}
#line 1789 "ex1.tab.c"
    break;

  case 24:
#line 326 "ex1.y"
                        { (yyval.entier) = 0; }
#line 1795 "ex1.tab.c"
    break;

  case 25:
#line 327 "ex1.y"
                        { (yyval.entier) = (yyvsp[0].entier); }
#line 1801 "ex1.tab.c"
    break;

  case 26:
#line 331 "ex1.y"
                        { (yyval.entier) = 1; }
#line 1807 "ex1.tab.c"
    break;

  case 27:
#line 332 "ex1.y"
                { (yyval.entier) = (yyvsp[-1].entier) + 1; }
#line 1813 "ex1.tab.c"
    break;

  case 28:
#line 336 "ex1.y"
                        { (yyval.entier) = 0; }
#line 1819 "ex1.tab.c"
    break;

  case 29:
#line 337 "ex1.y"
                        { (yyval.entier) = (yyvsp[0].entier); }
#line 1825 "ex1.tab.c"
    break;

  case 30:
#line 341 "ex1.y"
                        { (yyval.entier) = 1; }
#line 1831 "ex1.tab.c"
    break;

  case 31:
#line 342 "ex1.y"
                { (yyval.entier) = (yyvsp[-1].entier) +1; }
#line 1837 "ex1.tab.c"
    break;

  case 32:
#line 349 "ex1.y"
                        { (yyval.entier) = 1;  }
#line 1843 "ex1.tab.c"
    break;

  case 33:
#line 350 "ex1.y"
                        { (yyval.entier) = (yyvsp[-2].entier) + 1;}
#line 1849 "ex1.tab.c"
    break;

  case 34:
#line 354 "ex1.y"
                        { (yyval.entier) = 0; }
#line 1855 "ex1.tab.c"
    break;

  case 35:
#line 355 "ex1.y"
                        { (yyval.entier) = (yyvsp[0].entier); }
#line 1861 "ex1.tab.c"
    break;

  case 36:
#line 360 "ex1.y"
                                { (yyval.entier) = (yyvsp[0].entier); }
#line 1867 "ex1.tab.c"
    break;

  case 37:
#line 362 "ex1.y"
                        {
					// Si espace global erreur
					// Sinon si analyse de fonction en cours et
					// type de retour de f() != VOID erreur
						if (funDef == NULL) {
							fail_with(
								"Erreur: espace global, retour de valeur impossible !\n\n");
								(yyval.entier) = ERR;
						} else {
							if (funDef->desc[0] != VOID_T) {
								fail_with(
									"Erreur: type de retour incompatible:\n"
									"\t%s %s() retourne void!\n\n",
								(funDef->desc[0] == INT_T ? "int" : "bool" ), funDef->name);
								(yyval.entier) = ERR;
							} else {
								(yyval.entier) = VOID_T;
							}
						}
					}
#line 1892 "ex1.tab.c"
    break;

  case 38:
#line 383 "ex1.y"
                                {
// Si espace global erreur
// Sinon si analyse de fonction en cours et
// type de retour de f() != VOID erreur
	if (funDef == NULL) {
		fail_with(
			"Erreur: espace global, retour de valeur impossible !\n\n");
			(yyval.entier) = ERR;
	} else {
		if (funDef->desc[0] != VOID_T) {
			fail_with(
				"Erreur: type de retour incompatible:\n"
				"\t%s %s() retourne void!\n\n",
			(funDef->desc[0] == INT_T ? "int" : "bool" ), funDef->name);
			(yyval.entier) = ERR;
		} else {
			(yyval.entier) = VOID_T;
		}
	}
}
#line 1917 "ex1.tab.c"
    break;

  case 39:
#line 404 "ex1.y"
                        {
					// Si espace global erreur
					// Sinon si analyse de fonction en cours et
					// type de retour de f() != type de expr erreur
						if (funDef == NULL) {
							fail_with(
								"Erreur: espace global, retour de valeur impossible !\n\n");
								(yyval.entier) = ERR;
						} else {
							if (   (funDef->desc[0] == INT_T && (yyvsp[-1].entier) != T_INT)
								|| (funDef->desc[0] == BOOL_T && (yyvsp[-1].entier) != T_BOOL)
								|| (funDef->desc[0] == VOID_T)) {
									(yyval.entier) = ERR;
									fail_with(
										"Erreur: type de retour incompatible:\n"
										"\t%s %s() retourne %s!\n\n",
									(funDef->desc[0] == INT_T ? "int" : (funDef->desc[0] == BOOL_T ? "bool" : "void") ),
									funDef->name,
									((yyvsp[-1].entier) == T_INT ? "int" : "bool"));
							} else {
								(yyval.entier) = (yyvsp[-1].entier);
							}
						}

					}
#line 1947 "ex1.tab.c"
    break;

  case 40:
#line 430 "ex1.y"
                                        {
							if ((yyvsp[-1].entier) != ERR){
								printf(
									"; R??sultat de expr non ??valu??"
									"\tpop\n"
								);
							}
						}
#line 1960 "ex1.tab.c"
    break;

  case 41:
#line 438 "ex1.y"
                                {
					// V??rifier si ID a ??t?? d??clar??et est une variable, sinon erreur
					// G??n??rer le cde d'affectation d'une variable
							symbol_table_entry* var = search_symbol_table((yyvsp[-3].chaine));

							if (var == NULL) {
								fail_with("Erreur: variable %s non d??clar?? !\n\n", (yyvsp[-3].chaine));
								(yyval.entier) = ERR;
							} else if ( var->class == FUNCTION) {
								fail_with("Erreur: %s() est une fonction !\n\n", (yyvsp[-3].chaine));
								(yyval.entier) = ERR;
							}

							if ( (var->desc[0] == INT_T && (yyvsp[-1].entier) != T_INT)
								|| (var->desc[0] == BOOL_T && (yyvsp[-1].entier) != T_BOOL)) {
						// V??rification de la compatibilit?? des types
								fail_with(
									"Erreur: type incompatible\n"
									"\t%s est de type %s, affectation de %s\n\n", 
									(yyvsp[-3].chaine), ((var->desc[0] == INT_T) ? "int" : "bool"),
									(((yyvsp[-1].entier) == T_INT) ? "int" : "bool"));

									(yyval.entier) = ERR;
							}

							if (funDef == NULL) {
						// Espace global, la variable est donc globale
								printf(
									"; Code affectation variable globale %s\n"
									"\tpop ax\n"
									"\tconst bx,"VAR_GLOBAL":%s\n"
									"\tstorew ax,bx\n",
								(yyvsp[-3].chaine), (yyvsp[-3].chaine));
							} else {
						// Analyse d'une fonction en cours, la variable est locale
								printf(
									"; Code affectation variable locale %s de %s\n"
									"\tpop ax\n"
									"\tconst bx,"VAR_LOCAL":%s:%s\n"
									"\tstorew ax,bx\n",
								(yyvsp[-3].chaine), funDef->name,
								funDef->name, (yyvsp[-3].chaine));
							}

							(yyval.entier) = (yyvsp[-1].entier);
						}
#line 2011 "ex1.tab.c"
    break;

  case 42:
#line 485 "ex1.y"
                                        {
				// Else est vrai
					printf(
						"; Si [else (expr)] == vrai \n"
						"\tconst ax,"IF_FIN":%d\n"
						"\tjmp ax\n"
						"; Saut ?? "IF_FIN"\n\n"
						"; Si [else (expr)] == faux\n"
						":"IF_TEST_NEG":%d\n",
					(yyvsp[-3].entier),
					(yyvsp[-3].entier));

							}
#line 2029 "ex1.tab.c"
    break;

  case 43:
#line 497 "ex1.y"
                                                                {
										if ( (yyvsp[-6].entier) != T_BOOL ) {
											fail_with(
												"Erreur: test de condition non bool??eene dans\n"
												"\t if (expr)\n\n"
											);
										}
									// Fin ELSE
										printf(
											"; Fin else %d\n"
											":"IF_FIN":%d\n"
										, (yyvsp[-5].entier), (yyvsp[-5].entier));
									}
#line 2047 "ex1.tab.c"
    break;

  case 44:
#line 510 "ex1.y"
                                        {
										if ( (yyvsp[-3].entier) != T_BOOL ) { 
											fail_with(
												"Erreur: test de condition non bool??eene dans\n"
												"\t if (expr)\n\n"
											);
										}
									// ELSE_FAUX
										printf(
											"; Si [else (expr)] == faux\n"
											":"IF_TEST_NEG":%d\n",
										(yyvsp[-2].entier));
									}
#line 2065 "ex1.tab.c"
    break;

  case 45:
#line 523 "ex1.y"
                                                                {
										unsigned int labelNumber = new_label_number();
										(yyval.entier) = labelNumber;
										printf(":"DEBUT_WHILE":%u\n",labelNumber);
									}
#line 2075 "ex1.tab.c"
    break;

  case 46:
#line 527 "ex1.y"
                                                                               {
										printf(
											"; Code cible WHILE_FAUX:%d\n" 
											"\tpop ax\n"
											"\tconst bx,0\n"
											"\tconst cx,"WHILE_FIN":%d\n"
										// Test (expr == faux)
											"\tcmp ax,bx\n"
											"\tjmpc cx\n"
											"; Si (expr == faux) saut ?? "WHILE_FIN"\n",
										(yyvsp[-1].entier), (yyvsp[-1].entier));
									}
#line 2092 "ex1.tab.c"
    break;

  case 47:
#line 538 "ex1.y"
                                                                                    {
										
									// WHILE_VRAI
									// V??rifier si expr est bool??en
										if ( (yyvsp[-3].entier) != T_BOOL ) { 
											fail_with(
												"Erreur: test de condition non bool??eene dans\n"
												"\t while (expr) { ... }\n\n"
											);
										}
										printf("; Fin tour de boucle\n"
										"\tconst cx,"DEBUT_WHILE":%u\n"
										"\tjmp cx\n\n"
									// WHILE_FIN
										":"WHILE_FIN":%u\n", (yyvsp[-4].entier), (yyvsp[-4].entier));
									}
#line 2113 "ex1.tab.c"
    break;

  case 48:
#line 554 "ex1.y"
                                {
					if ((yyvsp[-1].entier) == T_INT) {
 						printf("; Pour afficher la valeur calcul??e, qui se trouve normalement en sommet de pile\n"
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
							"; Comparaison de expr1 ?? true\n"
							"\tcmp ax,bx\n"
							"\tjmpc cx\n"
							"; Si expr1 == true saut ?? "PRINT_TRUE"\n"
						// PRINT_FALSE
							"; Code cible "PRINT_FALSE"\n"
							"\tconst cx,"BOOL_STR_FALSE"\n"
							"\tcallprintfs cx\n"
							"\tconst cx,%s\n"
							"\tjmp cx\n\n"
							"; Saut ?? "PRINT_FIN"\n\n"
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
#line 2161 "ex1.tab.c"
    break;

  case 49:
#line 600 "ex1.y"
                        {
	 					// V??rifier la comatibilit?? des types
						// Ajouter l'ID dans la table des symboles en fontion
						//  de la port??e de la varible
						// 		* Si analyes de definition de fonction variable locale
						//		* Sinon variable globale
							if (((yyvsp[-1].entier) == T_INT && (yyvsp[-4].entier) == INT_T) || ((yyvsp[-1].entier) == T_BOOL && (yyvsp[-4].entier) == BOOL_T) ) {
								
								symbol_table_entry* var = search_symbol_table((yyvsp[-3].chaine));
								if (var != NULL){
									fail_with(
										"Erreur: %s est d??j?? d??clar??\n\n",
									(yyvsp[-3].chaine));
								}
								
								var = new_symbol_table_entry((yyvsp[-3].chaine));
								var->desc[0] = (yyvsp[-4].entier);

								if (funDef != NULL) {
							// Analyse d'une fonction la variable est locale
							// Mise ?? jour de la d??finition de la fonction
									var->class = LOCAL_VARIABLE;
									funDef->nLocalVariables++;
									printf(
										"; Code nouvelle variable locale (%s, %s)\n"
										"\tconst ax,"VAR_LOCAL_VAL":%s:%s\n"
										"\tjmp ax\n\n"
										"; Saut ?? "VAR_LOCAL_VAL"\n\n"
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
										"; Saut ?? "VAR_GLOBAL_VAL"\n\n"
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

								if ((yyvsp[-4].entier) == VOID_T) {
									fail_with(
									"Erreur syntaxique: d??claration de variable incorrecte\n"
									"\tvoid  %s;\n\n", (yyvsp[-3].chaine));
								} else {
									fail_with(
										"Erreur: type incompatible\n"
										"\t%s est de type %s, affectation de %s\n\n", 
										(yyvsp[-4].entier), (((yyvsp[-4].entier) == INT_T) ? "int" : "bool"),
										(((yyvsp[-1].entier) == T_INT) ? "int" : "bool"));
								}
							}
						}
#line 2241 "ex1.tab.c"
    break;

  case 50:
#line 675 "ex1.y"
                {
						// V??rifier la syntaxe de la d??claration
						// Ajouter l'ID dans la table des symboles en fontion
						//  de la port??e de la varible
						// 		* Si analye de definition de fonction variable locale
						//		* Sinon variable globale
								if ((yyvsp[-2].entier) == VOID_T) {
									fail_with(
									"Erreur syntaxique: d??claration de variable incorrecte\n"
									"\tvoid  %s;\n\n", (yyvsp[-1].chaine));
								}
								symbol_table_entry* var = search_symbol_table((yyvsp[-1].chaine));
								if (var != NULL){
									fail_with(
										"Erreur: %s est d??j?? d??clar??\n\n",
									(yyvsp[-1].chaine));
								}

								var = new_symbol_table_entry((yyvsp[-1].chaine));
								var->desc[0] = (yyvsp[-2].entier);
								
								if (funDef != NULL) {
							// Analyse d'une fonction la variable est locale
							// Mise ?? jour de la d??finition de la fonction
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
#line 2292 "ex1.tab.c"
    break;

  case 51:
#line 725 "ex1.y"
                                {
						// V??rifation de l'existance de la d??finition de la fonction
							symbol_table_entry* fun = search_symbol_table((yyvsp[-3].chaine));

							if (fun == NULL) {
								fail_with(
									"Erreur: %s n'est pas d??j?? d??clar??\n\n",
								(yyvsp[-3].chaine));
								(yyval.entier) = ERR;
							}


						// Traitement de l'appel de la function 
						// V??rification de l'appel avec nombre de param??tres correct
							if ((yyvsp[-1].entier) != fun->nParams ) {
								fail_with(
									"Syntaxe incorrecte:\n"
									"\t%s() a %d arguments\n",
								(yyvsp[-3].chaine), (yyvsp[-1].entier));
							}


							//- Ex??cution de la fonction */
							printf(
								"; Saut ?? la d??fintion de %s() pour ex??cution\n"
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
#line 2333 "ex1.tab.c"
    break;

  case 52:
#line 761 "ex1.y"
                        {
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer l'addition
						if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT ){
							printf(
								"; Debut addition\n"
								"\tpop ax\n"
								"\tpop bx\n"
								"\tadd bx,ax\n"
								"\tpush bx\n");

							(yyval.entier) = T_INT;
						} else {
							fail_with("Erreur: erreur arithm??tique !\n\n");
							(yyval.entier) = ERR;
						}
					}
#line 2355 "ex1.tab.c"
    break;

  case 53:
#line 778 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer la soustraction
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT){
								printf(
									"; Debut soustraction\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tsub bx,ax\n"
									"\tpush bx\n");
								(yyval.entier) = T_INT;
							} else {
								fail_with("Erreur: erreur arithm??tique !\n\n");
								(yyval.entier) = ERR;
							}
						}
#line 2376 "ex1.tab.c"
    break;

  case 54:
#line 794 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer la multiplication
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT){
								printf(
									"; Debut multiplication\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tmul bx,ax\n"
									"\tpush bx\n");
								(yyval.entier) = T_INT;
							} else {
								fail_with("Erreur: erreur arithm??tique !\n\n");
								(yyval.entier) = ERR;
							}
						}
#line 2397 "ex1.tab.c"
    break;

  case 55:
#line 810 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer la division
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
								fail_with("Erreur: erreur arithm??tique !\n\n");
								(yyval.entier) = ERR;
							}
						}
#line 2420 "ex1.tab.c"
    break;

  case 56:
#line 828 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer la modulo
							if ((yyvsp[-2].entier) == T_INT && (yyvsp[0].entier) == T_INT){
								printf(
									"; Debut modulo\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tcp cx,bx\n"
									"\tconst dx,"ERR_DIV_ZERO"\n"
									"\tdiv bx,ax\n"
									"\tjmpe dx\n"
									"\tmul bx,ax\n"
									"\tsub cx,bx\n"
									"\tpush cx\n");
								(yyval.entier) = T_INT;
							} else {
								fail_with("Erreur: erreur arithm??tique !\n\n");
								(yyval.entier) = ERR;
							}
						}
#line 2446 "ex1.tab.c"
    break;

  case 57:
#line 849 "ex1.y"
                                        {
							printf(
								"; Ajout du nombre %d\n"
								"\tconst ax,%d\n"
								"\tpush ax\n",
							(yyvsp[0].entier),
							(yyvsp[0].entier));

							(yyval.entier) = T_INT;
						}
#line 2461 "ex1.tab.c"
    break;

  case 58:
#line 860 "ex1.y"
                                { (yyval.entier) = (yyvsp[-1].entier); }
#line 2467 "ex1.tab.c"
    break;

  case 59:
#line 862 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le EQ
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
									"; Si expr1 == expr2 saut ?? "EQ_VRAI"\n"
									"; Si expr1 != expr2 code cible "EQ_FAUX"\n"
								//EQ_FAUX
									"; Code cible "EQ_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut ?? "EQ_FIN"\n"
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
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
								printf("; Fin EQ\n");
						}
#line 2520 "ex1.tab.c"
    break;

  case 60:
#line 911 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le DIF
							if ((yyvsp[-2].entier) == (yyvsp[0].entier) && (yyvsp[-2].entier) != ERR) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", DIF_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", DIF_FIN, labelNumber);

								printf(
									"; Debut DIF (%d)\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tconst cx,%s\n"
								// Test (expr1 == expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Si expr1 == expr2 saut ?? "DIF_FAUX"\n"
									"; Si expr1 != expr2 code cible "DIF_VRAI"\n"
								// DIF_VRAI
									"; Code cible "DIF_VRAI"\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut ?? "DIF_FIN"\n"
								// DIF_FAUX
									"; Code cible "DIF_FAUX"\n"
									":%s\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
								// DIF_FIN
									"; Code cible "DIF_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								(yyval.entier) = T_BOOL;
							} else {
								(yyval.entier) = ERR;
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
								printf("; Fin DIF\n");
						}
#line 2573 "ex1.tab.c"
    break;

  case 61:
#line 960 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le INF
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
									"; Si (expr1 < expr2) saut ?? "INF_VRAI"\n"
									"; Si (expr1 !(<) expr2) code cible "INF_FAUX"\n"
									//INF_FAUX
									"; Code cible "INF_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut ?? "INF_FIN"\n"
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
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
							printf("; Fin INF\n");
						}
#line 2626 "ex1.tab.c"
    break;

  case 62:
#line 1008 "ex1.y"
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
									"; Si expr2 < expr1 saut ?? "SUP_VRAI"\n"
									"; Si expr2 !(<) expr1 code cible "SUP_FAUX"\n"
									//EQ_FAUX
									"; Code cible "SUP_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut ?? "SUP_FIN"\n"
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
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
							printf("; Fin SUP\n");
						}
#line 2676 "ex1.tab.c"
    break;

  case 63:
#line 1053 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le INF_EQ
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
									"; Si (expr1 == expr2) saut ?? "INF_EQ_VRAI"\n"
									// Test (expr1 < expr2)
									"\tsless ax,bx\n"
									"\tjmpc cx\n"
									"; Si (expr1 < expr2) saut ?? "INF_EQ_VRAI"\n"
									"; Si (expr1 !(<=) expr2) code cible "INF_EQ_FAUX"\n"
									//INF_EQ_FAUX
									"; Code cible "INF_EQ_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									"; Saut ?? "INF_EQ_FIN"\n"
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
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
							printf("; Fin INF_EQ\n");
                      	}
#line 2733 "ex1.tab.c"
    break;

  case 64:
#line 1105 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le SUP_EQ
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
									"; Si (expr1 == expr2) saut ?? "SUP_EQ_VRAI"\n"
								// Test (expr1 < expr2)
									"\tsless bx,ax\n"
									"\tjmpc cx\n"
									"; Si (expr2 < expr1) saut ?? "SUP_EQ_VRAI"\n"
									"; Si (expr2 !(<=) expr1) code cible "SUP_EQ_FAUX"\n"
								// SUP_EQ_FAUX
									"; Code cible "SUP_EQ_FAUX"\n"
									"\tconst dx,0\n"
									"; Saut ?? "SUP_EQ_FIN"\n"
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
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
							printf(";Fin INF_EQ\n");
                      	}
#line 2788 "ex1.tab.c"
    break;

  case 65:
#line 1155 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// puis ??valuer le ET (epxr1 * expr2 car true = 1)
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
								fail_with("Erreur: erreur arithm??tique !\n\n");
							}
							printf("; Fin AND\n");
						}
#line 2810 "ex1.tab.c"
    break;

  case 66:
#line 1172 "ex1.y"
                                {
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le OU
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
										"; Comparaison ?? true de expr1\n"
										"\tconst dx,1\n"
										"\tcmp ax,dx\n"
										"\tjmpc cx\n"
										"; Saut ?? "OR_VRAI" si expr1 == vrai\n"
									// Test (expr2 == true)
										"; Comparaison ?? true de expr2\n"
										"\tcmp bx,dx\n"
										"\tjmpc cx\n"
										"; Saut ?? "OR_VRAI" si expr2 est vrai\n"
										"; L'esxpressin est ??valu??e ?? false\n"
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
#line 2866 "ex1.tab.c"
    break;

  case 67:
#line 1223 "ex1.y"
                                        {
						// V??rifier que expr est de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer la n??gation
							if ((yyvsp[0].entier) == T_BOOL) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", NEG_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", NEG_FIN, labelNumber);
								printf(
									"; Debut NEG (%d)\n"
									"\tconst cx,%s\n"
									"\tpop ax\n"
								// Test (expr == false)
									"; Comparaison ?? false\n"
									"\tconst bx,0\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Saut  ?? "NEG_VRAI" en cas d'??galit??\n"
								// NEG_FAUX
									"; La comparison est ??valu??e ?? true\n"
									"; Code cible "NEG_FAUX"\n"
									"\tpush bx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									"; Saut  ?? "NEG_FIN"\n"
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
								fail_with("Erreur: erreur arithm??tique !\n\n");
							}
							printf("; Fin NEG\n");
						}
#line 2918 "ex1.tab.c"
    break;

  case 68:
#line 1270 "ex1.y"
                                        {
						// Ajouter true en pile
							printf(
								"; Ajout de TRUE\n"
								"\tconst ax,%u\n"
								"\tpush ax\n",
							1);
							(yyval.entier) = T_BOOL;
						}
#line 2932 "ex1.tab.c"
    break;

  case 69:
#line 1279 "ex1.y"
                                        {
						// Ajouter false en pile
							printf(
								"; Ajout de FALSE\n"
								"\tconst ax,%u\n"
								"\tpush ax\n",
							0);
							(yyval.entier) = T_BOOL;
						}
#line 2946 "ex1.tab.c"
    break;

  case 70:
#line 1288 "ex1.y"
                                        {
						// V??rifation de l'existance de la d??claration de la variable
							symbol_table_entry* var = search_symbol_table((yyvsp[0].chaine));

							if (var == NULL){
								//fail_with("%s n'a pas ??t?? d??clar??\n", $1);
								(yyval.entier) = ERR;
							} else if (funDef == NULL && var->class == GLOBAL_VARIABLE) {
						// Acc??s ?? une varibale globale
								printf(
									"; Debut ??valuation ID (variable globale)\n"
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
						// Acc??s ?? une varibale locale ou un param??tre
								printf(
									"; Debut ??valuation ID (variable locale)\n"
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
						// ID n'est pas une varibale ou un param??tre
							fail_with("Erreur: id n'est pas une variable ou un param??tre !\n\n");
								(yyval.entier) = ERR;
							}
						}
#line 2992 "ex1.tab.c"
    break;


#line 2996 "ex1.tab.c"

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
#line 1330 "ex1.y"


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
		"; Pr??paration de la pile\n"
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
		"; D??finition Chaine de charact??re boolean faux\n"
		":"BOOL_STR_FALSE"\n"
		"@string \"false\"\n\n"
		"; D??finition Chaine de charact??re boolean true\n"
		":"BOOL_STR_TRUE"\n"
		"@string \"true\"\n\n"
		"; D??finition chaine de charact??re erreur de division par z??ro\n"
		":"ERR_DIV_ZERO_MSG"\n"
		"@string \"Erreur: division par 0\"\n\n"
		"; Code cible erreur de division par z??ro\n"
		":"ERR_DIV_ZERO"\n"
		"\tconst ax,"ERR_DIV_ZERO_MSG"\n"
		"\tcallprintfs ax\n"
		"\tend\n"
	);
	return 0;
}
