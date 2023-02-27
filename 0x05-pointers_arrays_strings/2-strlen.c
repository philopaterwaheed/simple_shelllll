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
		if (*(s++) != NULL)
			size++;
		else
			break;
	}
	return (size);	
}
