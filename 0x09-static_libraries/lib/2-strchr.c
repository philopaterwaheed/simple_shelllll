#include <stdio.h>
/**
 * _strchr - locates a character @c in a string @s
 * @s: the reference to string
 * @c: the character to locate in the string
 * Return: Null if not found otherwise the pointer to @c
 */
char *_strchr(char *s, char c)
{
	for (; *s && *s != c; s++)
		;

	return (*s || *s == c  ? s : NULL);
}
