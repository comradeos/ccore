#include "stdio.h"
#include "string.h"

void printDataTypes() {
    char myChar = 'a'; // bits
    printf("myChar %c\n", myChar);

    int myInt = 7; // 16 bits
    printf("myInt %d\n", myInt);

    float myFloat = (float)2.49; // 32 bits
    printf("myFloat %.2f\n", myFloat);

    double myDouble = 923.2231; // 64 bits
    printf("myDouble %.4f\n", myDouble);

    short int myShortInt = 32767; // 16 bits
    printf("myShortInt %d\n", myShortInt);

    long int myLongInt = 2147483647;
    printf("myLongInt %ld\n", myLongInt);

    long long int myLongLongInt = 9223372036854775807;
    printf("myLongLongInt %lld\n", myLongLongInt);
}

void chapter2() {
    printf("chapter2: \n");
    // https://youtu.be/j-_s8f5K30I?t=7164

    printDataTypes();
}