#include <stdio.h>

int get_line();

int main()
{
    int counter = get_line();

    printf("counter = %d\n", counter);

    return 0;
}

int get_line()
{
    int counter = 0;
    
    while (1)
    {
        int c = getchar();
        
        if (c == '\n' || c == EOF)
        {
            break;
        }

        printf("[%c %d] ", c, c);
        
        ++counter;
    }
    
    return counter;
}
