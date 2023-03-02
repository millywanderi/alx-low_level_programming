#include "main.h"
#include <stdio.h>

/**
  * cap_string - function that capitalizes all words of a string.
  * @str:- single user inpur.
  * Return:- Always 0 (success)
  */

char *cap_string(char *str)
{
	int m = 0;

	while (str[m])
	{
		while (!(str[m] >= 'a' && str[m] <= 'z'))
		{
			m++;
		}
		if (str[m - 1] == ' ' || str[m - 1] == '\t' || str[m - 1] == '\n' ||
			str[m - 1] == ',' || str[m - 1] == ';' || str[m - 1] == '.' ||
			str[m - 1] == '!' || str[m - 1] == '?' || str[m - 1] == '"' ||
			str[m - 1] == '(' || str[m - 1] == ')' || str[m - 1] == '{' ||
			str[m - 1] == '}' || m == 0)
		{
			str[m] -= 32;
		}
		m++;

	}
	return (str);

}
