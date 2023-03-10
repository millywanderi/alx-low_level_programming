#include <stdio.h>
#include "main.h"

/**
  * main - a function that prints its name
  * @argc: argument count
  * @argv: number of arguments passed in the program
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
