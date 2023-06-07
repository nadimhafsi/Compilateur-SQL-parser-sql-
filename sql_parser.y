%{
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
%}

%union {
    int ival;
    char *sval;
}
%token <sval> IDENTIFIER
%token <ival> INT
%token SELECT FROM WHERE DELETE UPDATE CREATE SET ASTERISK COMMA DOT OPEN CLOSE EQUALS TABLE ERROR DISTINCT BETWEEN
%token GT LT GE LE NE AND OR PV G INNER LEFT  RIGHT ON  JOIN NOT IN INTEGER CHAR VARCHAR BOOL  FLOAT NUMBER DATE
%token COUNT SUM AVG MIN MAX GROUP BY ORDER ASC DESC AS

%%

query:
    select_query
    | delete_query
    | update_query
    | create_query
    ;

select_query:
    SELECT isdistinct fields from_clause ELEM join_clause where_clause group_by_clause order_by_clause FIN{
         if(field_count==-1) printf("Nombre de champs à sélectionner: Tous\n");
         else
        printf("\nNombre de champs à sélectionner: %d\n", field_count);
        printf(ANSI_COLOR_BLUE"\nsuccessful (Select)\n"ANSI_COLOR_RESET);
    }
    | error FIN { detect_error(1); }
    ;
ID: IDENTIFIER
  |IDENTIFIER DOT IDENTIFIER
  ;
    
isdistinct:
       /*            */
       |DISTINCT
       ;
 
 from_clause:
          FROM
          | error FIN { detect_error(6); }
;

fields:
    ASTERISK { field_count = -1; }
    | field_list
    ;

field_list:
    field ALIAS{ field_count = 1; }
    | field_list COMMA field ALIAS { field_count++; }
    ;
    
ALIAS: 
  /*   */
  |IDENTIFIER
  |AS IDENTIFIER
  ;
  
  ELEM:
      ID ALIAS
     |ELEM COMMA ID ALIAS
     | OPEN_PAREN ELEM join_clause CLOSE_PAREN
     ;

field:
    ID
    | aggregation_function OPEN_PAREN ID CLOSE_PAREN
     | error FIN { detect_error(2); }
    ;

aggregation_function:
    COUNT
    | SUM
    | AVG
    | MIN
    | MAX
    ;

where_clause:
    /* vide */
    | WHERE condition
    | WHERE condition_between
    | WHERE condition_IN
    | error FIN { detect_error(5); }
    
    ;
condition_between:
      ID BETWEEN INT AND INT
      |ID NOT BETWEEN INT AND INT
      ;
      
condition_IN:
    ID IN  OPEN_PAREN list CLOSE_PAREN
    ;

list:
  G ID G
  |list COMMA G ID G
  ;
      
       

condition:
    conjunction
    | condition OR conjunction
    ;

conjunction:
    comparison
    | conjunction AND comparison
    ;

comparison:
    ID comparator INT
    | ID comparator ID
    | ID comparator G INT G
    | ID comparator G ID G
    | error FIN { detect_error(4); }
    ;

comparator:
    EQUALS
    | GT
    | LT
    | GE
    | LE
    | NE
    ;

group_by_clause:
    /* vide */
    | GROUP BY ID_list
    ;

ID_list:
    ID
    | ID_list COMMA ID
    ;

order_by_clause:
    /* vide */
    | ORDER BY order_expr_list
    ;
FIN:
     PV
     ;

order_expr_list:
    order_expr
    | order_expr_list COMMA order_expr
    ;

order_expr:
    ID
    | ID ASC
    | ID DESC
    ;
    
    join_clause:
          /* vide */
        | join_type JOIN ID ON condition
        | join_clause join_type JOIN ID ON condition
        ; 
        
        join_type:
        INNER
        | LEFT
        | RIGHT
        |error FIN { detect_error(7); }
        ;

delete_query:
    DELETE FROM ID where_clause FIN{
        printf(ANSI_COLOR_BLUE"\nSuccessful (Delete)\n"ANSI_COLOR_RESET);
    }
    ;

update_query:
    UPDATE ID SET assignment_list where_clause FIN{
        printf(ANSI_COLOR_BLUE"\nSuccessful (update)\n"ANSI_COLOR_RESET);
    }
    ;

assignment_list:
    assignment
    | assignment_list COMMA assignment
    ;

assignment:
    ID EQUALS INT
    | ID EQUALS ID
    | ID EQUALS G INT G
    | ID EQUALS G ID G
    | error FIN { detect_error(1); }
    ;

create_query:
    CREATE TABLE ID OPEN_PAREN col_ins CLOSE_PAREN FIN  {
        printf("\nsuccessful (Create)\n");
    }
    ;
    
col_ins: 
          ID datatype
          |ID datatype COMMA col_ins
          ; 

datatype:
      INTEGER
      |CHAR
      |VARCHAR OPEN_PAREN INT CLOSE_PAREN
      |BOOL
      |FLOAT
      |NUMBER
      |DATE
      ;
 
OPEN_PAREN:
      OPEN
      |error FIN { detect_error(3); }
      ;
CLOSE_PAREN:
       CLOSE
      |error FIN { detect_error(3); }
;
%%

int main() {
    yyparse();
    getchar();
    return 0;
}

int yyerror(const char *s) {
    printf("Erreur : %s\n", s);
    return 0;
}

