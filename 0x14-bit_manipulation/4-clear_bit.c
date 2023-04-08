#include "main.h"

/**
  * clear_bit - a function that sets the value of a bit to 0 at a given index.
  * @n: binary number
  * @index: index of binary
  * Return: 1 if successful, otherwise 0
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;
	int m, j;

	len = index > 8 * sizeof(*n);
	m = ~(1 << index);
	*n = *n & m;

	j = len ? -1 : 1;

	return (j);
}
