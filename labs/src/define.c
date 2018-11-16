#include <stdio.h>

#ifndef DEBUG
#define DEBUG 0
#endif

#define entry main

int clz(unsigned int x) {
#if (defined(__GNUC__) || __has_builtin(__builtin_clz))
        return __builtin_clz(x);
#else
        return 0;
#endif
}

int minHashSize(int n)
{
    return 0x2 << (clz(n) ^ 0x1F);
}

int entry(int argc, char* argv[]) {
#if DEBUG
    printf("in DEBUG mode");
#else
    printf("in RELEASE mode");
#endif
    printf("\n");
    printf("sizeof(int): %d, CLZ: %d\n", sizeof(int), clz(8 - 1));
    printf("minHashSize: %d\n", minHashSize(512));
}
