/***************************************************************************
 * 
 * Copyright (c) 2019 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file main.c
 * @author daniel(com@baidu.com)
 * @date 2019/04/11 23:58:59
 * @brief 
 *  
 **/

#include <stdio.h>

#define YYERROR_VERBOSE
#define YYDEBUG
int yydebug = 1;

void yyerror(const char* msg)
{
    printf("ERROR: %s\n", msg);
}

int main(int argc, char* argv[])
{
    int result = yyparse();
    return 0;
}


















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
