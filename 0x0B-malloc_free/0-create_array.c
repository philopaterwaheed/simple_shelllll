#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* create_array - does some thing
* @size: size
* @c: char
* Return: 0
*/
char *create_array(unsigned int size, char c)
{
	char *o;

	if (!size)
		return (NULL);

	o = malloc(size * sizeof(char));
	if (o)
		memset(o, c, size);
	return (o);
}
