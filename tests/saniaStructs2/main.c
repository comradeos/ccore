#include <stdio.h>
#include <stdlib.h>
#include "lib1.c"
#include "lib2.c"

int main() {
    printf("Hello, World!\n");
    GetValueFromStruct(&deviceLib2);
    return 0;
}