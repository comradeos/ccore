//
// Created by comradeos on 20/06/2023. 1
//

#ifndef C004DRCHUCK_CHAPTER1_H
#define C004DRCHUCK_CHAPTER1_H

#endif //C004DRCHUCK_CHAPTER1_H

#include "stdio.h"
#include "string.h"

#define LOW 0
#define HIGH 300
#define STEP 20

void farenheightCelsiusTable() {
    printf("Farenheight | Celsius\n");

    for (int i = LOW; i <= HIGH; i = i+STEP) {
        printf("%11d | %7.1f\n", i, (i - 32.0) * (5.0/9.0));
    }
}

void readAndPrintLine() {
    int c;
    c = getchar();
    while (c != EOF) { // https://linuxhint.com/eof-in-c-programming/#:~:text=The%20EOF%20marker%20is%20the,of%2Dfile%20character%20or%20EOF.
        putchar(c);
        c = getchar();
    }
    // https://youtu.be/j-_s8f5K30I?t=3341
}

void chapter1() {
    printf("chapter1: \n");
//    farenheightCelsiusTable();
//    readAndPrintLine();


}