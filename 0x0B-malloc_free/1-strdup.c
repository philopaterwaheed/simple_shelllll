#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* _strdup - does some thing
* @str: size
* Return: 0
*/
char *_strdup(char *str)
{
	char *o;
	int i;
	int len;

	len = strlen(str);
	o = malloc(len * sizeof(char));
	if (o)
	{
		for (i = 0;;i++)
		{
			*(o + i) = *(str + i);
			if (! *str)
				break;
		}
	}
	return (o);
}
