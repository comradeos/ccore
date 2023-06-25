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

}

void chapter2() {
    printf("chapter2: \n");
    printDataTypes();
}