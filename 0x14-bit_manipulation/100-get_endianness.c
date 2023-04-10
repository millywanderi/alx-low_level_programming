#include "main.h"

/**
  * get_endianness - A function that checks the endianness.
  * Return: 0 if big endian, 1 if little endian.
  */

int get_endianness(void)
{
	unsigned int m = 1;

	char *n = (char *) &m;

	if (!*n)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
