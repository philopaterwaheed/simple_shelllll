#include "main.h"
/**
 * puts_half - reverse string
 * @s: the reference to the string
 */
void puts_half(char *str)
{
	int len = 0, i, mid;
	char c = *str;

	while (c != '\0')
		c = *(str + ++len);

	mid = len / 2 + (len % 2 == 0 ? 0 : 1);

	for (i = mid; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
