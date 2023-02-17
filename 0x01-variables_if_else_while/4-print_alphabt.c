#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
	if (alphabt != 'q' && alphabt != 'e')
		putchar(alphabt);
	}
	putchar('\n');
	return (0);
}
