#include "main.h"
/**
* _memset - does some thing
* @s: ref
* @b: ref
* @n: int
* Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
		*(s + i) = b;
	return (s);
}
