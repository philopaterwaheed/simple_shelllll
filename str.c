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
