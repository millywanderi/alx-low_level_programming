#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * main - a program that adds positive numbers.
  * @argc: argument count
  * @argv: number of arguments in a program
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int m;
	unsigned int sum = 0, n;
	char *c;

	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			c = argv[m];

			for (n = 0; n < strlen(c); n++)
			{
				if (c[n] < 48 || c[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
