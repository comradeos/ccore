#include <stdio.h>
#include <stdbool.h>

int main (int argc, char * argv[])
{
    int x;
    scanf("%d", &x);
    int max = -2>>31;
    while (x!=0)
    {
        max = x%2==0 && x>max ? x:max;
        scanf("%d", &x);
    }
    
    printf("maximum = %d\n", max);
}

// gcc -o application.exe -Wall max_num2.c && .\application.exe