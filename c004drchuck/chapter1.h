//
// Created by comradeos on 20/06/2023.
//

#ifndef C004DRCHUCK_CHAPTER1_H
#define C004DRCHUCK_CHAPTER1_H

#endif //C004DRCHUCK_CHAPTER1_H

#include "stdio.h"

void chapter1() {
    printf("chapter1: \n");

    int bottom = 0;
    int top = 300;
    int step = 20;

    printf("Farenheight | Celsius\n");

    for (int i=bottom; i<=top; i=i+step) {
        printf("%11d | %7.1f\n", i, (i - 32.0) * (5.0/9.0));
    }
}