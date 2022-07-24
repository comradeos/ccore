#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = ((a=1) + (a=1)+ (a=3));
    a = ((a++)+(++a));
    printf("\n%d\n", a);
    return 0;
}


/*

Программа запуститься, 
но компилятор оставляет за собой право сделать что угодно.

*/