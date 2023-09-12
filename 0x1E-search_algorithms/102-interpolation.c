#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: Index of the match value, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recursive_helper(array, 0, size - 1, value));
}

/**
 * recursive_helper - recursive implement
 * @array: search array
 * @left: subarray left bound
 * @right: subarray right bound
 * @value: search value
 *
 * Return: index of found value, otherwise -1
 */
int recursive_helper(int *array, size_t left, size_t right, int value)
{
	size_t pos = left + (((double)(right - left) /
(array[right] - array[left])) * (value - array[left]));

	if (pos > right)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	if (left > right)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
		return (recursive_helper(array, pos - 1, right, value));
	return (recursive_helper(array, pos + 1, right, value));
}
