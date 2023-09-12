#include "search_algos.h"

int subrecurse_help(int *array, size_t size, size_t end, size_t idx, int val);
int recurse_helper(int *array, size_t size, size_t step, size_t idx, int val);

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

	if (array == NULL)
		return (-1);
	return (recurse_helper(array, size, sqrt(size), 0, value));
}

/**
 * recurse_helper - recursively implement jump search
 * @array: search array
 * @size: array size
 * @step: jump increment
 * @idx: current index
 * @val: search value
 *
 * Return: index if found, otherwise -1
 */
int recurse_helper(int *array, size_t size, size_t step, size_t idx, int val)
{
	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	/* if value is greater, jump forward */
	if (((idx + step < size) && array[idx + step] < val))
		return (recurse_helper(array, size, step, idx + step, val));

	/* recurse subarray */
	printf("Value found between indexes [%lu] and [%lu]\n", idx, (idx + step));
	return (subrecurse_help(array, size, idx + step, idx, val));
}

/**
 * subrecurse_help - recusive implement
 * @array: search array
 * @size: array size
 * @end: subarray end
 * @idx: current index
 * @val: searxh value
 *
 * Return: index where value is located, otherwise -1
 */
int subrecurse_help(int *array, size_t size, size_t end, size_t idx, int val)
{
	if (idx >= size || idx > end || array[idx] > val)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	if (array[idx] == val)
		return (idx);
	return (subrecurse_help(array, size, end, idx + 1, val));
}
