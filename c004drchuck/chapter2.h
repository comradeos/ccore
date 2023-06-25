#include "stdio.h"
#include "string.h"

void printDataTypes() {
    char myChar = 'a';
    printf("myChar %c\n", myChar);

    int myInt = 7;
    printf("myInt %d\n", myInt);

    float myFloat = (float)2.49;
    printf("myFloat %.2f\n", myFloat);

    double myDouble = 923.2231;
    printf("myDouble %.4f\n", myDouble);

    short int myShortInt = 32767;
    printf("myShortInt %d\n", myShortInt);

    long int myLongInt = 32767;
    printf("myLongInt %ld\n", myLongInt);

    long long int myLongLongInt = 32767;
    printf("myLongLongInt %lld\n", myLongLongInt);
}

void chapter2() {
    printf("chapter2: \n");
    printDataTypes();
}