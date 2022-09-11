#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> // для считывания символов

#include <windows.h> // для использования функуии GetKeyState 

// константы: длина, ширина игрового поля
#define width 65
#define height 25

// создание игрового поля
char mas[height][width + 1]; // +1 для записи символа конца строки

/**
 * @brief заполнение верхней границы решетками
 *
 */
void init()
{
    // заполняем все поле решетками
    for (size_t i = 0; i < width; i++)
        mas[0][i] = '#';

    mas[0][width] = '\0'; // символ конца строки

    // скопируем нулевую строки в первую
    strncpy(mas[1], mas[0], width + 1);

    // заменим центральные решетки на пробелы
    for (size_t i = 1; i < width - 1; i++)
        mas[1][i] = ' ';

    // и скопируем полученную строку (первую) во все остальные строки
    for (size_t i = 2; i < height; i++)
        strncpy(mas[i], mas[1], width + 1);
}

/**
 * @brief отрисовка игрового поля
 *
 */
void show()
{
    for (size_t i = 0; i < height; i++)
    {
        printf("%s", mas[i]);
        if (i < height - 1)
            printf("\n");
    }
}

// создание структуры ракетки
struct Racket
{
    int x, y;
    int w;
};
// создание типа на основе структуры struct Racket
typedef struct Racket TRacket;

// создаем переменную ракетки
TRacket racket;

/**
 * @brief инициализация ракетки
 *
 */
void initRacket()
{
    racket.w = 7;                      // ширина ракетки
    racket.x = (width - racket.w) / 2; // положение ракетки по оси х
    racket.y = height - 1;             // положение ракетки по оси y (в самом низу)
}

/**
 * @brief отрисовка ракетки на игровом поле
 *
 */
void putRacket()
{
    for (size_t i = racket.x; i < racket.x + racket.w; i++)
        mas[racket.y][i] = '@';
}

/**
 * @brief перемещение ракетки
 *
 */
void moveRacket(int x)
{
    racket.x = x;
    if (racket.x < 1)
        racket.x = 1;
    if (racket.x + racket.w >= width)
        racket.x = width - 1 - racket.w;
}

/**
 * @brief перемещает курсор
 * в левый верхний угол консоли,
 * после чего можно будет выводить игровое поле без миганий
 * 
 * @param x координата 
 * @param y координата
 */
void setcur(int x, int y)
{
    COORD coord; // 
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // первый параметр - это указатель на наше окно
} 




// создание структуры шарика
struct Ball
{
    float x, y;
    int ix, iy;
    float alfa; // угол
    float speed; // скорость
};

// создание типа на основе структуры struct Ball
typedef struct Ball TBall;

// создаем переменную шарика
TBall ball;

void initBall()
{
   moveBall(2, 2);
   ball.alfa = -1;
   ball.speed = 0.5;
}

void putBall() 
{
    // округлить и привести к целому типу
    mas[ball.iy][ball.ix] = '*'; 
}

void moveBall(int x, int y) 
{
    ball.x = x;
    ball.y = y;
    ball.ix = (int)round(ball.x);
    ball.iy = (int)round(ball.y);

}


void autoMoveBall()
{
    moveBall(ball.x + cos(ball.alfa) * ball.speed
            ,ball.x + sin(ball.alfa) * ball.speed);
}



int main()
{
    // char c;
    initRacket(); // создаем ракетку 
    initBall(); // создаем шарик 

    do
    {
        setcur(0, 0); // вместо system("cls")

        init(); // инициализируем игровое поле
        putRacket(); // помещаем на него ракетку
        putBall();
        show(); // отображаем (рисуем) игровое поле

        if (GetKeyState('A') < 0) // если меньше нуля - клавиша нажата, иначе нет
            moveRacket(racket.x - 1);
        if (GetKeyState('D') < 0)
            moveRacket(racket.x + 1);
        
        moveBall(racket.x + racket.w / 2, racket.y - 1); // поместить шарик в центр ракетки
        
        Sleep(10); // замедлить на 10 миллисекунд

    } while (GetKeyState(VK_ESCAPE) >= 0); // ESC - выход из основного цикла программы

    return 0;
}