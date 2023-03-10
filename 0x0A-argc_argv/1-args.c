#include <stdio.h>
#include "main.h"

/**
  * main - a program that prints the number of arguments passed into it.
  * @argc: argument count
  * @argv: number of arguments passed in the program
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
