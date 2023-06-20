//
// Created by comradeos on 20/06/2023.
//

#ifndef C004DRCHUCK_CHAPTER1_H
#define C004DRCHUCK_CHAPTER1_H

#endif //C004DRCHUCK_CHAPTER1_H

#include "stdio.h"

void chapter1() {
    printf("chapter1: \n");

    printf("Farenheight | Celsius\n");

    for (int i = 0; i <= 300; i = i+20) {
        printf("%11d | %7.1f\n", i, (i - 32.0) * (5.0/9.0));
    }
}