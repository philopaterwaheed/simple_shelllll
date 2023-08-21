/**
 * _strcat - concatenates strings @dest and @src to @dest
 * @dest: the string to append @src to
 * @src: the string to be appended to @dest
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	/* move dest pointer to the end of the string */
	for (; *dest; dest++)
		{}
	/* copy from src to dest */
	for (; *src; src++, dest++)
		*dest = *src;
	/* set null char at the new end */
	*dest = 0;
	return (p);
}
/**
 * _strncat - concatenates strings @dest and @src to @dest with @n bytes limit
 * @dest: the string to append @src to
 * @src: the string to be appended to @dest
 * @n: number of bytes to be copied from @src to @dest
 * Return: pointer to @dest
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	char *p = dest;

	/* move dest pointer to the end of the string */
	for (; *dest; dest++)

	/* copy from src to dest */
	for (; *src && n > 0; src++, dest++, n--)
		*dest = *src;
	/* set null char at the new end */
	*dest = 0;
	return (p);
}
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}

