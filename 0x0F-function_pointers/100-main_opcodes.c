#include <stdlib.h>
#include <stdio.h>
/**
 * print_opcodes - print
 * @a: address
 * @n: number
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%.2hhx", a[x]);
		if (x < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints
 * @argc: number
 * @argv: array
 *
 * Return: always O
 */
int main()
{
	int tot;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	tot = atoi(argv[1]);
	if (tot < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, tot);
	return (0);
}
