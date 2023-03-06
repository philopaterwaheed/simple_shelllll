/**
* _memset - does some thing
* @s: ref
* @b: ref
* @n: int
* Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0;)
		*(s + --n) = b;

	return (s);
}
