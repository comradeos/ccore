// gcc -o application.exe -Wall addresses_pointers.c && application.exe
#include <stdio.h>

/**
 * @brief Демонстрация работы указателей
 *
 */
void pointers_demo()
{
    int i = 10;         // переменная
    int *pi = &i;       // указатель на переменную
    int **ppi = &pi;    // указатель на указатель на переменную
    int ***pppi = &ppi; // указатель на указатель на указатель на переменную

    printf("%d\n", i);
    *pi = 20; // положить значение 20 в переменную, находящуюся по адресу *pi (&i)
    printf("%d\n", i);
    **ppi = 30;
    printf("%d\n", i);
    ***pppi = 40;
    printf("%d\n", i);
}

/**
 * @brief Демонстрация работы адресов
 *
 */
void addresses_demo()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = *A+9;
    printf("%d\n", x);
}

int main(int argc, char *argv[])
{
    // pointers_demo();
    addresses_demo();
    return 0;
}