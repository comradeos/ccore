// 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597

#include <stdio.h>

int main()
{
    int n = 17;
    
    int a = 0; 
    int b = 1;

    if (n == 0)
    {
        printf("F(%d) = %d\n", n, a);
        
        return 0;
    }

    if (n == 1)
    {
        printf("F(%d) = %d\n", n, b);

        return 0;
    }

    for (int i = 2; i <= n; ++i)
    {
        int t = a + b;
        
        a = b;
        
        b = t;
    }

    printf("F(%d) = %d\n", n, b);

    return 0;
}