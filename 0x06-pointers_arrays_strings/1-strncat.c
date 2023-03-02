/**
* _strncat - does some thing
* @dest: detneation
* @src:	sourc
* Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *r = dest;
	int i = 0;

	while (*dest != 0)
		dest++;
	for (i = 0; i <= n && *src; src++, dest++)
		*dest = *src;
	*dest = 0;
	return (r);
}
