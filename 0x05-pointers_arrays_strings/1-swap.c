#include "main.h"
/**
* swap_int - does some thing
* @a: ptr1
* @b: ptr2
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
