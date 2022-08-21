#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    srand(time(NULL));
    int num = (rand() % (10 - 2 + 1)) + 2;
    printf("%d", num);
 
    return 0;
}