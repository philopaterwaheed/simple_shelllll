/**
 * _strcpy - copies the string
 * @dest: the reference to copy
 * @src: the reference to copy from
 * Return: the reference
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char c;

	i = 0;
	while (1)
	{
		c = *(src + i);
		*(dest + i++) = c;
		if (c == '\0')
			break;
	}
	return (dest);
}
