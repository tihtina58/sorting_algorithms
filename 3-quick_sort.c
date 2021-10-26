#include "sort.h"

/**
 * quick_sort - function that sorts an array of
 * integers in ascending order using the Quick
 * sort algorithm.
 *
 * @array: array of integers to sort.
 * @size: size of array.
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL)
return;
quickSort(array, size, 0, (int) (size - 1));
}

/**
 * quickSort - quick sort funciton.
 *
 * @arr: array to sort.
 * @size: size of array.
 * @low: lo limit to sort.
 * @high: hi limit to sort.
 */

void quickSort(int *arr, size_t size, int low, int high)
{
int pi;
if (low <= high)
{
pi = partition(arr, size, low, high);
quickSort(arr, size, low, pi - 1);
quickSort(arr, size, pi + 1, high);
}
}


/**
 * partition - partition funciton.
 *
 * @arr: array to sort.
 * @size: size of array.
 * @low: lo limit to sort.
 * @high: hi limit to sort.
 *
 * Return: partition.
 */

int partition(int *arr, size_t size, int low, int high)
{
int pivot = arr[high];
int i = (low - 1);
int j;
int aux;
for (j = low; j < high; j++)
{
if (arr[j] < pivot)
{
i++;
aux = arr[i];
arr[i] = arr[j];
arr[j] = aux;
if (arr[i] != arr[j])
print_array(arr, size);
}
}
aux = arr[i + 1];
arr[i + 1] = arr[high];
arr[high] = aux;
if (arr[high] != arr[i + 1])
print_array(arr, size);
return (i + 1);
}
