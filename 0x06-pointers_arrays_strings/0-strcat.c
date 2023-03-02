#include "main.h"

/**
  * _strcat - a function that concatenates two strings.
  * @dest: string to be appended upon
  * @src: string to be appended to dest
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int m = 0;
	int dest_length = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[dest_length] != '\0')
	{
		dest[m] = src[dest_length];
		m++;
		dest_length++;
	}
	dest[m] = '\0';

	return (dest);
}
