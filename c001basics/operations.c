#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int x = 256;
    
    printf("%d\n", x += 256); // 512
    printf("%d\n", x -= 256); // 256
    printf("%d\n", x *= 2);   // 512
    printf("%d\n", x /= 8);   //8
    
    printf("\n");
    
    printf("%d\n", 1 == 1); // 1
    printf("%d\n", 1 != 1); // 0
    printf("%d\n", 2 > 1);  // 1
    printf("%d\n", 1 >= 1); // 1
    printf("%d\n", 2 < 1);  // 0
    printf("%d\n", 1 <= 1); // 1
    
    return 0;
}

/*

clear && gcc -o operations.exe -Wall operations.c && operations.exe

*/