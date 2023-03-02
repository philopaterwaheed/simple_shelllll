#include <stdio.h>
#include "main.h"
/**
* main - does some thing
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
	char *r = dest;
	while (*dest != 0)
		dest++;
	for (; *src; src++, dest++)
		*dest = *src;
	dest = 0 ;
	return (r);
}
