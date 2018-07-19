#include <stdio.h>

#ifndef DEBUG
#define DEBUG 0
#endif

#define entry main

int entry(int argc, char* argv[])
{
#if DEBUG
    printf("in DEBUG mode");
#else
    printf("in RELEASE mode");
#endif
    printf("\n");
}
