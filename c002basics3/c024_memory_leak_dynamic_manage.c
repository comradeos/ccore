#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    // sizeof сколько байт занимает тот или иной тип

    x = sizeof(int);
    printf("%d\n", x); // 4 байта, 32 бита
    
    x = sizeof(float);
    printf("%d\n", x); // 4 байта, 32 бита

    x = sizeof(double);
    printf("%d\n", x); // 8 байт, 64 бита

    x = sizeof(char);
    printf("%d\n", x); // 1 байт, 8 бит

    char *somePointer = NULL;
    printf("%d\n", sizeof(somePointer)); // 8 байт, 64 бита

    return 0;
}
