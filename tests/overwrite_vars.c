#include <stdio.h>

int func1(int a)
{
    int b = 10;
    return a * b;
}

float func2(int a)
{
    int b = 3;
    return (float) a / b;
}

int main(int argc, char *argv[])
{
    printf("func1(): %d\n", func1(5));
    printf("func2(): %.2f\n", func2(1));

    

    return 0;
}