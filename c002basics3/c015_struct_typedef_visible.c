#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Структура описания точки
struct sPoint
{
    int x, y;
};

// Создание нового типа на основе типа int
typedef int myIntType;

// Создание нового типа данных myPoint на основе типа struct sPoint
typedef struct sPoint myPoint;

void tasks(); // объявление функции с задачами

int main()
{

    struct sPoint point; // объявление новой структуры
    point.x = 123;
    point.y = 567;
    printf("point: x = %d, y = %d\n", point.x, point.y);

    struct sPoint a; // объявление еще одной структуры
    a.x = 41;
    a.y = 23;
    printf("a: x = %d, y = %d\n", a.x, a.y);

    myIntType number = 23;
    printf("myType number = %d\n", number);

    myPoint anotherPoint; // объявление новой структуры
    anotherPoint.x = 25;
    anotherPoint.y = 34;
    printf("anotherPoint: x = %d, y = %d\n", anotherPoint.x, anotherPoint.y);

    myPoint arrayOfPoints[10]; // массив структур
    arrayOfPoints[0].x = 51;
    arrayOfPoints[0].y = 23;
    printf("arrayOfPoints[0]: x = %d, y = %d\n", arrayOfPoints[0].x, arrayOfPoints[0].y);
    printf("\n\n\n");

    // Области видимости
    int i = 7;
    {
        printf("i = %d\n", i);
    }

    //

    

    tasks();

    return 0;
}

void tasks()
{
    // 1
    struct interiorPiece
    {
        int length, height, width;
        char name [50];
    };

    struct interiorPiece a;
    a.length = 100;
    a.height = 200;
    a.width = 300;

    strcpy(a.name, "Interior Piece");
    
    printf("a: length=%d, height=%d, width=%d, name=%s\n", a.length, a.height, a.width, a.name);

    // 2 
    struct interiorPiece array[3];

    for (size_t i = 0; i < 3; i++)
    {
        array[i].length = i + 1;
        array[i].height = i + 2;
        array[i].width = i + 3;

        char stringI[10];
        itoa(i + 1, stringI, 10); // преобразовать число в строку

        strcpy(array[i].name, "Interior Piece #"); // скопировать строку в массив
        strcat(array[i].name, stringI); // дописать в массив строку
    }

    for (size_t i = 0; i < 3; i++)
    {
        printf("a: length=%d, height=%d, width=%d, name=%s\n", 
            array[i].length, 
            array[i].height, 
            array[i].width, 
            array[i].name
        );
    }



    int a1 = 123;
    char s1[100];
    itoa(a1,s1,18);
    printf("%s\n", s1);


}

