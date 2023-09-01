#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m;
	unsigned int count = 0;

	while (bits != 0)
	{
		count += bits & 1;
		bits >>= 1;
	}

	return (count);
}
