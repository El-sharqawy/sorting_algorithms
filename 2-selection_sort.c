#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers,
 * in ascending order using the Selection sort algorithm.
 *
 * @array: an input array to be sorted.
 * @size: the size of the array
 *
 * Return: void.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				idx = j;
		}
		if (idx != i)
		{
			temp = array[i];
			array[i] = array[idx];
			array[idx] = temp;
			print_array(array, size);
		}
	}
}
