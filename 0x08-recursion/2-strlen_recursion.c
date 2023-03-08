#include "main.h"
/**
* _strlen_recursion - does some thing
* @s: str
* Return: 0
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_print_rev_recursion(s + 1) + 1);
}
