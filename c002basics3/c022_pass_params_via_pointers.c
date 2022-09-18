#include <stdio.h>
#include <stdlib.h>

void tasks();


int inc(int a)
{
    return a + 1;
}


void incByPointer(int *x)
{   
    if (x != NULL) {
        *x = *x + 1; // * - оператор обращения по адресу
    }
}

int main()
{
    int i = 7;
    i = inc(i);
    incByPointer(&i); // & - операция взятия адреса
    incByPointer(NULL);
    
    printf("%d\n", i);

    tasks();
    return 0;
}











void increment2Params(int *param1, int *param2)
{
    *param1 = *param1 + 1;
    *param2 = *param1 * 2;
}

void increment2ParamsMod(int *param1, int *param2)
{
    int temp = *param1;
    *param1 = *param2;
    *param2 = temp;
}

void tasks()
{
    /*
    Задание 1:
    Создайте две переменные целого типа, присвойте им значения и отобразите на экране. 
    Напишите процедуру, которая увеличивает значение первого входного параметра на 1, а второго в 2 раза.
    С помощью этой процедуры измените значения двух ваших переменных.
    */
    
    int a = 1;
    int b = 2;

    printf("a=%d, b=%d\n", a, b);

    increment2Params(&a, &b);
    printf("a=%d, b=%d\n", a, b);

    /*
    Задание 2:
    Измените процедуру из первого задания так, 
    чтобы она меняла местами значения двух входных переменных.
    */

    increment2ParamsMod(&a, &b);
    printf("a=%d, b=%d\n", a, b);
}
