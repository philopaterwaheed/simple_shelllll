#include "main.h"
/**
 * _strcmp - compine  2 strings with each other
 * @str1: s1
 * @str2: s1
 * Return 0 if s1 = s2
 */
int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	if (*str1 != *str2)
		return (*str1 - *str2);

	return (0);
}

/**
 * _strlen - length of a string.str
 * @s: the string.
 * Return: length the string.
 */
int _strlen(const char *s)
{
	int a = 0;

	if (s == N)
		return (0);
	for (; *s++;)
		a++;
	return (a);
}
/**
 * _strncmp - compare two strings.
 * @string1: string.
 * @string2: string.
 * @n: n bytes
 * used in env
 * Return: Less than 0 if s1 is shorter than s2.
 */
int _strncmp(const char *string1, const char *string2, size_t n)
{
	size_t i = 0;

	do {
		if (*string1 != *string2++)
			return (*(unsigned char *)string1 - *(unsigned char *) --string2);
		if (*string1++ == 0)
			break;
	} while (--n != 0);
	if (i == n)
		return (0);
	else
		return (-15);
}
/**
 * _strcpy - copy a string to anthor.
 * @detination: string.
 * @src: string.
 * used in env
 * Return: the detination.
 */
char *_strcpy(char *detination, const char *src)
{

	int i = 0;

	for (i = 0; src[i]; i++)
	detination[i] = src[i];
	detination[i] = src[i];
	return (detination);
}
