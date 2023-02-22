#include "main.h"
/**
* _abs - does some thing
* @n: used to check if lower
* Return: 1 if @n is a lowercase
* else return 0
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
