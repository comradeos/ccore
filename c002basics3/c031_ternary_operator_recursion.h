//
// Created by Admin on 9/27/2022.
//

#ifndef CCORE_C031_TERNARY_OPERATOR_RECURSION_H
#define CCORE_C031_TERNARY_OPERATOR_RECURSION_H

#endif //CCORE_C031_TERNARY_OPERATOR_RECURSION_H

#include <stdio.h>
#include <stdlib.h>



/**
 * Вывести текст заданое количество раз (рекурсивно)
 * @param counter количество
 */
void showText(int counter) {
    printf("text\n");
    counter--;
    if (counter > 0) {
        showText(counter);
    }
}


/**
 * Вычисление факториала (Рекурсивно)
 * @param number число
 * @return факториал числа
 */
int factorial_r(int number) {
    int result;
    if (number == 0) {
        result = 1;
    } else {
        result = number * factorial_r(number-1);
    }
    return result;
}


/**
 * Вычисление факториала (Не рекурсивно)
 * @param number число
 * @return факториал числа
 */
int factorial_nr(int number) {
    int result = 1;
    for (int i = 1; i <= number; ++i) {
        result *= i;
    }
    return result;
}

void c031Tasks();

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

    showText(3);
    printf("\n");

    printf("factorial_r(3): %d\n", factorial_r(3));
    printf("factorial_nr(3): %d\n", factorial_nr(3));

    c031Tasks();
}

/**
 * Рекурсивная функиия вычисления степени числа
 * @param num число
 * @param n показатель степени
 * @return результат
 */
int myPow(int num, int n) {
    int result = num;
    if (n == 0) {
        result = 1;
    } else {
        result *= myPow(num, n-1);
    }
    return result;
}

void c031Tasks() {

    /* 1.
    * Попробуйте написать вложенный тернарный оператор.
    * Например реализуйте следующее условие: если і < 10 то вернуть 10, если і > 100 то вернуть 100, иначе вернуть і + 1000.
    */
    int i = 1000;
    i = (i < 10) ? 10 : (i > 100) ? 100 : 1000;
    printf("%d\n", i);

    /*
    * Напишите рекурсивную функиию вычисления степени числа.
    */
    printf("pow: %d\n", myPow(2,3));
    printf("pow: %d\n", myPow(3,4));
    printf("pow: %d\n", myPow(6,3));
    printf("pow: %d\n", myPow(12,10));
}

