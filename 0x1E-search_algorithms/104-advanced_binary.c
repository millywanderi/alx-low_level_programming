#include "search_algos.h"

void print_array(int *array, size_t lo, size_t hi);
int help_binary(int *array, int value, size_t lo, size_t hi);

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index for located value, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (help_binary(array, value, 0, size - 1));

}

/**
 * print_array - prints array
 * @array: pointer to the first element of the array to print
 * @lo: lower bound
 * @hi: high bound
 */
void print_array(int *array, size_t lo, size_t hi)
{
	size_t m;

	printf("Searching in array: ");
	for (m = lo; m <= hi; m++)
	{
		printf("%d", array[m]);
		if (m < hi)
			printf(", ");
	}
	printf("\n");
}

/**
 * help_binary - searches for a value in an array
 * @array: search array
 * @value: search value
 * @lo: low bound
 * @hi: high bound
 *
 * Return: index for the found value, otherwise -1
 */
int help_binary(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	print_array(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);
	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (help_binary(array, value, mid + 1, hi));
	if (array[mid] > value)
		return (help_binary(array, value, lo, mid - 1));
	return (-1);
}
