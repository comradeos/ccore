// gcc -o app.exe -Wall c03_arrays.c && app.exe

#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3};
    array[0] = 56;
    printf("%d\n", array[0]);

    char word[] = "hello";
    printf("%s\n", word);
    printf("%c\n", word[0]);

    int array2dim[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    printf("\n\n\n");

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d \n", array2dim[i][j]);
        }
            printf("\n");
    }
    
    printf("------------\n");
    return 0;
}
