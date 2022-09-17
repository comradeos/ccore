#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    int *numPtr = &num;
    int numPtr2 = &num;

    printf("%d %d %d\n", &num, numPtr, numPtr2);
    return 0;
}
