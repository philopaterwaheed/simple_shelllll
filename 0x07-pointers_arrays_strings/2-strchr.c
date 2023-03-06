/**
* _strchr - does some thing
* @dest: detneation
* @src:	sourc
* @n: n
* Return: @dest
*/
char *_strchr(char *s, char c)
{
	for (; *s && *s != c; s++)
		;

	return (*s || *s == c  ? s : NULL);
}
