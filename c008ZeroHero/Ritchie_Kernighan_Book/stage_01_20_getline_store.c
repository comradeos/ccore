#include <stdio.h>

int get_line(char s[], int lim);

int main()
{
    char line[1000] = {0};

    int len = get_line(line, 1000);
    
    printf("%d \n", len);
    printf("%s \n", line);
    

    return 0;
}

int get_line(char s[], int lim)
{
    int c = 0;
    int i = 0;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

