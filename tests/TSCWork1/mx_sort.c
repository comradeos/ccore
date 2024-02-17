#include <stdbool.h>
#include <stdio.h>

void mx_sort(int *arr, int size, bool(*f)(int, int))
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (f(arr[j], arr[j + 1]))
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int arr[] = { 5, 4, 3, 2, 1 };

	int size = sizeof(arr) / sizeof(arr[0]);

	mx_sort(arr, size, compare);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
