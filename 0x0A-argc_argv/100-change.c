#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints
 * for an amount
 * @argc: argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int r, c;
	unsigned int i;
	char *p;
	int cen[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	r = strtol(argv[1], &p, 10);
	c = 0;

	if (!*p)
	{
		while (r > 1)
		{
			for (i = 0; i < sizeof(cen[i]); i++)
			{
				if (r >= cen[i])
				{
					c += r / cen[i];
					r = total % cen[i];
				}
			}
		}
		if (r == 1)
			c++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", c);
	return (0);
}
