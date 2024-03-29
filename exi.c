#include "main.h"
/**
 * ex - the exit function
 * @arguments: the arguments inputed
 * @first: the first char to the commands
 * Return: the string of the number
 */
int _exit_(char **arguments, char **first)
{
	int i, len_of_int = 10;
	unsigned int num = 0, max = 1 << (si(int) * 8 - 1);

	if (arguments[0])
	{
		if (arguments[0][0] == '+')
		{
			i = 1;
			len_of_int++;
		}
		for (; arguments[0][i]; i++)
		{
			if (i <= len_of_int && arguments[0][i] >= '0' && arguments[0][i] <= '9')
				num = (num * 10) + (arguments[0][i] - '0');
			else
				return (c_error(--arguments, 2));
		}
	}
	else
	{
		return (-3);
	}
	if (num > max - 1)
		return (c_error(--arguments, 2));
	arguments -= 1;
	free_arguments(arguments, first);
	free_env();
	exit(num);
}
int _env(char **arguments, char **first)
{
	char **env = environ;

	(void) arguments;
	(void) first; 
	for (; *env; env++)
		printf("%s\n", *env);
	return (0);
}
