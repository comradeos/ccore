#include <stdio.h>
#include <stdbool.h>

int main (int argc, char * argv[])
{
    int x, i;
    int m = -1000000, m_i;

    scanf("%d\n", &x);
    while (x!=0)
    {
        if(x%2 == 0)
        {
           if (x > m)
           {
            m = x;
            m_i = i;
           }
        }
        i += 1;
        scanf("%d", &x);
    }
    
    
    printf("maximum = %d\n", m);
    printf("maximum position = %d\n", m_i);
    return 0;
}

// gcc -o application.exe -Wall max_num3.c && .\application.exe