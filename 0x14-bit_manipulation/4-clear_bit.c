#include "main.h"
#include <stdio.h>

/**
 * clear_bit - prints the binary representation of a number
 * @n: the number to print
 * @index: d
 * Return: void
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	((*n &= ~(1UL << index)) != 0);
	return (1);
}
