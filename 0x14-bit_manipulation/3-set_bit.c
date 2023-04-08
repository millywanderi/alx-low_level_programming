#include "main.h"

/**
  * set_bit - a function that sets the value of a bit to 1 at a given index
  * @n: binary number
  * @index: index of binary
  * Return: 1 if successful, otherwise -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;
	int m;

	len = 8 * sizeof(*n) - 1;
	m = 1 << index;

	*n = *n | m;
	return (1);

	if (index > len)
		return (-1);
}
