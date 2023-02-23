#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
  * main - entry point
  *
  * Return:- Always 0 (success)
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
