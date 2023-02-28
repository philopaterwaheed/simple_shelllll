#include "main.h"
/**
* puts2 - does some thing
* @s: ptr1
* Return: len
*/
void puts2(char *s)
{
	int i = 0;
	char c = *s;

	while (1)
	{
		c = *(s + i++);
		if (c == '\0')
			break;
		if (i % 2 == 0)
			_putchar(c);
	}
	_putchar('\n');
}
