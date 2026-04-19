#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pNum = malloc(sizeof *pNum);
    printf("pNum = %p\n", pNum);
    printf("*pNum = %d\n", *pNum);
    *pNum = 10;
    printf("*pNum = %d\n", *pNum);
    free(pNum);
    *pNum = 11;
    printf("*pNum = %d\n", *pNum);
    *pNum = 12;
    printf("*pNum = %d\n", *pNum);
    return 0;
}
