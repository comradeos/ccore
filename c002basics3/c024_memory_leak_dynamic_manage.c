#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    // функция sizeof показывает сколько байт занимает тот или иной тип данных

    x = sizeof(int);
    printf("%d\n", x); // 4 байта, 32 бита
    
    x = sizeof(float);
    printf("%d\n", x); // 4 байта, 32 бита

    x = sizeof(double);
    printf("%d\n", x); // 8 байт, 64 бита

    x = sizeof(char);
    printf("%d\n", x); // 1 байт, 8 бит

    char *somePtr = NULL;
    int pointerSize = sizeof(somePtr);
    printf("%d\n", pointerSize); // 8 байт, 64 бита

    // malloc - выделяет ячейку в памяти заданного размера и возвращает адрес выделенной ячейки памяти
    int a = malloc(4); // выделить 4 байта в памяти
    int b = sizeof(a);
    printf("%d\n", b); // 4



    int *varPtr = NULL; // создаем пустой указатель
    varPtr = malloc(sizeof(int)); // резервируем память в количестве sizeof(int) байт
    *varPtr = 1; // обращаемся по адресу в памяти и присваиваем туда значение 1
    printf("%d\n", *varPtr); // // обращаемся по адресу в памяти и выводим значение


    return 0;
}
