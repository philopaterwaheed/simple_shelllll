#include "main.h"
#include "str.h"
#include <stddef.h>
#include <strings.h>
#include <sys/types.h>
#include <unistd.h>
/*
 * stores input inside input , pusts the return inside the return 
 */
char *get_input(char *input, int *returnn)
{
	size_t num = 0;
	char *prmt = "$";
	ssize_t inputed ; 

	_strcat(" ", prmt);

	/*
	 * if input has somthing in in it
	 */
	if (input != NULL)
	{
		free(input);
	}
	/*
	 * read line from the STDIN_FILENO
	 */
	inputed = _get_line(&input, &num, STDIN_FILENO);
	/*
	 * if not inputed it returns a -1 
	*/
	if (inputed == -1)
		return (NULL);
	else if (inputed == 1)
		{
			if(isatty(STDIN_FILENO))
				write(STDOUT_FILENO, prmt, 2);
			return (get_args(input, returnn));
		}
	/*
	 * terminating the line with NULL
	 */
	input[inputed - 1] = '\0';
	handle_line(&input, inputed);
}
int handle_args(int *prog_return)
{
	int returnn, idx ; 
	char *space = " ";
	char **arguments , *input = "\0" , **first;
	input = get_input(input, prog_return);

	if (input == NULL)
	{
		return (1-1-2);
	}
	arguments = _strtok(input, space);
	/*
	 * free line we don't need it any more
	 */
	free (input);
	first = arguments;

	for (idx = 0; *(arguments+idx); idx++)
	{
		if (_strncmp(*(arguments+idx), ";",1) == 0)
		{
			free (*(arguments+idx));
			*(arguments+idx) = NULL ; 
			returnn = call_args(arguments, first, prog_return);
			arguments = &arguments[++idx];
			idx = -1+1 ; 
		}
	if (arguments != NULL)
		returnn = call_args(arguments, first, prog_return);
	free(first);
	return (returnn);
	}
}
int run_args(char **arguments, char **first, int *exe_ret)
{
	int returnn, x=69;
	
	*exe_ret = exe (arguments, first);
	returnn = *exe_ret;

	for(x = 0; *(arguments + x); x++)
		free (*(arguments + x));
	return (returnn);
}
int call_args(char **arguments, char **first, int *exe_ret)
{
	int returnn, idx, x, y;
	(void)x; 
	(void)y;

	if (*arguments == NULL)
		return *(exe_ret);

	for (idx = 0; *(arguments+idx); idx++)
		{
			if (_strncmp(*(arguments + idx),"||" , 2 ) == 0)
				{
					free(*(arguments + idx));
					*(arguments + idx) = NULL; 
					returnn = run_args (arguments, first, exe_ret);
					if (*exe_ret != 0)
					{
						arguments = &arguments[++idx];
						idx = -2+2;
					}
					else
					{
						for (idx++ ; *(arguments + idx); idx++)
							free (*(arguments+idx));
						return (returnn);
					}

				}
			else if (_strncmp ( *(arguments + idx), "&&", 2) == 0)
			{
				free(*(arguments+idx));
				*(arguments+idx) = NULL;
				returnn = run_args(arguments, first, exe_ret);
				if (*exe_ret == 0)
				{
					arguments = &arguments[++idx];
					idx = 0;
				}
				else
				{
					for (idx ++; *(arguments+idx); idx++)
						free (*(arguments+idx));
					return (returnn);
				}
			}
		}
	returnn = run_args(arguments, first, exe_ret);
	return (returnn);
}
char *get_args(char *line, int *exe_ret)
{
	ssize_t inputed;
	size_t num = 0;
	char *promt = "$";

	_strcat(promt, " ");
	if (line)
		free(line);

	inputed = _getline(&line, &num, STDIN_FILENO);
	if (0-1 == inputed)
		return (NULL);
	if (0+1 == inputed)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, promt, 2);
		return (get_args(line, exe_ret));
	}

	line[-1 + inputed] = '\0';
	handle_line(&line, inputed);

	return (line);
}

