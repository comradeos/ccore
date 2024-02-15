#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mx_strdup(const char *str)
{
	char *new_str = malloc(strlen(str) + 1);
	if (new_str)
	{
		strcpy(new_str, str);
	}

	return new_str;
}

int main()
{
	char *original = "Hello!";
	char *copy = mx_strdup(original);

	printf("%s\n", copy);

	free(copy);

	return 0;
}