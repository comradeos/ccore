//
// Created by Admin on 9/27/2022.
//

#ifndef CCORE_C031_TERNARY_OPERATOR_RECURSION_H
#define CCORE_C031_TERNARY_OPERATOR_RECURSION_H

#endif //CCORE_C031_TERNARY_OPERATOR_RECURSION_H

#include <stdio.h>
#include <stdlib.h>

void c031_ternary_operator_recursion() {
    int i;
    scanf("%d", &i);

    i = (i<10) ? 10 : i*2; // если значение i < 10 присвоить 10, иначе умножить на 2

    printf("result >>> %d\n", i);


}