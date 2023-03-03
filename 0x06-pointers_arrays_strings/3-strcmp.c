/**
* _strcmp - does some thing
* @s1: detneation
* @s2:	sourc
* Return: @dest
*/
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2 && *s1 == *s2; s1++, s2++)
	{}

	return (*s1 - *s2);
}
