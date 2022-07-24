#include <stdio.h>
#include <stdbool.h>
#include <iso646.h> // для использования 'and' 'or' вместо '&&' и '||' соответственно

int main (int argc, char *argv[])
{
	bool any = false;
	bool all = true;

	int number = 12307123;

	while (number)
	{
		int digit = number%10;
		any = any or (digit < 5);
		all = all and (digit < 5);
		number /= 10; 
	}
	printf("any = %d\n"
		   "all = %d\n", any, all);
	
	return 0;
}

// gcc -o application.exe -Wall inductive2.c && .\application.exe