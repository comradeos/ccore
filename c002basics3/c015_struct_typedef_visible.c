#include <stdio.h>
#include <stdlib.h>

// Структура описания точки
struct sPoint {
    int x, y;
};


// Создание нового типа на основе типа int
typedef int myType; 


int main() {

    struct sPoint point; // объявление новой структуры
    point.x = 123;
    point.y = 567;
    
    struct sPoint a; // объявление еще одной структуры
    a.x = 41;
    a.y = 23;
    
    printf("point: x = %d, y = %d\n", a.x, a.y);




    return 0;
}
