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
    *(mas+1) = 7777; // mas[1] = 7777;, +1 означает перемещение к следующей ячейке памяти
    
    printf("%d\n", mas[0]);
    printf("%d\n", mas[1]);


    // динамический массив (darr - dynamic array)
    int *darr = NULL; // создаем пустой указатель
    darr = malloc(sizeof(int)*2); // для int массива размерностью 2 выделяем в 2 раза больше памяти чем нужно для int
    
    darr[0] = 11;
    darr[1] = 22;
    
    printf("%d\n", darr[0]);
    printf("%d\n", darr[1]);

    return 0;
}
