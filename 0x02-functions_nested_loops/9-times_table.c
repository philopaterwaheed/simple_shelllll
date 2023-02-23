#include "main.h"
/**
 * print_int - print int number of 2 digits as ascii text
 * @n: the number to print
 * @ignore_second: set to 1 to ignore the tens field digit
 * Return: void
 */
void print_int(int n, int ignore_second)
{
	int x, y;

	y = (n % 10) + 48;
	x = n > 9 ? (n / 10) + 48 : ' ';

	if (!ignore_second)
		_putchar(x);

	_putchar(y);
}

/**
 * times_table - print the 9 times table starting with 0
 * Return: void
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int v = i * j;

			print_int(v, j == 0);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
