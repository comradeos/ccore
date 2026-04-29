#include <stdio.h>

int main()
{
    int len = 5;

    int arr[len];

    printf("Input: ");
    
    int i = 0;
    
    for (i = 0; i < len; ++i)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\n");

    printf("Output: ");
    
    int min = arr[0];

    for (i = 0; i < len; ++i)
    {
        printf("%d ", arr[i]);

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("\n");
    
    printf("min = %d\n", min);

    return 0;
}
