#include <stdio.h>
#include <stdlib.h>

void tasks();

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

    // для изменения размера массива следует очистить занимаемую память
    // после чего выделить новую память нужного размера
    free(darr);
    darr = malloc(sizeof(int)*2); // теперь массив имеет размерность 5
    darr[4] = 444;
    printf("%d\n", darr[4]);
    // внимание, по умолчанию новая память выделяется в новом месте, а значит данные из массива не сохраняются




    // однако есть realloc
    int *darr2 = NULL; // создаем пустой указатель
    darr2 = malloc(sizeof(int)*2); // для int массива размерностью 2 выделяем в 2 раза больше памяти чем нужно для int    
    darr2[0] = 123;
    darr2[1] = 234;
    darr2 = realloc( darr2, sizeof(int) * 5);

    
    tasks();

    return 0;
}

void tasks() 
{
    /*
    1. Создайте динамический массив целого типа. Выделите ему память на 10 элементов. 
    Заполните массив значениями, чтобы каждое следующее было в 2 раза больше предыдущего. 
    Выведете все значения массива на экран.
    
    2. Увеличьте размер массива на 4 элемента и заполните все новые ячейки одним любым числом
    */

   

}