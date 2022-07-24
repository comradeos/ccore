#include <stdio.h>

int main(int argc, char *argv[])
{
    char value[] = "This is a string!";

    goto target;
    printf("VALUE: %s\n",value);
    
    target:
    printf("Skipped :)\n");
    return 0;
}


/*

clear && gcc -o never_goto_example.exe -Wall never_goto_example.c && never_goto_example.exe

*/