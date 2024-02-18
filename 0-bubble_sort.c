#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers,
 * in ascending order using the Bubble sort algorithm.
 *
 * @array: a given array to sort.
 * @size: the size of the array.
 *
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, done;

	if (!array || !size)
	{
		return;
	}

	do
	{
		done = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				done = 0;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	} while (done == 0);
}
