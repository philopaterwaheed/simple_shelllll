/**
* _strcat - does some thing
* @dest: detneation
* @src:	sourc
* Return: @dest
*/
char *_strcat(char *dest, char *src)
{
	char *r = dest;

	while (*dest != 0)
		dest++;
	for (; *src; src++, dest++)
		*dest = *src;
	*dest = 0;
	return (r);
}
