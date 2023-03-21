#include <string.h>
/**
 * _strspn - count chars in @s until the first accurrence of a char
 *           not in @accept
 * @s: the reference of the string that will be scanned
 * @accept: the reference of the filter string
 * Return: the length to the first accurrence of char not in @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *a = s;

	for (; *s && strchr(accept, *s); s++)
		;

	return (s - a);
}
