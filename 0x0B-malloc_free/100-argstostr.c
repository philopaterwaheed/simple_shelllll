#include <string.h>
#include <stdlib.h>

/**
 * argstostr - does some thing
 * @ac: number
 * @av: reference
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, ci, sz;
	char *str;

	if (!ac)
		return (NULL);

	for (i = 0, sz = 0; i < ac; i++)
		sz += strlen(av[i]);

	str = calloc(1, sz + ac + 1);
	if (!str)
		return (NULL);

	i = 0;
	ci = 0;
	sz = 0;
	while (i < ac)
	{
		char c = av[i][ci++];

		if (!c)
		{
			str[sz++] = '\n';
			ci = 0;
			i++;
			continue;
		}

		str[sz++] = c;
	}
	str[sz] = 0;

	return (str);
}
