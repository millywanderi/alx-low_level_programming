#include "main.h"

/**
  * print alphabet - Main entry point
  * Description: A function that prints alphaphets
  * in lowercase and new line
  * Return: void
  */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
_putchar('\n');
}
