#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 *
 * Return: index where the value is located, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left, right = 1;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		right *= 2;
	}
	if (array[right] == value)
		return (right);

	left = right / 2; /* establish left bound */

	if (right >= size) /* if right is out of bound */
		right = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (recursive_helper(array, left, right, value));
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
