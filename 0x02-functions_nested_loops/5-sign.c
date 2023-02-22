#include "main.h"
/**
* print_sign - does some thing
* @n: used to check if lower
* Return: 1 if @n is a lowercase
* else return 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
