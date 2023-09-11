#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the found value, otherwise -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, m;
	size_t lo;
	size_t hi = size - 1;

	if (array == NULL)
		return (-1);
	while (lo <= hi)
	{
		mid = (lo + hi) / 2;

		printf("Searching in array: ");
		for (m = lo; m <= hi; m++)
		{
			printf("%d", array[m]);
			if (m < hi)
				printf(", ");
		}
		printf("\n");

		if (array[mid] < value)
			lo = mid + 1;
		hi = mid - 1;

		if (lo != size && array[lo] == value)
			return (lo);
	}
	return (-1);
}
