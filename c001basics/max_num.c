#include <stdio.h>

int main (int argc, char *argv[])
{
	int number = 3645237;
    int max_number = 0;
    
	while (number)
	{
		int digit = number%10;
        max_number = digit > max_number ? digit: max_number;
		number /= 10; 
	}

	printf("max number = %d\n", max_number);
	
	return 0;
}

// gcc -o application.exe -Wall max_num.c && .\application.exe