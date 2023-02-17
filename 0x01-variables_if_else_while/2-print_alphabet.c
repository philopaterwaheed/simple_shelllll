#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 97;
	
	for(; c < 123; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
