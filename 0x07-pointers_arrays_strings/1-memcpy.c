/**
* _memcpy - does some thing
* @dest: detneation
* @src:	sourc
* @n: n
* Return: @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *r = dest;
	int i;

	for (i = 0; i < n && *src; src++, dest++, i++)
		*dest = *src;
	return (r);
}
