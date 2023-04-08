#include "main.h"

/**
  * flip_bits - a function that returns the number of bits you
  * would need to flip to get from one number to another.
  * @n: binary number
  * @m: number of bits
  * Return: number of bits you would need to flip to
  * get from one number to another
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int len;
	int z;
	int number = 0;

	len = (8 * sizeof(n) - 1);

	for (z = len; z >= 0; z--)
	{
		if (((n ^ m) >> z) & 1)
			number++;
	}
	return (number);
}
