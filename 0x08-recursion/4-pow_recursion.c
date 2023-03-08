#include "main.h"
/**
* _pow_recursion - does some thing
* @y: num
* @x: num
* Return: 0
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (_pow_recursion(x, y) * x);
}
