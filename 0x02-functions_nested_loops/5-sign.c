#include "main.h"
/**
* print_sign - does some thing
* @n: used to check if lower
* Return: 1 if @n is a lowercase
* else return 0
*/
int print_sign(int i)
{
	if (i > 0)
		return (1);
	else if (i < 0)
		return (-1);
	else
		return (0);
}
