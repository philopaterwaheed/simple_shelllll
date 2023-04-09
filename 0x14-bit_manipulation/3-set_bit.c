#include "main.h"
#include <stdio.h>

/**
 * set_bit - prints the binary representation of a number
 * @n: the number to print
 * @index: d
 * Return: void
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (0);
	return  ((*n |= (1UL << index)) != 0);
}
