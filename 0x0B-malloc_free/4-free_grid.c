#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - a function that frees a 2 dimensional
  * grid previously created by your alloc_grid function.
  * @grid: block of memory to be freed
  * @height: array height
  * Return: Always 0 (success)
  */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}


