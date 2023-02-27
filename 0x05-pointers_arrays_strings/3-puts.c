#include "main.h"
/**
* _puts - does some thing
* @s: ptr1
* Return: len
*/
void _puts(char *s)
{
	int i = 0;
	char c = *s;

	while (c != '\0')
	{
		c = *(s + ++i);
		_putchar(c);
	}
	_putchar('\n');
}
