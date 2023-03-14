#include "main.h"
#include <stdlib.h>
/**
  * _strdup - a function that returns a pointer to a newly allocated space in
  * memor,y which contains a copy of the string given as a parameter.
  * @str: original string
  * Return: NULL if str is eaqual to NULL or if insufficient memory was
  * available a pointer to the duplicated string if successful
  */

char *_strdup(char *str)
{
	/* dup is the duplicate of the string*/
	char *dup;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	dup = (char *) malloc((length + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	/*duplicate str to dup*/
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	dup[length] = '\0';
	return (dup);
}
