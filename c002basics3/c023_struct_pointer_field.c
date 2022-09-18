#include <stdio.h>
#include <stdlib.h>

typedef struct SPoint TPoint;

struct SPoint {
    int a, b;
};



int main()
{
    TPoint point;
    point.a = 123;
    printf("%d\n", point.a);
    return 0;
}
