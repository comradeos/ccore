#include <stdio.h>

#define LEN 5

void swap(int*, int*);

int main()
{   
    int arr[LEN] = {0};

    printf("input arr: ");

    for (int i = 0; i < LEN; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nver1: ");

    for (int i = 0; i < LEN; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\nver2: ");

    for (int i = 0; i < LEN/2; ++i)
    {   
        swap(&arr[i], &arr[LEN-1-i]);
    }

    for (int i = 0; i < LEN; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
   
    return 0;
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
