#include "main.h"
/**
 * free_arguments - frees arguments
 * @arguments: the arguments inputed
 * @first: the first char to the commands
 * Return: the first argument
 */
void free_arguments(char **arguments, char **first)
{
  int i;
  for (i = 0; /*arguments[i] || arguments[i + 1]*/ i <= array_size(arguments);
	 i++)
	free(arguments[i]);

  free(first);
}
/**
 * free_env - frees env
 * Return: the first env
 */
void free_env(void)
{
  int i;

  for (i = 0; /*environ[i]*/ i <= array_size(environ); i++)
	free(environ[i]);
  free(environ);
}
