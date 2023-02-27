#include "main.h"

/**
  * puts2 - a function that prints every other character of a string,
  * starting with the first character, followed by a new line.
  * @str: string to be printed
  * Return: void
  */

void puts2(char *str)
{
	int m = 0;

	for (; str[m] != '\0'; m++)
	{
		if ((m % 2) == 0)
		{
			_putchar(str[m]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
