#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * argstostr - a function that concatenates all the arguments of your program.
  * @ac: argument count
  * @av: number of arguments
  * Return: a pointer to a new string, or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	char *new_str = NULL;

	int a = 0, b, c = ac, temp = 0, sum = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sum = sum + (len(ac[av]) + 1);
	new_str = (char *) malloc(sum + 1);

	if (new_str != NULL)
	{
		while (a < c)
		{
			for (b = 0; av[a][b] != '\0'; b++)
				new_str[b + temp] = av[a][b];
			new_str[temp + b] = '\n';
			temp = temp + (b + 1);
			a++;
		}
		new_str[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_str);
}
/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
