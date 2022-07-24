#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, y;
    x = y = 1;

    while (1)
    {
        printf("Input x, y: ");
        scanf("%d,%d", &x, &y);
        if (x == 0 || y == 0)
        {
            printf("The point (%d, %d) is on axis.\n", x, y);
            continue; // начать следующую итерацию
        }
        else if (x > 0)
        {
            if (y > 0)
            {
                printf("   | * \n"
                       "---|---\n"
                       "   |   \n");
                printf("1st");
            }
            else if (y < 0)
            {
                printf("   |   \n"
                       "---|---\n"
                       "   | * \n");
                printf("4th");
            }
        }
        else if (x < 0)
        {
            if (y > 0)
            {
                printf(" * |   \n"
                       "---|---\n"
                       "   |   \n");
                printf("2nd");
            }
            else if (y < 0)
            {
                printf("   |   \n"
                       "---|---\n"
                       " * |   \n");
                printf("3rd");
            }
        }

        printf(" quarter (x=%d, y=%d)\n", x, y);
    }

    return 0;
}

/*

clear && gcc -o quarters_ifelse.exe -Wall quarters_ifelse.c && quarters_ifelse.exe

*/