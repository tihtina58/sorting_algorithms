#include "sort.h"

/**
 * bubble_sort - function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 *
 * @array: array of integers.
 * @size: size of array.
 */

void bubble_sort(int *array, size_t size)
{
int aux_int = 0, ordered = 0;
size_t i = 0;
if (array == NULL)
return;
while (ordered == 0)
{
i = 0, ordered = 1;
while (i < size - 1)
{
if (array[i] > array[i + 1])
{
aux_int = array[i];
array[i] = array[i + 1];
array[i + 1] = aux_int;
ordered = 0;
print_array((const int *)array, size);
}
i++;
}
}
}
