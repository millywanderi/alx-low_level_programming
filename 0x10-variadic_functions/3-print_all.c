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
	int m = 0;
	int n = 0;

	char *spac = ", ";
	char *str;

	va_start(ap, format);

	while (format[m] && format)
		m++;

	while (format[n] && format)
	{
		if (n == (m - 1))
			spac = "";

		switch (format[n])
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
					printf("(nil)");
				printf("%s%s", str, spac);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(ap);
}

