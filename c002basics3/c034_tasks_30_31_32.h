//
// Created by Admin on 9/28/2022.
//

#ifndef CCORE_C034_TASKS_30_31_32_H
#define CCORE_C034_TASKS_30_31_32_H

#endif //CCORE_C034_TASKS_30_31_32_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f1(double a, double b) {
    return a + b;
}

double f2(double a, double b) {
    return a * b;
}

void c034_tasks_30_31_32() {
    double (* myFunction)(double, double);
    myFunction = f1;
    printf("%0.2f\n", myFunction(1.2, 3.4));
    myFunction = f2;
    printf("%0.2f\n", myFunction(1.2, 3.4));
}