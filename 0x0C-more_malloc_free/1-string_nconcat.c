#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - a function that concatenates two strings
  * @s1: string one
  * @s2: string two
  * @n: number of bytes of s2 to concatenate to s1
  * Return: a pointer to the concatenated space in memory,
  * otherwise NULL if the function fails
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_concat;
	unsigned int len1 = n;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len2 = 0; s1[len2]; len2++)
		len1++;

	ptr_concat = malloc(sizeof(char) * (len1 + 1));

	if (ptr_concat == NULL)
	{
		return (NULL);
	}
	len1 = 0;

	for (len2 = 0; s1[len2]; len2++)
		ptr_concat[len1++] = s1[len2];

	for (len2 = 0; s2[len2] && len2 < n; len2++)
		ptr_concat[len1++] = s2[len2];

	ptr_concat[len1] = '\0';
	return (ptr_concat);
}
