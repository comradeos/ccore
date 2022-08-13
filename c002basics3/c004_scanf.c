#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("x = ");
    scanf("%f", &x);

    float y;
    printf("y = ");
    scanf("%f", &y);

    int i;
    printf("operations:\n  1 = *\n  2 = +\n  3 = -\n  4 = \\\noperation: ");
    scanf("%d", &i);

    if(i == 1) 
        printf("%.2f * %.2f = %.2f", x, y, x * y);
    if (i == 2)
        printf("%.2f + %.2f = %.2f", x, y, x + y);
    if (i == 3)
        printf("%.2f - %.2f = %.2f", x, y, x - y);
    if (i == 4)
        printf("%.2f / %.2f = %.2f", x, y, x / y);

    return 0;
}