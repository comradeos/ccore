#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("hello, world...\n");

    int x = 5;

    printf("x = %d\n", x);

    // return 0; // ничего необічного не произошло, почему?
}

// gcc -Wall -Wextra -std=c17 -O0 -g hello.c -o hello && ./hello