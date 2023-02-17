#include <stdio.h>

/**
  * main - Entry point
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	int i;
	char alpha;

	i = 0;
	alpha = 'a';
	while
		(i < 10)
	{
		putchar(i + '0');
		i++;
	}

	while
		(alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

