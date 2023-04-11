#include "main.h"

/**
  * print_binary - A function that prints the binary representation of a number
  * @n: number to be printed.
  * Return: Binary representation of a number
  */

void print_binary(unsigned long int n)
{
	unsigned long int a;
	unsigned long int b = 0;
	int m;

	m = sizeof(n) * 8 - 1;

	while (m >= 0)
	{
		a = n >> m;
		if (a & 1)
			b = 1;
		if (b == 1)
		{
			(a & 1 ? _putchar('1') : _putchar('0'));
		}
		m--;
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
