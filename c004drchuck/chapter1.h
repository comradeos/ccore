//
// Created by comradeos on 20/06/2023.
//

#ifndef C004DRCHUCK_CHAPTER1_H
#define C004DRCHUCK_CHAPTER1_H

#endif //C004DRCHUCK_CHAPTER1_H

#include "stdio.h"

#define LOW 0
#define HIGH 300
#define STEP 20

void farenheightCelsiusTable() {
    printf("Farenheight | Celsius\n");

    for (int i = LOW; i <= HIGH; i = i+STEP) {
        printf("%11d | %7.1f\n", i, (i - 32.0) * (5.0/9.0));
    }
}

void chapter1() {
    printf("chapter1: \n");
//    farenheightCelsiusTable();
    
}