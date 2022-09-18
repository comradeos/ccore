#include <stdio.h>
#include <stdlib.h>

void tasks();

struct SPoint { // новая структура данных: точка
    int x; // поле, координата x
    int y; // поле, координата y
    int array[7]; // задание 1
};

typedef struct SPoint TPoint; // тип данных на основе созданной структуры


/**
 * @brief Выводит значение координат точки
 * 
 * @param p 
 */
void showPoint(TPoint p)
{
    printf("x=%d, y=%d\n", p.x, p.y);
    
    printf("array: "); // задание 1
    for (size_t i = 0; i < 7; i++) // задание 1
    {
        printf("%d ", p.array[i]);
    }
    printf("\n"); // задание 1
}


/**
 * @brief Устанавливает новые значение координат точки
 * 
 * @param pointPtr адрес переменной типа TPoint или указатель
 * @param xPos целое число
 * @param yPos целое число
 */
void setPoint(TPoint *pointPtr, int xPos, int yPos, int newArray[7])
{
    if (pointPtr != NULL) // проверка адреса на существование
    {
        (*pointPtr).x = xPos;
        (*pointPtr).y = yPos;

        for (size_t i = 0; i < 7; i++) // задание 1
        {
            (*pointPtr).array[i] = newArray[i]; // задание 1
        }
        
    }
}

int main()
{
    TPoint point; // переменная типа TPoint 
    point.x = 3;
    point.y = 7;
    printf("x=%d, y=%d\n", point.x, point.y);

    TPoint *pointPtr = NULL; // создаем указатель с нулевым адресом
    pointPtr = &point; // присваивает указателю адрес переменной point

    if (pointPtr != NULL) // проверка существования адреса в указателе
    {
        (*pointPtr).x = 12; // обращение к полю x через адрес (разыменование указателя)
        (*pointPtr).y = 23; // обращение к полю y через адрес (разыменование указателя)
    }

    showPoint(point);

    int arr[7] = {1,2,3,4,5,6,7};
    setPoint(pointPtr, 7, 9, arr);
    showPoint(*pointPtr);

    tasks();

    return 0;
}



void tasks()
{
    /*
    // задание 1
    Добавьте е структуру еще одну любую переменную (можно массив). 
    В процедуре showPoint добавьте вывод новой переменной на экран. 
    Добавьте в процедуру setPoint входной параметр такого же типа 
    и с помощью него заполните новую переменную в структуре.
    */
}