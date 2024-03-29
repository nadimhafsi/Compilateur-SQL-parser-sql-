/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SQL_PARSER_TAB_H_INCLUDED
# define YY_YY_SQL_PARSER_TAB_H_INCLUDED
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
    INT = 259,                     /* INT  */
    SELECT = 260,                  /* SELECT  */
    FROM = 261,                    /* FROM  */
    WHERE = 262,                   /* WHERE  */
    DELETE = 263,                  /* DELETE  */
    UPDATE = 264,                  /* UPDATE  */
    CREATE = 265,                  /* CREATE  */
    SET = 266,                     /* SET  */
    ASTERISK = 267,                /* ASTERISK  */
    COMMA = 268,                   /* COMMA  */
    DOT = 269,                     /* DOT  */
    OPEN = 270,                    /* OPEN  */
    CLOSE = 271,                   /* CLOSE  */
    EQUALS = 272,                  /* EQUALS  */
    TABLE = 273,                   /* TABLE  */
    ERROR = 274,                   /* ERROR  */
    DISTINCT = 275,                /* DISTINCT  */
    BETWEEN = 276,                 /* BETWEEN  */
    GT = 277,                      /* GT  */
    LT = 278,                      /* LT  */
    GE = 279,                      /* GE  */
    LE = 280,                      /* LE  */
    NE = 281,                      /* NE  */
    AND = 282,                     /* AND  */
    OR = 283,                      /* OR  */
    PV = 284,                      /* PV  */
    G = 285,                       /* G  */
    INNER = 286,                   /* INNER  */
    LEFT = 287,                    /* LEFT  */
    RIGHT = 288,                   /* RIGHT  */
    ON = 289,                      /* ON  */
    JOIN = 290,                    /* JOIN  */
    NOT = 291,                     /* NOT  */
    IN = 292,                      /* IN  */
    INTEGER = 293,                 /* INTEGER  */
    CHAR = 294,                    /* CHAR  */
    VARCHAR = 295,                 /* VARCHAR  */
    BOOL = 296,                    /* BOOL  */
    FLOAT = 297,                   /* FLOAT  */
    NUMBER = 298,                  /* NUMBER  */
    DATE = 299,                    /* DATE  */
    COUNT = 300,                   /* COUNT  */
    SUM = 301,                     /* SUM  */
    AVG = 302,                     /* AVG  */
    MIN = 303,                     /* MIN  */
    MAX = 304,                     /* MAX  */
    GROUP = 305,                   /* GROUP  */
    BY = 306,                      /* BY  */
    ORDER = 307,                   /* ORDER  */
    ASC = 308,                     /* ASC  */
    DESC = 309,                    /* DESC  */
    AS = 310                       /* AS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "sql_parser.y"

    int ival;
    char *sval;

#line 124 "sql_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SQL_PARSER_TAB_H_INCLUDED  */
