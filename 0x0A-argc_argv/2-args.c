#include <stdio.h>
#include "main.h"

/**
  * main - a program that prints all arguments it receives.
  * @argc: argument count
  * @argv: number of arguments in a program
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
