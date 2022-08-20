#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[9][9];
    for (int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++) 
        {
            m[i][j] = 7;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
