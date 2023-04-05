#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints
 * @argc: number
 * @argv: aaryay
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int by, i;
	char *aary;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	aary = (char *)main;

	for (i = 0; i < by; i++)
	{
		if (i == by - 1)
		{
			printf("%02hhx\n", aary[i]);
			break;
		}
		printf("%02hhx ", aary[i]);
	}
	return (0);
}
