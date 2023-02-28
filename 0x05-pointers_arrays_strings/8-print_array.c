#include <stdio.h>

/**
 * print_array - print @n elements of @a
 * @a: reference to an array of integers
 * @n: the number of elemenets to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
