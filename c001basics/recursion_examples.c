// gcc -o application.exe -Wall recursion_examples.c && application.exe

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Вычисление факториала числа.
 * 
 * @param n целое число
 * @return int 
 */
int factorial(int number)
{
    if (number == 0) {
        return 1;
    }
    return number*factorial(number-1);
}

/**
 * @brief Алгоритм Евклида:
 * наибольший общий делитель (great common divisor).
 * 
 * @param a первое число
 * @param b второе число
 * @return int 
 */
int euclid_algorithm(int a, int b)
{
    if (b == 0) {
        return a;
    }
    return euclid_algorithm(b, a%b);
}


/**
 * @brief Возведение целого числа в степень n. 
 * 
 * @param a целое число.
 * @param n показатель степени.
 * @return int 
 */
double power(double a, int n)
{
    if (n == 0) {
        return 1;
    }
    if (n%2 == 1) {
        return a*power(a, n-1);
    } else {
        return power(a*a, n/2);
    }
}


/**
 * @brief Последовательность Фиббоначи. 
 * 
 * @param n предельное значение
 * @return int 
 */
int fibonacci(int n)
{
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char * argv[])
{
    int number1;
    printf("Factorial: input int number: ");
    scanf("%d", &number1);
    printf("factorial(%d): %d\n", number1, factorial(number1));

    printf("Euclid algorithm: input 1st int number: ");
    scanf("%d", &number1);
    int number2;
    printf("Euclid algorithm: input 2nd int number: ");
    scanf("%d", &number2);
    printf("euclid_algorithm(%d, %d): %d\n", number1, number2, euclid_algorithm(number1, number2));

    double a;
    printf("Power: input double number a: ");
    scanf("%lf", &a);
    int b;
    printf("Power: input int number b: ");
    scanf("%d", &b);
    printf("power(%lf, %d): %lf\n", a, b, power(a, b));

    int n;
    printf("Fibonacci: input int number n: ");
    scanf("%d", &n);
    printf("fibonacci(%d): %d\n", n, fibonacci(n));

    return 0;
}