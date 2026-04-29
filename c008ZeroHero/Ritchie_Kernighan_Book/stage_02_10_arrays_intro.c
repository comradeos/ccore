#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    int max, sum = 0;

    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        sum += arr[i];
    }

    printf("max = %d\nsum = %d\n", max, sum);

    return 0;
}



