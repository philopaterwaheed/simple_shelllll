#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print all arguments with @separator followed by newline
 * @format: number of arguments
 * Description:
 * print @n number arguments with @separator between each one.
 * ends the output with a newline
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		char *s = va_arg(ap, char *);

		printf("%s", s ? s : "(nil)");
		if (i != n && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
