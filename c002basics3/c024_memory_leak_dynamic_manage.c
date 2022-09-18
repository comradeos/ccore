#include <stdio.h>
#include <stdlib.h>


void tasks();


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
    if (somePtr != NULL)
    {
        int pointerSize = sizeof(somePtr);
        printf("%d\n", pointerSize); // 8 байт, 64 бита
    }

    // malloc - выделяет ячейку в памяти заданного размера и возвращает адрес выделенной ячейки памяти
    int a = malloc(4); // выделить 4 байта в памяти
    int b = sizeof(a);
    printf("%d\n", b); // 4



    int *varPtr = NULL; // создаем пустой указатель
    if (varPtr != NULL)
    {
        varPtr = malloc(sizeof(int)); // резервируем память в количестве sizeof(int) байт
        *varPtr = 1; // обращаемся по адресу в памяти и присваиваем туда значение 1
        printf("%d\n", *varPtr); // // обращаемся по адресу в памяти и выводим значение

        free(varPtr); // освободить память
        varPtr = NULL;
    }


    void *nonTypePtr = NULL; // не типизированный указатель


    tasks();
    return 0;
}


void tasks(int a)
{
    /*
    Создайте несколько указателей разных типов и выделите для них память. 
    Далее присвойте им значения и выведите на экран.
    Помните про очистку памяти и проверку наличия адреса.
    */
    
    int *intVarPtr = NULL;
    intVarPtr = malloc(sizeof(int));
    *intVarPtr = 25;

    float *floatVarPtr = NULL;
    floatVarPtr = malloc(sizeof(float));
    *floatVarPtr = 1.7;

    char *charVarPtr = NULL;
    charVarPtr = malloc(sizeof(char));
    *charVarPtr = 'q';

    if (intVarPtr != NULL && floatVarPtr != NULL && charVarPtr !=NULL)
    {
        printf("%d, %0.1f, %c", 
        *intVarPtr, *floatVarPtr, *charVarPtr);

        free(intVarPtr);
        intVarPtr = NULL;

        free(floatVarPtr);
        floatVarPtr = NULL;

        free(charVarPtr);
        charVarPtr = NULL;
    } 
    



}