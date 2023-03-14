#include "main.h"
#include <stdlib.h>
/**
* create_array - does some thing
* Return: 0
*/
char *create_array(unsigned int size, char c)
{
	if (!size)
		return (NULL);

	char *o = malloc(size * sizeof(char));
	memset(o, c, size);
	return (o);
}
