#include <stdio.h>
#include <stdlib.h>

void procedure1()
{
    printf("Hello, procedure1!\n");
    printf("www\n");
    printf("123\n");
}

void function1()
{
    printf("function1\n");
    return 7;
}

int main()
{
    printf("Hello, world!\n");
    procedure1();
    return 0;
}