#include <stdio.h>
#include "main.h"

/**
  * _strspn - a function that gets the length of a prefix substring.
  * @s: input
  * @accept: bytes to be cosisted in segment s
  * Return: Always 0 (success)
  */

unsigned int _strspn(char *s, char *accept)
{
	int m, n, p = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] != 32)
		{
			for (n = 0; accept[n] != '\0'; n++)
			{
				if (s[m] == accept[n])
				{
					p++;
				}
			}
		}
		else
		{
			return (p);
		}

		

	}
	return (p);
}
