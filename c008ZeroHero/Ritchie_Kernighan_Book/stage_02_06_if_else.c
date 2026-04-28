#include <stdio.h>

int main()
{
    int num = 0;

    printf("x == 0, input new x: ");

    scanf("%d", &num);

    if (num == 0)
    {
        printf("zero");
    }
    else if (num < 0)
    {
        printf("negative");
    }
    else
    {
        printf("positive");
    }

    printf("\n");

    return 0;
}
