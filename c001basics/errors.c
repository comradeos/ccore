#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("I'm a Bot. What's your name?\n");
    char name[20];
    scanf("%s", name);

    printf("Hello, %s! How old are you?\n", name);
    int age;
    scanf("%d", &age); // Only char * type doesn't require & (взятие адреса)

    printf("You are looking younger! "
           "I thought you are %d!\n",
           age - 3);
    return 0;
}

/*
Compile with display ALL ERROR WARNINGS:
gcc -o errors errors.c -Wall && errors
*/

/*
Put preprocessing results in file 'errors_prep.c':
gcc -E errors.c > errors_prep.c
*/

/*
Translation (making file 'errors_prep.o') part of compilation of the file 'errors_prep.c':
gcc -c errors_prep.c
*/

/*
Linking file 'errors_prep.o' to file 'errors.exe':
gcc -o errors.exe errors_prep.o
*/