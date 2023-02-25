#include "main.h"

/**
 * largest_number - returns the largest
 * @a: first
 * @b: second 
 * @c: third 
 * Return: largest 
 */
int largest_number(int a, int b, int c)
{
	return (a > b ? (a > c ? a : c) : (b > c ? b : c));
}
