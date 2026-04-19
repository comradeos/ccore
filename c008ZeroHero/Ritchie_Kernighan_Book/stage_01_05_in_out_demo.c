// gcc -Wall -o ./app stage_01_05_in_out_demo.c && ./app

#include <stdio.h>

#define RETURN '\n'
#define TAB '\t'
#define SPACE ' '

int main()
{
    printf("Input: ");

    int character;

    while((character = getchar()) != EOF)
    {
        printf("%c -> %d -> ", character, character);
        
        if (character == RETURN ||
            character == TAB || 
            character == SPACE)
        {
            printf("%s\n", "OUT");
        } 
        else 
        {
            printf("%s\n", "IN");
        }
    }

    return 0;
}
