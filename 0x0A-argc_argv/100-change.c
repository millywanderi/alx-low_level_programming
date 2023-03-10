#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints the minimum number of coins
  * to make change for an amount of money.
  * @argc: argument count
  * @argv: number of arguments in a program
  * Return: 1 if the number of arguments passed
  * to your program is not exactly 1, otherwise 0.
  */

int main(int argc, char *argv[])
{
	int coins = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;

		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents = cents - 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
