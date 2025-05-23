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
