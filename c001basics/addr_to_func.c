// gcc -o application.exe -Wall addr_to_func.c && application.exe
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Меняет значение по адресу переменной.
 *
 * @param num число
 * @param new новое значение
 */
void change(int *num, int new)
{
    *num = new;
}


/**
 * @brief Не сработает, адрес локальной переменной вернуть нельзя
 * 
 * @param num число
 * @return int* адрес
 */
int * get_pointer(int num)
{
    return &num;
}

int main(int argc, char *argv[])
{
    int number = 10;
    printf("%d\n", number); // 10
    change(&number, 20);    // передать адрес переменной number
    printf("%d\n", number); // 20
    
    printf("\n");

    int result = get_pointer(number);
    printf("%d\n", result);




    return 0;
}