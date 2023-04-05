#include "main.h"
/**
 * _sln_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _sln_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _sln_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - check if palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _sln_recursion(s) - 1));
}
