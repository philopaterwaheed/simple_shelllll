#include <stdio.h>
#include <stdlib.h>

/**
* main - does some thing
* @argc: argv
* @argv: argc
* Return: 0
*/
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *end;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &end, 10);
		if (*end)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
