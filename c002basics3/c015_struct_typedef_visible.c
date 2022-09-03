#include <stdio.h>
#include <stdlib.h>

// Структура описания точки
struct sPoint {
    int x, y;
};


// Создание нового типа на основе типа int
typedef int myIntType; 


// Создание нового типа данных myPoint на основе типа struct sPoint
typedef struct sPoint myPoint ; 


int main() {

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


    return 0;
}
