#include <stdio.h>
/**
 *  * main - prints 0..9 separated by ", " using putchar only
 *   *
 *    * Return: 0
 *     */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i > 48)
			putchar(' ');
		putchar(i);
		if (i < 57)
			putchar(',');
	}
			putchar('\n');
	return (0);
}
