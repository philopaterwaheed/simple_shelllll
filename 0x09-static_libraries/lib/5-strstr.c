#include <string.h>

/**
 * _strstr - locate the first accurrence of @needle in @haystack
 * @haystack: the reference to string to be scanned
 * @needle: the substring to locate in @haystack
 * Return: pointer to first accourence of @needle in @haystack
 *         otherwise returns NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len = strlen(needle);

	if (!len)
		return (haystack);

	while (haystack)
	{
		haystack = strchr(haystack, *needle);
		if (haystack)
		{
			if (!strncmp(haystack, needle, len))
				return (haystack);
			haystack++;
		}
	}

	return (NULL);
}
