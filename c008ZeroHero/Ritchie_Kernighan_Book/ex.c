// gcc -Wall -o ./app stage_01_06_word_counter.c && ./app

#include <stdio.h>

#define IN 1
#define OUT 0

#define TAB '\t'
#define SPACE ' '
#define RETURN '\n'

int main()
{
    int chars = 0;
    int words = 0;
    int lines = 0;

    printf("Input: ");
    
    int c = 0;

    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        ++chars;

        printf("%d %c \n", c, c);
        
        if (c == RETURN) 
        {
            ++lines;
        }

        if (c == SPACE || c == TAB || c == RETURN)
        {
            state = OUT;
        } 
        else if (state == OUT) 
        {
            state = IN;
            ++words;
        }

    }

    printf("chars: %d\nwords: %d\nlines: %d\n", 
            chars, words, lines);

    return 0;
}
