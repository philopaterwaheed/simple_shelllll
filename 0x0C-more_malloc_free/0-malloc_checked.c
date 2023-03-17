#include "main.h"
/**
* malloc_checked - does some thing
* @b: b
* Return: 0
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
