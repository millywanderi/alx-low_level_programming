#include <stdio.h>
#include "main.h"

/**
  * _strchr - a function that locates a character in a string.
  * @s: string
  * @c: input character
  * Return: a pointer to the first occurrence of the character c in the string
  */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
