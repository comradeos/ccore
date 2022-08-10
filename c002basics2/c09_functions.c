#include <stdio.h>
#include "c10_my_functions.h" // двойные кавычки вместо угловых скобок

void info(); // объявление функций (для возможности писать их ниже main())
void printNum();
int square(int num);
void string(char array[]);

int main(int argc, char const *argv[])
{
    info();
    printNum(7);

    printf("square: %d", square(7));
    myHeaderFunction();
    
    string("Hello World!");
    string((char []){'s', 'o', 'm', 'e', '\0'}); // строка это последовательность символов оканчивающаяся null-символом '\0' 

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

void string(char array[])
{
    printf("String: %s\n", array);
}