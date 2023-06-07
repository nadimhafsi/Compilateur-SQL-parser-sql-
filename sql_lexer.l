%{
#include "sql_parser.tab.h"
#include <stdlib.h>
int yywrap(void);
%}

%%

[ \t\n]            /* ignore les espaces et les sauts de ligne */
(S|s)(E|e)(L|l)(E|e)(C|c)(T|t)	           { return SELECT; }
(F|f)(R|r)(O|o)(M|m)            { return FROM; }
(W|w)(H|h)(E|e)(R|r)(E|e)           { return WHERE; }
(D|d)(E|e)(L|l)(E|e)(T|t)(E|e)	          { return DELETE; }
(U|u)(P|p)(D|d)(A|a)(T|t)(E|e)	          { return UPDATE; }
(C|c)(R|r)(E|e)(A|a)(T|t)(E|e)	         { return CREATE; }
(S|s)(E|e)(T|t)	              { return SET; }
(T|t)(A|a)(B|b)(L|l)(E|e)				{ return TABLE; }
"*"                { return ASTERISK; }
","                { return COMMA; }
"'"                { return G; }
";"                { return PV; }
"."                { return DOT; }
"("                { return OPEN; }
")"                { return CLOSE; }
"="                { return EQUALS; }
">"                { return GT; }
"<"                { return LT; }
">="               { return GE; }
"<="               { return LE; }
"!="               { return NE; }
(i|I)(n|N)(t|T)	{return INTEGER; }
(c|C)(h|H)(a|A)(R|r) {return CHAR; }
(v|V)(A|a)(R|r)(c|C)(h|H)(a|A)(R|r) {return VARCHAR; }
(b|B)(o|O)(o|O)(l|L) {return BOOL; }
(F|f)(L|l)(O|o)(A|a)(T|t) {return FLOAT; }
(N|n)(U|u)(M|m)(B|b)(E|e)(R|r) {return NUMBER; }
(D|d)(A|a)(T|t)(E|e) {return DATE; }
(A|a)(N|n)(D|d)               { return AND; }
(O|o)(R|r)               { return OR; }
(C|c)(O|o)(U|u)(N|n)(T|t)           { return COUNT; }
(S|s)(U|u)(M|m)	            { return SUM; }
(A|a)(V|v)(G|g)	            { return AVG; }
(D|d)(I|i)(S|s)(T|t)(I|i)(N|n)(C|c)(T|t)		{ return DISTINCT; }
(M|m)(I|i)(N|n)              { return MIN; }
(M|m)(A|a)(X|x)             { return MAX; }
(G|g)(R|r)(O|o)(U|u)(P|p)           { return GROUP; }
(B|b)(Y|y)               { return BY; }
(O|o)(R|r)(D|d)(E|e)(R|r)           { return ORDER; }
(B|b)(E|e)(T|t)(W|w)(E|e)(E|e)(N|n)   { return BETWEEN; }
(N|n)(O|o)(T|t)			{ return NOT; }
(A|a)(S|s)(C|c)	             { return ASC; }
(A|a)(S|s)				{return AS; }
(D|d)(E|e)(S|s)(C|c)             { return DESC; }
(I|i)(N|n)(N|n)(E|e)(R|r)	{ return INNER; }
(L|l)(E|e)(F|f)(T|t)		{return LEFT; }
(R|r)(I|i)(G|g)(H|h)(T|t)	{ return RIGHT; }
(J|j)(O|o)(I|i)(N|n)  { return JOIN; }
(O|o)(N|n)	{return ON; }
(I|i)(N|n)	{return IN; }
[a-zA-Z][_a-zA-Z.0-9]* { yylval.sval = strdup(yytext); return IDENTIFIER; }
[0-9]+             { yylval.ival = atoi(yytext); return INT; }
.                   {return ERROR; }
%%

int yywrap(void) {
    return 1;
}

