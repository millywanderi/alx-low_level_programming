#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Value index if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t size_block = sqrt(size);
	size_t start = 0;
	size_t end = size_block;
	size_t m;

	if (array == NULL)
		return (-1);

	while (array[end] <= value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += size_block;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (m = start; m < end && m < size; m++)
	{
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return (m);
	}
	return (-1);
}
