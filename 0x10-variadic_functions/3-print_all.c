#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints
 * @format: a string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "", *str;
	va_list list;

	if (format)
	{
		va_start(list, format);
		while (format[i])
		{
			switch (format[i++])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					sep = ", ";
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					sep = ", ";
					break;
				case 'i':
					printf("%s%i", sep, va_arg(list, int));
					sep = ", ";
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					sep = ", ";
					break;
				default:
					break;
			}
		}
		va_end(list);
	}
	putchar('\n');
}
