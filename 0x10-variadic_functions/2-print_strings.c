#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print all arguments with @separator followed by newline
 * @separator: number of arguments
 * @n: s
 * Description:
 * print @n number arguments with @separator between each one.
 * ends the output with a newline
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 1; i <= n; i++)
	{
		char *s = va_arg(list, char *);

		printf("%s", s ? s : "(nil)");
		if (i != n && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
