#ifndef EDIT_SOURCE_H
#define EDIT_SOURCE_H

#include "macros.h"

extern FILE *yyin;
int compile P1(char *, str);
void mf_fatal P1(char *, str);
void yywarn P1(char *, str);
void yyerrorp P1(char *, str);
void make_efun_tables();

#endif
