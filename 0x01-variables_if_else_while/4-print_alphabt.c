#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int c = 97;

	for (c = 97; c < 123; c++)
	{
		if (c == 101 || c == 113)
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
