#include <stdio.h>

/**
 * main - print 0..100, with Fizz, Buzz for multiples of 3, 5
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);

		printf("%c", i < 100 ? ' ' : '\n');
	}

	return (0);
}
