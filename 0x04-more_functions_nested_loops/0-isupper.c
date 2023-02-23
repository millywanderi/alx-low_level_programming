#include "main.h"

/**
  * _isupper - Entry point
  * @c: - character to be checked
  * Return: 1 for uppercase character, otherwise 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
