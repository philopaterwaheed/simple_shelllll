#include "main.h"
#include <stdio.h>

/**
 * get_bit - prints the binary representation of a number
 * @n: the number to print
 * @index: d
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return  ((n & (1 << index)) != 0);
}
