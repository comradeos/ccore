#include <stdio.h>
#include <stdlib.h>

void tasks();


int inc(int a)
{
    return a + 1;
}


void incByPointer(int *x)
{
    *x = *x + 1; // * - оператор обращения по адресу
}

int main()
{
    int i = 7;
    i = inc(i);
    incByPointer(&i); // & - операция взятия адреса
    
    printf("%d\n", i);
    return 0;
}


void tasks()
{
}