#include "main.h"
/**
* _strlen - does some thing
* @u: ptr1
* Return: len
*/
int _strlen(char *s)
{
	int size = 0;
	
	while(1)
	{
		if (*(s++) != '\n')
			size++;
		else
			break;
	}
	return (size);	
}
