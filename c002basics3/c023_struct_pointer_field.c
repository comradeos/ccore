#include <stdio.h>
#include <stdlib.h>


struct SPoint { // новая структура данных: точка
    int x; // поле, координата x
    int y; // поле, координата y
};

typedef struct SPoint TPoint; // тип данных на основе созданной структуры

void showPoint(TPoint p)
{
    printf("x=%d, y=%d\n", p.x, p.y);
}

void setPoint(TPoint *pointPtr, int xPos, int yPos)
{
    if (pointPtr != NULL) 
    {
        (*pointPtr).x = xPos;
        (*pointPtr).y = yPos;
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
    setPoint(&point, 7, 9);
    showPoint(point);

    return 0;
}
