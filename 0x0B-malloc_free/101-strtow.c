#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts
 * @str: the reference
 * Return: the number
 */
int count_words(char *str)
{
	int i, inw = 0, count = 0;

	if (!str)
		return (0);
	for (i = 0; str[i]; i++)
		if (str[i] == 32)
			inw = 0;
		else if (!inw)
			inw = 1, count++;
	return (count);
}

/**
 * strtow - split words
 * @str: the reference
 * Return: pointer to list
 */
char **strtow(char *str)
{
	int count, i;
	char **words;

	count = count_words(str);
	if (!count)
		return (NULL);
	str = str + strspn(str, " ");
	words = calloc(count + 1, sizeof(char *));
	for (i = 0; i < count; i++)
	{
		int length = strcspn(str, " ");
		
		words[i] = calloc(length + 1, sizeof(char));
		if (!words[i])
			goto cle;
		strncpy(words[i], str, length);
		str = str + length + strspn(str + length, " ");
	}
	return (words);
cle:
	for (; *words; words++)
		free(*words);
	return (NULL);
}
