/***************************************************************************
 * 
 * Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file labs/tests/test.c
 * @author daniel(com@baidu.com)
 * @date 2018/12/14 02:25:40
 * @brief 
 *  
 **/

#include <stdio.h>

int main(int argc, char* argv[])
{
    for (int i = 0; i <= 64; i++) {
        printf("i = %02d, i - !!i = %d, bin: %2d\n", i, (i - !!i), (i - !!i) >> 3);
    }

    return 0;
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
