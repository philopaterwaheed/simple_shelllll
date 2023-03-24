#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - does some thing
* @separator: separator
* @n: chari
*
* Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (n <= 0)
		return (0);

	va_start(list, n);
	for (i = 1, sum = 0; i <= n; i++)
	{
		printf ("%d", va_arg(list, int);
		if (i != n && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
