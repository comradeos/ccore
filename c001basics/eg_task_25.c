#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

int main(int argc, char *argv[])
{
    int numbers[SIZE] = {
        9832,7029,9374,
        4864,3627,8167,
        6542,7411,8583,
        8183,1153,2919,
        8401,4446,7367,
        5975,1546,7191,
        5082,6368,4539,
        3025,5539,1203,
        7757,7955,5880,
        4436,5196,6318,
    };

    int result = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] > 100 && numbers[i] % 5 == 0)
        {
            result += 1;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] > 100 && numbers[i] % 5 == 0)
        {
            numbers[i] = result;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
       printf("%d\n", numbers[i]);
    }
    printf("\n");

    return 0;
}

// gcc -o application.exe -Wall eg_task_25.c && application.exe