#include <stdio.h>

void mx_printerr(const char *s)
{
	fprintf(stderr, "%s", s);
}

int main()
{
	mx_printerr("this is an error\n");

	return 0;
}