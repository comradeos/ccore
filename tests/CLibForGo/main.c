#include <stdio.h>
#include "clib.h"

int main() {
    printf("Hello, World!\n");
    CLibHello();
    return 0;
}

// gcc -o main main.c clib.c

// gcc -shared -o clib.so -fPIC clib.c

// gcc -shared -o clib.dylib -fPIC clib.c