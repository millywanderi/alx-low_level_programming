#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - main entry point
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	int n;
	int r = n % 10 /* Acquire the last digit of n */

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (r > 5)
	{
		printf("%d and is greater than 5\n", r);
	}
	else if (r == 0)
	{
		printf("%d and is 0\n", r);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", r);
	}

	return (0);
}
