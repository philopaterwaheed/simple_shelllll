#include <stdio.h>

/**
 * main - does something
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		printf("%c", i < 100 ? ' ' : '\n');
	}

	return (0);
}
