#include "sort.h"

/**
 * bubble_sort - Implements Bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
size_t i = 0, j = 0;
int is_sorted;
int temp = 0;
if (size >= 2)
for (i = 0; i < size - 1; i++)
{
is_sorted = 0;
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
is_sorted += 1;
}
}
if (is_sorted == 0)
break;
}
}
