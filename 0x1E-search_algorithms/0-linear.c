#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index of the found value,
 * or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t m = 0;

	if (!array || size == 0)
	{
		return (-1);
	}

	while (m < size)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] == value)
		{
			return (m);
		}
		m++;
	}
	return (-1);
}
