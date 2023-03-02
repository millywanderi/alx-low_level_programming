#include "main.h"

/**
  * leet - a function that encodes a string into 1337
  * @str: single user output
  * Return:- Always 0 (success).
  */

char *leet(char *str)
{
	int m, n;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; str[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (str[m] == s1[n])
			{
				str[m] = s2[n];
			}
		}
	}
	return (str);
}
