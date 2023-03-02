#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int w, x, i;

	w = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (w < size)
	{
		x = size - w < 10 ? size - w : 10;
		printf("%08x: ", w);
		for (i = 0; i < 10; i++)
		{
			if (i < x)
				printf("%02x", *(b + w + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < x; i++)
		{
			int c = *(b + w + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		w += 10;
	}
}
