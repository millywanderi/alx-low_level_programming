#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index for located value, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid;
	int result;

	if (array == NULL)
		return (-1);

	if (size == 1)
	{
		if (*array == value)
			return (0);
		return (-1);
	}
	printf("Searching in array: ");
	print_array(array, size);

	mid = (size - 1) / 2;

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary(array, mid + 1, value));
		return (mid);
	}
	else if (array[mid] < value)
	{
		result = advanced_binary(&array[mid + 1], size - mid, value);
		if (result == 1)
			return (-1);
		return (mid + 1 + result);
	}
	return (advanced_binary(array, mid + 1, value));
}

/**
 * print_array - prints array
 * @array: pointer to the first element of the array to print
 * @size: Number of elements in array.
 */
void print_array(int *array, size_t size)
{
	size_t m;

	for (m = 0; m < size; m++)
	{
		printf("%d", array[m]);
		if (m != size - 1)
			printf(", ");
	}
	printf("\n");
}
