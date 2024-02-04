#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("floatVsDouble\n");

    float a = 125.0 / 7.0;
    double b = 125.0 / 7.0;

    printf("17.857142857142858\n");
    printf("%.20f\n", b);
    // printf("%.20f", a);

    float n1 = 17.857142857142858;
    float n2 = 17.857142857142859;
   
    double n3 = 17.85714285714285;
    double n4 = 17.85714285714285;

    bool result = n1 == n2;
    bool result2 = n3 == n4;

    printf("%d", result2);

    return 0;
}