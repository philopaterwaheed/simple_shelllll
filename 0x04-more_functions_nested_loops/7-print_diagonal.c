#include "main.h"
/**
* print_diagonal - does some thing
* @n: the character to check
* Return: 0
*/
void print_diagonal(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
		return
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
	return;
}
