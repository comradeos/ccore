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



int myPower(int num, int n) {
    int result = num;
    if (n == 0) {
        result = 1;
    } else {
        result *= myPow(num, n-1);
    }
    return result;
}

void c034_tasks_30_31_32() {
    /*
    * Создайте 2 функции, которые получают на вход 2 параметра вещественного типа,
    * и в качестве результата возвращают float. Первая функция складывает 2 числа, вторая перемножает.
    * Создайте указатель для этих функций и с помощью него воспользуйтесь ими.
    * Отобразите результат работы функций на экране.
    */
    double (* myFunction)(double, double);
    myFunction = f1;
    printf("%0.2f\n", myFunction(5.2, 5.4));
    myFunction = f2;
    printf("%0.2f\n", myFunction(5.2, 5.4));



    /* 1.
    * Попробуйте написать вложенный тернарный оператор.
    * Например реализуйте следующее условие: если і < 10 то вернуть 10, если і > 100 то вернуть 100, иначе вернуть і + 1000.
    */
    char numString[255];
    char *numStringPtr;
    printf("Input i=");
    scanf("%s", numString);
    long num;
    num = strtol(numString, &numStringPtr, 10);

    num = (num < 10) ? 10 : ((num > 100) ? 100 : num + 1000);
    printf("i=%ld\n", num);



    /*
    * Напишите рекурсивную функиию вычисления степени числа.
    */
    printf("3^5=%ld\n", myPower(3,5));




}