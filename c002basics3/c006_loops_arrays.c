#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int mas[10];
    
    mas[0] = 555;
    mas[1] = 777;
    mas[2] = 111;
    
    i = 0;
    while (i < 3)
    {
        printf("%d\n", mas[i]);
        i = i + 1;
    }
    
    return 0;
}
