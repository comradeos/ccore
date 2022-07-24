#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // для данных типа bool
#include <inttypes.h> // для объявления типа int фиксированного размера

int main(int argc, char *argv[])
{
    unsigned char c1;
    // type 'char' has 2 modifiers: 'signed' and 'unsigned'
    // два модификатора: знаковый и не знаковый
    // некоторые компиляторы по умолчанию определяют как знаковый, некоторые как не знаковый

    signed int i;
    // type 'int' has 2 modifiers: 'signed' and 'unsigned'
    // все компиляторы по умолчанию определяют как знаковый
    // допустимые модификаторы 'short int', 'long int' и 'long long int'

    // inttypes.h
    double d1;

    bool b1;

    int8_t i8;   // -256 .. 255
    int16_t i16; // -65,536 .. 65,535
    int32_t i32; // -2,147,483,648 .. 2,147,483,647
    int64_t i64; //  -9,223,372,036,854,775,808 .. 9,223,372,036,854,775,807

    int8_t x8 = 127;
    printf("x8 = %d\n", x8);
    x8 += 1;
    printf("x8 = %d\n", x8);
    x8 -= 1;
    printf("x8 = %d\n", x8);
    x8 *= 2;
    printf("x8 = %d\n", x8); // -128 * 2 = 0

    printf("-------------------------------\n");
    // int неявно приводится к unsigned int!!!
    int x = -100;
    unsigned int y = 10U;
    long long int z = x + y;
    printf("z=%lld\n", z);

    printf("-------------------------------\n");
    // явное приведение к типу int!!!
    char c = 'Я';
    int d = (int)c * 10 + y;
    printf("d=%d\n\n\n\n", d);

    return 0;
}

/*
Compile with all warnings:
gcc -o data_types -Wall data_types.c
*/