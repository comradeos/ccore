#include <stdio.h>
#include <stdlib.h>

void tasks();

int main()
{
    int num; // переменная
    int *numPtr; // указатель
    numPtr = &num; // присваиваем указателю адрес переменной 

    num = 5; // значение переменной
    *numPtr = 2; // изменяем значение через указатель (num изменился на 12)

    // numPtr = NULL; // указатель указывает никуда
    if (numPtr != NULL) 
    {
        *numPtr = 7; // изменить значение если в указателе содержится адрес
        printf("%d\n", numPtr); // вывести адрес указателя
        printf("%d\n", *numPtr); // вывести значение находящееся по адресу указателя (разыменование)
    }

    // при объявлении указателя рекомендуется сразу присваивать ему значение NULL

    printf("%d\n", num);

    tasks();
    return 0;
}


void tasks()
{
    float value1 = 0.1;
    float value2 = 0.2;
    printf("value1 = %0.1f\n", value1);
    printf("value2 = %0.1f\n", value2);

    float *valuePtr = NULL;
    valuePtr = &value1;
    if (valuePtr != NULL)
    {
        *valuePtr = 0.3;
        valuePtr = &value2;
        *valuePtr = 0.4;
    }
 
    printf("value1 = %0.1f\n", value1);
    printf("value2 = %0.1f\n", value2);
}