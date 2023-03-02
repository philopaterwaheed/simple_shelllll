/**
* _strncat - does some thing
* @dest: detneation
* @src:	sourc
* @n: n
* Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *r = dest;
	int i;

	while (*dest != 0)
		dest++;
	for (i = 0; i < n && *src; src++, dest++, i++)
		*dest = *src;
	*dest = 0;
	return (r);
}
