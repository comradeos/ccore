#include <stdio.h>
#include "c10_my_functions.h" // двойные кавычки вместо угловых скобок

void info(); // объявление функций (для возможности писать их ниже main())
void printNum();
int square();

int main(int argc, char const *argv[])
{
    info();
    printNum(7);
    printf("square: %d", square(7));
    myHeaderFunction();
    return 0;
}

void info()
{
    printf("from info()\n");
}

void printNum(int num)
{
    printf("number: %d\n", num);
}

int square(int num)
{
    return num*num;
}