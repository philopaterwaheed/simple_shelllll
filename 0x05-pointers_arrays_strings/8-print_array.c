#include <stdio.h>
#include "main.h"
/**
* print_array - does some thing
* @a: ptr1
* @n: size
* Return: len
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n-1; i++)
	{
		printf("%d, ", *(a + i));
	}

	printf("%d\n", *(a + n-1 ));
}
