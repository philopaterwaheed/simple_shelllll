#include <stdio.h>
/**
* void _puts_recursion - does some thing
* @s: str
* Return: 0
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s ++);
}
