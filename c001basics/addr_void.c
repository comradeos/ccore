// gcc -o application.exe -Wall addr_void.c && application.exe
#include <stdio.h>
#include <stdlib.h>

void print_abstract(void * p, int type_marker) 
{
    if (type_marker == 1) {
        printf("%c\n", (char *) p);
    } else if (type_marker == 2) {
        printf("%i\n", (int *) p);
    } else if (type_marker == 3) {
        printf("%lf\n", (double *) p);
    } else {
        printf("Unknown type.\n");
        exit(1);
    }
}

int main(int argc, char *argv[])
{
    char c;   
    int i;   
    double d;

    void * p;

    p = &c;
    print_abstract(p, 1);
    p = &i;
    print_abstract(p, 2);
    p = &d;
    print_abstract(p, 3);

    return 0;
}