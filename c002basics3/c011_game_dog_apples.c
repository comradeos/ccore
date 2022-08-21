// https://www.youtube.com/watch?v=8WRCndazFes&list=PLBOPkQsFLCR2DWRY74L03FmbRtz_Yy73_&index=12

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // содержит функцию getch для чния символов

int main()
{
    char mas[10][21]; // размеры игрового поля
    int i; // счетчик
    int x = 10, y = 5; // начальные координаты собаки
    int ox, oy; // координаты до перемещения собаки
    int ax = 5, ay = 3; // начальные координаты яблока 
    
    int counter = 10;

    // инициализация генератора случайных чисел
    srand(73);
    srand(time(NULL));

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


        // отображение собаки
        mas[y][x] = '@';

        // отображение яблока
        mas[ay][ax] = '*';


        // отображение локации
        system("cls"); // очистка консоли
        for (i = 0; i < 10; i++)
        {
            printf("%s\n", mas[i]);
        }
        printf("Scores: %d \n", counter);
        
        // чтение символов с клавиатуры
        key = getch();
        
        ox = x;
        oy = y;
        
        if (key == 'w') y--;
        if (key == 's') y++;
        if (key == 'a') x--;
        if (key == 'd') x++;

        if (mas[y][x] == '#')
        {
            x = ox;
            y = oy;
        }

        if ((ax == x) && (ay == y)) 
        {
            counter++;
            ax = rand() * 1.0 / RAND_MAX * 18 + 1;
            ay = rand() * 1.0 / RAND_MAX * 8 + 1;
        }

    } while (key != 'e');

    return 0;
}
 