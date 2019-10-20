/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     L_STRING = 258,
     L_NUMBER = 259,
     L_REAL = 260,
     L_BASIC_TYPE = 261,
     L_TYPE_MODIFIER = 262,
     L_DEFINED_NAME = 263,
     L_IDENTIFIER = 264,
     L_EFUN = 265,
     L_INC = 266,
     L_DEC = 267,
     L_ASSIGN = 268,
     L_LAND = 269,
     L_LOR = 270,
     L_LSH = 271,
     L_RSH = 272,
     L_ORDER = 273,
     L_NOT = 274,
     L_IF = 275,
     L_ELSE = 276,
     L_SWITCH = 277,
     L_CASE = 278,
     L_DEFAULT = 279,
     L_RANGE = 280,
     L_DOT_DOT_DOT = 281,
     L_WHILE = 282,
     L_DO = 283,
     L_FOR = 284,
     L_FOREACH = 285,
     L_IN = 286,
     L_BREAK = 287,
     L_CONTINUE = 288,
     L_RETURN = 289,
     L_ARROW = 290,
     L_INHERIT = 291,
     L_COLON_COLON = 292,
     L_ARRAY_OPEN = 293,
     L_MAPPING_OPEN = 294,
     L_FUNCTION_OPEN = 295,
     L_NEW_FUNCTION_OPEN = 296,
     L_SSCANF = 297,
     L_CATCH = 298,
     L_ARRAY = 299,
     L_REF = 300,
     L_PARSE_COMMAND = 301,
     L_TIME_EXPRESSION = 302,
     L_CLASS = 303,
     L_NEW = 304,
     L_PARAMETER = 305,
     LOWER_THAN_ELSE = 306,
     L_NE = 307,
     L_EQ = 308
   };
#endif
#define L_STRING 258
#define L_NUMBER 259
#define L_REAL 260
#define L_BASIC_TYPE 261
#define L_TYPE_MODIFIER 262
#define L_DEFINED_NAME 263
#define L_IDENTIFIER 264
#define L_EFUN 265
#define L_INC 266
#define L_DEC 267
#define L_ASSIGN 268
#define L_LAND 269
#define L_LOR 270
#define L_LSH 271
#define L_RSH 272
#define L_ORDER 273
#define L_NOT 274
#define L_IF 275
#define L_ELSE 276
#define L_SWITCH 277
#define L_CASE 278
#define L_DEFAULT 279
#define L_RANGE 280
#define L_DOT_DOT_DOT 281
#define L_WHILE 282
#define L_DO 283
#define L_FOR 284
#define L_FOREACH 285
#define L_IN 286
#define L_BREAK 287
#define L_CONTINUE 288
#define L_RETURN 289
#define L_ARROW 290
#define L_INHERIT 291
#define L_COLON_COLON 292
#define L_ARRAY_OPEN 293
#define L_MAPPING_OPEN 294
#define L_FUNCTION_OPEN 295
#define L_NEW_FUNCTION_OPEN 296
#define L_SSCANF 297
#define L_CATCH 298
#define L_ARRAY 299
#define L_REF 300
#define L_PARSE_COMMAND 301
#define L_TIME_EXPRESSION 302
#define L_CLASS 303
#define L_NEW 304
#define L_PARAMETER 305
#define LOWER_THAN_ELSE 306
#define L_NE 307
#define L_EQ 308




/* Copy the first part of user declarations.  */
#line 3 "grammar.y"


#include "std.h"
#include "compiler.h"
#include "lex.h"
#include "scratchpad.h"

#include "lpc_incl.h"
#include "simul_efun.h"
#include "generate.h"
#include "master.h"

/* gross. Necessary? - Beek */
#ifdef WIN32
#define MSDOS
#endif
#line 18 "grammar.y.pre"
/*
 * This is the grammar definition of LPC, and its parse tree generator.
 */

/* down to one global :) 
   bits:
      SWITCH_CONTEXT     - we're inside a switch
      LOOP_CONTEXT       - we're inside a loop
      SWITCH_STRINGS     - a string case has been found
      SWITCH_NUMBERS     - a non-zero numeric case has been found
      SWITCH_RANGES      - a range has been found
      SWITCH_DEFAULT     - a default has been found
 */
int context;
int num_refs;

/*
 * bison & yacc don't prototype this in y.tab.h
 */
int yyparse PROT((void));



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 122 "grammar.y"
typedef union YYSTYPE {
    POINTER_INT pointer_int;
    int number;
    float real;
    char *string;
    int type;
    struct { short num_arg; char flags; } argument;
    ident_hash_elem_t *ihe;
    parse_node_t *node;
    function_context_t *contextp;
    struct {
	parse_node_t *node;
        char num;
    } decl; /* 5 */
    struct {
	char num_local;
	char max_num_locals; 
	short context; 
	short save_current_type; 
	short save_exact_types;
    } func_block; /* 8 */
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 245 "grammar.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 257 "grammar.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1835

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  98
/* YYNRULES -- Number of rules. */
#define YYNRULES  251
/* YYNRULES -- Number of states. */
#define YYNSTATES  478

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    72,    62,    55,     2,
      66,    67,    61,    59,    69,    60,     2,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,    65,
      58,     2,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    53,    71,    64,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     9,    10,    11,    13,    18,    20,
      22,    23,    25,    27,    29,    31,    33,    35,    36,    37,
      47,    51,    53,    55,    57,    60,    63,    65,    69,    70,
      75,    76,    84,    86,    88,    90,    93,    96,    98,    99,
     101,   104,   106,   109,   112,   116,   118,   119,   121,   124,
     126,   130,   131,   134,   137,   142,   144,   145,   147,   151,
     154,   159,   164,   166,   168,   170,   171,   172,   178,   181,
     186,   190,   194,   196,   200,   201,   204,   207,   210,   212,
     214,   216,   218,   220,   222,   224,   227,   230,   231,   238,
     239,   248,   249,   260,   262,   264,   266,   268,   272,   273,
     282,   283,   285,   287,   289,   290,   301,   304,   307,   308,
     312,   318,   321,   323,   325,   329,   333,   337,   341,   345,
     349,   353,   357,   361,   365,   369,   373,   377,   381,   385,
     387,   390,   393,   396,   398,   402,   405,   409,   413,   419,
     423,   427,   431,   435,   439,   443,   447,   451,   455,   459,
     463,   467,   471,   475,   479,   483,   486,   489,   492,   495,
     498,   501,   504,   507,   509,   511,   513,   515,   517,   519,
     522,   526,   527,   529,   532,   534,   537,   539,   543,   544,
     546,   549,   551,   555,   559,   561,   563,   565,   567,   569,
     570,   576,   580,   587,   595,   604,   612,   618,   625,   631,
     636,   638,   642,   644,   645,   652,   656,   662,   667,   672,
     677,   679,   683,   684,   688,   696,   706,   707,   711,   712,
     716,   718,   720,   724,   728,   730,   733,   737,   738,   742,
     743,   749,   750,   756,   763,   770,   771,   777,   778,   784,
     785,   793,   794,   803,   807,   811,   813,   816,   820,   824,
     831,   832
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
      76,     0,    -1,    77,    -1,    77,    85,    78,    -1,    -1,
      -1,    65,    -1,   102,    36,   158,    65,    -1,     5,    -1,
       4,    -1,    -1,    61,    -1,   108,    -1,    65,    -1,     1,
      -1,     8,    -1,     9,    -1,    -1,    -1,   103,    82,    84,
      86,    66,   100,    67,    87,    83,    -1,   103,   106,    65,
      -1,    79,    -1,    92,    -1,    88,    -1,   102,    68,    -1,
      82,    84,    -1,    89,    -1,    89,    69,    90,    -1,    -1,
      91,   103,    90,    65,    -1,    -1,   102,    48,    84,    70,
      93,    91,    71,    -1,     9,    -1,     8,    -1,     6,    -1,
      48,     8,    -1,    48,     9,    -1,    98,    -1,    -1,    95,
      -1,    96,    44,    -1,    97,    -1,    97,    45,    -1,    98,
      82,    -1,    98,    82,    94,    -1,    94,    -1,    -1,   101,
      -1,   101,    26,    -1,    99,    -1,   101,    69,    99,    -1,
      -1,     7,   102,    -1,   102,   105,    -1,    66,    98,    82,
      67,    -1,    98,    -1,    -1,   107,    -1,   107,    69,   106,
      -1,    82,    84,    -1,    82,    84,    13,   137,    -1,    70,
     110,   116,    71,    -1,   108,    -1,   122,    -1,   126,    -1,
      -1,    -1,   110,    98,   111,   115,    65,    -1,    82,    94,
      -1,    82,    94,    13,   137,    -1,    98,    82,    94,    -1,
     113,    13,   137,    -1,   112,    -1,   112,    69,   115,    -1,
      -1,   117,   116,    -1,     1,    65,    -1,   136,    65,    -1,
     171,    -1,   118,    -1,   120,    -1,   130,    -1,   138,    -1,
     109,    -1,    65,    -1,    32,    65,    -1,    33,    65,    -1,
      -1,    27,    66,   136,    67,   119,   117,    -1,    -1,    28,
     121,   117,    27,    66,   136,    67,    65,    -1,    -1,    29,
      66,   129,    65,   128,    65,   128,    67,   123,   117,    -1,
       8,    -1,   113,    -1,     9,    -1,   124,    -1,   124,    69,
     124,    -1,    -1,    30,    66,   125,    31,   137,    67,   127,
     117,    -1,    -1,   136,    -1,   128,    -1,   114,    -1,    -1,
      22,    66,   136,    67,   131,    70,   110,   133,   132,    71,
      -1,   133,   132,    -1,   117,   132,    -1,    -1,    23,   134,
      68,    -1,    23,   134,    25,   134,    68,    -1,    24,    68,
      -1,   135,    -1,   158,    -1,   135,    53,   135,    -1,   135,
      54,   135,    -1,   135,    55,   135,    -1,   135,    57,   135,
      -1,   135,    56,   135,    -1,   135,    18,   135,    -1,   135,
      58,   135,    -1,   135,    16,   135,    -1,   135,    17,   135,
      -1,   135,    59,   135,    -1,   135,    60,   135,    -1,   135,
      61,   135,    -1,   135,    62,   135,    -1,   135,    63,   135,
      -1,    66,   135,    67,    -1,     4,    -1,    60,     4,    -1,
      19,     4,    -1,    64,     4,    -1,   137,    -1,   136,    69,
     137,    -1,    45,   145,    -1,   145,    13,   137,    -1,     1,
      13,   137,    -1,   137,    52,   137,    68,   137,    -1,   137,
      15,   137,    -1,   137,    14,   137,    -1,   137,    53,   137,
      -1,   137,    54,   137,    -1,   137,    55,   137,    -1,   137,
      57,   137,    -1,   137,    56,   137,    -1,   137,    18,   137,
      -1,   137,    58,   137,    -1,   137,    16,   137,    -1,   137,
      17,   137,    -1,   137,    59,   137,    -1,   137,    60,   137,
      -1,   137,    61,   137,    -1,   137,    62,   137,    -1,   137,
      63,   137,    -1,   104,   137,    -1,    11,   145,    -1,    12,
     145,    -1,    19,   137,    -1,    64,   137,    -1,    60,   137,
      -1,   145,    11,    -1,   145,    12,    -1,   146,    -1,   152,
      -1,   153,    -1,   154,    -1,    81,    -1,    80,    -1,    34,
      65,    -1,    34,   136,    65,    -1,    -1,   141,    -1,   141,
      69,    -1,   137,    -1,   137,    26,    -1,   140,    -1,   141,
      69,   140,    -1,    -1,   143,    -1,   143,    69,    -1,   144,
      -1,   143,    69,   144,    -1,   137,    68,   137,    -1,   146,
      -1,   162,    -1,     8,    -1,     9,    -1,    50,    -1,    -1,
      72,    66,   147,   136,    67,    -1,   146,    35,    84,    -1,
     146,    73,   136,    25,   136,    74,    -1,   146,    73,    58,
     136,    25,   136,    74,    -1,   146,    73,    58,   136,    25,
      58,   136,    74,    -1,   146,    73,   136,    25,    58,   136,
      74,    -1,   146,    73,   136,    25,    74,    -1,   146,    73,
      58,   136,    25,    74,    -1,   146,    73,    58,   136,    74,
      -1,   146,    73,   136,    74,    -1,   157,    -1,    66,   136,
      67,    -1,   150,    -1,    -1,     6,   148,    66,   100,    67,
     108,    -1,    41,    68,    67,    -1,    41,    69,   141,    68,
      67,    -1,    40,   136,    68,    67,    -1,    39,   142,    74,
      67,    -1,    38,   139,    71,    67,    -1,   108,    -1,    66,
     136,    67,    -1,    -1,    43,   151,   149,    -1,    42,    66,
     137,    69,   137,   156,    67,    -1,    46,    66,   137,    69,
     137,    69,   137,   156,    67,    -1,    -1,    47,   155,   149,
      -1,    -1,    69,   145,   156,    -1,   159,    -1,   159,    -1,
      66,   158,    67,    -1,   158,    59,   158,    -1,     3,    -1,
     159,     3,    -1,    84,    68,   137,    -1,    -1,   161,    69,
     160,    -1,    -1,   169,    66,   163,   139,    67,    -1,    -1,
      49,    66,   164,   139,    67,    -1,    49,    66,    48,     8,
     161,    67,    -1,    49,    66,    48,     9,   161,    67,    -1,
      -1,     8,    66,   165,   139,    67,    -1,    -1,   170,    66,
     166,   139,    67,    -1,    -1,   146,    35,    84,    66,   167,
     139,    67,    -1,    -1,    66,    61,   136,    67,    66,   168,
     139,    67,    -1,    10,    37,    84,    -1,    10,    37,    49,
      -1,     9,    -1,    37,    84,    -1,     6,    37,    84,    -1,
      84,    37,    84,    -1,    20,    66,   136,    67,   117,   172,
      -1,    -1,    21,   117,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   210,   210,   214,   215,   218,   220,   230,   274,   282,
     291,   295,   303,   311,   316,   324,   329,   334,   357,   333,
     410,   416,   417,   418,   421,   443,   458,   459,   462,   464,
     469,   468,   538,   539,   557,   558,   574,   590,   592,   599,
     600,   608,   609,   617,   625,   634,   648,   653,   654,   673,
     679,   690,   694,   709,   718,   726,   728,   735,   736,   740,
     756,   799,   809,   809,   809,   813,   819,   818,   840,   851,
     886,   898,   931,   937,   949,   953,   960,   968,   981,   982,
     983,   984,   985,   986,   992,   997,  1020,  1034,  1033,  1049,
    1048,  1064,  1063,  1089,  1111,  1122,  1140,  1146,  1158,  1157,
    1179,  1183,  1187,  1193,  1203,  1202,  1236,  1243,  1251,  1259,
    1267,  1282,  1299,  1310,  1327,  1332,  1337,  1342,  1347,  1352,
    1361,  1366,  1371,  1376,  1381,  1386,  1391,  1396,  1401,  1406,
    1411,  1416,  1421,  1429,  1434,  1442,  1469,  1496,  1502,  1527,
    1534,  1541,  1567,  1572,  1596,  1619,  1634,  1679,  1717,  1722,
    1727,  1879,  1974,  2055,  2060,  2156,  2178,  2200,  2223,  2233,
    2245,  2270,  2293,  2315,  2316,  2317,  2318,  2319,  2320,  2324,
    2331,  2353,  2357,  2362,  2370,  2375,  2383,  2390,  2404,  2409,
    2414,  2422,  2433,  2452,  2460,  2570,  2571,  2614,  2631,  2637,
    2636,  2668,  2693,  2701,  2706,  2714,  2722,  2727,  2732,  2776,
    2829,  2830,  2835,  2837,  2836,  2893,  2927,  3017,  3036,  3041,
    3049,  3054,  3063,  3062,  3078,  3088,  3100,  3099,  3115,  3121,
    3136,  3145,  3146,  3151,  3159,  3160,  3167,  3179,  3183,  3194,
    3193,  3208,  3207,  3221,  3257,  3277,  3276,  3358,  3357,  3431,
    3430,  3469,  3468,  3499,  3525,  3541,  3542,  3557,  3573,  3589,
    3624,  3629
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "L_STRING", "L_NUMBER", "L_REAL",
  "L_BASIC_TYPE", "L_TYPE_MODIFIER", "L_DEFINED_NAME", "L_IDENTIFIER",
  "L_EFUN", "L_INC", "L_DEC", "L_ASSIGN", "L_LAND", "L_LOR", "L_LSH",
  "L_RSH", "L_ORDER", "L_NOT", "L_IF", "L_ELSE", "L_SWITCH", "L_CASE",
  "L_DEFAULT", "L_RANGE", "L_DOT_DOT_DOT", "L_WHILE", "L_DO", "L_FOR",
  "L_FOREACH", "L_IN", "L_BREAK", "L_CONTINUE", "L_RETURN", "L_ARROW",
  "L_INHERIT", "L_COLON_COLON", "L_ARRAY_OPEN", "L_MAPPING_OPEN",
  "L_FUNCTION_OPEN", "L_NEW_FUNCTION_OPEN", "L_SSCANF", "L_CATCH",
  "L_ARRAY", "L_REF", "L_PARSE_COMMAND", "L_TIME_EXPRESSION", "L_CLASS",
  "L_NEW", "L_PARAMETER", "LOWER_THAN_ELSE", "'?'", "'|'", "'^'", "'&'",
  "L_NE", "L_EQ", "'<'", "'+'", "'-'", "'*'", "'%'", "'/'", "'~'", "';'",
  "'('", "')'", "':'", "','", "'{'", "'}'", "'$'", "'['", "']'", "$accept",
  "all", "program", "possible_semi_colon", "inheritance", "real", "number",
  "optional_star", "block_or_semi", "identifier", "def", "@1", "@2",
  "modifier_change", "member_name", "member_name_list", "member_list",
  "type_decl", "@3", "new_local_name", "atomic_type", "opt_atomic_type",
  "basic_type1", "basic_type", "new_arg", "argument", "argument_list",
  "type_modifier_list", "type", "cast", "opt_basic_type", "name_list",
  "new_name", "block", "decl_block", "local_declarations", "@4",
  "new_local_def", "single_new_local_def",
  "single_new_local_def_with_init", "local_name_list", "statements",
  "statement", "while", "@5", "do", "@6", "for", "@7", "foreach_var",
  "foreach_vars", "foreach", "@8", "for_expr", "first_for_expr", "switch",
  "@9", "switch_block", "case", "case_label", "constant", "comma_expr",
  "expr0", "return", "expr_list", "expr_list_node", "expr_list2",
  "expr_list3", "expr_list4", "assoc_pair", "lvalue", "expr4", "@10",
  "@11", "expr_or_block", "catch", "@12", "sscanf", "parse_command",
  "time_expression", "@13", "lvalue_list", "string", "string_con1",
  "string_con2", "class_init", "opt_class_init", "function_call", "@14",
  "@15", "@16", "@17", "@18", "@19", "efun_override", "function_name",
  "cond", "optional_else_part", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    63,   124,    94,    38,   307,   308,    60,    43,
      45,    42,    37,    47,   126,    59,    40,    41,    58,    44,
     123,   125,    36,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    79,    80,    81,
      82,    82,    83,    83,    83,    84,    84,    86,    87,    85,
      85,    85,    85,    85,    88,    89,    90,    90,    91,    91,
      93,    92,    94,    94,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    99,    99,    99,   100,   100,   100,   101,
     101,   102,   102,   103,   104,   105,   105,   106,   106,   107,
     107,   108,   109,   109,   109,   110,   111,   110,   112,   112,
     113,   114,   115,   115,   116,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   119,   118,   121,
     120,   123,   122,   124,   124,   124,   125,   125,   127,   126,
     128,   128,   129,   129,   131,   130,   132,   132,   132,   133,
     133,   133,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   138,
     138,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     142,   143,   143,   144,   145,   146,   146,   146,   146,   147,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   148,   146,   146,   146,   146,   146,   146,
     149,   149,   151,   150,   152,   153,   155,   154,   156,   156,
     157,   158,   158,   158,   159,   159,   160,   161,   161,   163,
     162,   164,   162,   162,   162,   165,   162,   166,   162,   167,
     162,   168,   162,   169,   169,   170,   170,   170,   170,   171,
     172,   172
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     0,     0,     1,     4,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     0,     0,     9,
       3,     1,     1,     1,     2,     2,     1,     3,     0,     4,
       0,     7,     1,     1,     1,     2,     2,     1,     0,     1,
       2,     1,     2,     2,     3,     1,     0,     1,     2,     1,
       3,     0,     2,     2,     4,     1,     0,     1,     3,     2,
       4,     4,     1,     1,     1,     0,     0,     5,     2,     4,
       3,     3,     1,     3,     0,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     6,     0,
       8,     0,    10,     1,     1,     1,     1,     3,     0,     8,
       0,     1,     1,     1,     0,    10,     2,     2,     0,     3,
       5,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     1,     3,     2,     3,     3,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       3,     0,     1,     2,     1,     2,     1,     3,     0,     1,
       2,     1,     3,     3,     1,     1,     1,     1,     1,     0,
       5,     3,     6,     7,     8,     7,     5,     6,     5,     4,
       1,     3,     1,     0,     6,     3,     5,     4,     4,     4,
       1,     3,     0,     3,     7,     9,     0,     3,     0,     3,
       1,     1,     3,     3,     1,     2,     3,     0,     3,     0,
       5,     0,     5,     6,     6,     0,     5,     0,     5,     0,
       7,     0,     8,     3,     3,     1,     2,     3,     3,     6,
       0,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       4,     0,    51,     1,    51,    21,     5,    23,    22,    56,
      10,    52,     6,     3,    34,     0,     0,    24,    39,     0,
      41,    55,    53,    11,     0,     0,    57,   224,     0,     0,
     221,    35,    36,     0,    40,    42,    15,    16,    59,    20,
      10,     0,     0,     7,   225,    30,     0,     0,     0,    58,
     222,   223,    28,     0,     9,     8,   203,   186,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   212,
       0,     0,   216,     0,   188,     0,     0,     0,     0,   168,
     167,     0,     0,    60,     0,   163,   202,   164,   165,   166,
     200,   220,   185,     0,     0,    38,    59,    51,     0,     0,
       0,   235,     0,     0,   156,   184,   157,   158,   246,   174,
       0,   176,   172,     0,     0,   179,   181,     0,   133,     0,
       0,     0,     0,   135,     0,     0,   231,   160,   159,    34,
       0,     0,    10,     0,   189,     0,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,     0,     0,     0,   229,
     237,    33,    32,    45,    10,    49,     0,    47,    31,    56,
      10,   137,   247,    38,     0,   244,   243,   175,     0,     0,
       0,     0,     0,     0,     0,   205,     0,     0,     0,    65,
     210,   213,     0,   217,     0,     0,    35,    36,     0,     0,
     201,     0,   248,   140,   139,   148,   149,   146,     0,   141,
     142,   143,   145,   144,   147,   150,   151,   152,   153,   154,
     136,   191,     0,     0,     0,     0,    43,    18,    48,    38,
       0,    26,     0,     0,     0,   209,   177,   183,   208,   182,
     207,   134,     0,     0,     0,     0,     0,     0,   227,   227,
       0,     0,    54,     0,     0,   239,     0,     0,   199,     0,
       0,    44,     0,    50,    25,    10,    29,     0,   236,   206,
     218,   211,     0,     0,     0,     0,    89,     0,     0,     0,
       0,     0,    84,    66,    62,    83,     0,     0,    79,    80,
      63,    64,    81,     0,    82,    78,     0,     0,     0,   232,
     241,   190,   138,     0,     0,   198,     0,   196,     0,   230,
     238,    14,    13,    19,    12,    27,   204,     0,     0,    76,
       0,     0,     0,     0,     0,    38,    85,    86,   169,     0,
      10,    61,    75,    77,     0,   233,     0,   234,     0,     0,
       0,   197,     0,     0,   192,   218,   214,     0,     0,     0,
       0,    10,     0,   103,   102,     0,   101,    93,    95,    94,
      96,     0,   170,     0,    72,     0,   218,     0,   228,     0,
     240,     0,   193,   195,   219,     0,   104,    87,     0,     0,
       0,     0,    38,     0,    68,    10,    67,     0,     0,   242,
     194,   250,     0,     0,     0,    70,    71,     0,    97,     0,
       0,    73,   215,   226,     0,   249,    65,    88,     0,     0,
      98,    69,   251,    38,     0,     0,     0,     0,     0,     0,
      90,    91,    99,   129,     0,     0,     0,     0,     0,   112,
     113,   111,     0,     0,     0,     0,   131,   130,   132,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   105,   106,    92,
     128,     0,     0,   121,   122,   119,   114,   115,   116,   118,
     117,   120,   123,   124,   125,   126,   127,   110
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,    13,     5,    79,    80,   230,   313,    81,
       6,    47,   262,     7,   231,   232,    97,     8,    52,   163,
      18,    19,    20,   164,   165,   166,   167,     9,    10,    82,
      22,    25,    26,   284,   285,   246,   330,   364,   359,   353,
     365,   286,   432,   288,   393,   289,   323,   290,   435,   360,
     361,   291,   416,   354,   355,   292,   392,   433,   434,   428,
     429,   293,   118,   294,   110,   111,   112,   114,   115,   116,
      84,    85,   201,   100,   191,    86,   122,    87,    88,    89,
     125,   318,    90,    41,    91,   368,   297,    92,   224,   195,
     174,   225,   303,   338,    93,    94,   295,   405
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -356
static const short yypact[] =
{
    -356,    41,    44,  -356,    75,  -356,    70,  -356,  -356,   115,
      68,  -356,  -356,  -356,  -356,    17,   193,  -356,  -356,    15,
     102,   116,  -356,  -356,   307,   107,   143,  -356,    17,    60,
     179,   136,   158,   181,  -356,  -356,  -356,  -356,    10,  -356,
      68,    -2,    17,  -356,  -356,  -356,  1616,   174,   307,  -356,
    -356,  -356,  -356,   246,  -356,  -356,   248,    13,    77,   251,
    1000,  1000,  1616,   307,  1124,   482,  1616,   264,   239,  -356,
    1000,   244,  -356,   260,  -356,  1616,  1616,   912,   278,  -356,
    -356,   293,  1616,  1164,   230,    50,  -356,  -356,  -356,  -356,
    -356,   179,  -356,   295,   298,   122,   258,     0,  1616,   307,
     299,  -356,    37,  1196,  -356,     2,  -356,  -356,  -356,   383,
     291,  -356,   297,   522,   300,   301,  -356,   266,  1164,   302,
    1616,  1616,    71,  -356,  1616,    71,   319,  -356,  -356,    99,
     328,  1616,     5,   111,  -356,   307,  -356,  1616,  1616,  1616,
    1616,  1616,  1616,  1616,  1616,  1616,  1616,  1616,  1616,  1616,
    1616,  1616,  1616,  1616,  -356,  -356,  1616,   307,  1266,  -356,
    -356,  -356,  -356,  -356,     5,  -356,   304,    46,  -356,    12,
      68,  1164,  -356,   122,  1336,  -356,  -356,  -356,   305,  1052,
    1616,   306,   554,   309,  1616,  -356,   270,  1653,  1616,  -356,
    -356,  -356,  1675,  -356,   333,  1336,  -356,  -356,   124,   310,
    -356,  1616,  -356,  1233,   449,   186,   186,   137,   880,  1372,
    1018,  1581,   455,   455,   137,   221,   221,  -356,  -356,  -356,
    1164,   312,  1616,    18,  1336,  1336,   338,  -356,  -356,   202,
     307,   311,   317,   316,   318,  -356,  -356,  1164,  -356,  -356,
    -356,  1164,   320,  1616,  1616,   146,   626,  1616,  -356,  -356,
     321,   323,  -356,   200,  1616,  -356,    97,   215,  -356,   324,
     325,  -356,     4,  -356,  -356,    68,  -356,   314,  -356,  -356,
    1703,  -356,     8,   327,   329,   339,  -356,   341,   342,   345,
     352,  1406,  -356,   116,  -356,  -356,   315,   770,  -356,  -356,
    -356,  -356,  -356,   205,  -356,  -356,  1725,   211,   223,  -356,
    -356,  -356,  1164,  1336,   410,  -356,  1616,  -356,    64,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  1000,   337,  -356,
    1616,  1616,  1616,   842,   982,   229,  -356,  -356,  -356,   207,
      68,  -356,  -356,  -356,  1616,  -356,   307,  -356,  1336,   356,
    1616,  -356,    87,   100,  -356,   355,  -356,   237,   252,   253,
     363,     5,   381,  -356,  -356,   362,   359,  -356,  -356,  -356,
     361,   400,  -356,   338,   364,   367,  1703,   366,  -356,   387,
    -356,   121,  -356,  -356,  -356,   842,  -356,  -356,   392,   338,
    1616,  1476,   229,  1616,   448,    68,  -356,   395,  1616,  -356,
    -356,   443,   399,   842,  1616,  -356,  1164,   412,  -356,  1092,
    1616,  -356,  -356,  1164,   842,  -356,  -356,  -356,   256,  1546,
    -356,  1164,  -356,   144,   413,   408,   842,    29,   411,   698,
    -356,  -356,  -356,  -356,   476,   477,   485,    29,    52,  1303,
     436,  -356,   698,   425,   698,   842,  -356,  -356,  -356,   296,
      29,  -356,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,  -356,  -356,  -356,  -356,
    -356,   429,   113,   240,   240,   170,  1442,  1511,  1751,   953,
     953,   170,   234,   234,  -356,  -356,  -356,  -356
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -356,  -356,  -356,  -356,  -356,  -356,  -356,    -6,  -356,    -8,
    -356,  -356,  -356,  -356,  -356,   233,  -356,  -356,  -356,  -215,
    -356,  -356,  -356,    -7,   271,   326,  -356,    -1,   433,  -356,
    -356,   486,  -356,  -110,  -356,   127,  -356,  -356,   210,  -356,
     150,   254,  -199,  -356,  -356,  -356,  -356,  -356,  -356,   161,
    -356,  -356,  -356,  -355,  -356,  -356,  -356,  -103,   131,   105,
    1373,   -13,   -40,  -356,  -157,  -165,   427,  -356,  -356,   368,
     -51,   -31,  -356,  -356,   424,  -356,  -356,  -356,  -356,  -356,
    -356,  -314,  -356,   -14,   -15,  -356,   303,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -246
static const short yytable[] =
{
      30,    29,    21,    11,    24,   311,    83,     4,    33,   104,
     106,   261,   190,    30,   236,   190,    38,   234,    14,   123,
      27,    98,   107,    46,   109,   113,   397,    30,    51,   105,
     105,   374,    27,   423,    48,   127,   128,   157,   250,   105,
      96,     3,   136,   257,    -2,    36,    37,   287,   424,   -37,
     -15,     4,   387,   117,   415,   108,   -38,    42,   171,    34,
     130,  -184,  -184,  -184,   133,    50,    23,   259,   260,   312,
     132,   168,   228,   319,   189,   158,   -17,   440,   236,   101,
     109,   187,     4,    28,   192,   157,   175,   184,   287,   425,
     133,   172,   258,   426,   176,   427,   169,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   -16,   229,   220,   423,   198,    42,
     441,    14,   304,   158,   350,    43,   199,   202,    14,    23,
     161,   162,   424,   184,   109,    12,    99,   188,   344,   109,
     237,   189,   113,  -245,   241,   223,   339,    35,   384,   221,
      14,    15,   314,   139,   140,   109,   184,   316,   226,   -38,
     -37,   372,    21,    16,   395,  -203,   184,   417,   418,   184,
     130,   305,    39,   425,   373,   245,   391,   426,   200,   462,
     184,   369,    44,    17,   109,   109,   442,   443,   253,   -46,
     184,   251,   130,   184,   407,   390,   149,   150,   151,   152,
     153,    31,    32,   109,   270,   412,   -15,   296,    14,   256,
     161,   162,    40,   271,   302,   184,    53,   422,    27,    54,
      55,    56,   264,    57,    58,    59,    60,    61,   -16,   451,
     452,   453,   454,   455,    62,    14,   459,   357,   358,   283,
      95,   154,   155,   156,   308,   149,   150,   151,   152,   153,
     130,    45,    63,    64,    65,    66,    67,    68,    69,    98,
      70,    71,    72,   109,    73,    74,   345,   301,   329,   184,
     333,    46,   362,   306,   184,    75,   184,   130,   335,    76,
     336,    77,   151,   152,   153,    99,   105,    78,   102,   307,
     337,   342,   336,   343,   366,   453,   454,   455,   109,   451,
     452,   453,   454,   455,   375,   121,   184,   347,   348,   349,
     124,   356,   442,   443,   444,    36,    37,   351,   351,   376,
     377,   184,   184,   414,   363,   184,   126,   371,   367,   456,
     135,   458,   119,   120,   183,   184,   196,   197,   242,   243,
     396,   248,   249,   399,   134,   379,   161,   162,   403,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     411,   159,   178,   460,   160,   173,   179,   194,   356,   185,
     182,   227,   235,   238,   181,   351,   240,   252,   255,   363,
     265,   408,   266,   267,   189,   268,   331,   269,   299,   300,
     378,   309,   310,   320,   380,   321,   356,   137,   138,   139,
     140,   141,    30,   430,   346,   322,   283,   324,   325,   177,
     326,    53,    30,    27,    54,    55,    56,   327,    57,    58,
      59,    60,    61,   370,   317,    30,   430,   381,   184,    62,
     382,   383,   386,   385,   388,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    63,    64,    65,
      66,    67,    68,    69,   389,    70,    71,    72,   394,    73,
      74,   400,   402,   137,   404,   139,   140,   141,   340,   406,
      75,   139,   140,   141,    76,   421,    77,   409,   420,   431,
     436,   437,    78,    53,   341,    27,    54,    55,    56,   438,
      57,    58,    59,    60,    61,    42,   457,   477,   315,   233,
     263,    62,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   148,   149,   150,   151,   152,   153,    63,
      64,    65,    66,    67,    68,    69,    49,    70,    71,    72,
     170,    73,    74,   413,   352,   401,   137,   138,   139,   140,
     141,   332,    75,   398,   419,   461,    76,   186,    77,   193,
     239,     0,   298,     0,    78,    53,  -178,    27,    54,    55,
      56,     0,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,     0,    62,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
     180,    63,    64,    65,    66,    67,    68,    69,     0,    70,
      71,    72,     0,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,    76,     0,
      77,     0,     0,     0,     0,     0,    78,   272,  -180,    27,
      54,    55,   129,     0,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,    62,   273,     0,   274,     0,
       0,     0,     0,   275,   276,   277,   278,     0,   279,   280,
     281,     0,     0,    63,    64,    65,    66,    67,    68,    69,
     -38,    70,    71,    72,   130,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
      76,   282,    77,     0,     0,     0,   189,   -74,    78,    53,
       0,    27,    54,    55,    56,     0,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,     0,    62,   273,     0,
     274,   417,   418,     0,     0,   275,   276,   277,   278,     0,
     279,   280,   281,     0,     0,    63,    64,    65,    66,    67,
      68,    69,     0,    70,    71,    72,     0,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
       0,     0,    76,   282,    77,     0,     0,     0,   189,  -108,
      78,   272,     0,    27,    54,    55,    56,     0,    57,    58,
      59,    60,    61,     0,     0,     0,     0,     0,     0,    62,
     273,     0,   274,     0,     0,     0,     0,   275,   276,   277,
     278,     0,   279,   280,   281,     0,     0,    63,    64,    65,
      66,    67,    68,    69,     0,    70,    71,    72,     0,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,     0,    76,   282,    77,     0,     0,     0,
     189,   -74,    78,    53,     0,    27,    54,    55,    56,     0,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,    62,   273,     0,   274,     0,     0,     0,     0,   275,
     276,   277,   278,     0,   279,   280,   281,     0,     0,    63,
      64,    65,    66,    67,    68,    69,     0,    70,    71,    72,
       0,    73,    74,     0,   137,   138,   139,   140,   141,     0,
       0,     0,    75,     0,     0,     0,    76,   282,    77,     0,
       0,     0,   189,    53,    78,    27,    54,    55,   129,     0,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,    62,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,     0,     0,     0,   254,    63,
      64,    65,    66,    67,    68,    69,   -38,    70,    71,    72,
     130,    73,    74,     0,     0,     0,     0,     0,     0,   442,
     443,   444,    75,   131,     0,     0,    76,     0,    77,     0,
       0,     0,     0,    53,    78,    27,    54,    55,   129,     0,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,    62,     0,    27,     0,     0,    56,     0,    57,    58,
      59,   450,   451,   452,   453,   454,   455,     0,     0,    63,
      64,    65,    66,    67,    68,    69,   -38,    70,    71,    72,
     130,    73,    74,     0,   139,   140,   141,    63,    64,    65,
      66,    67,    75,    69,     0,     0,    76,  -100,    77,    73,
      74,     0,     0,    53,    78,    27,    54,    55,    56,     0,
      57,    58,    59,    60,    61,     0,   103,     0,     0,     0,
       0,    62,    78,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,     0,    70,    71,    72,
       0,    73,    74,     0,     0,     0,   137,   138,   139,   140,
     141,     0,    75,     0,     0,     0,    76,     0,    77,  -173,
       0,     0,     0,  -173,    78,    53,     0,    27,    54,    55,
      56,     0,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,     0,    62,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,   410,
       0,    63,    64,    65,    66,    67,    68,    69,     0,    70,
      71,    72,     0,    73,    74,     0,     0,     0,   137,   138,
     139,   140,   141,     0,    75,     0,     0,     0,    76,     0,
      77,     0,     0,     0,     0,  -171,    78,    53,     0,    27,
      54,    55,    56,     0,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,    62,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    71,    72,     0,    73,    74,     0,     0,   139,
     140,   141,     0,     0,     0,     0,    75,   131,     0,     0,
      76,     0,    77,     0,     0,     0,     0,    53,    78,    27,
      54,    55,    56,     0,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,    62,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    71,    72,     0,    73,    74,     0,     0,   442,
     443,   444,     0,     0,   222,     0,    75,     0,     0,     0,
      76,     0,    77,     0,     0,     0,     0,    53,    78,    27,
      54,    55,    56,     0,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,    62,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    71,    72,     0,    73,    74,     0,   139,   140,
     141,     0,     0,     0,     0,     0,    75,     0,     0,     0,
      76,     0,    77,  -171,     0,     0,     0,    53,    78,    27,
      54,    55,    56,     0,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,    62,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    71,    72,     0,    73,    74,     0,   442,   443,
     444,     0,     0,     0,     0,     0,    75,     0,     0,     0,
      76,   328,    77,     0,     0,     0,     0,    53,    78,    27,
      54,    55,    56,     0,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,    62,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    71,    72,     0,    73,    74,   442,   443,   444,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
      76,  -100,    77,     0,     0,     0,     0,    53,    78,    27,
      54,    55,    56,     0,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,    62,   447,   448,   449,   450,
     451,   452,   453,   454,   455,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    71,    72,     0,    73,    74,   139,   140,   141,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
      76,     0,    77,  -100,     0,     0,     0,    53,    78,    27,
      54,    55,    56,     0,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,    62,     0,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    71,    72,     0,    73,    74,   137,   138,   139,
     140,   141,     0,     0,     0,     0,    75,     0,     0,     0,
      76,     0,    77,     0,     0,     0,     0,     0,    78,   137,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   137,   138,   139,
     140,   141,   244,     0,     0,     0,     0,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   137,
     138,   139,   140,   141,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   442,   443,   444,
       0,     0,   317,     0,     0,     0,     0,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,     0,     0,     0,   334,     0,     0,     0,     0,     0,
     439,     0,     0,     0,     0,     0,     0,   448,   449,   450,
     451,   452,   453,   454,   455,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,     0,
       0,     0,     0,     0,     0,   439
};

static const short yycheck[] =
{
      15,    15,     9,     4,    10,     1,    46,     7,    16,    60,
      61,   226,   122,    28,   179,   125,    24,   174,     6,    70,
       3,    13,    62,    13,    64,    65,   381,    42,    42,    60,
      61,   345,     3,     4,    40,    75,    76,    35,   195,    70,
      48,     0,    82,    25,     0,     8,     9,   246,    19,    44,
      37,     7,   366,    66,   409,    63,    44,    59,    98,    44,
      48,    11,    12,    13,    77,    67,    61,   224,   225,    65,
      77,    71,    26,    65,    70,    73,    66,    25,   243,    66,
     120,   121,     7,    66,   124,    35,    49,    69,   287,    60,
     103,    99,    74,    64,   102,    66,    97,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    37,    69,   156,     4,   131,    59,
      68,     6,    25,    73,   323,    65,   132,   135,     6,    61,
       8,     9,    19,    69,   174,    65,    37,    66,    74,   179,
     180,    70,   182,    66,   184,   158,   303,    45,   363,   157,
       6,    36,   262,    16,    17,   195,    69,   267,   164,    44,
      44,    74,   169,    48,   379,    66,    69,    23,    24,    69,
      48,    74,    65,    60,    74,   188,   375,    64,    67,    66,
      69,   338,     3,    68,   224,   225,    16,    17,   201,    67,
      69,    67,    48,    69,   393,    74,    59,    60,    61,    62,
      63,     8,     9,   243,   244,   404,    70,   247,     6,   222,
       8,     9,    69,    67,   254,    69,     1,   416,     3,     4,
       5,     6,   230,     8,     9,    10,    11,    12,    70,    59,
      60,    61,    62,    63,    19,     6,   435,     8,     9,   246,
      66,    11,    12,    13,   257,    59,    60,    61,    62,    63,
      48,    70,    37,    38,    39,    40,    41,    42,    43,    13,
      45,    46,    47,   303,    49,    50,   317,    67,   281,    69,
      65,    13,    65,    58,    69,    60,    69,    48,    67,    64,
      69,    66,    61,    62,    63,    37,   317,    72,    37,    74,
      67,   304,    69,   306,   334,    61,    62,    63,   338,    59,
      60,    61,    62,    63,    67,    66,    69,   320,   321,   322,
      66,   324,    16,    17,    18,     8,     9,   324,   325,    67,
      67,    69,    69,    67,   330,    69,    66,   340,   336,   432,
      37,   434,    68,    69,    68,    69,     8,     9,    68,    69,
     380,     8,     9,   383,    66,   351,     8,     9,   388,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
     400,    66,    71,    67,    66,    66,    69,    48,   381,    67,
      69,    67,    67,    67,    74,   382,    67,    67,    66,   385,
      69,   394,    65,    67,    70,    67,    71,    67,    67,    66,
      27,    67,    67,    66,    13,    66,   409,    14,    15,    16,
      17,    18,   417,   417,    67,    66,   413,    66,    66,    26,
      65,     1,   427,     3,     4,     5,     6,    65,     8,     9,
      10,    11,    12,    67,    69,   440,   440,    65,    69,    19,
      69,    31,    65,    69,    68,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    37,    38,    39,
      40,    41,    42,    43,    67,    45,    46,    47,    66,    49,
      50,    13,    67,    14,    21,    16,    17,    18,    58,    70,
      60,    16,    17,    18,    64,    67,    66,    65,    65,    68,
       4,     4,    72,     1,    74,     3,     4,     5,     6,     4,
       8,     9,    10,    11,    12,    59,    71,    68,   265,   173,
     229,    19,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    58,    59,    60,    61,    62,    63,    37,
      38,    39,    40,    41,    42,    43,    40,    45,    46,    47,
      97,    49,    50,   406,   324,   385,    14,    15,    16,    17,
      18,   287,    60,   382,   413,   440,    64,   120,    66,   125,
     182,    -1,   249,    -1,    72,     1,    74,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      68,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      46,    47,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,     1,    74,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,    33,
      34,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    72,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    -1,
      32,    33,    34,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    46,    47,    -1,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    -1,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    -1,    32,    33,    34,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    -1,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    32,    33,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    46,    47,
      -1,    49,    50,    -1,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    -1,
      -1,    -1,    70,     1,    72,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    68,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    60,    61,    -1,    -1,    64,    -1,    66,    -1,
      -1,    -1,    -1,     1,    72,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,     3,    -1,    -1,     6,    -1,     8,     9,
      10,    58,    59,    60,    61,    62,    63,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    16,    17,    18,    37,    38,    39,
      40,    41,    60,    43,    -1,    -1,    64,    65,    66,    49,
      50,    -1,    -1,     1,    72,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    12,    -1,    66,    -1,    -1,    -1,
      -1,    19,    72,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    46,    47,
      -1,    49,    50,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    60,    -1,    -1,    -1,    64,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    67,
      -1,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      46,    47,    -1,    49,    50,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    60,    -1,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    -1,    71,    72,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    -1,    49,    50,    -1,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      64,    -1,    66,    -1,    -1,    -1,    -1,     1,    72,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    -1,    49,    50,    -1,    -1,    16,
      17,    18,    -1,    -1,    58,    -1,    60,    -1,    -1,    -1,
      64,    -1,    66,    -1,    -1,    -1,    -1,     1,    72,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    -1,    49,    50,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    -1,    66,    67,    -1,    -1,    -1,     1,    72,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    -1,    49,    50,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,     1,    72,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    -1,    49,    50,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,     1,    72,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    -1,    49,    50,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    -1,    66,    67,    -1,    -1,    -1,     1,    72,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    -1,    49,    50,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    14,    15,    16,
      17,    18,    69,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    14,
      15,    16,    17,    18,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    16,    17,    18,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
     427,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,   442,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,    -1,
      -1,    -1,    -1,    -1,    -1,   462
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    76,    77,     0,     7,    79,    85,    88,    92,   102,
     103,   102,    65,    78,     6,    36,    48,    68,    95,    96,
      97,    98,   105,    61,    82,   106,   107,     3,    66,   158,
     159,     8,     9,    84,    44,    45,     8,     9,    84,    65,
      69,   158,    59,    65,     3,    70,    13,    86,    82,   106,
      67,   158,    93,     1,     4,     5,     6,     8,     9,    10,
      11,    12,    19,    37,    38,    39,    40,    41,    42,    43,
      45,    46,    47,    49,    50,    60,    64,    66,    72,    80,
      81,    84,   104,   137,   145,   146,   150,   152,   153,   154,
     157,   159,   162,   169,   170,    66,    84,    91,    13,    37,
     148,    66,    37,    66,   145,   146,   145,   137,    84,   137,
     139,   140,   141,   137,   142,   143,   144,   136,   137,    68,
      69,    66,   151,   145,    66,   155,    66,   137,   137,     6,
      48,    61,    98,   136,    66,    37,   137,    14,    15,    16,
      17,    18,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    11,    12,    13,    35,    73,    66,
      66,     8,     9,    94,    98,    99,   100,   101,    71,   102,
     103,   137,    84,    66,   165,    49,    84,    26,    71,    69,
      68,    74,    69,    68,    69,    67,   141,   137,    66,    70,
     108,   149,   137,   149,    48,   164,     8,     9,   136,    82,
      67,   147,    84,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,    84,    58,   136,   163,   166,    82,    67,    26,    69,
      82,    89,    90,   100,   139,    67,   140,   137,    67,   144,
      67,   137,    68,    69,    69,   136,   110,    69,     8,     9,
     139,    67,    67,   136,    68,    66,   136,    25,    74,   139,
     139,    94,    87,    99,    84,    69,    65,    67,    67,    67,
     137,    67,     1,    20,    22,    27,    28,    29,    30,    32,
      33,    34,    65,    98,   108,   109,   116,   117,   118,   120,
     122,   126,   130,   136,   138,   171,   137,   161,   161,    67,
      66,    67,   137,   167,    25,    74,    58,    74,   136,    67,
      67,     1,    65,    83,   108,    90,   108,    69,   156,    65,
      66,    66,    66,   121,    66,    66,    65,    65,    65,   136,
     111,    71,   116,    65,    69,    67,    69,    67,   168,   139,
      58,    74,   136,   136,    74,   145,    67,   136,   136,   136,
     117,    98,   113,   114,   128,   129,   136,     8,     9,   113,
     124,   125,    65,    82,   112,   115,   137,    84,   160,   139,
      67,   136,    74,    74,   156,    67,    67,    67,    27,    82,
      13,    65,    69,    31,    94,    69,    65,   156,    68,    67,
      74,   117,   131,   119,    66,    94,   137,   128,   124,   137,
      13,   115,    67,   137,    21,   172,    70,   117,   136,    65,
      67,   137,   117,   110,    67,   128,   127,    23,    24,   133,
      65,    67,   117,     4,    19,    60,    64,    66,   134,   135,
     158,    68,   117,   132,   133,   123,     4,     4,     4,   135,
      25,    68,    16,    17,    18,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,   132,    71,   132,   117,
      67,   134,    66,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,    68
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 221 "grammar.y"
    {
#line 237 "grammar.y.pre"

		yywarn("Extra ';'. Ignored.");
	    }
    break;

  case 7:
#line 231 "grammar.y"
    {
#line 246 "grammar.y.pre"
		object_t *ob;
		inherit_t inherit;
		int initializer;

		if (!yyvsp[-3].type) yyvsp[-3].type = global_modifiers;
		if (!(yyvsp[-3].type & DECL_ACCESS)) yyvsp[-3].type |= DECL_PUBLIC;
		
		if (var_defined)
		    yyerror("Illegal to inherit after defining global variables.");
		ob = find_object2(yyvsp[-1].string);
		if (ob == 0) {
		    inherit_file = alloc_cstring(yyvsp[-1].string, "inherit");
		    /* Return back to load_object() */
		    YYACCEPT;
		}
		scratch_free(yyvsp[-1].string);
		inherit.prog = ob->prog;
		inherit.function_index_offset =
		      mem_block[A_RUNTIME_FUNCTIONS].current_size /
		      sizeof (runtime_function_u);
		inherit.variable_index_offset =
		      mem_block[A_VAR_TEMP].current_size /
		      sizeof (variable_t);
		inherit.type_mod = yyvsp[-3].type;
		add_to_mem_block(A_INHERITS, (char *)&inherit, sizeof inherit);
		copy_variables(ob->prog, yyvsp[-3].type);
		copy_structures(ob->prog);
		initializer = copy_functions(ob->prog, yyvsp[-3].type);
		if (initializer >= 0) {
		    /* initializer is an index into the object we're
		       inheriting's function table; this finds the
		       appropriate entry in our table and generates
		       a call to it */
		    switch_to_block(A_INITIALIZER);
		    generate_inherited_init_call(mem_block[A_INHERITS].current_size/sizeof(inherit_t) - 1, initializer);
		    switch_to_block(A_PROGRAM);
		}
	    }
    break;

  case 8:
#line 275 "grammar.y"
    {
#line 289 "grammar.y.pre"
		CREATE_REAL(yyval.node, yyvsp[0].real);
	    }
    break;

  case 9:
#line 283 "grammar.y"
    {
#line 296 "grammar.y.pre"
		CREATE_NUMBER(yyval.node, yyvsp[0].number);
	    }
    break;

  case 10:
#line 291 "grammar.y"
    {
#line 303 "grammar.y.pre"
		yyval.type = 0;
	    }
    break;

  case 11:
#line 296 "grammar.y"
    {
#line 307 "grammar.y.pre"
		yyval.type = TYPE_MOD_ARRAY;
	    }
    break;

  case 12:
#line 304 "grammar.y"
    {
#line 314 "grammar.y.pre"
		yyval.node = yyvsp[0].decl.node;
		if (!yyval.node) {
		    CREATE_RETURN(yyval.node, 0);
		}
            }
    break;

  case 13:
#line 312 "grammar.y"
    {
#line 321 "grammar.y.pre"
		yyval.node = 0;
	    }
    break;

  case 14:
#line 317 "grammar.y"
    {
#line 325 "grammar.y.pre"
		yyval.node = 0;
            }
    break;

  case 15:
#line 325 "grammar.y"
    {
#line 332 "grammar.y.pre"
	      yyval.string = scratch_copy(yyvsp[0].ihe->name);
	    }
    break;

  case 17:
#line 334 "grammar.y"
    {
#line 340 "grammar.y.pre"
		if (!(yyvsp[-2].type & DECL_MODS)) yyvsp[-2].type |= global_modifiers;
		if (!(yyvsp[-2].type & DECL_ACCESS)) yyvsp[-2].type |= DECL_PUBLIC;
		if (yyvsp[-2].type & DECL_NOSAVE) {
		    yywarn("Illegal to declare nosave function.");
		    yyvsp[-2].type &= ~FUNC_VARARGS;
		}
		/* Handle type checking here so we know whether to typecheck
		   'argument' */
		if (yyvsp[-2].type & ~(DECL_MODS|FUNC_VARARGS)) {
		    exact_types = (yyvsp[-2].type&~(DECL_MODS|FUNC_VARARGS)) | yyvsp[-1].type;
		} else {
		    if (pragmas & PRAGMA_STRICT_TYPES) {
			if (strcmp(yyvsp[0].string, "create") != 0)
			    yyerror("\"#pragma strict_types\" requires type of function");
			else
			    exact_types = TYPE_VOID; /* default for create() */
		    } else
			exact_types = 0;
		}
	    }
    break;

  case 18:
#line 357 "grammar.y"
    {
#line 368 "grammar.y.pre"
		char *p = yyvsp[-4].string;
		yyvsp[-4].string = make_shared_string(yyvsp[-4].string);
		scratch_free(p);

		/* If we had nested functions, we would need to check */
		/* here if we have enough space for locals */
		
		/*
		 * Define a prototype. If it is a real function, then the
		 * prototype will be replaced below.
		 */

		yyval.number = FUNC_UNDEFINED | FUNC_PROTOTYPE;
		if (yyvsp[-1].argument.flags & ARG_IS_VARARGS) {
		    yyval.number |= (FUNC_TRUE_VARARGS | FUNC_VARARGS);
		}
		if (yyvsp[-6].type & FUNC_VARARGS) {
		    yyval.number |= FUNC_VARARGS;
		    yyvsp[-6].type &= ~FUNC_VARARGS;
		}
		define_new_function(yyvsp[-4].string, yyvsp[-1].argument.num_arg, 0, yyval.number, yyvsp[-6].type | yyvsp[-5].type);
		/* This is safe since it is guaranteed to be in the
		   function table, so it can't be dangling */
		free_string(yyvsp[-4].string); 
		context = 0;
	    }
    break;

  case 19:
#line 386 "grammar.y"
    {
#line 396 "grammar.y.pre"
		/* Either a prototype or a block */
		if (yyvsp[0].node) {
		    int fun;

		    yyvsp[-1].number &= ~(FUNC_UNDEFINED | FUNC_PROTOTYPE);
		    if (yyvsp[0].node->kind != NODE_RETURN &&
			(yyvsp[0].node->kind != NODE_TWO_VALUES
			 || yyvsp[0].node->r.expr->kind != NODE_RETURN)) {
			parse_node_t *replacement;
			CREATE_STATEMENTS(replacement, yyvsp[0].node, 0);
			CREATE_RETURN(replacement->r.expr, 0);
			yyvsp[0].node = replacement;
		    }
		    fun = define_new_function(yyvsp[-6].string, yyvsp[-3].argument.num_arg, 
					      max_num_locals - yyvsp[-3].argument.num_arg,
					      yyvsp[-1].number, yyvsp[-8].type | yyvsp[-7].type);
		    if (fun != -1)
			COMPILER_FUNC(fun)->address =
			    generate_function(COMPILER_FUNC(fun), yyvsp[0].node, max_num_locals);
		}
		free_all_local_names(1);
	    }
    break;

  case 20:
#line 411 "grammar.y"
    {
#line 420 "grammar.y.pre"
		if (!(yyvsp[-2].type & ~(DECL_MODS)) && (pragmas & PRAGMA_STRICT_TYPES))
		    yyerror("Missing type for global variable declaration");
	    }
    break;

  case 24:
#line 422 "grammar.y"
    {
#line 430 "grammar.y.pre"
		int t = yyvsp[-1].type & DECL_ACCESS;
		if (!yyvsp[-1].type) 
		    yyerror("modifier list may not be empty.");
		
		if (yyvsp[-1].type & FUNC_VARARGS) {
		    yyerror("Illegal modifier 'varargs' in global modifier list.");
		    yyvsp[-1].type &= ~FUNC_VARARGS;
		}
		if (t & (t-1)) {
		    yywarn("Multiple access modifiers are redundant; weaker one ignored.");
		    yyvsp[-1].type = decl_fix(yyvsp[-1].type);
		}

		if (!(yyvsp[-1].type & DECL_ACCESS)) yyvsp[-1].type |= DECL_PUBLIC;
		global_modifiers = yyvsp[-1].type;
	    }
    break;

  case 25:
#line 444 "grammar.y"
    {
#line 455 "grammar.y.pre"
		if ((current_type & ~DECL_MODS) == TYPE_VOID)
		    yyerror("Illegal to declare class member of type void.");
		if (current_type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare a reference inside a class");
		    current_type &= ~LOCAL_MOD_REF;
		}
		add_local_name(yyvsp[0].string, current_type | yyvsp[-1].type);
		scratch_free(yyvsp[0].string);
	    }
    break;

  case 30:
#line 469 "grammar.y"
    {
#line 479 "grammar.y.pre"
		ident_hash_elem_t *ihe;

		ihe = find_or_add_ident(
			   PROG_STRING(yyval.number = store_prog_string(yyvsp[-1].string)),
			   FOA_GLOBAL_SCOPE);
		if (ihe->dn.class_num == -1) {
		    ihe->sem_value++;
		    ihe->dn.class_num = mem_block[A_CLASS_DEF].current_size / sizeof(class_def_t);
		    yyvsp[-2].ihe = 0;
		} else {
		    yyvsp[-2].ihe = ihe;
		}
	    }
    break;

  case 31:
#line 485 "grammar.y"
    {
#line 494 "grammar.y.pre"
		class_def_t *sd;
		class_member_entry_t *sme;
		int i, raise_error = 0;

		/* check for a redefinition */
		if (yyvsp[-5].ihe != 0) {
		    sd = CLASS(yyvsp[-5].ihe->dn.class_num);
		    if (sd->size != current_number_of_locals)
			raise_error = 1;
		    else {
			i = sd->size;
			sme = (class_member_entry_t *)mem_block[A_CLASS_MEMBER].block + sd->index;
			while (i--) {
			    /* check for matching names and types */
			    if (strcmp(PROG_STRING(sme[i].name), locals_ptr[i].ihe->name) != 0 ||
				sme[i].type != (type_of_locals_ptr[i] & ~LOCAL_MODS)) {
				raise_error = 1;
				break;
			    }
			}
		    }
		}

		if (raise_error) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "Illegal to redefine class ");
		    p = strput(p, end, yyvsp[-4].string);
		    yyerror(buf);
		} else {
		    sd = (class_def_t *)allocate_in_mem_block(A_CLASS_DEF, sizeof(class_def_t));
		    i = sd->size = current_number_of_locals;
		    sd->index = mem_block[A_CLASS_MEMBER].current_size / sizeof(class_member_entry_t);
		    sd->name = yyvsp[-2].number;

		    sme = (class_member_entry_t *)allocate_in_mem_block(A_CLASS_MEMBER, sizeof(class_member_entry_t) * current_number_of_locals);

		    while (i--) {
			sme[i].name = store_prog_string(locals_ptr[i].ihe->name);
			sme[i].type = type_of_locals_ptr[i] & ~LOCAL_MODS;
		    }
		}

		free_all_local_names(0);
		scratch_free(yyvsp[-4].string);
	    }
    break;

  case 33:
#line 540 "grammar.y"
    {
#line 548 "grammar.y.pre"
		if (yyvsp[0].ihe->dn.local_num != -1) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Illegal to redeclare local name '");
		    p = strput(p, end, yyvsp[0].ihe->name);
		    p = strput(p, end, "'");
		    yyerror(buff);
		}
		yyval.string = scratch_copy(yyvsp[0].ihe->name);
	    }
    break;

  case 35:
#line 559 "grammar.y"
    {
#line 566 "grammar.y.pre"
		if (yyvsp[0].ihe->dn.class_num == -1) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Undefined class '");
		    p = strput(p, end, yyvsp[0].ihe->name);
		    p = strput(p, end, "'");
		    yyerror(buf);
		    yyval.type = TYPE_ANY;
		} else 
		    yyval.type = yyvsp[0].ihe->dn.class_num | TYPE_MOD_CLASS;
	    }
    break;

  case 36:
#line 575 "grammar.y"
    {
#line 581 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;

		p = strput(buf, end, "Undefined class '");
		p = strput(p, end, yyvsp[0].string);
		p = strput(p, end, "'");
		yyerror(buf);
		yyval.type = TYPE_ANY;
	    }
    break;

  case 38:
#line 592 "grammar.y"
    {
#line 598 "grammar.y.pre"
		yyval.type = TYPE_ANY;
	    }
    break;

  case 40:
#line 601 "grammar.y"
    {
#line 608 "grammar.y.pre"
		yyval.type = yyvsp[-1].type | TYPE_MOD_ARRAY;
	    }
    break;

  case 42:
#line 610 "grammar.y"
    {
#line 618 "grammar.y.pre"
		yyval.type = yyvsp[-1].type | LOCAL_MOD_REF;
	    }
    break;

  case 43:
#line 618 "grammar.y"
    {
#line 626 "grammar.y.pre"
		if (yyvsp[-1].type == TYPE_VOID)
		    yyerror("Illegal to declare argument of type void.");
                yyval.number = 0;
                add_local_name("", yyvsp[-1].type | yyvsp[0].type);
            }
    break;

  case 44:
#line 626 "grammar.y"
    {
#line 633 "grammar.y.pre"
		if (yyvsp[-2].type == TYPE_VOID)
		    yyerror("Illegal to declare argument of type void.");
                add_local_name(yyvsp[0].string, yyvsp[-2].type | yyvsp[-1].type);
		scratch_free(yyvsp[0].string);
                yyval.number = 0;
	    }
    break;

  case 45:
#line 635 "grammar.y"
    {
#line 641 "grammar.y.pre"
		if (exact_types) {
		    yyerror("Missing type for argument");
		}
		add_local_name(yyvsp[0].string, TYPE_ANY);
		scratch_free(yyvsp[0].string);
		yyval.number = 0;
            }
    break;

  case 46:
#line 648 "grammar.y"
    {
#line 653 "grammar.y.pre"
		yyval.argument.num_arg = 0;
                yyval.argument.flags = 0;
	    }
    break;

  case 48:
#line 655 "grammar.y"
    {
#line 659 "grammar.y.pre"
		int x = type_of_locals_ptr[max_num_locals-1];
		int lt = x & ~LOCAL_MODS;
		
		yyval.argument = yyvsp[-1].argument;
		yyval.argument.flags |= ARG_IS_VARARGS;

		if (x & LOCAL_MOD_REF) {
		    yyerror("Variable to hold remainder of args may not be a reference");
		    x &= ~LOCAL_MOD_REF;
		}
		if (lt != TYPE_ANY && !(lt & TYPE_MOD_ARRAY))
		    yywarn("Variable to hold remainder of arguments should be an array.");
	    }
    break;

  case 49:
#line 674 "grammar.y"
    {
#line 677 "grammar.y.pre"
		yyval.argument.num_arg = 1;
                yyval.argument.flags = yyvsp[0].number;
	    }
    break;

  case 50:
#line 680 "grammar.y"
    {
#line 682 "grammar.y.pre"
                yyval.argument = yyvsp[-2].argument;
		yyval.argument.num_arg++;
                yyval.argument.flags |= yyvsp[0].number;
	    }
    break;

  case 51:
#line 690 "grammar.y"
    {
#line 691 "grammar.y.pre"
		yyval.type = 0;
	    }
    break;

  case 52:
#line 695 "grammar.y"
    {
#line 695 "grammar.y.pre"
		int t;
		
		yyval.type = yyvsp[-1].type | yyvsp[0].type;
		t = yyval.type & DECL_ACCESS;
		if (t & (t-1)) {
		    yywarn("Multiple access modifiers are redundant; weaker one ignored.");
		    yyvsp[-1].type = decl_fix(yyvsp[-1].type);
		}
	    }
    break;

  case 53:
#line 710 "grammar.y"
    {
#line 711 "grammar.y.pre"
		yyval.type = yyvsp[-1].type | yyvsp[0].type;
		current_type = yyval.type;
	    }
    break;

  case 54:
#line 719 "grammar.y"
    {
#line 719 "grammar.y.pre"
		yyval.type = yyvsp[-2].type | yyvsp[-1].type;
	    }
    break;

  case 56:
#line 728 "grammar.y"
    {
#line 727 "grammar.y.pre"
		yyval.type = TYPE_UNKNOWN;
	    }
    break;

  case 59:
#line 741 "grammar.y"
    {
#line 739 "grammar.y.pre"
		if (!(current_type & DECL_MODS)) current_type |= global_modifiers;
		if (!(current_type & DECL_ACCESS)) current_type |= DECL_PUBLIC;

		if (current_type & FUNC_VARARGS) {
		    yyerror("Illegal to declare varargs variable.");
		    current_type &= ~FUNC_VARARGS;
		}

		if ((current_type & ~DECL_MODS) == TYPE_VOID)
		    yyerror("Illegal to declare global variable of type void.");
		define_new_variable(yyvsp[0].string, current_type | yyvsp[-1].type);
		scratch_free(yyvsp[0].string);
	    }
    break;

  case 60:
#line 757 "grammar.y"
    {
#line 754 "grammar.y.pre"
		parse_node_t *expr;
		int type;
		
		if (!(current_type & DECL_MODS)) current_type |= global_modifiers;
		if (!(current_type & DECL_ACCESS)) current_type |= DECL_PUBLIC;

		if (yyvsp[-1].number != F_ASSIGN)
		    yyerror("Only '=' is legal in initializers.");

		/* ignore current_type == 0, which gets a missing type error
		   later anyway */
		if (current_type) {
		    type = (current_type | yyvsp[-3].type) & ~DECL_MODS;
		    if ((current_type & ~DECL_MODS) == TYPE_VOID)
			yyerror("Illegal to declare global variable of type void.");
		    if (!compatible_types(type, yyvsp[0].node->type)) {
			char buff[256];
			char *end = EndOf(buff);
			char *p;
			
			p = strput(buff, end, "Type mismatch ");
			p = get_two_types(p, end, type, yyvsp[0].node->type);
			p = strput(p, end, " when initializing ");
			p = strput(p, end, yyvsp[-2].string);
			yyerror(buff);
		    }
		}
		switch_to_block(A_INITIALIZER);
		yyvsp[0].node = do_promotions(yyvsp[0].node, type);

		CREATE_BINARY_OP(expr, F_VOID_ASSIGN, 0, yyvsp[0].node, 0);
		CREATE_OPCODE_1(expr->r.expr, F_GLOBAL_LVALUE, 0,
				define_new_variable(yyvsp[-2].string, current_type | yyvsp[-3].type));
		generate(expr);
		switch_to_block(A_PROGRAM);
		scratch_free(yyvsp[-2].string);
	    }
    break;

  case 61:
#line 800 "grammar.y"
    {
#line 796 "grammar.y.pre"
		if (yyvsp[-2].decl.node && yyvsp[-1].node) {
		    CREATE_STATEMENTS(yyval.decl.node, yyvsp[-2].decl.node, yyvsp[-1].node);
		} else yyval.decl.node = (yyvsp[-2].decl.node ? yyvsp[-2].decl.node : yyvsp[-1].node);
                yyval.decl.num = yyvsp[-2].decl.num;
            }
    break;

  case 65:
#line 813 "grammar.y"
    {
#line 808 "grammar.y.pre"
                yyval.decl.node = 0;
                yyval.decl.num = 0;
            }
    break;

  case 66:
#line 819 "grammar.y"
    {
#line 813 "grammar.y.pre"
		if (yyvsp[0].type == TYPE_VOID)
		    yyerror("Illegal to declare local variable of type void.");
                /* can't do this in basic_type b/c local_name_list contains
                 * expr0 which contains cast which contains basic_type
                 */
                current_type = yyvsp[0].type;
            }
    break;

  case 67:
#line 829 "grammar.y"
    {
#line 822 "grammar.y.pre"
                if (yyvsp[-4].decl.node && yyvsp[-1].decl.node) {
		    CREATE_STATEMENTS(yyval.decl.node, yyvsp[-4].decl.node, yyvsp[-1].decl.node);
                } else yyval.decl.node = (yyvsp[-4].decl.node ? yyvsp[-4].decl.node : yyvsp[-1].decl.node);
                yyval.decl.num = yyvsp[-4].decl.num + yyvsp[-1].decl.num;
            }
    break;

  case 68:
#line 841 "grammar.y"
    {
#line 833 "grammar.y.pre"
		if (current_type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare local variable as reference");
		    current_type &= ~LOCAL_MOD_REF;
		}
		add_local_name(yyvsp[0].string, current_type | yyvsp[-1].type | LOCAL_MOD_UNUSED);
		scratch_free(yyvsp[0].string);
		yyval.node = 0;
	    }
    break;

  case 69:
#line 852 "grammar.y"
    {
#line 843 "grammar.y.pre"
		int type = (current_type | yyvsp[-3].type) & ~DECL_MODS;

		if (current_type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare local variable as reference");
		    current_type &= ~LOCAL_MOD_REF;
		    type &= ~LOCAL_MOD_REF;
		}

		if (yyvsp[-1].number != F_ASSIGN)
		    yyerror("Only '=' is allowed in initializers.");
		if (!compatible_types(yyvsp[0].node->type, type)) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Type mismatch ");
		    p = get_two_types(p, end, type, yyvsp[0].node->type);
		    p = strput(p, end, " when initializing ");
		    p = strput(p, end, yyvsp[-2].string);

		    yyerror(buff);
		}
		
		yyvsp[0].node = do_promotions(yyvsp[0].node, type);

		CREATE_UNARY_OP_1(yyval.node, F_VOID_ASSIGN_LOCAL, 0, yyvsp[0].node,
				  add_local_name(yyvsp[-2].string, current_type | yyvsp[-3].type | LOCAL_MOD_UNUSED));
		scratch_free(yyvsp[-2].string);
	    }
    break;

  case 70:
#line 887 "grammar.y"
    {
#line 877 "grammar.y.pre"
		if (yyvsp[-2].type == TYPE_VOID)
		    yyerror("Illegal to declare local variable of type void.");

		yyval.number = add_local_name(yyvsp[0].string, yyvsp[-2].type | yyvsp[-1].type);
		scratch_free(yyvsp[0].string);
	    }
    break;

  case 71:
#line 899 "grammar.y"
    {
#line 888 "grammar.y.pre"
                int type = type_of_locals_ptr[yyvsp[-2].number];

		if (type & LOCAL_MOD_REF) {
		    yyerror("Illegal to declare local variable as reference");
		    type_of_locals_ptr[yyvsp[-2].number] &= ~LOCAL_MOD_REF;
		}
		type &= ~LOCAL_MODS;

		if (yyvsp[-1].number != F_ASSIGN)
		    yyerror("Only '=' is allowed in initializers.");
		if (!compatible_types(yyvsp[0].node->type, type)) {
		    char buff[256];
		    char *end = EndOf(buff);
		    char *p;
		    
		    p = strput(buff, end, "Type mismatch ");
		    p = get_two_types(p, end, type, yyvsp[0].node->type);
		    p = strput(p, end, " when initializing.");
		    yyerror(buff);
		}

		yyvsp[0].node = do_promotions(yyvsp[0].node, type);

		/* this is an expression */
		CREATE_BINARY_OP(yyval.node, F_ASSIGN, 0, yyvsp[0].node, 0);
                CREATE_OPCODE_1(yyval.node->r.expr, F_LOCAL_LVALUE, 0, yyvsp[-2].number);
	    }
    break;

  case 72:
#line 932 "grammar.y"
    {
#line 920 "grammar.y.pre"
                yyval.decl.node = yyvsp[0].node;
                yyval.decl.num = 1;
            }
    break;

  case 73:
#line 938 "grammar.y"
    {
#line 925 "grammar.y.pre"
                if (yyvsp[-2].node && yyvsp[0].decl.node) {
		    CREATE_STATEMENTS(yyval.decl.node, yyvsp[-2].node, yyvsp[0].decl.node);
                } else yyval.decl.node = (yyvsp[-2].node ? yyvsp[-2].node : yyvsp[0].decl.node);
                yyval.decl.num = 1 + yyvsp[0].decl.num;
            }
    break;

  case 74:
#line 949 "grammar.y"
    {
#line 935 "grammar.y.pre"
		yyval.node = 0;
	    }
    break;

  case 75:
#line 954 "grammar.y"
    {
#line 939 "grammar.y.pre"
		if (yyvsp[-1].node && yyvsp[0].node) {
		    CREATE_STATEMENTS(yyval.node, yyvsp[-1].node, yyvsp[0].node);
		} else yyval.node = (yyvsp[-1].node ? yyvsp[-1].node : yyvsp[0].node);
            }
    break;

  case 76:
#line 961 "grammar.y"
    {
#line 945 "grammar.y.pre"
		yyval.node = 0;
            }
    break;

  case 77:
#line 969 "grammar.y"
    {
#line 952 "grammar.y.pre"
		yyval.node = insert_pop_value(yyvsp[-1].node);
#ifdef DEBUG
		{
		    parse_node_t *replacement;
		    CREATE_STATEMENTS(replacement, yyval.node, 0);
		    CREATE_OPCODE(replacement->r.expr, F_BREAK_POINT, 0);
		    yyval.node = replacement;
		}
#endif
	    }
    break;

  case 83:
#line 987 "grammar.y"
    {
#line 969 "grammar.y.pre"
                yyval.node = yyvsp[0].decl.node;
                pop_n_locals(yyvsp[0].decl.num);
            }
    break;

  case 84:
#line 993 "grammar.y"
    {
#line 974 "grammar.y.pre"
		yyval.node = 0;
	    }
    break;

  case 85:
#line 998 "grammar.y"
    {
#line 978 "grammar.y.pre"
		if (context & SPECIAL_CONTEXT) {
		    yyerror("Cannot break out of catch { } or time_expression { }");
		    yyval.node = 0;
		} else
		if (context & SWITCH_CONTEXT) {
		    CREATE_CONTROL_JUMP(yyval.node, CJ_BREAK_SWITCH);
		} else
		if (context & LOOP_CONTEXT) {
		    CREATE_CONTROL_JUMP(yyval.node, CJ_BREAK);
		    if (context & LOOP_FOREACH) {
			parse_node_t *replace;
			CREATE_STATEMENTS(replace, 0, yyval.node);
			CREATE_OPCODE(replace->l.expr, F_EXIT_FOREACH, 0);
			yyval.node = replace;
		    }
		} else {
		    yyerror("break statement outside loop");
		    yyval.node = 0;
		}
	    }
    break;

  case 86:
#line 1021 "grammar.y"
    {
#line 1000 "grammar.y.pre"
		if (context & SPECIAL_CONTEXT)
		    yyerror("Cannot continue out of catch { } or time_expression { }");
		else
		if (!(context & LOOP_CONTEXT))
		    yyerror("continue statement outside loop");
		CREATE_CONTROL_JUMP(yyval.node, CJ_CONTINUE);
	    }
    break;

  case 87:
#line 1034 "grammar.y"
    {
#line 1012 "grammar.y.pre"
		yyvsp[-3].number = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 88:
#line 1040 "grammar.y"
    {
#line 1017 "grammar.y.pre"
		CREATE_LOOP(yyval.node, 1, yyvsp[0].node, 0, optimize_loop_test(yyvsp[-3].node));
		context = yyvsp[-5].number;
	    }
    break;

  case 89:
#line 1049 "grammar.y"
    {
#line 1025 "grammar.y.pre"
		yyvsp[0].number = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 90:
#line 1055 "grammar.y"
    {
#line 1030 "grammar.y.pre"
		CREATE_LOOP(yyval.node, 0, yyvsp[-5].node, 0, optimize_loop_test(yyvsp[-2].node));
		context = yyvsp[-7].number;
	    }
    break;

  case 91:
#line 1064 "grammar.y"
    {
#line 1038 "grammar.y.pre"
		yyvsp[-7].number = context;
		context = LOOP_CONTEXT;
	    }
    break;

  case 92:
#line 1070 "grammar.y"
    {
#line 1043 "grammar.y.pre"
		yyval.decl.num = yyvsp[-7].decl.num; /* number of declarations (0/1) */
		
		yyvsp[-7].decl.node = insert_pop_value(yyvsp[-7].decl.node);
		yyvsp[-3].node = insert_pop_value(yyvsp[-3].node);
		if (yyvsp[-3].node && IS_NODE(yyvsp[-3].node, NODE_UNARY_OP, F_INC)
		    && IS_NODE(yyvsp[-3].node->r.expr, NODE_OPCODE_1, F_LOCAL_LVALUE)) {
		    int lvar = yyvsp[-3].node->r.expr->l.number;
		    CREATE_OPCODE_1(yyvsp[-3].node, F_LOOP_INCR, 0, lvar);
		}

		CREATE_STATEMENTS(yyval.decl.node, yyvsp[-7].decl.node, 0);
		CREATE_LOOP(yyval.decl.node->r.expr, 1, yyvsp[0].node, yyvsp[-3].node, optimize_loop_test(yyvsp[-5].node));

		context = yyvsp[-9].number;
	      }
    break;

  case 93:
#line 1090 "grammar.y"
    {
#line 1062 "grammar.y.pre"
		if (yyvsp[0].ihe->dn.local_num != -1) {
		    CREATE_OPCODE_1(yyval.decl.node, F_LOCAL_LVALUE, 0, yyvsp[0].ihe->dn.local_num);
		    type_of_locals_ptr[yyvsp[0].ihe->dn.local_num] &= ~LOCAL_MOD_UNUSED;
		} else
	        if (yyvsp[0].ihe->dn.global_num != -1) {
		    CREATE_OPCODE_1(yyval.decl.node, F_GLOBAL_LVALUE, 0, yyvsp[0].ihe->dn.global_num);
		} else {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "'");
		    p = strput(p, end, yyvsp[0].ihe->name);
		    p = strput(p, end, "' is not a local or a global variable.");
		    yyerror(buf);
		    CREATE_OPCODE_1(yyval.decl.node, F_GLOBAL_LVALUE, 0, 0);
		}
		yyval.decl.num = 0;
            }
    break;

  case 94:
#line 1112 "grammar.y"
    {
#line 1083 "grammar.y.pre"
                if (type_of_locals_ptr[yyvsp[0].number] & LOCAL_MOD_REF) {
		    CREATE_OPCODE_1(yyval.decl.node, F_REF_LVALUE, 0, yyvsp[0].number);
		} else {
		    CREATE_OPCODE_1(yyval.decl.node, F_LOCAL_LVALUE, 0, yyvsp[0].number);
		    type_of_locals_ptr[yyvsp[0].number] &= ~LOCAL_MOD_UNUSED;
		}
		yyval.decl.num = 1;
            }
    break;

  case 95:
#line 1123 "grammar.y"
    {
#line 1093 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;
		
		p = strput(buf, end, "'");
		p = strput(p, end, yyvsp[0].string);
		p = strput(p, end, "' is not a local or a global variable.");
		yyerror(buf);
		CREATE_OPCODE_1(yyval.decl.node, F_GLOBAL_LVALUE, 0, 0);
		scratch_free(yyvsp[0].string);
		yyval.decl.num = 0;
	    }
    break;

  case 96:
#line 1141 "grammar.y"
    {
#line 1110 "grammar.y.pre"
		CREATE_FOREACH(yyval.decl.node, yyvsp[0].decl.node, 0);
		yyval.decl.num = yyvsp[0].decl.num;
            }
    break;

  case 97:
#line 1147 "grammar.y"
    {
#line 1115 "grammar.y.pre"
		CREATE_FOREACH(yyval.decl.node, yyvsp[-2].decl.node, yyvsp[0].decl.node);
		yyval.decl.num = yyvsp[-2].decl.num + yyvsp[0].decl.num;
		if (yyvsp[-2].decl.node->v.number == F_REF_LVALUE)
		    yyerror("Mapping key may not be a reference in foreach()");
            }
    break;

  case 98:
#line 1158 "grammar.y"
    {
#line 1125 "grammar.y.pre"
		yyvsp[-3].decl.node->v.expr = yyvsp[-1].node;
		yyvsp[-5].number = context;
		context = LOOP_CONTEXT | LOOP_FOREACH;
            }
    break;

  case 99:
#line 1165 "grammar.y"
    {
#line 1131 "grammar.y.pre"
		yyval.decl.num = yyvsp[-5].decl.num;

		CREATE_STATEMENTS(yyval.decl.node, yyvsp[-5].decl.node, 0);
		CREATE_LOOP(yyval.decl.node->r.expr, 2, yyvsp[0].node, 0, 0);
		CREATE_OPCODE(yyval.decl.node->r.expr->r.expr, F_NEXT_FOREACH, 0);
		
		context = yyvsp[-7].number;
	    }
    break;

  case 100:
#line 1179 "grammar.y"
    {
#line 1144 "grammar.y.pre"
		CREATE_NUMBER(yyval.node, 1);
	    }
    break;

  case 102:
#line 1188 "grammar.y"
    {
#line 1152 "grammar.y.pre"
	 	yyval.decl.node = yyvsp[0].node;
		yyval.decl.num = 0;
	    }
    break;

  case 103:
#line 1194 "grammar.y"
    {
#line 1157 "grammar.y.pre"
		yyval.decl.node = yyvsp[0].node;
		yyval.decl.num = 1;
	    }
    break;

  case 104:
#line 1203 "grammar.y"
    {
#line 1165 "grammar.y.pre"
                yyvsp[-3].number = context;
                context &= LOOP_CONTEXT;
                context |= SWITCH_CONTEXT;
                yyvsp[-2].number = mem_block[A_CASES].current_size;
            }
    break;

  case 105:
#line 1211 "grammar.y"
    {
#line 1172 "grammar.y.pre"
                parse_node_t *node1, *node2;

                if (yyvsp[-1].node) {
		    CREATE_STATEMENTS(node1, yyvsp[-2].node, yyvsp[-1].node);
                } else node1 = yyvsp[-2].node;

                if (context & SWITCH_STRINGS) {
                    NODE_NO_LINE(node2, NODE_SWITCH_STRINGS);
                } else if (context & SWITCH_RANGES) {
		    NODE_NO_LINE(node2, NODE_SWITCH_RANGES);
		} else {
                    NODE_NO_LINE(node2, NODE_SWITCH_NUMBERS);
                }
                node2->l.expr = yyvsp[-7].node;
                node2->r.expr = node1;
                prepare_cases(node2, yyvsp[-8].number);
                context = yyvsp[-9].number;
		yyval.node = node2;
		pop_n_locals(yyvsp[-3].decl.num);
            }
    break;

  case 106:
#line 1237 "grammar.y"
    {
#line 1197 "grammar.y.pre"
               if (yyvsp[0].node){
		   CREATE_STATEMENTS(yyval.node, yyvsp[-1].node, yyvsp[0].node);
               } else yyval.node = yyvsp[-1].node;
           }
    break;

  case 107:
#line 1244 "grammar.y"
    {
#line 1203 "grammar.y.pre"
               if (yyvsp[0].node){
		   CREATE_STATEMENTS(yyval.node, yyvsp[-1].node, yyvsp[0].node);
               } else yyval.node = yyvsp[-1].node;
           }
    break;

  case 108:
#line 1251 "grammar.y"
    {
#line 1209 "grammar.y.pre"
               yyval.node = 0;
           }
    break;

  case 109:
#line 1260 "grammar.y"
    {
#line 1217 "grammar.y.pre"
                yyval.node = yyvsp[-1].node;
                yyval.node->v.expr = 0;

                add_to_mem_block(A_CASES, (char *)&(yyvsp[-1].node), sizeof(yyvsp[-1].node));
            }
    break;

  case 110:
#line 1268 "grammar.y"
    {
#line 1224 "grammar.y.pre"
                if ( yyvsp[-3].node->kind != NODE_CASE_NUMBER
                    || yyvsp[-1].node->kind != NODE_CASE_NUMBER )
                    yyerror("String case labels not allowed as range bounds");
                if (yyvsp[-3].node->r.number > yyvsp[-1].node->r.number) break;

		context |= SWITCH_RANGES;

                yyval.node = yyvsp[-3].node;
                yyval.node->v.expr = yyvsp[-1].node;

                add_to_mem_block(A_CASES, (char *)&(yyvsp[-3].node), sizeof(yyvsp[-3].node));
            }
    break;

  case 111:
#line 1283 "grammar.y"
    {
#line 1238 "grammar.y.pre"
                if (context & SWITCH_DEFAULT) {
                    yyerror("Duplicate default");
                    yyval.node = 0;
                    break;
                }
		yyval.node = new_node();
		yyval.node->kind = NODE_DEFAULT;
                yyval.node->v.expr = 0;
                add_to_mem_block(A_CASES, (char *)&(yyval.node), sizeof(yyval.node));
                context |= SWITCH_DEFAULT;
            }
    break;

  case 112:
#line 1300 "grammar.y"
    {
#line 1254 "grammar.y.pre"
                if ((context & SWITCH_STRINGS) && yyvsp[0].pointer_int)
                    yyerror("Mixed case label list not allowed");

                if (yyvsp[0].pointer_int) context |= SWITCH_NUMBERS;
		yyval.node = new_node();
		yyval.node->kind = NODE_CASE_NUMBER;
                yyval.node->r.expr = (parse_node_t *)yyvsp[0].pointer_int;
            }
    break;

  case 113:
#line 1311 "grammar.y"
    {
#line 1264 "grammar.y.pre"
		int str;
		
		str = store_prog_string(yyvsp[0].string);
                scratch_free(yyvsp[0].string);
                if (context & SWITCH_NUMBERS)
                    yyerror("Mixed case label list not allowed");
                context |= SWITCH_STRINGS;
		yyval.node = new_node();
		yyval.node->kind = NODE_CASE_STRING;
                yyval.node->r.number = str;
            }
    break;

  case 114:
#line 1328 "grammar.y"
    {
#line 1280 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int | yyvsp[0].pointer_int;
            }
    break;

  case 115:
#line 1333 "grammar.y"
    {
#line 1284 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int ^ yyvsp[0].pointer_int;
            }
    break;

  case 116:
#line 1338 "grammar.y"
    {
#line 1288 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int & yyvsp[0].pointer_int;
            }
    break;

  case 117:
#line 1343 "grammar.y"
    {
#line 1292 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int == yyvsp[0].pointer_int;
            }
    break;

  case 118:
#line 1348 "grammar.y"
    {
#line 1296 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int != yyvsp[0].pointer_int;
            }
    break;

  case 119:
#line 1353 "grammar.y"
    {
#line 1300 "grammar.y.pre"
                switch(yyvsp[-1].number){
                    case F_GE: yyval.pointer_int = yyvsp[-2].pointer_int >= yyvsp[0].pointer_int; break;
                    case F_LE: yyval.pointer_int = yyvsp[-2].pointer_int <= yyvsp[0].pointer_int; break;
                    case F_GT: yyval.pointer_int = yyvsp[-2].pointer_int >  yyvsp[0].pointer_int; break;
                }
            }
    break;

  case 120:
#line 1362 "grammar.y"
    {
#line 1308 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int < yyvsp[0].pointer_int;
            }
    break;

  case 121:
#line 1367 "grammar.y"
    {
#line 1312 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int << yyvsp[0].pointer_int;
            }
    break;

  case 122:
#line 1372 "grammar.y"
    {
#line 1316 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int >> yyvsp[0].pointer_int;
            }
    break;

  case 123:
#line 1377 "grammar.y"
    {
#line 1320 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int + yyvsp[0].pointer_int;
            }
    break;

  case 124:
#line 1382 "grammar.y"
    {
#line 1324 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int - yyvsp[0].pointer_int;
            }
    break;

  case 125:
#line 1387 "grammar.y"
    {
#line 1328 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-2].pointer_int * yyvsp[0].pointer_int;
            }
    break;

  case 126:
#line 1392 "grammar.y"
    {
#line 1332 "grammar.y.pre"
                if (yyvsp[0].pointer_int) yyval.pointer_int = yyvsp[-2].pointer_int % yyvsp[0].pointer_int; else yyerror("Modulo by zero");
            }
    break;

  case 127:
#line 1397 "grammar.y"
    {
#line 1336 "grammar.y.pre"
                if (yyvsp[0].pointer_int) yyval.pointer_int = yyvsp[-2].pointer_int / yyvsp[0].pointer_int; else yyerror("Division by zero");
            }
    break;

  case 128:
#line 1402 "grammar.y"
    {
#line 1340 "grammar.y.pre"
                yyval.pointer_int = yyvsp[-1].pointer_int;
            }
    break;

  case 129:
#line 1407 "grammar.y"
    {
#line 1344 "grammar.y.pre"
		yyval.pointer_int = yyvsp[0].number;
	    }
    break;

  case 130:
#line 1412 "grammar.y"
    {
#line 1348 "grammar.y.pre"
                yyval.pointer_int = -yyvsp[0].number;
            }
    break;

  case 131:
#line 1417 "grammar.y"
    {
#line 1352 "grammar.y.pre"
                yyval.pointer_int = !yyvsp[0].number;
            }
    break;

  case 132:
#line 1422 "grammar.y"
    {
#line 1356 "grammar.y.pre"
                yyval.pointer_int = ~yyvsp[0].number;
            }
    break;

  case 133:
#line 1430 "grammar.y"
    {
#line 1363 "grammar.y.pre"
		yyval.node = yyvsp[0].node;
	    }
    break;

  case 134:
#line 1435 "grammar.y"
    {
#line 1367 "grammar.y.pre"
		CREATE_TWO_VALUES(yyval.node, yyvsp[0].node->type, insert_pop_value(yyvsp[-2].node), yyvsp[0].node);
	    }
    break;

  case 135:
#line 1443 "grammar.y"
    {
#line 1375 "grammar.y.pre"
		int op;

		if (!(context & ARG_LIST))
		    yyerror("ref illegal outside function argument list");
		else
		    num_refs++;
		
		switch (yyvsp[0].node->kind) {
		case NODE_PARAMETER_LVALUE:
		    op = F_LOCAL_LVALUE;
		    break;
		case NODE_TERNARY_OP:
		case NODE_OPCODE_1:
		case NODE_UNARY_OP_1:
		case NODE_BINARY_OP:
		    op = yyvsp[0].node->v.number;
		    if (op > F_RINDEX_LVALUE) {
			yyerror("Illegal to make reference to range");
			break;
		    }
		}
		CREATE_UNARY_OP_1(yyval.node, F_MAKE_REF, TYPE_ANY, yyvsp[0].node, op);
	    }
    break;

  case 136:
#line 1470 "grammar.y"
    {
#line 1402 "grammar.y.pre"
	        parse_node_t *l = yyvsp[-2].node, *r = yyvsp[0].node;
		/* set this up here so we can change it below */
		/* assignments are backwards; rhs is evaluated before
		   lhs, so put the RIGHT hand side on the LEFT hand
		   side of the tree node. */
		CREATE_BINARY_OP(yyval.node, yyvsp[-1].number, r->type, r, l);

		if (exact_types && !compatible_types(r->type, l->type) &&
		    !(yyvsp[-1].number == F_ADD_EQ
		      && r->type == TYPE_STRING && 
		      COMP_TYPE(l->type, TYPE_NUMBER))) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Bad assignment ");
		    p = get_two_types(p, end, l->type, r->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
		
		if (yyvsp[-1].number == F_ASSIGN)
		    yyval.node->l.expr = do_promotions(r, l->type);
	    }
    break;

  case 137:
#line 1497 "grammar.y"
    {
#line 1428 "grammar.y.pre"
		yyerror("Illegal LHS");
		CREATE_ERROR(yyval.node);
	    }
    break;

  case 138:
#line 1503 "grammar.y"
    {
#line 1433 "grammar.y.pre"
		parse_node_t *p1 = yyvsp[-2].node, *p2 = yyvsp[0].node;

		if (exact_types && !compatible_types2(p1->type, p2->type)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Types in ?: do not match ");
		    p = get_two_types(p, end, p1->type, p2->type);
		    p = strput(p, end, ".");
		    yywarn(buf);
		}

		/* optimize if last expression did F_NOT */
		if (IS_NODE(yyvsp[-4].node, NODE_UNARY_OP, F_NOT)) {
		    /* !a ? b : c  --> a ? c : b */
		    CREATE_IF(yyval.node, yyvsp[-4].node->r.expr, p2, p1);
		} else {
		    CREATE_IF(yyval.node, yyvsp[-4].node, p1, p2);
		}
		yyval.node->type = ((p1->type == p2->type) ? p1->type : TYPE_ANY);
	    }
    break;

  case 139:
#line 1528 "grammar.y"
    {
#line 1457 "grammar.y.pre"
		CREATE_LAND_LOR(yyval.node, F_LOR, yyvsp[-2].node, yyvsp[0].node);
		if (IS_NODE(yyvsp[-2].node, NODE_LAND_LOR, F_LOR))
		    yyvsp[-2].node->kind = NODE_BRANCH_LINK;
	    }
    break;

  case 140:
#line 1535 "grammar.y"
    {
#line 1463 "grammar.y.pre"
		CREATE_LAND_LOR(yyval.node, F_LAND, yyvsp[-2].node, yyvsp[0].node);
		if (IS_NODE(yyvsp[-2].node, NODE_LAND_LOR, F_LAND))
		    yyvsp[-2].node->kind = NODE_BRANCH_LINK;
	    }
    break;

  case 141:
#line 1542 "grammar.y"
    {
#line 1469 "grammar.y.pre"
		int t1 = yyvsp[-2].node->type, t3 = yyvsp[0].node->type;
		
		if (is_boolean(yyvsp[-2].node) && is_boolean(yyvsp[0].node))
		    yywarn("bitwise operation on boolean values.");
		if ((t1 & TYPE_MOD_ARRAY) || (t3 & TYPE_MOD_ARRAY)) {
		    if (t1 != t3) {
			if ((t1 != TYPE_ANY) && (t3 != TYPE_ANY) &&
			    !(t1 & t3 & TYPE_MOD_ARRAY)) {
			    char buf[256];
			    char *end = EndOf(buf);
			    char *p;

			    p = strput(buf, end, "Incompatible types for | ");
			    p = get_two_types(p, end, t1, t3);
			    p = strput(p, end, ".");
			    yyerror(buf);
			}
			t1 = TYPE_ANY | TYPE_MOD_ARRAY;
		    }
		    CREATE_BINARY_OP(yyval.node, F_OR, t1, yyvsp[-2].node, yyvsp[0].node);
		}
		else yyval.node = binary_int_op(yyvsp[-2].node, yyvsp[0].node, F_OR, "|");		
	    }
    break;

  case 142:
#line 1568 "grammar.y"
    {
#line 1494 "grammar.y.pre"
		yyval.node = binary_int_op(yyvsp[-2].node, yyvsp[0].node, F_XOR, "^");
	    }
    break;

  case 143:
#line 1573 "grammar.y"
    {
#line 1498 "grammar.y.pre"
		int t1 = yyvsp[-2].node->type, t3 = yyvsp[0].node->type;
		if (is_boolean(yyvsp[-2].node) && is_boolean(yyvsp[0].node))
		    yywarn("bitwise operation on boolean values.");
		if ((t1 & TYPE_MOD_ARRAY) || (t3 & TYPE_MOD_ARRAY)) {
		    if (t1 != t3) {
			if ((t1 != TYPE_ANY) && (t3 != TYPE_ANY) &&
			    !(t1 & t3 & TYPE_MOD_ARRAY)) {
			    char buf[256];
			    char *end = EndOf(buf);
			    char *p;
			    
			    p = strput(buf, end, "Incompatible types for & ");
			    p = get_two_types(p, end, t1, t3);
			    p = strput(p, end, ".");
			    yyerror(buf);
			}
			t1 = TYPE_ANY | TYPE_MOD_ARRAY;
		    } 
		    CREATE_BINARY_OP(yyval.node, F_AND, t1, yyvsp[-2].node, yyvsp[0].node);
		} else yyval.node = binary_int_op(yyvsp[-2].node, yyvsp[0].node, F_AND, "&");
	    }
    break;

  case 144:
#line 1597 "grammar.y"
    {
#line 1521 "grammar.y.pre"
		if (exact_types && !compatible_types2(yyvsp[-2].node->type, yyvsp[0].node->type)){
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "== always false because of incompatible types ");
		    p = get_two_types(p, end, yyvsp[-2].node->type, yyvsp[0].node->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
		/* x == 0 -> !x */
		if (IS_NODE(yyvsp[-2].node, NODE_NUMBER, 0)) {
		    CREATE_UNARY_OP(yyval.node, F_NOT, TYPE_NUMBER, yyvsp[0].node);
		} else
		if (IS_NODE(yyvsp[0].node, NODE_NUMBER, 0)) {
		    CREATE_UNARY_OP(yyval.node, F_NOT, TYPE_NUMBER, yyvsp[-2].node);
		} else {
		    CREATE_BINARY_OP(yyval.node, F_EQ, TYPE_NUMBER, yyvsp[-2].node, yyvsp[0].node);
		}
	    }
    break;

  case 145:
#line 1620 "grammar.y"
    {
#line 1543 "grammar.y.pre"
		if (exact_types && !compatible_types2(yyvsp[-2].node->type, yyvsp[0].node->type)){
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;

		    p = strput(buf, end, "!= always true because of incompatible types ");
		    p = get_two_types(p, end, yyvsp[-2].node->type, yyvsp[0].node->type);
		    p = strput(p, end, ".");
		    yyerror(buf);
		}
                CREATE_BINARY_OP(yyval.node, F_NE, TYPE_NUMBER, yyvsp[-2].node, yyvsp[0].node);
	    }
    break;

  case 146:
#line 1635 "grammar.y"
    {
#line 1557 "grammar.y.pre"
		if (exact_types) {
		    int t1 = yyvsp[-2].node->type;
		    int t3 = yyvsp[0].node->type;

		    if (!COMP_TYPE(t1, TYPE_NUMBER) 
			&& !COMP_TYPE(t1, TYPE_STRING)) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Bad left argument to '");
			p = strput(p, end, query_instr_name(yyvsp[-1].number));
			p = strput(p, end, "' : \"");
			p = get_type_name(p, end, t1);
			p = strput(p, end, "\"");
			yyerror(buf);
		    } else if (!COMP_TYPE(t3, TYPE_NUMBER) 
			       && !COMP_TYPE(t3, TYPE_STRING)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
                        p = strput(buf, end, "Bad right argument to '");
                        p = strput(p, end, query_instr_name(yyvsp[-1].number));
                        p = strput(p, end, "' : \"");
                        p = get_type_name(p, end, t3);
			p = strput(p, end, "\"");
			yyerror(buf);
		    } else if (!compatible_types2(t1,t3)) {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Arguments to ");
			p = strput(p, end, query_instr_name(yyvsp[-1].number));
			p = strput(p, end, " do not have compatible types : ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
		    }
		}
                CREATE_BINARY_OP(yyval.node, yyvsp[-1].number, TYPE_NUMBER, yyvsp[-2].node, yyvsp[0].node);
	    }
    break;

  case 147:
#line 1680 "grammar.y"
    {
#line 1601 "grammar.y.pre"
                if (exact_types) {
                    int t1 = yyvsp[-2].node->type, t3 = yyvsp[0].node->type;

                    if (!COMP_TYPE(t1, TYPE_NUMBER) 
			&& !COMP_TYPE(t1, TYPE_STRING)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Bad left argument to '<' : \"");
                        p = get_type_name(p, end, t1);
			p = strput(p, end, "\"");
                        yyerror(buf);
                    } else if (!COMP_TYPE(t3, TYPE_NUMBER)
			       && !COMP_TYPE(t3, TYPE_STRING)) {
                        char buf[200];
			char *end = EndOf(buf);
			char *p;
			
                        p = strput(buf, end, "Bad right argument to '<' : \"");
                        p = get_type_name(p, end, t3);
                        p = strput(p, end, "\"");
                        yyerror(buf);
                    } else if (!compatible_types2(t1,t3)) {
                        char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Arguments to < do not have compatible types : ");
			p = get_two_types(p, end, t1, t3);
                        yyerror(buf);
                    }
                }
                CREATE_BINARY_OP(yyval.node, F_LT, TYPE_NUMBER, yyvsp[-2].node, yyvsp[0].node);
            }
    break;

  case 148:
#line 1718 "grammar.y"
    {
#line 1638 "grammar.y.pre"
		yyval.node = binary_int_op(yyvsp[-2].node, yyvsp[0].node, F_LSH, "<<");
	    }
    break;

  case 149:
#line 1723 "grammar.y"
    {
#line 1642 "grammar.y.pre"
		yyval.node = binary_int_op(yyvsp[-2].node, yyvsp[0].node, F_RSH, ">>");
	    }
    break;

  case 150:
#line 1728 "grammar.y"
    {
#line 1646 "grammar.y.pre"
		int result_type;

		if (exact_types) {
		    int t1 = yyvsp[-2].node->type, t3 = yyvsp[0].node->type;

		    if (t1 == t3){
#ifdef CAST_CALL_OTHERS
			if (t1 == TYPE_UNKNOWN){
			    yyerror("Bad arguments to '+' (unknown vs unknown)");
			    result_type = TYPE_ANY;
			} else
#endif
			    result_type = t1;
		    }
		    else if (t1 == TYPE_ANY) {
			if (t3 == TYPE_FUNCTION) {
			    yyerror("Bad right argument to '+' (function)");
			    result_type = TYPE_ANY;
			} else result_type = t3;
		    } else if (t3 == TYPE_ANY) {
			if (t1 == TYPE_FUNCTION) {
			    yyerror("Bad left argument to '+' (function)");
			    result_type = TYPE_ANY;
			} else result_type = t1;
		    } else {
			switch(t1) {
			    case TYPE_STRING:
			    {
				if (t3 == TYPE_REAL || t3 == TYPE_NUMBER){
				    result_type = TYPE_STRING;
				} else goto add_error;
				break;
			    }
			    case TYPE_NUMBER:
			    {
				if (t3 == TYPE_REAL || t3 == TYPE_STRING)
				    result_type = t3;
				else goto add_error;
				break;
			    }
			case TYPE_REAL:
			    {
				if (t3 == TYPE_NUMBER) result_type = TYPE_REAL;
				else if (t3 == TYPE_STRING) result_type = TYPE_STRING;
				else goto add_error;
				break;
			    }
			    default:
			    {
				if (t1 & t3 & TYPE_MOD_ARRAY) {
				    result_type = TYPE_ANY|TYPE_MOD_ARRAY;
				    break;
				}
add_error:
				{
				    char buf[256];
				    char *end = EndOf(buf);
				    char *p;
				    
				    p = strput(buf, end, "Invalid argument types to '+' ");
				    p = get_two_types(p, end, t1, t3);
				    yyerror(buf);
				    result_type = TYPE_ANY;
				}
			    }
			}
		    }
		} else 
		    result_type = TYPE_ANY;

		switch (yyvsp[-2].node->kind) {
		case NODE_NUMBER:
		    /* 0 + X */
		    if (yyvsp[-2].node->v.number == 0 &&
			(yyvsp[0].node->type == TYPE_NUMBER || yyvsp[0].node->type == TYPE_REAL)) {
			yyval.node = yyvsp[0].node;
			break;
		    }
		    if (yyvsp[0].node->kind == NODE_NUMBER) {
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.number += yyvsp[0].node->v.number;
			break;
		    }
		    if (yyvsp[0].node->kind == NODE_REAL) {
			yyval.node = yyvsp[0].node;
			yyvsp[0].node->v.real += yyvsp[-2].node->v.number;
			break;
		    }
		    /* swapping the nodes may help later constant folding */
		    if (yyvsp[0].node->type != TYPE_STRING && yyvsp[0].node->type != TYPE_ANY)
			CREATE_BINARY_OP(yyval.node, F_ADD, result_type, yyvsp[0].node, yyvsp[-2].node);
		    else
			CREATE_BINARY_OP(yyval.node, F_ADD, result_type, yyvsp[-2].node, yyvsp[0].node);
		    break;
		case NODE_REAL:
		    if (yyvsp[0].node->kind == NODE_NUMBER) {
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.real += yyvsp[0].node->v.number;
			break;
		    }
		    if (yyvsp[0].node->kind == NODE_REAL) {
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.real += yyvsp[0].node->v.real;
			break;
		    }
		    /* swapping the nodes may help later constant folding */
		    if (yyvsp[0].node->type != TYPE_STRING && yyvsp[0].node->type != TYPE_ANY)
			CREATE_BINARY_OP(yyval.node, F_ADD, result_type, yyvsp[0].node, yyvsp[-2].node);
		    else
			CREATE_BINARY_OP(yyval.node, F_ADD, result_type, yyvsp[-2].node, yyvsp[0].node);
		    break;
		case NODE_STRING:
		    if (yyvsp[0].node->kind == NODE_STRING) {
			/* Combine strings */
			int n1, n2;
			char *new, *s1, *s2;
			int l;

			n1 = yyvsp[-2].node->v.number;
			n2 = yyvsp[0].node->v.number;
			s1 = PROG_STRING(n1);
			s2 = PROG_STRING(n2);
			new = (char *)DXALLOC( (l = strlen(s1))+strlen(s2)+1, TAG_COMPILER, "combine string" );
			strcpy(new, s1);
			strcat(new + l, s2);
			/* free old strings (ordering may help shrink table) */
			if (n1 > n2) {
			    free_prog_string(n1); free_prog_string(n2);
			} else {
			    free_prog_string(n2); free_prog_string(n1);
			}
			yyval.node = yyvsp[-2].node;
			yyval.node->v.number = store_prog_string(new);
			FREE(new);
			break;
		    }
		    CREATE_BINARY_OP(yyval.node, F_ADD, result_type, yyvsp[-2].node, yyvsp[0].node);
		    break;
		default:
		    /* X + 0 */
		    if (IS_NODE(yyvsp[0].node, NODE_NUMBER, 0) &&
			(yyvsp[-2].node->type == TYPE_NUMBER || yyvsp[-2].node->type == TYPE_REAL)) {
			yyval.node = yyvsp[-2].node;
			break;
		    }
		    CREATE_BINARY_OP(yyval.node, F_ADD, result_type, yyvsp[-2].node, yyvsp[0].node);
		    break;
		}
	    }
    break;

  case 151:
#line 1880 "grammar.y"
    {
#line 1797 "grammar.y.pre"
		int result_type;

		if (exact_types) {
		    int t1 = yyvsp[-2].node->type, t3 = yyvsp[0].node->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_ANY:
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			        result_type = t1;
				break;
			    default:
				if (!(t1 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 1 to '-'", t1);
				    result_type = TYPE_ANY;
				} else result_type = t1;
			}
		    } else if (t1 == TYPE_ANY){
			switch(t3){
			    case TYPE_REAL:
			    case TYPE_NUMBER:
			        result_type = t3;
				break;
			    default:
				if (!(t3 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 2 to '-'", t3);
				    result_type = TYPE_ANY;
				} else result_type = t3;
			}
		    } else if (t3 == TYPE_ANY){
			switch(t1){
			    case TYPE_REAL:
			    case TYPE_NUMBER:
			        result_type = t1;
				break;
			    default:
				if (!(t1 & TYPE_MOD_ARRAY)){
				    type_error("Bad argument number 1 to '-'", t1);
				    result_type = TYPE_ANY;
				} else result_type = t1;
			}
		    } else if ((t1 == TYPE_REAL && t3 == TYPE_NUMBER) ||
			       (t3 == TYPE_REAL && t1 == TYPE_NUMBER)){
			result_type = TYPE_REAL;
		    } else if (t1 & t3 & TYPE_MOD_ARRAY){
			result_type = TYPE_MOD_ARRAY|TYPE_ANY;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '-' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;
		
		switch (yyvsp[-2].node->kind) {
		case NODE_NUMBER:
		    if (yyvsp[-2].node->v.number == 0) {
			CREATE_UNARY_OP(yyval.node, F_NEGATE, yyvsp[0].node->type, yyvsp[0].node);
		    } else if (yyvsp[0].node->kind == NODE_NUMBER) {
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.number -= yyvsp[0].node->v.number;
		    } else if (yyvsp[0].node->kind == NODE_REAL) {
			yyval.node = yyvsp[0].node;
			yyvsp[0].node->v.real = yyvsp[-2].node->v.number - yyvsp[0].node->v.real;
		    } else {
			CREATE_BINARY_OP(yyval.node, F_SUBTRACT, result_type, yyvsp[-2].node, yyvsp[0].node);
		    }
		    break;
		case NODE_REAL:
		    if (yyvsp[0].node->kind == NODE_NUMBER) {
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.real -= yyvsp[0].node->v.number;
		    } else if (yyvsp[0].node->kind == NODE_REAL) {
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.real -= yyvsp[0].node->v.real;
		    } else {
			CREATE_BINARY_OP(yyval.node, F_SUBTRACT, result_type, yyvsp[-2].node, yyvsp[0].node);
		    }
		    break;
		default:
		    /* optimize X-0 */
		    if (IS_NODE(yyvsp[0].node, NODE_NUMBER, 0)) {
			yyval.node = yyvsp[-2].node;
		    } 
		    CREATE_BINARY_OP(yyval.node, F_SUBTRACT, result_type, yyvsp[-2].node, yyvsp[0].node);
		}
	    }
    break;

  case 152:
#line 1975 "grammar.y"
    {
#line 1891 "grammar.y.pre"
		int result_type;

		if (exact_types){
		    int t1 = yyvsp[-2].node->type, t3 = yyvsp[0].node->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_MAPPING:
			    case TYPE_ANY:
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			        result_type = t1;
				break;
			default:
				type_error("Bad argument number 1 to '*'", t1);
				result_type = TYPE_ANY;
			}
		    } else if (t1 == TYPE_ANY || t3 == TYPE_ANY){
			int t = (t1 == TYPE_ANY) ? t3 : t1;
			switch(t){
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			    case TYPE_MAPPING:
			        result_type = t;
				break;
			    default:
				type_error((t1 == TYPE_ANY) ?
					   "Bad argument number 2 to '*'" :
					   "Bad argument number 1 to '*'",
					   t);
				result_type = TYPE_ANY;
			}
		    } else if ((t1 == TYPE_NUMBER && t3 == TYPE_REAL) ||
			       (t1 == TYPE_REAL && t3 == TYPE_NUMBER)){
			result_type = TYPE_REAL;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '*' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;

		switch (yyvsp[-2].node->kind) {
		case NODE_NUMBER:
		    if (yyvsp[0].node->kind == NODE_NUMBER) {
			yyval.node = yyvsp[-2].node;
			yyval.node->v.number *= yyvsp[0].node->v.number;
			break;
		    }
		    if (yyvsp[0].node->kind == NODE_REAL) {
			yyval.node = yyvsp[0].node;
			yyvsp[0].node->v.real *= yyvsp[-2].node->v.number;
			break;
		    }
		    CREATE_BINARY_OP(yyval.node, F_MULTIPLY, result_type, yyvsp[0].node, yyvsp[-2].node);
		    break;
		case NODE_REAL:
		    if (yyvsp[0].node->kind == NODE_NUMBER) {
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.real *= yyvsp[0].node->v.number;
			break;
		    }
		    if (yyvsp[0].node->kind == NODE_REAL) {
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.real *= yyvsp[0].node->v.real;
			break;
		    }
		    CREATE_BINARY_OP(yyval.node, F_MULTIPLY, result_type, yyvsp[0].node, yyvsp[-2].node);
		    break;
		default:
		    CREATE_BINARY_OP(yyval.node, F_MULTIPLY, result_type, yyvsp[-2].node, yyvsp[0].node);
		}
	    }
    break;

  case 153:
#line 2056 "grammar.y"
    {
#line 1971 "grammar.y.pre"
		yyval.node = binary_int_op(yyvsp[-2].node, yyvsp[0].node, F_MOD, "%");
	    }
    break;

  case 154:
#line 2061 "grammar.y"
    {
#line 1975 "grammar.y.pre"
		int result_type;

		if (exact_types){
		    int t1 = yyvsp[-2].node->type, t3 = yyvsp[0].node->type;

		    if (t1 == t3){
			switch(t1){
			    case TYPE_NUMBER:
			    case TYPE_REAL:
			case TYPE_ANY:
			        result_type = t1;
				break;
			    default:
				type_error("Bad argument 1 to '/'", t1);
				result_type = TYPE_ANY;
			}
		    } else if (t1 == TYPE_ANY || t3 == TYPE_ANY){
			int t = (t1 == TYPE_ANY) ? t3 : t1;
			if (t == TYPE_REAL || t == TYPE_NUMBER)
			    result_type = t; 
			else {
			    type_error(t1 == TYPE_ANY ?
				       "Bad argument 2 to '/'" :
				       "Bad argument 1 to '/'", t);
			    result_type = TYPE_ANY;
			}
		    } else if ((t1 == TYPE_NUMBER && t3 == TYPE_REAL) ||
			       (t1 == TYPE_REAL && t3 == TYPE_NUMBER)) {
			result_type = TYPE_REAL;
		    } else {
			char buf[256];
			char *end = EndOf(buf);
			char *p;
			
			p = strput(buf, end, "Invalid types to '/' ");
			p = get_two_types(p, end, t1, t3);
			yyerror(buf);
			result_type = TYPE_ANY;
		    }
		} else result_type = TYPE_ANY;		    

		/* constant expressions */
		switch (yyvsp[-2].node->kind) {
		case NODE_NUMBER:
		    if (yyvsp[0].node->kind == NODE_NUMBER) {
			if (yyvsp[0].node->v.number == 0) {
			    yyerror("Divide by zero in constant");
			    yyval.node = yyvsp[-2].node;
			    break;
			}
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.number /= yyvsp[0].node->v.number;
			break;
		    }
		    if (yyvsp[0].node->kind == NODE_REAL) {
			if (yyvsp[0].node->v.real == 0.0) {
			    yyerror("Divide by zero in constant");
			    yyval.node = yyvsp[-2].node;
			    break;
			}
			yyval.node = yyvsp[0].node;
			yyvsp[0].node->v.real = (yyvsp[-2].node->v.number / yyvsp[0].node->v.real);
			break;
		    }
		    CREATE_BINARY_OP(yyval.node, F_DIVIDE, result_type, yyvsp[-2].node, yyvsp[0].node);
		    break;
		case NODE_REAL:
		    if (yyvsp[0].node->kind == NODE_NUMBER) {
			if (yyvsp[0].node->v.number == 0) {
			    yyerror("Divide by zero in constant");
			    yyval.node = yyvsp[-2].node;
			    break;
			}
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.real /= yyvsp[0].node->v.number;
			break;
		    }
		    if (yyvsp[0].node->kind == NODE_REAL) {
			if (yyvsp[0].node->v.real == 0.0) {
			    yyerror("Divide by zero in constant");
			    yyval.node = yyvsp[-2].node;
			    break;
			}
			yyval.node = yyvsp[-2].node;
			yyvsp[-2].node->v.real /= yyvsp[0].node->v.real;
			break;
		    }
		    CREATE_BINARY_OP(yyval.node, F_DIVIDE, result_type, yyvsp[-2].node, yyvsp[0].node);
		    break;
		default:
		    CREATE_BINARY_OP(yyval.node, F_DIVIDE, result_type, yyvsp[-2].node, yyvsp[0].node);
		}
	    }
    break;

  case 155:
#line 2157 "grammar.y"
    {
#line 2070 "grammar.y.pre"
		yyval.node = yyvsp[0].node;
		yyval.node->type = yyvsp[-1].type;

		if (exact_types &&
		    yyvsp[0].node->type != yyvsp[-1].type &&
		    yyvsp[0].node->type != TYPE_ANY && 
		    yyvsp[0].node->type != TYPE_UNKNOWN &&
		    yyvsp[-1].type != TYPE_VOID) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Cannot cast ");
		    p = get_type_name(p, end, yyvsp[0].node->type);
		    p = strput(p, end, "to ");
		    p = get_type_name(p, end, yyvsp[-1].type);
		    yyerror(buf);
		}
	    }
    break;

  case 156:
#line 2179 "grammar.y"
    {
#line 2091 "grammar.y.pre"
		CREATE_UNARY_OP(yyval.node, F_PRE_INC, 0, yyvsp[0].node);
                if (exact_types){
                    switch(yyvsp[0].node->type){
                        case TYPE_NUMBER:
                        case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            yyval.node->type = yyvsp[0].node->type;
                            break;
                        }

                        default:
                        {
                            yyval.node->type = TYPE_ANY;
                            type_error("Bad argument 1 to ++x", yyvsp[0].node->type);
                        }
                    }
                } else yyval.node->type = TYPE_ANY;
	    }
    break;

  case 157:
#line 2201 "grammar.y"
    {
#line 2112 "grammar.y.pre"
		CREATE_UNARY_OP(yyval.node, F_PRE_DEC, 0, yyvsp[0].node);
                if (exact_types){
                    switch(yyvsp[0].node->type){
                        case TYPE_NUMBER:
                        case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            yyval.node->type = yyvsp[0].node->type;
                            break;
                        }

                        default:
                        {
                            yyval.node->type = TYPE_ANY;
                            type_error("Bad argument 1 to --x", yyvsp[0].node->type);
                        }
                    }
                } else yyval.node->type = TYPE_ANY;

	    }
    break;

  case 158:
#line 2224 "grammar.y"
    {
#line 2134 "grammar.y.pre"
		if (yyvsp[0].node->kind == NODE_NUMBER) {
		    yyval.node = yyvsp[0].node;
		    yyval.node->v.number = !(yyval.node->v.number);
		} else {
		    CREATE_UNARY_OP(yyval.node, F_NOT, TYPE_NUMBER, yyvsp[0].node);
		}
	    }
    break;

  case 159:
#line 2234 "grammar.y"
    {
#line 2143 "grammar.y.pre"
		if (exact_types && !IS_TYPE(yyvsp[0].node->type, TYPE_NUMBER))
		    type_error("Bad argument to ~", yyvsp[0].node->type);
		if (yyvsp[0].node->kind == NODE_NUMBER) {
		    yyval.node = yyvsp[0].node;
		    yyval.node->v.number = ~yyval.node->v.number;
		} else {
		    CREATE_UNARY_OP(yyval.node, F_COMPL, TYPE_NUMBER, yyvsp[0].node);
		}
	    }
    break;

  case 160:
#line 2246 "grammar.y"
    {
#line 2154 "grammar.y.pre"
		int result_type;
                if (exact_types){
		    int t = yyvsp[0].node->type;
		    if (!COMP_TYPE(t, TYPE_NUMBER)){
			type_error("Bad argument to unary '-'", t);
			result_type = TYPE_ANY;
		    } else result_type = t;
		} else result_type = TYPE_ANY;

		switch (yyvsp[0].node->kind) {
		case NODE_NUMBER:
		    yyval.node = yyvsp[0].node;
		    yyval.node->v.number = -yyval.node->v.number;
		    break;
		case NODE_REAL:
		    yyval.node = yyvsp[0].node;
		    yyval.node->v.real = -yyval.node->v.real;
		    break;
		default:
		    CREATE_UNARY_OP(yyval.node, F_NEGATE, result_type, yyvsp[0].node);
		}
	    }
    break;

  case 161:
#line 2271 "grammar.y"
    {
#line 2178 "grammar.y.pre"
		CREATE_UNARY_OP(yyval.node, F_POST_INC, 0, yyvsp[-1].node);
		yyval.node->v.number = F_POST_INC;
                if (exact_types){
                    switch(yyvsp[-1].node->type){
                        case TYPE_NUMBER:
		    case TYPE_ANY:
                        case TYPE_REAL:
                        {
                            yyval.node->type = yyvsp[-1].node->type;
                            break;
                        }

                        default:
                        {
                            yyval.node->type = TYPE_ANY;
                            type_error("Bad argument 1 to x++", yyvsp[-1].node->type);
                        }
                    }
                } else yyval.node->type = TYPE_ANY;
	    }
    break;

  case 162:
#line 2294 "grammar.y"
    {
#line 2200 "grammar.y.pre"
		CREATE_UNARY_OP(yyval.node, F_POST_DEC, 0, yyvsp[-1].node);
                if (exact_types){
                    switch(yyvsp[-1].node->type){
		    case TYPE_NUMBER:
		    case TYPE_ANY:
		    case TYPE_REAL:
		    {
			yyval.node->type = yyvsp[-1].node->type;
			break;
		    }

		    default:
		    {
			yyval.node->type = TYPE_ANY;
			type_error("Bad argument 1 to x--", yyvsp[-1].node->type);
		    }
                    }
                } else yyval.node->type = TYPE_ANY;
	    }
    break;

  case 169:
#line 2325 "grammar.y"
    {
#line 2230 "grammar.y.pre"
    		if (exact_types && !IS_TYPE(exact_types, TYPE_VOID))
		    yywarn("Non-void functions must return a value.");
    		CREATE_RETURN(yyval.node, 0);
	    }
    break;

  case 170:
#line 2332 "grammar.y"
    {
#line 2236 "grammar.y.pre"
		if (exact_types && !compatible_types(yyvsp[-1].node->type, exact_types)) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Type of returned value doesn't match function return type ");
		    p = get_two_types(p, end, yyvsp[-1].node->type, exact_types);
		    yyerror(buf);
		}
		if (IS_NODE(yyvsp[-1].node, NODE_NUMBER, 0)) {
		    CREATE_RETURN(yyval.node, 0);
		} else {
		    CREATE_RETURN(yyval.node, yyvsp[-1].node);
		}
	    }
    break;

  case 171:
#line 2353 "grammar.y"
    {
#line 2256 "grammar.y.pre"
		CREATE_EXPR_LIST(yyval.node, 0);
	    }
    break;

  case 172:
#line 2358 "grammar.y"
    {
#line 2260 "grammar.y.pre"
		CREATE_EXPR_LIST(yyval.node, yyvsp[0].node);
	    }
    break;

  case 173:
#line 2363 "grammar.y"
    {
#line 2264 "grammar.y.pre"
		CREATE_EXPR_LIST(yyval.node, yyvsp[-1].node);
	    }
    break;

  case 174:
#line 2371 "grammar.y"
    {
#line 2271 "grammar.y.pre"
		CREATE_EXPR_NODE(yyval.node, yyvsp[0].node, 0);
	    }
    break;

  case 175:
#line 2376 "grammar.y"
    {
#line 2275 "grammar.y.pre"
		CREATE_EXPR_NODE(yyval.node, yyvsp[-1].node, 1);
	    }
    break;

  case 176:
#line 2384 "grammar.y"
    {
#line 2282 "grammar.y.pre"
		yyvsp[0].node->kind = 1;

		yyval.node = yyvsp[0].node;
	    }
    break;

  case 177:
#line 2391 "grammar.y"
    {
#line 2288 "grammar.y.pre"
		yyvsp[0].node->kind = 0;

		yyval.node = yyvsp[-2].node;
		yyval.node->kind++;
		yyval.node->l.expr->r.expr = yyvsp[0].node;
		yyval.node->l.expr = yyvsp[0].node;
	    }
    break;

  case 178:
#line 2404 "grammar.y"
    {
#line 2300 "grammar.y.pre"
		/* this is a dummy node */
		CREATE_EXPR_LIST(yyval.node, 0);
	    }
    break;

  case 179:
#line 2410 "grammar.y"
    {
#line 2305 "grammar.y.pre"
		CREATE_EXPR_LIST(yyval.node, yyvsp[0].node);
	    }
    break;

  case 180:
#line 2415 "grammar.y"
    {
#line 2309 "grammar.y.pre"
		CREATE_EXPR_LIST(yyval.node, yyvsp[-1].node);
	    }
    break;

  case 181:
#line 2423 "grammar.y"
    {
#line 2316 "grammar.y.pre"
		yyval.node = new_node_no_line();
		yyval.node->kind = 2;
		yyval.node->v.expr = yyvsp[0].node;
		yyval.node->r.expr = 0;
		yyval.node->type = 0;
		/* we keep track of the end of the chain in the left nodes */
		yyval.node->l.expr = yyval.node;
            }
    break;

  case 182:
#line 2434 "grammar.y"
    {
#line 2326 "grammar.y.pre"
		parse_node_t *expr;

		expr = new_node_no_line();
		expr->kind = 0;
		expr->v.expr = yyvsp[0].node;
		expr->r.expr = 0;
		expr->type = 0;
		
		yyvsp[-2].node->l.expr->r.expr = expr;
		yyvsp[-2].node->l.expr = expr;
		yyvsp[-2].node->kind += 2;
		yyval.node = yyvsp[-2].node;
	    }
    break;

  case 183:
#line 2453 "grammar.y"
    {
#line 2344 "grammar.y.pre"
		CREATE_TWO_VALUES(yyval.node, 0, yyvsp[-2].node, yyvsp[0].node);
            }
    break;

  case 184:
#line 2461 "grammar.y"
    {
#line 2351 "grammar.y.pre"
#define LV_ILLEGAL 1
#define LV_RANGE 2
#define LV_INDEX 4
                /* Restrictive lvalues, but I think they make more sense :) */
                yyval.node = yyvsp[0].node;
                switch(yyval.node->kind) {
		default:
		    yyerror("Illegal lvalue");
		    break;
		case NODE_PARAMETER:
		    yyval.node->kind = NODE_PARAMETER_LVALUE;
		    break;
		case NODE_TERNARY_OP:
		    yyval.node->v.number = yyval.node->r.expr->v.number;
		case NODE_OPCODE_1:
		case NODE_UNARY_OP_1:
		case NODE_BINARY_OP:
		    if (yyval.node->v.number >= F_LOCAL && yyval.node->v.number <= F_MEMBER)
			yyval.node->v.number++; /* make it an lvalue */
		    else if (yyval.node->v.number >= F_INDEX 
			     && yyval.node->v.number <= F_RE_RANGE) {
                        parse_node_t *node = yyval.node;
                        int flag = 0;
                        do {
                            switch(node->kind) {
			    case NODE_PARAMETER:
				node->kind = NODE_PARAMETER_LVALUE;
				flag |= LV_ILLEGAL;
				break;
			    case NODE_TERNARY_OP:
				node->v.number = node->r.expr->v.number;
			    case NODE_OPCODE_1:
			    case NODE_UNARY_OP_1:
			    case NODE_BINARY_OP:
				if (node->v.number >= F_LOCAL 
				    && node->v.number <= F_MEMBER) {
				    node->v.number++;
				    flag |= LV_ILLEGAL;
				    break;
				} else if (node->v.number == F_INDEX ||
					 node->v.number == F_RINDEX) {
				    node->v.number++;
				    flag |= LV_INDEX;
				    break;
				} else if (node->v.number >= F_ADD_EQ
					   && node->v.number <= F_ASSIGN) {
				    if (!(flag & LV_INDEX)) {
					yyerror("Illegal lvalue, a possible lvalue is (x <assign> y)[a]");
				    }
				    if (node->r.expr->kind == NODE_BINARY_OP||
					node->r.expr->kind == NODE_TERNARY_OP){
					if (node->r.expr->v.number >= F_NN_RANGE_LVALUE && node->r.expr->v.number <= F_NR_RANGE_LVALUE)
					    yyerror("Illegal to have (x[a..b] <assign> y) to be the beginning of an lvalue");
				    }
				    flag = LV_ILLEGAL;
				    break;
				} else if (node->v.number >= F_NN_RANGE
					 && node->v.number <= F_RE_RANGE) {
				    if (flag & LV_RANGE) {
					yyerror("Can't do range lvalue of range lvalue.");
					flag |= LV_ILLEGAL;
					break;
				    }
                                    if (flag & LV_INDEX){
					yyerror("Can't do indexed lvalue of range lvalue.");
					flag |= LV_ILLEGAL;
					break;
				    }
				    if (node->v.number == F_NE_RANGE) {
					/* x[foo..] -> x[foo..<1] */
					parse_node_t *rchild = node->r.expr;
					node->kind = NODE_TERNARY_OP;
					CREATE_BINARY_OP(node->r.expr,
							 F_NR_RANGE_LVALUE,
							 0, 0, rchild);
					CREATE_NUMBER(node->r.expr->l.expr, 1);
				    } else if (node->v.number == F_RE_RANGE) {
					/* x[<foo..] -> x[<foo..<1] */
					parse_node_t *rchild = node->r.expr;
					node->kind = NODE_TERNARY_OP;
					CREATE_BINARY_OP(node->r.expr,
							 F_RR_RANGE_LVALUE,
							 0, 0, rchild);
					CREATE_NUMBER(node->r.expr->l.expr, 1);
				    } else
					node->r.expr->v.number++;
				    flag |= LV_RANGE;
				    node = node->r.expr->r.expr;
				    continue;
				}
			    default:
				yyerror("Illegal lvalue");
				flag = LV_ILLEGAL;
				break;
			    }   
                            if ((flag & LV_ILLEGAL) || !(node = node->r.expr)) break;
                        } while (1);
                        break;
		    } else 
			yyerror("Illegal lvalue");
		    break;
                }
            }
    break;

  case 186:
#line 2572 "grammar.y"
    {
#line 2484 "grammar.y.pre"
              int i;
              if ((i = yyvsp[0].ihe->dn.local_num) != -1) {
		  type_of_locals_ptr[i] &= ~LOCAL_MOD_UNUSED;
		  if (type_of_locals_ptr[i] & LOCAL_MOD_REF)
		      CREATE_OPCODE_1(yyval.node, F_REF, type_of_locals_ptr[i] & ~LOCAL_MOD_REF,i & 0xff);
		  else
		      CREATE_OPCODE_1(yyval.node, F_LOCAL, type_of_locals_ptr[i], i & 0xff);
		  if (current_function_context)
		      current_function_context->num_locals++;
              } else
		  if ((i = yyvsp[0].ihe->dn.global_num) != -1) {
		      if (current_function_context)
			  current_function_context->bindable = FP_NOT_BINDABLE;
                          CREATE_OPCODE_1(yyval.node, F_GLOBAL,
				      VAR_TEMP(i)->type & ~DECL_MODS, i);
		      if (VAR_TEMP(i)->type & DECL_HIDDEN) {
			  char buf[256];
			  char *end = EndOf(buf);
			  char *p;

			  p = strput(buf, end, "Illegal to use private variable '");
			  p = strput(p, end, yyvsp[0].ihe->name);
			  p = strput(p, end, "'");
			  yyerror(buf);
		      }
		  } else {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      
		      p = strput(buf, end, "Undefined variable '");
		      p = strput(p, end, yyvsp[0].ihe->name);
		      p = strput(p, end, "'");
		      if (current_number_of_locals < CFG_MAX_LOCAL_VARIABLES) {
			  add_local_name(yyvsp[0].ihe->name, TYPE_ANY);
		      }
		      CREATE_ERROR(yyval.node);
		      yyerror(buf);
		  }
	    }
    break;

  case 187:
#line 2615 "grammar.y"
    {
#line 2526 "grammar.y.pre"
		char buf[256];
		char *end = EndOf(buf);
		char *p;
		
		p = strput(buf, end, "Undefined variable '");
		p = strput(p, end, yyvsp[0].string);
		p = strput(p, end, "'");
                if (current_number_of_locals < CFG_MAX_LOCAL_VARIABLES) {
                    add_local_name(yyvsp[0].string, TYPE_ANY);
                }
                CREATE_ERROR(yyval.node);
                yyerror(buf);
                scratch_free(yyvsp[0].string);
            }
    break;

  case 188:
#line 2632 "grammar.y"
    {
#line 2542 "grammar.y.pre"
		CREATE_PARAMETER(yyval.node, TYPE_ANY, yyvsp[0].number);
            }
    break;

  case 189:
#line 2637 "grammar.y"
    {
#line 2546 "grammar.y.pre"
		yyval.contextp = current_function_context;
		/* already flagged as an error */
		if (current_function_context)
		    current_function_context = current_function_context->parent;
            }
    break;

  case 190:
#line 2645 "grammar.y"
    {
#line 2553 "grammar.y.pre"
		parse_node_t *node;

		current_function_context = yyvsp[-2].contextp;

		if (!current_function_context || current_function_context->num_parameters == -2) {
		    /* This was illegal, and error'ed when the '$' token
		     * was returned.
		     */
		    CREATE_ERROR(yyval.node);
		} else {
		    CREATE_OPCODE_1(yyval.node, F_LOCAL, yyvsp[-1].node->type,
				    current_function_context->values_list->kind++);

		    node = new_node_no_line();
		    node->type = 0;
		    current_function_context->values_list->l.expr->r.expr = node;
		    current_function_context->values_list->l.expr = node;
		    node->r.expr = 0;
		    node->v.expr = yyvsp[-1].node;
		}
	    }
    break;

  case 191:
#line 2669 "grammar.y"
    {
#line 2576 "grammar.y.pre"
		if (yyvsp[-2].node->type == TYPE_ANY) {
		    int cmi;
		    char tp;
		    
		    if ((cmi = lookup_any_class_member(yyvsp[0].string, &tp)) != -1) {
			CREATE_UNARY_OP_1(yyval.node, F_MEMBER, tp, yyvsp[-2].node, 0);
			yyval.node->l.number = cmi;
		    } else {
			CREATE_ERROR(yyval.node);
		    }
		} else if (!IS_CLASS(yyvsp[-2].node->type)) {
		    yyerror("Left argument of -> is not a class");
		    CREATE_ERROR(yyval.node);
		} else {
		    CREATE_UNARY_OP_1(yyval.node, F_MEMBER, 0, yyvsp[-2].node, 0);
		    yyval.node->l.number = lookup_class_member(CLASS_IDX(yyvsp[-2].node->type),
						       yyvsp[0].string,
						       &(yyval.node->type));
		}
		    
		scratch_free(yyvsp[0].string);
            }
    break;

  case 192:
#line 2694 "grammar.y"
    {
#line 2600 "grammar.y.pre"
                if (yyvsp[-5].node->type != TYPE_MAPPING && 
		    yyvsp[-1].node->kind == NODE_NUMBER && yyvsp[-1].node->v.number < 0)
		    yywarn("A negative constant as the second element of arr[x..y] no longer means indexing from the end.  Use arr[x..<y]");
                yyval.node = make_range_node(F_NN_RANGE, yyvsp[-5].node, yyvsp[-3].node, yyvsp[-1].node);
            }
    break;

  case 193:
#line 2702 "grammar.y"
    {
#line 2609 "grammar.y.pre"
                yyval.node = make_range_node(F_RN_RANGE, yyvsp[-6].node, yyvsp[-3].node, yyvsp[-1].node);
            }
    break;

  case 194:
#line 2707 "grammar.y"
    {
#line 2613 "grammar.y.pre"
		if (yyvsp[-1].node->kind == NODE_NUMBER && yyvsp[-1].node->v.number <= 1)
		    yyval.node = make_range_node(F_RE_RANGE, yyvsp[-7].node, yyvsp[-4].node, 0);
		else
		    yyval.node = make_range_node(F_RR_RANGE, yyvsp[-7].node, yyvsp[-4].node, yyvsp[-1].node);
            }
    break;

  case 195:
#line 2715 "grammar.y"
    {
#line 2620 "grammar.y.pre"
		if (yyvsp[-1].node->kind == NODE_NUMBER && yyvsp[-1].node->v.number <= 1)
		    yyval.node = make_range_node(F_NE_RANGE, yyvsp[-6].node, yyvsp[-4].node, 0);
		else
		    yyval.node = make_range_node(F_NR_RANGE, yyvsp[-6].node, yyvsp[-4].node, yyvsp[-1].node);
            }
    break;

  case 196:
#line 2723 "grammar.y"
    {
#line 2627 "grammar.y.pre"
                yyval.node = make_range_node(F_NE_RANGE, yyvsp[-4].node, yyvsp[-2].node, 0);
            }
    break;

  case 197:
#line 2728 "grammar.y"
    {
#line 2631 "grammar.y.pre"
                yyval.node = make_range_node(F_RE_RANGE, yyvsp[-5].node, yyvsp[-2].node, 0);
            }
    break;

  case 198:
#line 2733 "grammar.y"
    {
#line 2635 "grammar.y.pre"
                if (IS_NODE(yyvsp[-4].node, NODE_CALL, F_AGGREGATE)
		    && yyvsp[-1].node->kind == NODE_NUMBER) {
                    int i = yyvsp[-1].node->v.number;
                    if (i < 1 || i > yyvsp[-4].node->l.number)
                        yyerror("Illegal index to array constant.");
                    else {
                        parse_node_t *node = yyvsp[-4].node->r.expr;
                        i = yyvsp[-4].node->l.number - i;
                        while (i--)
                            node = node->r.expr;
                        yyval.node = node->v.expr;
                        break;
                    }
                }
		CREATE_BINARY_OP(yyval.node, F_RINDEX, 0, yyvsp[-1].node, yyvsp[-4].node);
                if (exact_types) {
		    switch(yyvsp[-4].node->type) {
		    case TYPE_MAPPING:
			yyerror("Illegal index for mapping.");
		    case TYPE_ANY:
			yyval.node->type = TYPE_ANY;
			break;
		    case TYPE_STRING:
		    case TYPE_BUFFER:
			yyval.node->type = TYPE_NUMBER;
			if (!IS_TYPE(yyvsp[-1].node->type,TYPE_NUMBER))
			    type_error("Bad type of index", yyvsp[-1].node->type);
			break;
			
		    default:
			if (yyvsp[-4].node->type & TYPE_MOD_ARRAY) {
			    yyval.node->type = yyvsp[-4].node->type & ~TYPE_MOD_ARRAY;
			    if (!IS_TYPE(yyvsp[-1].node->type,TYPE_NUMBER))
				type_error("Bad type of index", yyvsp[-1].node->type);
			} else {
			    type_error("Value indexed has a bad type ", yyvsp[-4].node->type);
			    yyval.node->type = TYPE_ANY;
			}
		    }
		} else yyval.node->type = TYPE_ANY;
            }
    break;

  case 199:
#line 2777 "grammar.y"
    {
#line 2678 "grammar.y.pre"
		/* Something stupid like ({ 1, 2, 3 })[1]; we take the
		 * time to optimize this because people who don't understand
		 * the preprocessor often write things like:
		 *
		 * #define MY_ARRAY ({ "foo", "bar", "bazz" })
		 * ...
		 * ... MY_ARRAY[1] ...
		 *
		 * which of course expands to the above.
		 */
                if (IS_NODE(yyvsp[-3].node, NODE_CALL, F_AGGREGATE) && yyvsp[-1].node->kind == NODE_NUMBER) {
                    int i = yyvsp[-1].node->v.number;
                    if (i < 0 || i >= yyvsp[-3].node->l.number)
                        yyerror("Illegal index to array constant.");
                    else {
                        parse_node_t *node = yyvsp[-3].node->r.expr;
                        while (i--)
                            node = node->r.expr;
                        yyval.node = node->v.expr;
                        break;
                    }
                }
                if (yyvsp[-3].node->type != TYPE_MAPPING && yyvsp[-1].node->kind == NODE_NUMBER && yyvsp[-1].node->v.number < 0)
		    yywarn("A negative constant in arr[x] no longer means indexing from the end.  Use arr[<x]");
                CREATE_BINARY_OP(yyval.node, F_INDEX, 0, yyvsp[-1].node, yyvsp[-3].node);
                if (exact_types) {
		    switch(yyvsp[-3].node->type) {
		    case TYPE_MAPPING:
		    case TYPE_ANY:
			yyval.node->type = TYPE_ANY;
			break;
		    case TYPE_STRING:
		    case TYPE_BUFFER:
			yyval.node->type = TYPE_NUMBER;
			if (!IS_TYPE(yyvsp[-1].node->type,TYPE_NUMBER))
			    type_error("Bad type of index", yyvsp[-1].node->type);
			break;
			
		    default:
			if (yyvsp[-3].node->type & TYPE_MOD_ARRAY) {
			    yyval.node->type = yyvsp[-3].node->type & ~TYPE_MOD_ARRAY;
			    if (!IS_TYPE(yyvsp[-1].node->type,TYPE_NUMBER))
				type_error("Bad type of index", yyvsp[-1].node->type);
			} else {
			    type_error("Value indexed has a bad type ", yyvsp[-3].node->type);
			    yyval.node->type = TYPE_ANY;
			}
                    }
                } else yyval.node->type = TYPE_ANY;
            }
    break;

  case 201:
#line 2831 "grammar.y"
    {
#line 2733 "grammar.y.pre"
		yyval.node = yyvsp[-1].node;
	    }
    break;

  case 203:
#line 2837 "grammar.y"
    {
#line 2741 "grammar.y.pre"
	        if (yyvsp[0].type != TYPE_FUNCTION) yyerror("Reserved type name unexpected.");
		yyval.func_block.num_local = current_number_of_locals;
		yyval.func_block.max_num_locals = max_num_locals;
		yyval.func_block.context = context;
		yyval.func_block.save_current_type = current_type;
		yyval.func_block.save_exact_types = exact_types;
	        if (type_of_locals_ptr + max_num_locals + CFG_MAX_LOCAL_VARIABLES >= &type_of_locals[type_of_locals_size])
		    reallocate_locals();
		deactivate_current_locals();
		locals_ptr += current_number_of_locals;
		type_of_locals_ptr += max_num_locals;
		max_num_locals = current_number_of_locals = 0;
		push_function_context();
		current_function_context->num_parameters = -1;
		exact_types = TYPE_ANY;
		context = 0;
            }
    break;

  case 204:
#line 2857 "grammar.y"
    {
#line 2760 "grammar.y.pre"
		if (yyvsp[-2].argument.flags & ARG_IS_VARARGS) {
		    yyerror("Anonymous varargs functions aren't implemented");
		}
		if (!yyvsp[0].decl.node) {
		    CREATE_RETURN(yyvsp[0].decl.node, 0);
		} else if (yyvsp[0].decl.node->kind != NODE_RETURN &&
			   (yyvsp[0].decl.node->kind != NODE_TWO_VALUES || yyvsp[0].decl.node->r.expr->kind != NODE_RETURN)) {
		    parse_node_t *replacement;
		    CREATE_STATEMENTS(replacement, yyvsp[0].decl.node, 0);
		    CREATE_RETURN(replacement->r.expr, 0);
		    yyvsp[0].decl.node = replacement;
		}
		
		yyval.node = new_node();
		yyval.node->kind = NODE_ANON_FUNC;
		yyval.node->type = TYPE_FUNCTION;
		yyval.node->l.number = (max_num_locals - yyvsp[-2].argument.num_arg);
		yyval.node->r.expr = yyvsp[0].decl.node;
		yyval.node->v.number = yyvsp[-2].argument.num_arg;
		if (current_function_context->bindable)
		    yyval.node->v.number |= 0x10000;
		free_all_local_names(1);
		
		current_number_of_locals = yyvsp[-4].func_block.num_local;
		max_num_locals = yyvsp[-4].func_block.max_num_locals;
		context = yyvsp[-4].func_block.context;
		current_type = yyvsp[-4].func_block.save_current_type;
		exact_types = yyvsp[-4].func_block.save_exact_types;
		pop_function_context();
		
		locals_ptr -= current_number_of_locals;
		type_of_locals_ptr -= max_num_locals;
		reactivate_current_locals();
	    }
    break;

  case 205:
#line 2894 "grammar.y"
    {
#line 2800 "grammar.y.pre"
		yyval.node = new_node();
		yyval.node->kind = NODE_FUNCTION_CONSTRUCTOR;
		yyval.node->type = TYPE_FUNCTION;
		yyval.node->r.expr = 0;
		switch (yyvsp[-2].number & 0xff) {
		case FP_L_VAR:
		    yyerror("Illegal to use local variable in a functional.");
		    CREATE_NUMBER(yyval.node->l.expr, 0);
		    yyval.node->l.expr->r.expr = 0;
		    yyval.node->l.expr->l.expr = 0;
		    yyval.node->v.number = FP_FUNCTIONAL;
		    break;
		case FP_G_VAR:
		    CREATE_OPCODE_1(yyval.node->l.expr, F_GLOBAL, 0, yyvsp[-2].number >> 8);
		    yyval.node->v.number = FP_FUNCTIONAL | FP_NOT_BINDABLE;
		    if (VAR_TEMP(yyval.node->l.expr->l.number)->type & DECL_HIDDEN) {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      
		      p = strput(buf, end, "Illegal to use private variable '");
		      p = strput(p, end, VAR_TEMP(yyval.node->l.expr->l.number)->name);
		      p = strput(p, end, "'");
		      yyerror(buf);
		    }
		    break;
		default:
		    yyval.node->v.number = yyvsp[-2].number;
		    break;
		}
	    }
    break;

  case 206:
#line 2928 "grammar.y"
    {
#line 2833 "grammar.y.pre"
		yyval.node = new_node();
		yyval.node->kind = NODE_FUNCTION_CONSTRUCTOR;
		yyval.node->type = TYPE_FUNCTION;
		yyval.node->v.number = yyvsp[-4].number;
		yyval.node->r.expr = yyvsp[-2].node;
		
		switch (yyvsp[-4].number & 0xff) {
		case FP_EFUN: {
		    int *argp;
		    int f = yyvsp[-4].number >>8;
		    int num = yyvsp[-2].node->kind;
		    int max_arg = predefs[f].max_args;
		    
		    if (num > max_arg && max_arg != -1) {
			parse_node_t *pn = yyvsp[-2].node;
			
			while (pn) {
			    if (pn->type & 1) break;
			    pn = pn->r.expr;
			}
			
			if (!pn) {
			    char bff[256];
			    char *end = EndOf(bff);
			    char *p;
			    
			    p = strput(bff, end, "Too many arguments to ");
			    p = strput(p, end, predefs[f].word);
			    yyerror(bff);
			}
		    } else if (max_arg != -1 && exact_types) {
			/*
			 * Now check all types of arguments to efuns.
			 */
			int i, argn, tmp;
			parse_node_t *enode = yyvsp[-2].node;
			argp = &efun_arg_types[predefs[f].arg_index];
			
			for (argn = 0; argn < num; argn++) {
			    if (enode->type & 1) break;
			    
			    tmp = enode->v.expr->type;
			    for (i=0; !compatible_types(tmp, argp[i])
				 && argp[i] != 0; i++)
				;
			    if (argp[i] == 0) {
				char buf[256];
				char *end = EndOf(buf);
				char *p;

				p = strput(buf, end, "Bad argument ");
				p = strput_int(p, end, argn+1);
				p = strput(p, end, " to efun ");
				p = strput(p, end, predefs[f].word);
				p = strput(p, end, "()");
				yyerror(buf);
			    } else {
				/* this little section necessary b/c in the
				   case float | int we dont want to do
				   promoting. */
				if (tmp == TYPE_NUMBER && argp[i] == TYPE_REAL) {
				    for (i++; argp[i] && argp[i] != TYPE_NUMBER; i++)
					;
				    if (!argp[i])
					enode->v.expr = promote_to_float(enode->v.expr);
				}
				if (tmp == TYPE_REAL && argp[i] == TYPE_NUMBER) {
				    for (i++; argp[i] && argp[i] != TYPE_REAL; i++)
					;
				    if (!argp[i])
					enode->v.expr = promote_to_int(enode->v.expr);
				}
			    }
			    while (argp[i] != 0)
				i++;
			    argp += i + 1;
			    enode = enode->r.expr;
			}
		    }
		    break;
		}
		case FP_L_VAR:
		case FP_G_VAR:
		    yyerror("Can't give parameters to functional.");
		    break;
		}
	    }
    break;

  case 207:
#line 3018 "grammar.y"
    {
#line 2922 "grammar.y.pre"
		 if (current_function_context->num_locals)
		     yyerror("Illegal to use local variable in functional.");
		 if (current_function_context->values_list->r.expr)
		     current_function_context->values_list->r.expr->kind = current_function_context->values_list->kind;
		 
		 yyval.node = new_node();
		 yyval.node->kind = NODE_FUNCTION_CONSTRUCTOR;
		 yyval.node->type = TYPE_FUNCTION;
		 yyval.node->l.expr = yyvsp[-2].node;
		 if (yyvsp[-2].node->kind == NODE_STRING)
		     yywarn("Function pointer returning string constant is NOT a function call");
		 yyval.node->r.expr = current_function_context->values_list->r.expr;
		 yyval.node->v.number = FP_FUNCTIONAL + current_function_context->bindable
		     + (current_function_context->num_parameters << 8);
		 pop_function_context();
             }
    break;

  case 208:
#line 3037 "grammar.y"
    {
#line 2940 "grammar.y.pre"
		CREATE_CALL(yyval.node, F_AGGREGATE_ASSOC, TYPE_MAPPING, yyvsp[-2].node);
	    }
    break;

  case 209:
#line 3042 "grammar.y"
    {
#line 2944 "grammar.y.pre"
		CREATE_CALL(yyval.node, F_AGGREGATE, TYPE_ANY | TYPE_MOD_ARRAY, yyvsp[-2].node);
	    }
    break;

  case 210:
#line 3050 "grammar.y"
    {
#line 2951 "grammar.y.pre"
		yyval.node = yyvsp[0].decl.node;
	    }
    break;

  case 211:
#line 3055 "grammar.y"
    {
#line 2955 "grammar.y.pre"
		yyval.node = insert_pop_value(yyvsp[-1].node);
	    }
    break;

  case 212:
#line 3063 "grammar.y"
    {
#line 2962 "grammar.y.pre"
		yyval.number = context;
		context = SPECIAL_CONTEXT;
	    }
    break;

  case 213:
#line 3069 "grammar.y"
    {
#line 2967 "grammar.y.pre"
		CREATE_CATCH(yyval.node, yyvsp[0].node);
		context = yyvsp[-1].number;
	    }
    break;

  case 214:
#line 3079 "grammar.y"
    {
#line 2991 "grammar.y.pre"
		int p = yyvsp[-1].node->v.number;
		CREATE_LVALUE_EFUN(yyval.node, TYPE_NUMBER, yyvsp[-1].node);
		CREATE_BINARY_OP_1(yyval.node->l.expr, F_SSCANF, 0, yyvsp[-4].node, yyvsp[-2].node, p);
	    }
    break;

  case 215:
#line 3089 "grammar.y"
    {
#line 3000 "grammar.y.pre"
		int p = yyvsp[-1].node->v.number;
		CREATE_LVALUE_EFUN(yyval.node, TYPE_NUMBER, yyvsp[-1].node);
		CREATE_TERNARY_OP_1(yyval.node->l.expr, F_PARSE_COMMAND, 0, 
				    yyvsp[-6].node, yyvsp[-4].node, yyvsp[-2].node, p);
	    }
    break;

  case 216:
#line 3100 "grammar.y"
    {
#line 3010 "grammar.y.pre"
		yyval.number = context;
		context = SPECIAL_CONTEXT;
	    }
    break;

  case 217:
#line 3106 "grammar.y"
    {
#line 3015 "grammar.y.pre"
		CREATE_TIME_EXPRESSION(yyval.node, yyvsp[0].node);
		context = yyvsp[-1].number;
	    }
    break;

  case 218:
#line 3115 "grammar.y"
    {
#line 3023 "grammar.y.pre"
	        yyval.node = new_node_no_line();
		yyval.node->r.expr = 0;
	        yyval.node->v.number = 0;
	    }
    break;

  case 219:
#line 3122 "grammar.y"
    {
#line 3029 "grammar.y.pre"
		parse_node_t *insert;
		
		yyval.node = yyvsp[0].node;
		insert = new_node_no_line();
		insert->r.expr = yyvsp[0].node->r.expr;
		insert->l.expr = yyvsp[-1].node;
		yyvsp[0].node->r.expr = insert;
		yyval.node->v.number++;
	    }
    break;

  case 220:
#line 3137 "grammar.y"
    {
#line 3043 "grammar.y.pre"
		CREATE_STRING(yyval.node, yyvsp[0].string);
		scratch_free(yyvsp[0].string);
	    }
    break;

  case 222:
#line 3147 "grammar.y"
    {
#line 3052 "grammar.y.pre"
		yyval.string = yyvsp[-1].string;
	    }
    break;

  case 223:
#line 3152 "grammar.y"
    {
#line 3056 "grammar.y.pre"
		yyval.string = scratch_join(yyvsp[-2].string, yyvsp[0].string);
	    }
    break;

  case 225:
#line 3161 "grammar.y"
    {
#line 3064 "grammar.y.pre"
		yyval.string = scratch_join(yyvsp[-1].string, yyvsp[0].string);
	    }
    break;

  case 226:
#line 3168 "grammar.y"
    {
#line 3070 "grammar.y.pre"
	yyval.node = new_node();
	yyval.node->l.expr = (parse_node_t *)yyvsp[-2].string;
	yyval.node->v.expr = yyvsp[0].node;
	yyval.node->r.expr = 0;
    }
    break;

  case 227:
#line 3179 "grammar.y"
    {
#line 3080 "grammar.y.pre"
	yyval.node = 0;
    }
    break;

  case 228:
#line 3184 "grammar.y"
    {
#line 3084 "grammar.y.pre"
	yyval.node = yyvsp[0].node;
	yyval.node->r.expr = yyvsp[-2].node;
    }
    break;

  case 229:
#line 3194 "grammar.y"
    {
#line 3093 "grammar.y.pre"
		yyval.number = context;
		context |= ARG_LIST; 
	    }
    break;

  case 230:
#line 3200 "grammar.y"
    {
#line 3098 "grammar.y.pre"
		context = yyvsp[-2].number;
		yyval.node = validate_efun_call(yyvsp[-4].number,yyvsp[-1].node);
		yyval.node = check_refs(num_refs, yyvsp[-1].node, yyval.node);
		num_refs = 0;
	    }
    break;

  case 231:
#line 3208 "grammar.y"
    {
#line 3105 "grammar.y.pre"
		yyval.number = context;
		context |= ARG_LIST;
	    }
    break;

  case 232:
#line 3214 "grammar.y"
    {
#line 3110 "grammar.y.pre"
		context = yyvsp[-2].number;
		yyval.node = validate_efun_call(new_efun, yyvsp[-1].node);
		yyval.node = check_refs(num_refs, yyvsp[-1].node, yyval.node);
		num_refs = 0;
            }
    break;

  case 233:
#line 3222 "grammar.y"
    {
#line 3117 "grammar.y.pre"
		parse_node_t *node;
		
		if (yyvsp[-2].ihe->dn.class_num == -1) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    
		    p = strput(buf, end, "Undefined class '");
		    p = strput(p, end, yyvsp[-2].ihe->name);
		    p = strput(p, end, "'");
		    yyerror(buf);
		    CREATE_ERROR(yyval.node);
		    node = yyvsp[-1].node;
		    while (node) {
			scratch_free((char *)node->l.expr);
			node = node->r.expr;
		    }
		} else {
		    int type = yyvsp[-2].ihe->dn.class_num | TYPE_MOD_CLASS;
		    
		    if ((node = yyvsp[-1].node)) {
			CREATE_TWO_VALUES(yyval.node, type, 0, 0);
			yyval.node->l.expr = reorder_class_values(yyvsp[-2].ihe->dn.class_num,
							node);
			CREATE_OPCODE_1(yyval.node->r.expr, F_NEW_CLASS,
					type, yyvsp[-2].ihe->dn.class_num);
			
		    } else {
			CREATE_OPCODE_1(yyval.node, F_NEW_EMPTY_CLASS,
					type, yyvsp[-2].ihe->dn.class_num);
		    }
		}
            }
    break;

  case 234:
#line 3258 "grammar.y"
    {
#line 3152 "grammar.y.pre"
		parse_node_t *node;
		char buf[256];
		char *end = EndOf(buf);
		char *p;

		p = strput(buf, end, "Undefined class '");
		p = strput(p, end, yyvsp[-2].string);
		p = strput(p, end, "'");
		yyerror(buf);
		CREATE_ERROR(yyval.node);
		node = yyvsp[-1].node;
		while (node) {
		    scratch_free((char *)node->l.expr);
		    node = node->r.expr;
		}
	    }
    break;

  case 235:
#line 3277 "grammar.y"
    {
#line 3170 "grammar.y.pre"
		yyval.number = context;
		context |= ARG_LIST;
	    }
    break;

  case 236:
#line 3283 "grammar.y"
    {
#line 3175 "grammar.y.pre"
	      int f;

	      context = yyvsp[-2].number;
	      yyval.node = yyvsp[-1].node;
	      if ((f = yyvsp[-4].ihe->dn.function_num) != -1) {
		  if (FUNCTION_FLAGS(f) & DECL_HIDDEN) {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      
		      p = strput(buf, end, "Illegal to call private function '");
		      p = strput(p, end, yyvsp[-4].ihe->name);
		      p = strput(p, end, "'");
		      yyerror(buf);
		  }
		  if (current_function_context)
		      current_function_context->bindable = FP_NOT_BINDABLE;

		  yyval.node->kind = NODE_CALL_1;
		  yyval.node->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		  yyval.node->l.number = f;
		  yyval.node->type = validate_function_call(f, yyvsp[-1].node->r.expr);
	      } else
	      if ((f=yyvsp[-4].ihe->dn.simul_num) != -1) {
		  yyval.node->kind = NODE_CALL_1;
		  yyval.node->v.number = F_SIMUL_EFUN;
		  yyval.node->l.number = f;
		  yyval.node->type = (SIMUL(f)->type) & ~DECL_MODS;
	      } else 
	      if ((f=yyvsp[-4].ihe->dn.efun_num) != -1) {
		  yyval.node = validate_efun_call(f, yyvsp[-1].node);
	      } else {
		/* This here is a really nasty case that only occurs with
		 * exact_types off.  The user has done something gross like:
		 *
		 * func() { int f; f(); } // if f was prototyped we wouldn't
		 * f() { }                // need this case
		 *
		 * Don't complain, just grok it.
		 */
		int cf, f;

		if (current_function_context)
		    current_function_context->bindable = FP_NOT_BINDABLE;
		
		cf = define_new_function(yyvsp[-4].ihe->name, 0, 0, 
					 FUNC_UNDEFINED | FUNC_PROTOTYPE, DECL_PUBLIC);
		f = COMPILER_FUNC(cf)->runtime_index;
		yyval.node->kind = NODE_CALL_1;
		yyval.node->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		yyval.node->l.number = f;
		yyval.node->type = TYPE_ANY; /* just a guess */
		if (exact_types) {
		    char buf[256];
		    char *end = EndOf(buf);
		    char *p;
		    char *n = yyvsp[-4].ihe->name;
		    if (*n == ':') n++;
		    /* prevent some errors; by making it look like an
		     * inherited function we prevent redeclaration errors
		     * if it shows up later
		     */
		    FUNCTION_FLAGS(f) &= ~FUNC_UNDEFINED;
		    FUNCTION_FLAGS(f) |= (FUNC_INHERITED | FUNC_VARARGS);
		    p = strput(buf, end, "Undefined function ");
		    p = strput(p, end, n);
		    yyerror(buf);
		}
	      }
	      yyval.node = check_refs(num_refs, yyvsp[-1].node, yyval.node);
	      num_refs = 0;
	    }
    break;

  case 237:
#line 3358 "grammar.y"
    {
#line 3249 "grammar.y.pre"
		yyval.number = context;
		context |= ARG_LIST;
	    }
    break;

  case 238:
#line 3364 "grammar.y"
    {
#line 3254 "grammar.y.pre"
	      char *name = yyvsp[-4].string;

	      context = yyvsp[-2].number;
	      yyval.node = yyvsp[-1].node;
	      
	      if (current_function_context)
		  current_function_context->bindable = FP_NOT_BINDABLE;

	      if (*name == ':') {
		  int f;
		  
		  if ((f = arrange_call_inherited(name + 1, yyval.node)) != -1)
		      /* Can't do this; f may not be the correct function
			 entry.  It might be overloaded.
			 
		      validate_function_call(f, $$->r.expr)
		      */
		      ;
	      } else {
		  int f;
		  ident_hash_elem_t *ihe;
		  
		  f = (ihe = lookup_ident(name)) ? ihe->dn.function_num : -1;
		  yyval.node->kind = NODE_CALL_1;
		  yyval.node->v.number = F_CALL_FUNCTION_BY_ADDRESS;
		  if (f!=-1) {
		      /* The only way this can happen is if function_name
		       * below made the function name.  The lexer would
		       * return L_DEFINED_NAME instead.
		       */
		      yyval.node->type = validate_function_call(f, yyvsp[-1].node->r.expr);
		  } else {
		      f = define_new_function(name, 0, 0, 
					      FUNC_UNDEFINED | FUNC_PROTOTYPE, DECL_PUBLIC);
		      f = COMPILER_FUNC(f)->runtime_index;
		  }
		  yyval.node->l.number = f;
		  /*
		   * Check if this function has been defined.
		   * But, don't complain yet about functions defined
		   * by inheritance.
		   */
		  if (exact_types && (FUNCTION_FLAGS(f) & FUNC_UNDEFINED)) {
		      char buf[256];
		      char *end = EndOf(buf);
		      char *p;
		      char *n = yyvsp[-4].string;
		      if (*n == ':') n++;
		      /* prevent some errors */
		      FUNCTION_FLAGS(f) &= ~FUNC_UNDEFINED;
		      FUNCTION_FLAGS(f) |= (FUNC_INHERITED | FUNC_VARARGS);
		      p = strput(buf, end, "Undefined function ");
		      p = strput(p, end, n);
		      yyerror(buf);
		  }
		  if (!(FUNCTION_FLAGS(f) & FUNC_UNDEFINED))
		      yyval.node->type = FUNCTION_DEF(f)->type;
		  else
		      yyval.node->type = TYPE_ANY;  /* Just a guess */
	      }
	      yyval.node = check_refs(num_refs, yyvsp[-1].node, yyval.node);
	      num_refs = 0;
	      scratch_free(name);
	  }
    break;

  case 239:
#line 3431 "grammar.y"
    {
#line 3320 "grammar.y.pre"
		yyval.number = context;
		context |= ARG_LIST;
	    }
    break;

  case 240:
#line 3437 "grammar.y"
    {
#line 3325 "grammar.y.pre"
		parse_node_t *expr, *expr2;
		context = yyvsp[-2].number;

		yyval.node = yyvsp[-1].node;
		yyval.node->kind = NODE_EFUN;
		yyval.node->l.number = yyval.node->v.number + 2;
		yyval.node->v.number = predefs[arrow_efun].token;
#ifdef CAST_CALL_OTHERS
		yyval.node->type = TYPE_UNKNOWN;
#else
                yyval.node->type = TYPE_ANY;
#endif		  
		expr = new_node_no_line();
		expr->type = 0;
		expr->v.expr = yyvsp[-6].node;

		expr2 = new_node_no_line();
		expr2->type = 0;
		CREATE_STRING(expr2->v.expr, yyvsp[-4].string);
		scratch_free(yyvsp[-4].string);

		/* insert the two nodes */
		expr2->r.expr = yyval.node->r.expr;
		expr->r.expr = expr2;
		yyval.node->r.expr = expr;

		yyval.node = check_refs(num_refs, yyvsp[-1].node, yyval.node);
		num_refs = 0;
	    }
    break;

  case 241:
#line 3469 "grammar.y"
    {
#line 3356 "grammar.y.pre"
		yyval.number = context;
		context |= ARG_LIST;
	    }
    break;

  case 242:
#line 3475 "grammar.y"
    {
#line 3361 "grammar.y.pre"
	        parse_node_t *expr;

		context = yyvsp[-2].number;
		yyval.node = yyvsp[-1].node;
		yyval.node->kind = NODE_EFUN;
		yyval.node->l.number = yyval.node->v.number + 1;
		yyval.node->v.number = predefs[evaluate_efun].token;
#ifdef CAST_CALL_OTHERS
		yyval.node->type = TYPE_UNKNOWN;
#else
		yyval.node->type = TYPE_ANY;
#endif
		expr = new_node_no_line();
		expr->type = 0;
		expr->v.expr = yyvsp[-5].node;
		expr->r.expr = yyval.node->r.expr;
		yyval.node->r.expr = expr;
		yyval.node = check_refs(num_refs, yyvsp[-1].node, yyval.node);
		num_refs = 0;
	    }
    break;

  case 243:
#line 3499 "grammar.y"
    {
#line 3384 "grammar.y.pre"
	svalue_t *res;
	ident_hash_elem_t *ihe;

	yyval.number = (ihe = lookup_ident(yyvsp[0].string)) ? ihe->dn.efun_num : -1;
	if (yyval.number == -1) {
	    char buf[256];
	    char *end = EndOf(buf);
	    char *p;
	    
	    p = strput(buf, end, "Unknown efun: ");
	    p = strput(p, end, yyvsp[0].string);
	    yyerror(buf);
	} else {
	    push_malloced_string(the_file_name(current_file));
	    share_and_push_string(yyvsp[0].string);
	    push_malloced_string(add_slash(main_file_name()));
	    res = safe_apply_master_ob(APPLY_VALID_OVERRIDE, 3);
	    if (!MASTER_APPROVED(res)) {
		yyerror("Invalid simulated efunction override");
		yyval.number = -1;
	    }
	}
	scratch_free(yyvsp[0].string);
      }
    break;

  case 244:
#line 3525 "grammar.y"
    {
#line 3409 "grammar.y.pre"
	svalue_t *res;
	
	push_malloced_string(the_file_name(current_file));
	push_constant_string("new");
	push_malloced_string(add_slash(main_file_name()));
	res = safe_apply_master_ob(APPLY_VALID_OVERRIDE, 3);
	if (!MASTER_APPROVED(res)) {
	    yyerror("Invalid simulated efunction override");
	    yyval.number = -1;
	} else yyval.number = new_efun;
      }
    break;

  case 246:
#line 3543 "grammar.y"
    {
#line 3426 "grammar.y.pre"
		int l = strlen(yyvsp[0].string) + 1;
		char *p;
		/* here we be a bit cute.  we put a : on the front so we
		 * don't have to strchr for it.  Here we do:
		 * "name" -> ":::name"
		 */
		yyval.string = scratch_realloc(yyvsp[0].string, l + 3);
		p = yyval.string + l;
		while (p--,l--)
		    *(p+3) = *p;
		strncpy(yyval.string, ":::", 3);
	    }
    break;

  case 247:
#line 3558 "grammar.y"
    {
#line 3440 "grammar.y.pre"
		int z, l = strlen(yyvsp[0].string) + 1;
		char *p;
		/* <type> and "name" -> ":type::name" */
		z = strlen(compiler_type_names[yyvsp[-2].type]) + 3; /* length of :type:: */
		yyval.string = scratch_realloc(yyvsp[0].string, l + z);
		p = yyval.string + l;
		while (p--,l--)
		    *(p+z) = *p;
		yyval.string[0] = ':';
		strncpy(yyval.string + 1, compiler_type_names[yyvsp[-2].type], z - 3);
		yyval.string[z-2] = ':';
		yyval.string[z-1] = ':';
	    }
    break;

  case 248:
#line 3574 "grammar.y"
    {
#line 3455 "grammar.y.pre"
		int l = strlen(yyvsp[-2].string);
		/* "ob" and "name" -> ":ob::name" */
		yyval.string = scratch_alloc(l + strlen(yyvsp[0].string) + 4);
		*(yyval.string) = ':';
		strcpy(yyval.string + 1, yyvsp[-2].string);
		strcpy(yyval.string + l + 1, "::");
		strcpy(yyval.string + l + 3, yyvsp[0].string);
		scratch_free(yyvsp[-2].string);
		scratch_free(yyvsp[0].string);
	    }
    break;

  case 249:
#line 3590 "grammar.y"
    {
#line 3470 "grammar.y.pre"
		/* x != 0 -> x */
		if (IS_NODE(yyvsp[-3].node, NODE_BINARY_OP, F_NE)) {
		    if (IS_NODE(yyvsp[-3].node->r.expr, NODE_NUMBER, 0))
			yyvsp[-3].node = yyvsp[-3].node->l.expr;
		    else if (IS_NODE(yyvsp[-3].node->l.expr, NODE_NUMBER, 0))
			     yyvsp[-3].node = yyvsp[-3].node->r.expr;
		}

		/* TODO: should optimize if (0), if (1) here.  
		 * Also generalize this.
		 */

		if (yyvsp[-1].node == 0) {
		    if (yyvsp[0].node == 0) {
			/* if (x) ; -> x; */
			yyval.node = insert_pop_value(yyvsp[-3].node);
			break;
		    } else {
			/* if (x) {} else y; -> if (!x) y; */
			parse_node_t *repl;
			
			CREATE_UNARY_OP(repl, F_NOT, TYPE_NUMBER, yyvsp[-3].node);
			yyvsp[-3].node = repl;
			yyvsp[-1].node = yyvsp[0].node;
			yyvsp[0].node = 0;
		    }
		}
		CREATE_IF(yyval.node, yyvsp[-3].node, yyvsp[-1].node, yyvsp[0].node);
	    }
    break;

  case 250:
#line 3625 "grammar.y"
    {
#line 3504 "grammar.y.pre"
		yyval.node = 0;
	    }
    break;

  case 251:
#line 3630 "grammar.y"
    {
#line 3508 "grammar.y.pre"
		yyval.node = yyvsp[0].node;
            }
    break;


    }

/* Line 1000 of yacc.c.  */
#line 5652 "grammar.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
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

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 3635 "grammar.y"



#line 3513 "grammar.y.pre"


