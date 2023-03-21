/**
 * _memset - set the first @n bytes of @*s to @b
 * @s: the reference to a string
 * @b: the character to set
 * @n: the number of bytes to be replaced by @b
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0;)
		*(s + --n) = b;

	return (s);
}
