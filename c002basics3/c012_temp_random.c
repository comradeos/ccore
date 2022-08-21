#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    srand(time(NULL));
    int num = (rand() % (70 - 10 + 1)) + 10;
    printf("%d", num);
 
    return 0;
}