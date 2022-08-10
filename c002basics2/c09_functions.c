#include <stdio.h>

void info(); // объявление функций
void printNum();
int square();

int main(int argc, char const *argv[])
{
    info();
    printNum(7);
    printf("square: %d", square(7));
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