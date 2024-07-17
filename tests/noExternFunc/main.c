#include <stdio.h>
#include "lib.h"
#include <stdint.h>

int main()
{
    printf("no extern\n");
    printf("%d\n", RED[0]);
    return 0;
}

/*

gcc -o app main.c lib.c && ./app

*/