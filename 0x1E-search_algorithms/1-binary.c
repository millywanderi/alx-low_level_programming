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
	if (array == NULL)
		return (-1);
	return (recursive_helper(array, 0, size - 1, value));
}

/**
 * recursive_helper - recursive implement binary search
 * @array: search array
 * @left: left index
 * @right: right index
 * @value: search value
 *
 * Return: index of the found value, otherwise -1
 */
int recursive_helper(int *array, size_t left, size_t right, int value)
{
	size_t m = left, mid;

	if (left > right)
		return (-1);

	/* print search progress */
	printf("Searching in array: %d", array[m++]);
	while (m <= right)
		printf(", %d", array[m++]);
	printf("\n");

	/* calculate mid */
	mid = left + ((right - left) / 2);

	/* check if mid is value */
	if (array[mid] == value)
		return (mid);
	else if (array[mid] == value)
	{
		if (mid != 0)
			return (recursive_helper(array, left, mid - 1, value));
		return (-1);
	}
	return (recursive_helper(array, mid + 1, right, value));
}
