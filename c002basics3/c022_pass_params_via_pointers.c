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
    return 0;
}


void tasks()
{
    /*
    Задание 1:
    Создайте две переменные целого типа, присвойте им значения и отобразите на экране. 
    Напишите процедуру, которая увеличивает значение первого входного параметра на 1, а второго в 2 раза.
    С помощью этой процедуры измените значения двух ваших переменных.
    */
    
    int a;
}
