#include "main.h"
/**
* _strlen - does some thing
* @s: ptr1
* Return: len
*/
int _strlen(char *s)
{
	int i = 0;
	char c = *s;

	while (c != '\0')
		c = *(s + ++i);

	return (i);
}
