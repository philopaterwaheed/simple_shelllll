#include "main.h"
/**
 * rev_string - reverse string
 * @s: the reference to the string
 */
void rev_string(char *s)
{
	int len = 0, i, mid;
	char c = *s;

	while (c != '\0')
		c = *(s + ++len);

	if (len == 0)
		return;

	mid = len / 2;

	for (i = mid; i < len; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
