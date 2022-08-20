#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[9][9];
    for (int i = 1; i <= 9; i++)
    {
        for(int j = 1; j <= 9; j++) 
        {
            m[i][j] = (i) * (j);
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
