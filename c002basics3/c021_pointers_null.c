#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; // переменная
    int *numPtr; // указатель
    numPtr = &num; // присваиваем указателю адрес переменной 

    num = 5; // значение переменной
    *numPtr = 12; // изменяем значение через указатель (num изменился на 12)

    numPtr = NULL;
    if (numPtr != NULL)
        *numPtr = 7;

    printf("%d\n", num);
    return 0;
}
