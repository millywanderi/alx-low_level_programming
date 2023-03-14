#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * length - function that returns length of string.
  * @s:- single user input.
  * Return:- length.
  */

int length(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{

	}
	return (m);
}


/**
  * _strncat - Function that joins two strings.
  * @dest:- destination for joining.
  * @src:- source of the string.
  * @n:- single user input
  * Return:- Always 0 (success) / new location of string
  */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length;
	int m;

	dest_length = length(dest);

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[dest_length + m] = src[m];

	return (dest);
}

/**
  * str_concat - function that concatesnates strings.
  * @s1:- single user input. 1st string.
  * @s2:- single user input. 2rd string.
  * Return:- Always 0 (success)
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int siz1;
	int siz2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	siz1 = length(s1);
	siz2 = length(s2);

	ptr = malloc(sizeof(char) * ((siz1 + siz2) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	_strncat(ptr, s1, siz1);
	_strncat(ptr, s2, siz2);

	ptr += '\0';

	return (ptr);

}
