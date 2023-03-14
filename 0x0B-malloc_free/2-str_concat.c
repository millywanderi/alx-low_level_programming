#include "main.h"

/**
  * str_concat - a function that concatenates two strings.
  * @s1: string which s2 is to be concatenated upon
  * @s2: string to be concatenated to s1
  * Return: pointer should point to a newly allocated
  * space in memory which contains the contents of s1,
  * followed by the contents of s2, and null terminated
  * NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	/*m is the concatenated string*/
	char *m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	d = a + b;
	m = malloc((sizeof(char) * d) + 1;
	
	if (m == NULL)
		return (NULL);

	while (c < d)

}
