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
        array[0][i] = ' '; // инициализация первой строки
    array[0][WIDTH] = '\0'; // символ завершения строки
    for (int i=0; i<HEIGHT; i++)
        sprintf(array[i], array[0]); // копирование первой строки во все остальные
}

void show()
{
    array[HEIGHT-1][WIDTH-1] = '\0';
    for (int i=0; i<WIDTH-1; i++)
        printf(array[i]);
}

int main()
{

    char a[10][10];
    
    for (size_t i = 0; i < 10; i++)
        a[0][i] = 'a';
    a[0][10] = '\0';
    
    for (size_t i = 1; i < 10; i++)
        sprintf(a[i], a[0]);
    
    for (size_t i = 0; i < 10; i++)
        printf(a[i]);

    // init();
    // show();
    return 0;
}
