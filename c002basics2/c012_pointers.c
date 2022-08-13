#include <stdio.h>

struct Abstract
{
    int weight, height;
};

void square_val(struct Abstract object); // объявление функции, принимающей объект
void square_addr(struct Abstract * object); // объявление функции, принимающей адрес объекта



int main()
{
    int num = 25; // переменная

    printf("value: %d\n", num); // вывести значение
    printf("address of value: %p\n", &num); // вывести адрес значения

    int * pNum = &num; // указатель, содержащий адрес
    printf("pointer of value (address): %p\n", pNum); // вывести указатель, содержащий адрес
    
    printf("value (using pointer): %d\n", * pNum); // вывести значение через указатель содержащий адрес
    printf("value (using address): %d\n", * &num); // вывести значение через адрес


    struct Abstract rectangle;
    rectangle.weight = 5;
    rectangle.height = 7;
    square_val(rectangle);
    square_addr(&rectangle);


    return 0;
}


/**
 * @brief 
 * Реализация вычисления площади прямоугольника,
 * принимает объект в качестве аргумента.
 * 
 * @param object прямоугольник
 */
void square_val(struct Abstract object)
{
    int result = object.weight * object.height;
    printf("square_val result: %d\n", result);
}


/**
 * @brief 
 * Реализация вычисления площади прямоугольника,
 * принимает адрес на объект в качестве аргумента.
 * 
 * @param object прямоугольник
 */
void square_addr(struct Abstract * object)
{
    int result = object->weight * object->height;
    printf("square_addr result: %d\n", result);
}