#include "sort.h"

/**
 * bubble_sort - sort an array of int ascending
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;

    if (size < 2)
    {
        return;
    }
    for (i = 0; i < size - 1; i++)
    {
        j = i + 1;
        if (array[j] < array[i])
        {
            array[temp] = array[i];
            array[i] = array[j];
            array[j] = array[temp];
            print_array(array, size);
        }
    }
}