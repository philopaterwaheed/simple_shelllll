#include "main.h"
/**
* _strlen - does some thing
* @s: ptr1
* Return: len
*/
int _strlen(char *s)
{
	int size = 0;
	
	while(*(s++) != '\0')
	{
			size++;
	}
	return (size);	
}
