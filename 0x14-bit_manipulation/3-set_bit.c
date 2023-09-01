#include "main.h"
#include <stdio.h>

/**
 * set_bit - prints the binary representation of a number
 * @n: the number to print
 * @idx: d
 * Return: void
 */
int set_bit(unsigned long int *n, unsigned int idx)
{
	if (idx >= sizeof(unsigned long int) * 8)
		return (-1);
	(*n |= (1UL << idx));
	return (1);
}
