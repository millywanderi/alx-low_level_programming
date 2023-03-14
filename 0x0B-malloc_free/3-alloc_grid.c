#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - a function that returns a pointer to
  * a 2 dimensional array of integers.
  * @width: array width
  * @height: array height
  * Return: NULL on failure or If width or height is 0 or negative.
  */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int m, n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);

	if (ptr == 0)
	{
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		ptr[m] = malloc(sizeof(int) * width);

		if (ptr[m] == NULL)
		{
			for (n = 0; n < m; n++)
			{
				free(ptr[n]);
			}
			free(ptr);
			return (NULL);
		}
		for (n = 0; n < width; n++)
		{
			ptr[m][n] = 0;
		}
	}
	return (ptr);
}
