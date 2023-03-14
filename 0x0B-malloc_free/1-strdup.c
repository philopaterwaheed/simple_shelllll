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

	if (!str)
		return (NULL);
	len = strlen(str);
	o = malloc(len + 1);
	if (!o)
		return (NULL);
	if (o)
	{
		for (i = 0; ; i++)
		{
			o[i] = str[i];
			if (str[i] == '\0')
				break;
		}
	}

	return (o);
}
