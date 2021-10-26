#include "sort.h"

/**
 * selection_sort - function that sorts an array of
 * integers in ascending order using the Selection
 * sort algorithm.
 *
 * @array: array of integers to sort.
 * @size: size of array to sort.
 */

void selection_sort(int *array, size_t size)
{
size_t index_sorting = 0, min_at_idx = 0, idx = 0;
int aux = 0;
while (index_sorting < size)
{
min_at_idx = index_sorting;
for (idx = index_sorting; idx < size; idx++)
{
if (array[idx] < array[min_at_idx])
min_at_idx = idx;
}
if (index_sorting != min_at_idx)
{
aux = array[index_sorting];
array[index_sorting] = array[min_at_idx];
array[min_at_idx] = aux;
print_array(array, size);
}
index_sorting++;
}
}
