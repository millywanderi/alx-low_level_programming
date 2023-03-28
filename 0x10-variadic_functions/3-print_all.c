#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"

/**
  * print_all - function that prints anything.
  * @format:- type of the args passed
  * Return:- Always 0 (success)
  */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;

	char *spac = ", ";
	char *str;

	va_start(ap, format);

	while (format[i] && format)
		i++;

	while (format[j] && format)
	{
		if (j == (i - 1))
			spac = "";

		switch (format[j])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), spac);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), spac);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), spac);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, spac);
				break;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
