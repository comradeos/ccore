#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

14.1 Создайте константу, т.е. макрос = 10 и отобразите на экране при помощи printf.

14.2 Создайте массив целого типа, указав в качестве длины массива нашу константу.
После чего при помощи любого цикла, используя константу, заполните весь массив значениями от 1 до 10 включительно. 
Отобразите весь массив на экране любым способом.

14.3 Создайте переменную целого типа и заполните ее случайным числом в диапазоне от 10 до 19 включительно.

14.4 Заполните массив из задания 2 случайными числами от 20 до 39 включительно.

15.1 Создайте структуру описывающую предмет интерьера. 
Структура должна включать в себя 3 измерения (длина, высота и ширина), название предмета в виде строки длиной 50 символов и цвет.
Создайте переменную для этой структуры любым из трех способов и заполните все поля.
После чего отобразите на экране.

15.2 Создайте массив структур из задания 1. Размер массива 3 элемента. Заполните все поля каждой структуры и выведите на экран при помощи цикла.

16.1 Создайте строку из 20 символов и заполните ее случайными символами. Выведите строку на экран. 
16.2 Заполните строку из задания 1 случайными символами от 'а' до 'z'.

*/


#define k 10 // 14.1

int main()
{
    printf("%d\n", k); // 14.1

    int arr[k]; // 14.2
    for (size_t i = 0; i < k; i++) // 14.2
        arr[i] = i + 1; // 14.2
    for (size_t i = 0; i < k; i++) // 14.2
        printf("%d", arr[i]); // 14.2
    printf("\n"); // 14.2

    srand(time(NULL)); // 14.3
    int random = (rand() % (19 - 10 + 1)) + 10; // 14.3
    printf("%d\n", random); // 14.3

    return 0;
}
