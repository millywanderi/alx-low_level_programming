#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - a program that multiplies two numbers.
  * @argc: argument count
  * @argv: number of arguments in a program
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int m;
	int num1;
	int num2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (m = 0; m < argc; m++)
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			mul = num1 * num2;
		}
	}
	printf("%d\n", mul);
	return (0);
}
