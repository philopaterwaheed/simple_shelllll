#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 *
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
		putchar(c);
	for (c = 97; c < 103; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
