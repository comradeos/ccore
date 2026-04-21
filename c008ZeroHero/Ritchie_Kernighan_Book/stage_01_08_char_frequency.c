// gcc -Wall -o ./app stage_01_08_char_frequency.c && ./app

#include <stdio.h>

int main()
{
    int freq[128] = {0};

    printf("Input: ");

    int c;

    while((c = getchar()) != EOF)
    {
        ++freq[c];
    }

    int counter = 0;

    for(int i = 0; i < 128; ++i)
    {
        counter = freq[i];

        if(counter == 0)
        {
            continue;
        }

        printf("%c = %d\n", i, freq[i]);
    }

    return 0;
}
