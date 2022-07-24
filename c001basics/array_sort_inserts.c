// gcc -o application.exe -Wall array_sort_inserts.c && application.exe
#include <stdio.h>
#include <stdbool.h>




/**
 * @brief Вывод массива
 *
 * @param array массив
 * @param size  размер
 */
void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


/**
 * @brief Сортировка массива по возрастанию
 *
 * @param array массив
 * @param size  размер
 */
void sort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int k = i;
        while (k > 0 && array[k - 1] > array[k])
        {
            int tmp = array[k - 1];
            array[k - 1] = array[k];
            array[k] = tmp;
            k -= 1;
        }
    }
}


int main(int argc, char const *argv[])
{
    int arr[7] = {9, 1, 6, 3, 4, 7, 5};
    int size = 7;

    sort(arr, size);
    print_array(arr, size);
    return 0;
}