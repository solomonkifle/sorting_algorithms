#include "sort.h"
/**
 *bubble_sort - Function that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int temp;#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, reduced_size = size - 1;
	int temp, status;

	while (i < size)
	{
		status = 0;
		j = 0;

		while (j < reduced_size)
		{
			if (array[j] > array[j + 1])
			{
				status = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			j++;
		}
		if (status != 1)
			break;

		reduced_size--;
		i++;
	}
}
	size_t i, k;

	if (!array || !size)
		return;

	i = 0;
	while (i < size)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
