// https://www.youtube.com/watch?v=8WRCndazFes&list=PLBOPkQsFLCR2DWRY74L03FmbRtz_Yy73_&index=12

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // содержит функцию getch для чния символов

int main()
{
    char mas[10][21];
    int i;
    int x = 10, y = 5;

    char key;

    do
    {
        // создание локации
        sprintf(mas[0], "####################");
        for (i = 1; i < 9; i++)
        {
            sprintf(mas[i], "#                  #");
        }
        sprintf(mas[9], "####################");


        // создание персонажа
        mas[y][x] = '@';


        // отображение локации
        for (i = 0; i < 10; i++)
        {
            printf("%s\n", mas[i]);
        }

        
        // чтение символов с клавиатуры
        key = getch();

        if (key == 'w') y--;
        if (key == 's') y++;
        if (key == 'a') x--;
        if (key == 'd') x++;
        
    } while (key != 'e');

    return 0;
}
 