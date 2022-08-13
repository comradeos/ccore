#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("x = ");
    scanf("%d", &x);

    printf("%d * 7 = %d", x, x * 7);
    return 0;
}