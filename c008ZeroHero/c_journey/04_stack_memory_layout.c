#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;
	printf("address of a: %p\n", (void*)&a);
	printf("address of b: %p\n", (void*)&b);
	printf("address of c: %p\n", (void*)&c);
	return 0;
}

// gcc -Wall -Wextra -std=c17 -O0 -g 04_stack_memory_layout.c -o 04_stack_memory_layout
