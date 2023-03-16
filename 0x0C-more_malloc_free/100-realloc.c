#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _realloc - a function that reallocates a memory block using malloc and free
  * @ptr: A pointer to the memory previously allocated.
  * @old_size: size of the allocated space for ptr in bytes
  * @new_size: size for the new memory block in bytes
  * Return: ptr if new_size == old_size, NULL if new_size == 0 and ptr is not
  * NULL, otherwise a pointer to the reallocated memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_cp;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr_cp = malloc(new_size);

		if (ptr_cp == NULL)
			return (NULL);
		return (ptr_cp);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr_cp = malloc(new_size);

	if (ptr_cp ==NULL)
		return (NULL);

	for (m = 0; m < old_size && m < new_size; m++)
	{
		ptr_cp[m] = ((char *) ptr)[m];
	}
	free(ptr);
	return (ptr_cp);
}
