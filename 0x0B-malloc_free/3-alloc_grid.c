#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* alloc_grid - does some thing
* @width: size
* @height: size
* Return: 0
*/
int **alloc_grid(int width, int height)
{
	int **o;
	int len;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * height;	
	o = malloc(len);
	if (!o)
		return (NULL);
	if (o)
	{
		for (i = 0; i < height ; i++)
		{
			o[i] = calloc(0, sizeof(int *) * width);
		}
	}

	return (o);
}
