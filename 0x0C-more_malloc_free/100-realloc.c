#include "main.h"

/**
 * _realloc - reallocates
 *
 * @ptr: pointer
 * @old_size:is the size
 * @new_size: size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *optr = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = optr[i];
	free(ptr);
	return (p);
}
