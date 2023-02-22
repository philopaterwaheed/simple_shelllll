#include "main.h"
/**
* print_to_98 - does some thing
* @n: used to check if lower
* Return: 0 
*/
void print_to_98(int n)
{
	int d, i;

	d = n < 98 ? 1 : -1;
	i = n;
	while (1)
	{
		_putchar(i+'0');
		if (i != 98)
			printf(", ");
		else
		{
			printf("\n");
			break;
		}

		i += d;
	}
}
