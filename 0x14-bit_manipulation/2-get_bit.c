#include "main.h"

/**
  * get_bit - a function that returns the value of a bit at a given index.
  * @index: index of the binary
  * @n: binary number
  * Return: the value of the bit at index index otherwise -1
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;
	int m;
	int bitz;

	len = 8 * sizeof(n) - 1;
	m = (int)(n >> index) & 1;

	bitz = (index > len) ? -1 : m;

	return (bitz);

}
