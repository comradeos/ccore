#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("sizeof(char)  = %zu bytes\n", sizeof(char));
	printf("sizeof(int)   = %zu bytes\n", sizeof(int));
	printf("sizeof(long)  = %zu bytes\n", sizeof(long));
        printf("sizeof(float) = %zu bytes\n", sizeof(float));
	printf("sizeof(double)= %zu bytes\n", sizeof(double));
        printf("sizeof(void*) = %zu bytes\n", sizeof(void*));
	
	printf("sizeof(short) = %zu\n", sizeof(short));
	printf("sizeof(long long) = %zu\n", sizeof(long long));

	return 0;
}

// gcc -Wall -Wextra -std=c17 -O0 -g 03_types_and_sizes.c -o 03_types_and_sizes
