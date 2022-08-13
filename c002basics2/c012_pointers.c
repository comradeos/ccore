#include <stdio.h>

int main()
{
    int num = 0; // переменная

    printf("%d\n", num); // вывести значение
    printf("%p\n", &num); // вывести адрес значения

    int * pNum = &num; // указатель, содержащий адрес
    printf("%p\n", pNum); // вывести указатель, содержащий адрес


    // scanf("%d", &num);
    
    return 0;
}
