#include <stdlib.h>
#include <string.h>

/**
  * _realloc - reallocates
  * @ptr: pointer
  * @old_size: size
  * @new_size: size
  * Return: pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
	}
	if (new_size != old_size && ptr)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (newptr);
		memcpy(newptr, ptr, old_size > new_size ? new_size : old_size);
		free(ptr);
	}

	return (newptr);
}
