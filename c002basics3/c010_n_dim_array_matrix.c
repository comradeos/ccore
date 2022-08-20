#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[9][9];
    for (int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++) 
        {

            m[i][j] = (i + 1) * (j + 1);
            if (i + 1 == 5)
            {
                m[i][j] = 5;
            }
            if (j + 1 == 3)
            {
                m[i][j] = 3;
            } 
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
