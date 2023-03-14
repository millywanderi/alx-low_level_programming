#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - a function that creates an array of chars,
  * and initializes it with a specific char.
  * @size: size of memory
  * @c: character to input
  * Return: NULL if size is equal to 0 or if it fail,
  * otherwise a pointer to the array.
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int m;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) *size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		array[m] = c;
	}
	return (array);
}
