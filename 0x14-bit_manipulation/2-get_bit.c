#include "main.h"
#include <stdio.h>

/**
 * get_bit - prints the binary representation of a number
 * @n: the number to print
 * @idx: d
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int idx)
{
	if (idx >= sizeof(unsigned long int) * 8)
		return (0);
	return  ((n & (1UL << idx)) != 0);
}
