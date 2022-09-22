#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int mas[2];
    mas[0] = 111;
    mas[1] = 222;

    // Внимание, имя массива - это на самом деле указатель, который в качестве значения хранит
    // адрес начального элемента массива
    *mas = 5555; // mas[0] = 5555;
    *(mas+1) = 7777; // mas[1] = 7777;
    
    printf("%d\n", mas[0]);
    printf("%d\n", mas[1]);

    return 0;
}
