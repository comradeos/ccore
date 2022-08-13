#include <stdio.h>
#include <stdlib.h>

void procedure1()
{
    printf("Hello, procedure1!\n");
    printf("www\n");
    printf("123\n");
}

int function1()
{
    printf("function1\n");
    return 7; 
}

int main()
{
    printf("Hello, world!\n");
    procedure1();
    function1();

    int x = function1();
    printf("%d\n", x);
    return 0;
}