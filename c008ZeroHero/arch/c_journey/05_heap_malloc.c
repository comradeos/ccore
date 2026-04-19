#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;                 // стек
    int *p = malloc(sizeof *p); // heap

    if (p == NULL)
    {
        printf("malloc failed\n");
        return 1;
    }

    *p = 20;

    printf("address of a (stack): %p\n", (void *)&a);
    printf("address stored in p (heap): %p\n", (void *)p);
    printf("address of p itself (stack): %p\n", (void *)&p);

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);

    free(p);
    printf("*p = %d\n", *p);

    return 0;
}

// gcc -Wall -Wextra -std=c17 -O0 -g 05_heap_malloc.c -o 05_heap_malloc