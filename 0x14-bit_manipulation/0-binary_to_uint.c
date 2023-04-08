#include "main.h"

/**
 * _strlen - function that prints the length of a string
 * @s: Input to looop through
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	int len = strlen(b);
	unsigned int n = 0;
	unsigned int j = 1;

	for (m = len - 1; m >= 0; m--)
	{
		if (b[m] == '1')
			n += j;
		j = j * 2;
		if (b[m] != '1' && b[m] != '0')
			return (0);
	}
	if (b == NULL)
		return (0);
	return (n);
}
