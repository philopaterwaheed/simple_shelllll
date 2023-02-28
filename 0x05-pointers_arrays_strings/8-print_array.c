#include <stdio.h>
#include "main.h"
/**
* print_array - does some thing
* @s: ptr1
* Return: len
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n-1; i++)
	{
		printf("%d, ", *(a + i));
	}

	printf("%d", *(a + n-1 ));
	_putchar('\n');
}
