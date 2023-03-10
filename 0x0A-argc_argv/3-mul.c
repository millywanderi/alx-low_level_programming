#include <stdio.h>
#include "main.h"

/**
  * main - a program that multiplies two numbers.
  * @argc: argument count
  * @argv: number of arguments in a program
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int mul = num1 * num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
