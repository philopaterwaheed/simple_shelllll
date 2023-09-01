#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - convert binary int
 * @b: binary
 *
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0, boxx;

	if (!b)
		return (n);
	for (i = strlen(b) - 1, boxx = 1; (int)i >= 0; i--, boxx *= 2)
		if (b[i] == '1')
			n += boxx;
		else if (b[i] == '0')
			continue;
		else
			return (0);

	return (n);
}
