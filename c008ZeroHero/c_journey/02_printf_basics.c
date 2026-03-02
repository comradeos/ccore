#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("hello\n");
	printf("number: %d\n", 42);
	printf("float: %f\n", 3.14);
	printf("char: %c\n", 'A');

	printf("-------\n");

	 int x = 5;
	 printf("%f\n", x);

	return 0;
}

// gcc -Wall -Wextra -std=c17 -O0 -g 02_printf_basics.c -o 02_printf_basics
