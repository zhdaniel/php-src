/***************************************************************************
 * 
 * Copyright (c) 2019 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file env.c
 * @author daniel(com@baidu.com)
 * @date 2019/04/04 00:29:21
 * @brief 
 *  
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char* flag = getenv("_ENV_");
    if (NULL == flag) {
        printf("Not set\n");
    } else {
        if (strcmp(flag, "1")) {
            printf("Hello, World!\n");
        } else {
            printf("You tried\n");
        }
    }

    return 0;
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
