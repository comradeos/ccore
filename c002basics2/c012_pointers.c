#include <stdio.h>

struct Abstract
{
    int weight, height;
};

void square(struct Abstract object);



int main()
{
    int num = 25; // переменная

    printf("%d\n", num); // вывести значение
    printf("%p\n", &num); // вывести адрес значения

    int * pNum = &num; // указатель, содержащий адрес
    printf("%p\n", pNum); // вывести указатель, содержащий адрес
    
    printf("%d\n", * pNum); // вывести значение через указатель содержащий адрес
    printf("%d\n", * &num); // вывести значение через адрес


    struct Abstract rectangle;
    rectangle.weight = 5;
    rectangle.height = 7;
    square(rectangle);


    return 0;
}

void square(struct Abstract object)
{
    int result = object.weight * object.height;
    printf("result: %d\n", result);
}