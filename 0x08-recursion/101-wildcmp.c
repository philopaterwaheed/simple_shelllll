#include "main.h"

/**
 * st_ch - check if two strings are identical.
 * @s1: string_1
 * @s2: string_2
 * @i: left index.
 * @j: special
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int st_ch(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (st_ch(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (st_ch(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (st_ch(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: base
 * @s2: base
 *
 * Return: 1
 */
int wildcmp(char *s1, char *s2)
{
	return (st_ch(s1, s2, 0, 0));
}
