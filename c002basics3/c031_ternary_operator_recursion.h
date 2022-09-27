//
// Created by Admin on 9/27/2022.
//

#ifndef CCORE_C031_TERNARY_OPERATOR_RECURSION_H
#define CCORE_C031_TERNARY_OPERATOR_RECURSION_H

#endif //CCORE_C031_TERNARY_OPERATOR_RECURSION_H

#include <stdio.h>
#include <stdlib.h>


void showText() {
    printf("text\n");
    showText();
}

void c031_ternary_operator_recursion() {
    // считать с клавиатуры, способ 1
    int num = 1;
    // scanf("%d", &num); // считать
    printf("num = %d\n", num);

    // считать с клавиатуры, способ 2
    char i[30] = "7";
    //scanf("%s", i); // считать в строку
    char *p; // вспомагательный указатель для перевода в число
    long n = strtol(i,&p, 10); // перевод строки в число

    n = (n < 10) ? 10 : n * 2; // если значение i < 10 присвоить 10, иначе умножить на 2
    printf("result >>> %ld\n", n);
    printf("\n");

    showText();


}