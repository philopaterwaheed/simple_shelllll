#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* str_concat - does some thing
* @s1: size
* @s2: size
* Return: 0
*/
char *str_concat(char *s1, char *s2)
{
	char *o;
	int len1;
	int len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	o = malloc(len1 + len2 + 1);
	if (!o)
		return (NULL);
	strcpy(o, s1);
	strcpy(o + len1, s1);
	o[len1 + len2] = '\0';
	return (o);
}
