#include "main.h"
/**
* factorial - does some thing
* @n: num
* Return: 0
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (factorial(n - 1) * n);
}
