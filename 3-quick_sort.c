#include "sort.h"

/**
 * swap - swap two elements in the array
 *
 * @array: an input array to modify.
 * @left: the index of the left number.
 * @right: the index of the right number.
 *
 * Return: void.
 */
void swap(int *array, size_t left, size_t right)
{
	int temp;

	if (array != NULL)
	{
		temp = array[left];
		array[left] = array[right];
		array[right] = temp;
	}
}

/**
 * quick_sort_recursive - sorting algorithm using a quick sort algorithm
 * and recursive way as well
 *
 * @array: an input array to modify.
 * @first: start position of the elements.
 * @last: last position of the elements
 * @size: the size of the array.
 *
 * Return: void.
 */
void quick_sort_recursive(int *array, size_t first, size_t last, size_t size)
{
	size_t i, j;
	int num;

	if ((array == NULL) || (first >= last))
		return;

	num = array[last];
	j = first;

	for (i = first; i < last; i++)
	{
		if (array[i] <= num)
		{
			if (j != i)
			{
				swap(array, j, i);
				print_array(array, size);
			}
			j++;
		}
	}

	if (j != last)
	{
		swap(array, j, last);
		print_array(array, size);
	}

	if (j - first > 1)
	{
		quick_sort_recursive(array, first, j - 1, size);
	}

	if (last - j > 1)
	{
		quick_sort_recursive(array, j + 1, last, size);
	}
}

/**
 * quick_sort - a function that sorts an array of integers,
 * in ascending order using the Quick sort algorithm.
 *
 * @array: the array to modify.
 * @size: the size of the array.
 *
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		quick_sort_recursive(array, 0, size - 1, size);
	}
}
