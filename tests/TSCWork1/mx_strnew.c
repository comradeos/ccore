#include <stdlib.h>

char *mx_strnew(const int size)
{
	if (size < 0)
	{
		return NULL;
	}

	char *str = malloc(size + 1);
	if (str)
	{
		for (int i = 0; i <= size; i++)
		{
			str[i] = '\0';
		}
	}

	return str;
}

int main()
{
	char *str = mx_strnew(10);
	if (str)
	{
		printf("'%s'\n", str);
		free(str);
	}

	str = mx_strnew(-1);
	if (str == NULL)
	{
		printf("NULL\n");
	}

	return 0;
}