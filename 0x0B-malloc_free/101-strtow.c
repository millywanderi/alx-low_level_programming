#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * strtow - a function that splits a string into words.
  * @str: string to be splitted
  * Return: a pointer to an array of strings (words)
  * otherwise, NULL if str == NULL or str == "", or function fails
  */

char **strtow(char *str)
{
	int temp = 0, size = 0, words = count(str), m, n = 0;
	char **split;

	if (words == 0)
		return (NULL);
	split = (char **) malloc(sizeof(char *) * (words + 1));

	if (split != NULL)
	{
		for (m = 0; m <= len(str) && words; m++)
		{
			if ((str[m] != ' ') && (str[m] != '\0'))
			{
				size++;
			}
			else if (((str[m] == ' ') || (str[m] == '\0')) && m && (str[m - 1] != ' '))
			{
				split[n] = (char *) malloc(sizeof(char) * size + 1);

				if (split[n] != NULL)
				{
					while (temp < size)
					{
						split[n][temp] = str[(m - size) + temp];
						temp++;
					}
					split[n][temp] = '\0';
					size = temp = 0;
					n++;
				}
				else
				{
					while (n -- >= 0)
					{
						free(split[n]);
						free(split);
						return (NULL);
					}
				}
			}
		}
		split[words] = NULL;
		return (split);
	}
	else
	{
		return (NULL);
	}
}
/**
* count  - counts the number of words in str
*@str: string to be used
*
*Return: number of words
*/

int count(char *str)
{
	int p = 0, words = 0;

	while (p <= len(str))
	{
		if ((str[p] != ' ') && (str[p] != '\0'))
		{
			p++;
		}
		else if (((str[p] == ' ') || (str[p] == '\0')) && p && (str[p - 1] != ' '))
		{
			words = words + 1;
			p++;
		}
		else
		{
			p++;
		}
	}
	return (words);
}
/**
* len - returns length of str
*@str: string to be counted
*
* Return: length of the string
*/

int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
		{
			len++;
		}
	}
	return (len);
}
