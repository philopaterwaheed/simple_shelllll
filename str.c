#include "main.h"
/**
 * _strchr - finds c string.
 * @s: str
 * @c: c
 * Return: c
 *         if c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index]; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return (NULL);
}
/**
 * _strcmp - comp 2 strings
 * @s1: s1
 * @s2: s1
 *
 * Return 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2 && *s1 == *s2; s1++, s2++)
	{}

	return (*s1 - *s2);
}

/**
 * _strlen - length of a string.str
 * @s: the string.
 *
 * Return: length the string.
 */
int _strlen(const char *s)
{
	int a = 0;

	if (s == NULL)
		return (0);
	for (; *s++;)
		a++;
	return (a);
}
/**
 * _strncmp - compare two strings.
 * @s1: string.
 * @s2: string.
 * @n: n bytes
 * used in env
 * Return: Less than 0 if s1 is shorter than s2.
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	do {
		if (*s1 != *s2++)
			return (*(unsigned char *)s1 - *(unsigned char *) --s2);
		if (*s1++ == 0)
			break;
	} while (--n != 0);
	if (i == n)
		return (0);
	else
		return (-15);
}
