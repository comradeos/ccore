#include <stdio.h>
#include <stdlib.h>

#include <string.h> // работа со строками
#include <windows.h> // для работы с клавиатурой

#define HEIGHT 25
#define WIDTH 76

char array[HEIGHT][WIDTH+1];

void init()
{
    for (int i=0; i<WIDTH; i++)
        array[0][i] = ' '; // инициализация первой строки
    array[0][WIDTH] = '\0'; // символ завершения строки
    for (int i=1; i<HEIGHT; i++)
        sprintf(array[i], array[0]); // копирование первой строки во все остальные
}

void show()
{
    array[HEIGHT-1][WIDTH-1] = '\0';
    for (int i=0; i<WIDTH-1; i++)
        printf(array[i]);
}

void newSnow()
{
    for (int i=0; i<WIDTH; i++)
        if (rand() % 12 == 1)
            array[0][i] = '*';
}

void moveSnow()
{
    int dx;
    for (int j=HEIGHT-1; j>=0; j--)
        for (int i=0; i<WIDTH; i++)
            if (array[j][i] == '*')
            {
                array[j][i] = ' ';
                dx = 0;
                if (rand() % 10 < 1) dx++;
                if (rand() % 10 < 1) dx--;
                dx = dx + i;
                if ((dx >= 0) && (dx < WIDTH) && (j+1 < HEIGHT)) // только если снежинка в границах поля 
                    array[j+1][dx] = '*';
            }
}


void setCursor(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    init();

    do
    {
        newSnow();
        moveSnow();
        Sleep(100);
    }
    while(GetKeyState(VK_ESCAPE) >= 0);

    show();
    return 0;
}
