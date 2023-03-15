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
	int len, i;
	int **nums, *ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * height + sizeof(int) * width * height;
	nums = calloc(1, len);
	if (nums)
	{
		ptr = (int *)(nums + height);
		for (i = 0; i < height; i++)
			nums[i] = ptr + width * i;
	}

	return (nums);
}
