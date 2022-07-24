#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int result = 0;
    int N;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int k = i + 1; k < N; k++)
        {
            if (array[i] * array[k] % 26 == 0)
            {
                result++;
            }
        }
    }

    printf("%d\n", result);

    return 0;
}

// gcc -o application.exe -Wall eg_task_27.c && application.exe