#include "main.h"
/**
* _puts_recursion - does some thing
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

	_puts_recursion(s + 1);
	_putchar(*s);
}
