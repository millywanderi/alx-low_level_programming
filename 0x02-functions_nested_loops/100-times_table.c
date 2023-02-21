#include "main.h"

/**
  * print_times_table - a function that prints the n times table
  * @n: number input
  * Return: Always 0 (success)
  */

void print_times_table(int n)
{
	int m, t, r;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar('0');
			for (t = 1; t <= n; t++)
			{
				_putchar(',');
				_putchar(' ');

				r = m * t;

				if (r < 99)
				{
					_putchar(' ');
				if (rest <= 9)
					{
						_putchar(' ');
				if (r <= 100)
						{
							_putchar((rest / 100) + '0');
							_putchar(((rest / 10)) % 10 + '0');
						}
				else if (rest <= 99 && rest >= 10)
						{
							_putchar((rest / 10) + '0');
						}
						_putchar((rest % 10) + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
