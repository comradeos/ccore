#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    t = 31;
    
    if (t > 10)
    {
        printf("www\n");
        if (t > 20) 
        {
            printf("123\n");
            if (t > 20) 
            {
                printf("ttt %d\n");
            }
        }
    } else {
        printf("ggg\n");
        return 7;
    }
    
    return 2;
}
