#include <stdlib.h>
/**
* malloc_checked - does some thing
* @b: b
* Description:
* allocates memory of size @b and returns address points to the memory
* otherwise exits with status code 98
* Return: 0
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
