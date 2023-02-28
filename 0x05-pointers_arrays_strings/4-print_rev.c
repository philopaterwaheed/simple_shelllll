#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the reference to the string
 */
void print_rev(char *s)
{
	int i = 0;
	char c = *s;

	while (c != '\0')
		c = *(s + ++i);

	c = (*s + --i);
	
	while (i >= 0)
		_putchar(*(s + i--));
	_putchar('\n');
}
