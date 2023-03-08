#include "main.h"
/**
* check - checks to see if number is prime
* @a:int
* @b:int
* Return:int
*/
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}
/**
* _sqrt_recursion - does some thing
* @n: num
* Return: 0
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
