#include "main.h"

/**
 * print_triangle - print right angle triangle
 * @size: the side size
 * Return: 0
 */
void print_triangle(int size)
{
	int x, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(y > size - x - 2 ? '#' : ' ');
		}
		_putchar('\n');
	}
}
