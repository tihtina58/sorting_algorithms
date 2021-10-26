#include "sort.h"

/**
 * shell_sort - function that sorts an array of
 * integers in ascending order using the Shell
 * sort algorithm, using the Knuth sequence.
 *
 * @array: array to sort.
 * @size: size of array.
 */

void shell_sort(int *array, size_t size)
{
size_t gap = 0, idx = 0, i = 0;
int aux = 0, switched = 1;
idx = knuth_idx(size);
gap = gapf(idx);
while (gap > 0)
{
switched = 1;
while (switched == 1)
{
i = 0;
switched = 0;
while (i + gap < size)
{
if (array[i] > array[i + gap])
{
aux = array[i];
array[i] = array[i + gap];
array[i  + gap] = aux;
switched = 1;
}
i++;
}
}
gap = gapf(--idx);
print_array(array, size);
}
}

/**
 * knuth_idx - return the knuth index for
 * start sorting some array with the shell
 * algorithm.
 *
 * @size: size of array to sort.
 *
 * Return: knuth index.
 */

size_t knuth_idx(size_t size)
{
size_t idx = 0, knuth = 0;
while (knuth < size)
{
idx += 1;
knuth = (pow1(3, idx) - 1) / 2;
}
return (idx - 1);
}

/**
 * gapf - gap function calculator for shell
 * sort with knuth sequence.
 *
 * @idx:knuth index.
 *
 * Return: gap.
 */

size_t gapf(size_t idx)
{
size_t val = (pow1(3, idx) - 1) / 2;
return (val);
}

/**
 * pow1 - pow funciton.
 *
 * @base: ...
 * @exp: ...
 *
 * Return: base ^ exp
 */

size_t pow1(size_t base, size_t exp)
{
size_t val = 1;
while (exp > 0)
{
val *= base;
exp--;
}
return (val);
}
