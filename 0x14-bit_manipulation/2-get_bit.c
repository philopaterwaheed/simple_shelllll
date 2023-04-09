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
	if (index >= sizeof(unsigned long int) * 8) {
		return false; // index is out of range
    }
	return  ((n & (1 << index)) != 0);
}
