#include "main.h"
/**
 * array_size - length of an array of char**
 * @array: the string.
 * Return: length the array.
 */
int array_size(char **array)
{
	int size = 0;

	while (array[size] != NULL)
	{
		size++;
	}
	return (size);
}

