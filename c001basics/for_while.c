#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\n", i);
    }

    int count = 0;
    while (count <= 50)
    {
        printf("%d\n", count);
        count++;
    }
}