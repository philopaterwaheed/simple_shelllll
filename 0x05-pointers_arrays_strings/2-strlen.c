#include "main.h"
/**
* _strlen - does some thing
* @u: ptr1
* Return: len
*/
int _strlen(char *s)
{
	int i = 0;
	int size = 0;
	
	while(1)
	{
		if (*(s + ++i) != '\n')
			size++;
		else
			break;
	}
	return (size);	
}
