/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ftp_parser.ypp" /* yacc.c:339  */

#include "ftp.h"
#include "ftp_parser.h"
#include "ftp_lexer.h"
#include <assert.h>

#line 73 "ftp_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ftp_parser.h".  */
#ifndef YY_YY_FTP_PARSER_H_INCLUDED
# define YY_YY_FTP_PARSER_H_INCLUDED
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
    NUMBER_FTP_ARG = 258,
    STRING_FTP_ARG = 259,
    CHAR_FTP_ARG = 260,
    CRLF_FTP_SEP = 261,
    SPACE_FTP_SEP = 262,
    PUNCT_FTP_SEP = 263,
    USER_FTP_COMMAND = 264,
    PASS_FTP_COMMAND = 265,
    QUIT_FTP_COMMAND = 266,
    PORT_FTP_COMMAND = 267,
    PASV_FTP_COMMAND = 268,
    MODE_FTP_COMMAND = 269,
    TYPE_FTP_COMMAND = 270,
    STRU_FTP_COMMAND = 271,
    REST_FTP_COMMAND = 272,
    RETR_FTP_COMMAND = 273,
    LIST_FTP_COMMAND = 274,
    NLST_FTP_COMMAND = 275,
    ABOR_FTP_COMMAND = 276,
    CWD_FTP_COMMAND = 277,
    CDUP_FTP_COMMAND = 278,
    PWD_FTP_COMMAND = 279,
    ALLO_FTP_COMMAND = 280,
    STOR_FTP_COMMAND = 281,
    STOU_FTP_COMMAND = 282,
    DELE_FTP_COMMAND = 283,
    APPE_FTP_COMMAND = 284,
    MKD_FTP_COMMAND = 285,
    RMD_FTP_COMMAND = 286,
    RNFR_FTP_COMMAND = 287,
    RNTO_FTP_COMMAND = 288,
    HELP_FTP_COMMAND = 289,
    SYST_FTP_COMMAND = 290,
    STAT_FTP_COMMAND = 291,
    NOOP_FTP_COMMAND = 292,
    SITE_FTP_COMMAND = 293,
    CHMOD_FTP_COMMAND = 294,
    UTIME_FTP_COMMAND = 295,
    SIZE_FTP_COMMAND = 296
  };
#endif
/* Tokens.  */
#define NUMBER_FTP_ARG 258
#define STRING_FTP_ARG 259
#define CHAR_FTP_ARG 260
#define CRLF_FTP_SEP 261
#define SPACE_FTP_SEP 262
#define PUNCT_FTP_SEP 263
#define USER_FTP_COMMAND 264
#define PASS_FTP_COMMAND 265
#define QUIT_FTP_COMMAND 266
#define PORT_FTP_COMMAND 267
#define PASV_FTP_COMMAND 268
#define MODE_FTP_COMMAND 269
#define TYPE_FTP_COMMAND 270
#define STRU_FTP_COMMAND 271
#define REST_FTP_COMMAND 272
#define RETR_FTP_COMMAND 273
#define LIST_FTP_COMMAND 274
#define NLST_FTP_COMMAND 275
#define ABOR_FTP_COMMAND 276
#define CWD_FTP_COMMAND 277
#define CDUP_FTP_COMMAND 278
#define PWD_FTP_COMMAND 279
#define ALLO_FTP_COMMAND 280
#define STOR_FTP_COMMAND 281
#define STOU_FTP_COMMAND 282
#define DELE_FTP_COMMAND 283
#define APPE_FTP_COMMAND 284
#define MKD_FTP_COMMAND 285
#define RMD_FTP_COMMAND 286
#define RNFR_FTP_COMMAND 287
#define RNTO_FTP_COMMAND 288
#define HELP_FTP_COMMAND 289
#define SYST_FTP_COMMAND 290
#define STAT_FTP_COMMAND 291
#define NOOP_FTP_COMMAND 292
#define SITE_FTP_COMMAND 293
#define CHMOD_FTP_COMMAND 294
#define UTIME_FTP_COMMAND 295
#define SIZE_FTP_COMMAND 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "ftp_parser.ypp" /* yacc.c:355  */

	int		m_nInt;
	char		m_nChar;
	char		m_szStr[PARSER_STR_LEN];
	FtpHost 	m_host;

#line 202 "ftp_parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (Ftp *pContext);

#endif /* !YY_YY_FTP_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 21 "ftp_parser.ypp" /* yacc.c:358  */

#define yyscanner glbl_scanner

#line 235 "ftp_parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    49,    45,    46,
       2,    51,    47,     2,     2,    50,     2,     2,    52,     2,
      53,     2,    48,     2,    42,    44,    54,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    91,    91,    92,    98,   102,   106,   110,   114,   118,
     125,   132,   136,   140,   144,   148,   152,   156,   160,   164,
     168,   172,   176,   180,   184,   188,   192,   196,   200,   204,
     208,   212,   216,   220,   224,   228,   232,   236,   240,   244,
     248,   252,   255,   260,   266,   273,   284,   293,   300,   304,
     308,   314,   318,   322,   328,   332,   336,   340,   346,   350,
     354
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER_FTP_ARG", "STRING_FTP_ARG",
  "CHAR_FTP_ARG", "CRLF_FTP_SEP", "SPACE_FTP_SEP", "PUNCT_FTP_SEP",
  "USER_FTP_COMMAND", "PASS_FTP_COMMAND", "QUIT_FTP_COMMAND",
  "PORT_FTP_COMMAND", "PASV_FTP_COMMAND", "MODE_FTP_COMMAND",
  "TYPE_FTP_COMMAND", "STRU_FTP_COMMAND", "REST_FTP_COMMAND",
  "RETR_FTP_COMMAND", "LIST_FTP_COMMAND", "NLST_FTP_COMMAND",
  "ABOR_FTP_COMMAND", "CWD_FTP_COMMAND", "CDUP_FTP_COMMAND",
  "PWD_FTP_COMMAND", "ALLO_FTP_COMMAND", "STOR_FTP_COMMAND",
  "STOU_FTP_COMMAND", "DELE_FTP_COMMAND", "APPE_FTP_COMMAND",
  "MKD_FTP_COMMAND", "RMD_FTP_COMMAND", "RNFR_FTP_COMMAND",
  "RNTO_FTP_COMMAND", "HELP_FTP_COMMAND", "SYST_FTP_COMMAND",
  "STAT_FTP_COMMAND", "NOOP_FTP_COMMAND", "SITE_FTP_COMMAND",
  "CHMOD_FTP_COMMAND", "UTIME_FTP_COMMAND", "SIZE_FTP_COMMAND", "'r'",
  "','", "'s'", "'b'", "'c'", "'f'", "'p'", "'a'", "'i'", "'e'", "'l'",
  "'n'", "'t'", "$accept", "cmd_list", "cmd", "host_port", "host_number",
  "port_number", "mode_code", "structure_code", "type_code",
  "format_control_code", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   114,    44,   115,    98,    99,   102,   112,    97,
     105,   101,   108,   110,   116
};
# endif

#define YYPACT_NINF -41

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-41)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -41,     0,   -41,    39,   -41,    -6,    -4,    -1,    36,    94,
      95,    96,    97,    98,    99,    79,    86,   101,   102,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      88,   116,   117,   118,   119,   120,   121,   122,   -41,   -41,
     126,   127,   128,   -41,   130,   -41,    45,    32,   -40,   131,
     132,   -41,   133,   -41,   134,   -41,   135,   -41,   -41,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   -41,   146,
     -41,   -41,   -41,    38,   147,   148,   149,   150,   151,   152,
      58,   153,    65,   -41,   -41,   -41,   154,   -41,   -41,   -41,
     -41,    90,   -41,   -41,   -41,   155,   156,   157,   158,   159,
     160,    92,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   -41,   170,   171,   173,   -41,   -41,   -41,   177,   -41,
     178,   -41,   -41,    34,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,    70,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   172,   179,   -41,    82,    91,   -41,   -41,   -41,   -41,
     176,   180,   182,   183,   181,   187,   -41,   188,   -41,   -41,
     174,   -41,   186,   190,   -41,   -41
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    31,
       0,     0,     0,    28,     0,     7,     0,     0,     0,     0,
       0,    17,     0,    19,     0,    16,     0,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    27,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,    50,     0,    54,    55,    56,
      57,     0,    52,    51,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,     0,     0,    30,     4,     5,     0,     6,
       0,     8,     9,     0,    11,    12,    15,    18,    20,    21,
      13,     0,    33,    34,    35,    36,    37,    38,    39,    40,
      24,     0,     0,    44,     0,     0,    45,    60,    58,    59,
       0,     0,     0,     0,     0,     0,    10,     0,    42,    43,
       0,    47,     0,     0,    14,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -41,   -41,    68,   -41,   -41,   -41,   -41,   -41,   -41,   -41
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    38,    81,    82,   146,    86,    95,    91,   150
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       2,    41,    92,    42,     3,    43,     4,    93,    94,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,     3,    44,     4,    39,    40,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     147,    87,    88,    89,    90,    51,    52,   148,   149,    83,
      84,    85,    53,    54,    68,    69,   122,   123,   130,   131,
      45,   118,    46,    47,    48,    49,    50,    55,   120,    56,
      57,    58,   151,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    70,    71,    72,   154,    73,    74,    75,    76,
      77,    78,    79,    80,   155,    96,    97,    98,    99,   100,
     101,   111,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   112,   113,   114,     0,     0,   115,   116,   117,   119,
     121,   124,   125,   126,   127,   128,   129,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   152,   141,   142,   143,
     144,   145,   156,   153,   160,     0,     0,   157,   158,   159,
     161,   162,   164,   165,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163
};

static const yytype_int8 yycheck[] =
{
       0,     7,    42,     7,     4,     6,     6,    47,    48,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,     4,     7,     6,     6,     7,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      46,    49,    50,    51,    52,     6,     7,    53,    54,    44,
      45,    46,     6,     7,     6,     7,     6,     7,     6,     7,
       6,    43,     7,     7,     7,     7,     7,     6,    43,     7,
       6,     6,    42,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     6,     6,     6,    43,     7,     7,     7,     7,
       4,     4,     4,     3,    43,     4,     4,     4,     4,     4,
       3,    73,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,    -1,    -1,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     4,     7,     7,     6,
       3,     3,     6,     4,     3,    -1,    -1,     7,     6,     6,
       3,     3,     6,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,     0,     4,     6,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    57,     6,
       7,     7,     7,     6,     7,     6,     7,     7,     7,     7,
       7,     6,     7,     6,     7,     6,     7,     6,     6,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     6,     7,
       6,     6,     6,     7,     7,     7,     7,     4,     4,     4,
       3,    58,    59,    44,    45,    46,    61,    49,    50,    51,
      52,    63,    42,    47,    48,    62,     4,     4,     4,     4,
       4,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    57,     4,     4,     4,     6,     6,     6,    43,     6,
      43,     6,     6,     7,     6,     6,     6,     6,     6,     6,
       6,     7,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     7,     6,     3,     3,    60,    46,    53,    54,
      64,    42,     4,     4,    43,    43,     6,     7,     6,     6,
       3,     3,     3,    43,     6,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    59,    60,    61,    61,
      61,    62,    62,    62,    63,    63,    63,    63,    64,    64,
      64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     4,     4,     2,     4,     4,
       6,     4,     4,     4,     8,     4,     2,     2,     4,     2,
       4,     4,     2,     2,     4,     2,     2,     2,     2,     2,
       4,     2,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     6,     6,     4,     3,     7,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (&yylloc, pContext, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, pContext); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Ftp *pContext)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (pContext);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Ftp *pContext)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, pContext);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Ftp *pContext)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , pContext);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, pContext); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Ftp *pContext)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (pContext);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (Ftp *pContext)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
      yychar = yylex (&yylval, &yylloc, yyscanner);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 93 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->computeParseLength((yyloc));
		}
#line 1537 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 99 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->user((yyvsp[-1].m_szStr));
		}
#line 1545 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->password((yyvsp[-1].m_szStr));
		}
#line 1553 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 107 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->port((yyvsp[-1].m_host));
		}
#line 1561 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 111 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->pasv();
		}
#line 1569 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 115 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->mode((yyvsp[-1].m_nInt));
		}
#line 1577 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "ftp_parser.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].m_nInt) == -1)
        pContext->ftpReply(504);
      else
        pContext->type((yyvsp[-1].m_nInt));
		}
#line 1588 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 126 "ftp_parser.ypp" /* yacc.c:1646  */
    {
      if ((yyvsp[-3].m_nInt) == -1 || (yyvsp[-1].m_nInt) == -1)
        pContext->ftpReply(504);
      else
        pContext->type((yyvsp[-3].m_nInt), (yyvsp[-1].m_nInt));
		}
#line 1599 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 133 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->stru((yyvsp[-1].m_nInt));
		}
#line 1607 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 137 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->rest((yyvsp[-1].m_szStr));
		}
#line 1615 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 141 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->allo((yyvsp[-1].m_nInt));
		}
#line 1623 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 145 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->allo((yyvsp[-5].m_nInt), (yyvsp[-1].m_nInt));
		}
#line 1631 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 149 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->retr((yyvsp[-1].m_szStr));
		}
#line 1639 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 153 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->abor();
		}
#line 1647 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 157 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->list();
		}
#line 1655 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 161 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->list((yyvsp[-1].m_szStr));
		}
#line 1663 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 165 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->nlst();
		}
#line 1671 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 169 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->nlst((yyvsp[-1].m_szStr));
		}
#line 1679 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 173 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->cwd((yyvsp[-1].m_szStr));
		}
#line 1687 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 177 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->cwd("..");
		}
#line 1695 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 181 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->pwd();
		}
#line 1703 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 185 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->help((yyvsp[-1].m_szStr));
		}
#line 1711 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 189 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->help();
		}
#line 1719 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 193 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->syst();
		}
#line 1727 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 197 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->statCmd();
		}
#line 1735 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 201 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->quit();
		}
#line 1743 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 205 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->noop();
		}
#line 1751 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 209 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->ftpReply(502);//any new commands
		}
#line 1759 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 213 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->ftpReply(502);//any new commands
		}
#line 1767 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 217 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			// ignore empty lines
		}
#line 1775 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 221 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->stor((yyvsp[-1].m_szStr));
		}
#line 1783 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 225 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->stou((yyvsp[-1].m_szStr));
		}
#line 1791 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 229 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->dele((yyvsp[-1].m_szStr));
		}
#line 1799 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 233 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->appe((yyvsp[-1].m_szStr));
		}
#line 1807 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 237 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->mkd((yyvsp[-1].m_szStr));
		}
#line 1815 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 241 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->rmd((yyvsp[-1].m_szStr));
		}
#line 1823 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 245 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->rnfr((yyvsp[-1].m_szStr));
		}
#line 1831 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 249 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  pContext->rnto((yyvsp[-1].m_szStr));
		}
#line 1839 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 253 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		}
#line 1846 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 256 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			//pContext->Chmod($3, $5);
			pContext->ftpReply(502);
		}
#line 1855 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 261 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			//pContext->Utime($3, $5);
			pContext->ftpReply(502);
		}
#line 1864 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 267 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			pContext->size((yyvsp[-1].m_szStr));
		}
#line 1872 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 274 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_host).h1 = (yyvsp[-2].m_host).h1;
		  (yyval.m_host).h2 = (yyvsp[-2].m_host).h2;
		  (yyval.m_host).h3 = (yyvsp[-2].m_host).h3;
		  (yyval.m_host).h4 = (yyvsp[-2].m_host).h4;
		  (yyval.m_host).p1 = (yyvsp[0].m_host).p1;
		  (yyval.m_host).p2 = (yyvsp[0].m_host).p2;
		}
#line 1885 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 285 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_host).h1 = (yyvsp[-6].m_nInt);
		  (yyval.m_host).h2 = (yyvsp[-4].m_nInt);
		  (yyval.m_host).h3 = (yyvsp[-2].m_nInt);
		  (yyval.m_host).h4 = (yyvsp[0].m_nInt);
		}
#line 1896 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 294 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_host).p1 = (yyvsp[-2].m_nInt);
		  (yyval.m_host).p2 = (yyvsp[0].m_nInt);
		}
#line 1905 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 301 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_nInt) = StreamState::MODE_STREAM;
		}
#line 1913 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 305 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_nInt) = -1;
		}
#line 1921 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 309 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_nInt) = -1;
		}
#line 1929 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 315 "ftp_parser.ypp" /* yacc.c:1646  */
    {
			(yyval.m_nInt) = StreamState::STRU_FILE;
		}
#line 1937 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 319 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_nInt) = -1;
		}
#line 1945 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 323 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_nInt) = -1;
		}
#line 1953 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 329 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_nInt) = StreamState::REPR_ASCII;
		}
#line 1961 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 333 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_nInt) = StreamState::REPR_IMAGE;
		}
#line 1969 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 337 "ftp_parser.ypp" /* yacc.c:1646  */
    {
      (yyval.m_nInt) = -1;
		}
#line 1977 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 341 "ftp_parser.ypp" /* yacc.c:1646  */
    {
      (yyval.m_nInt) = -1;
		}
#line 1985 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 347 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_nInt) = StreamState::NON_PRINT;
		}
#line 1993 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 351 "ftp_parser.ypp" /* yacc.c:1646  */
    {
		  (yyval.m_nInt) = -1;
		}
#line 2001 "ftp_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 355 "ftp_parser.ypp" /* yacc.c:1646  */
    {
      (yyval.m_nInt) = -1;
		}
#line 2009 "ftp_parser.cpp" /* yacc.c:1646  */
    break;


#line 2013 "ftp_parser.cpp" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (&yylloc, pContext, YY_("syntax error"));
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (&yylloc, pContext, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, pContext);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, pContext);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, pContext, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, pContext);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, pContext);
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
#line 359 "ftp_parser.ypp" /* yacc.c:1906  */


int Ftp::parseControlConnection()
{
	//TODO: re-implement
/*
	if ( td.buffer == NULL || td.buffer->getBuffer() == NULL )
		return ClientsThread::DELETE_CONNECTION;
	FtpuserData *pFtpuserData = static_cast<FtpuserData *>(td.pConnection->protocolBuffer);
	if ( pFtpuserData == NULL )
		return ClientsThread::DELETE_CONNECTION;

	// awaiting commands reply
	if ( pFtpuserData->m_nFtpstate <= FtpuserData::NO_CONTROL_CONNECTION )
	{
		ftpReply(220);
		pFtpuserData->m_nFtpstate = FtpuserData::CONTROL_CONNECTION_UP;
	}

	MemBuf out;
	escapeTelnet(*td.buffer, out);
	if ( !m_bEnablePipelining )
	{
		MemBuf tmpBuff(out);
		removePipelinedCmds(tmpBuff, out);
	}
	char *pBuffToParse = out.getBuffer();

	if ( pBuffToParse == NULL || td.buffersize <= td.m_nParseLength )// nothing to parse ...
		return ClientsThread::KEEP_CONNECTION;
	else
		pBuffToParse += td.m_nParseLength;

	yylex_init(&m_scanner);
	yy_buffer_state *bufstate = yy_scan_string (pBuffToParse, m_scanner);
	int nParserRet = yyparse(this);
	yy_delete_buffer(bufstate, m_scanner);
	yylex_destroy(m_scanner);
	switch ( nParserRet )
	{
		case 0:
			if ( pFtpuserData->m_nFtpstate == FtpuserData::NO_CONTROL_CONNECTION )
				return ClientsThread::DELETE_CONNECTION;
			else
				return ClientsThread::KEEP_CONNECTION;
		case 1:
			// parsing failed because of invalid input!
			return ClientsThread::DELETE_CONNECTION;
		case 2:
			// memory exhaustion!
			return ClientsThread::DELETE_CONNECTION;
	}//TODO: handle INCOMPLETE_REQUEST
	return ClientsThread::DELETE_CONNECTION;
*/
	return 0;
}

u_long Ftp::computeParseLength(const YYLTYPE &location)
{
	//TODO: re-implement
/*
	if ( td.buffer == NULL )
		return 1;
	int nBuffLine = 1, nBuffCol = 0;
	char *pszBuff = td.buffer->getBuffer();
	for ( u_long i = 0; i < td.buffersize; i++ )
	{
		if ( pszBuff[i] == '\n' )
		{
			nBuffLine++;
			nBuffCol = 0;
		}
		else
			nBuffCol++;
		if ( nBuffLine == location.last_line && nBuffCol == location.last_column )
		{
			td.m_nParseLength = i;
			return 0;
		}
	}
*/
	return 1;//error
}

///////////////////////////////////////////////////////////
// global fncs

void yyerror(YYLTYPE *pLoc, Ftp *pContext, const char *msg)
{
	if ( pContext == NULL )
		return;
	pContext->printError(msg);
}
