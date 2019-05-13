%{

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

%}

%option noyywrap

%%

[0-9]+     { yylval.f = atoi(yytext); return NUM; }
[+\-*/]     { return yytext[0]; }
[ \t\f\v ] { ; }

%%
