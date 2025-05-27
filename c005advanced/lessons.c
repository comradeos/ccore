//
// Created by Iaroslav Os on 05.04.2025.
//

#include <stdio.h>

bool seven(const int a)
{
    return a % 7 == 0;
}

void print_if(int numbers[10], bool(*func_p))
{
    for (int i = 0; i < 10; i++)
    {
        const bool result = seven(numbers[i]);
        printf("%d | %d \n", numbers[i], result);
    }
}

void function_pointers()
{
    // https://youtu.be/g7CCaRwRVBQ?si=GM4IdjZCkkmLOvSw
    printf("Function pointers\n");
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_if(numbers, seven);
}

void my_func_arg(int num)
{
    printf("this is my_func_arg with num = %d\n", num);
}

void outer_function(int num, void (*f)(int))
{
    num += 10;
    printf("outer_function: num = %d\n", num);
    f(num);
}

void function_pointers_2()
{
    void (*f)(int) = my_func_arg;
    outer_function(1, f);
}

void bit_flags()
{
    // https://www.youtube.com/watch?v=OWG1cHQpJNE&list=PL71Y0EmrppR0KyZvQWj63040UEzKQU7n8&index=2
    // https://youtu.be/OWG1cHQpJNE?si=mKQMzaYy8Hoob9vJ&t=221
}