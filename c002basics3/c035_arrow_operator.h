//
// Created by Admin on 9/29/2022.
//

#ifndef CCORE_C035_ARROW_OPERATOR_H
#define CCORE_C035_ARROW_OPERATOR_H

#endif //CCORE_C035_ARROW_OPERATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int myType, *myTypePtr;
/*
 * myType - собственный тип на основе int
 * *myTypePtr - собственный тип, который является указателем (обратить внимание на звездочку)
 */

void c035_arrow_operator() {
    myType i = 7;
    myTypePtr iPrt = &i;
    *iPrt = 11;
    printf("%d\n", i);
}