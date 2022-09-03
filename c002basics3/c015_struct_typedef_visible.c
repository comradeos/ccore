#include <stdio.h>
#include <stdlib.h>

// Структура описания точки
struct sPoint {
    int x, y;
};

int main() {

    struct sPoint point;
    point.x = 123;
    point.y = 567;
    
    printf("point: x = %d, y = %d\n", point.x, point.y);

    return 0;
}
