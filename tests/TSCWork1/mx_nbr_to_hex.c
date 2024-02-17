#include <stdio.h>
#include <stdlib.h>

char *mx_nbr_to_hex(unsigned long nbr)
{
	char *hex_digits = "0123456789abcdef";
	unsigned long temp = nbr;
	int len = 0;

	while (temp != 0)
	{
		temp /= 16;
		len++;
	}

	char *hex = malloc(len + 1);
	hex[len] = '\0';

	while (nbr != 0)
	{
		hex[--len] = hex_digits[nbr % 16];
		nbr /= 16;
	}

	return hex;
}

int main()
{
	printf("%s\n", mx_nbr_to_hex(52));
	printf("%s\n", mx_nbr_to_hex(1000));

	return 0;
}