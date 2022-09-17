#include <stdio.h>
#include <stdlib.h>

#include <string.h> // работа со строками
#include <windows.h> // для работы с клавиатурой

#define HEIGHT 25
#define WIDTH 80

char array[HEIGHT][WIDTH+1];

void init()
{
    for (int i=0; i<WIDTH; i++)
        array[0][i] = ' ';
    array[0][WIDTH] = '\0';
    for (int i=0; i<HEIGHT; i++)
        sprintf(array[i], array[0]);
}

int main()
{
    
    return 0;
}
