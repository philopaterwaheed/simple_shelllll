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
