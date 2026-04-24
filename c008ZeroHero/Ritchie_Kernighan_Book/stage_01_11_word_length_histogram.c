#include <stdio.h>

void print_bar(int);

int main()
{
    printf("Input: ");

    int c;
    
    int word_len = 0;
    
    int word_len_count[20] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == ' ')
        {
            if (word_len > 0)
            {
                ++word_len_count[word_len];
            }
            
            word_len = 0;
        } 
        else
        {
           ++word_len;
        }
    }
    
    int counter = 0;

    for (int i = 0; i < 20; ++i)
    {
        counter = word_len_count[i];

        if (counter == 0)
        {
            continue;
        }
       
       printf("%d: ", i);
       print_bar(counter);
       printf("\n");
    }
    
    return 0;
}

void print_bar(int len)
{
    for (int i = 0; i < len; ++i)
    {
        printf("*");
    }
}
