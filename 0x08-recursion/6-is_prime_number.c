#include "main.h"
/**
* is_prime_number - does some thing
* @n: num
* Return: 0
*/
int is_prime_number(int n)
{
	static i = n;
	if (i % n == 0)
		return (1);
	return (is_prime_number(n - 1);
}
