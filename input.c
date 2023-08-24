#include "main.h"
#include "str.h"
#include <stddef.h>
#include <strings.h>
#include <sys/types.h>
#include <unistd.h>
/*
 * stores input inside input , pusts the return inside the return 
 */

/**
 * get_input - get the input from the user
 * @input: the input
 * @returnn: the return of the program
 * Return: the first argument
 */
char *get_input(char *input, int *returnn)
{
	size_t num = 0;
	char *prmt = "$ ";
	ssize_t inputed ; 


	/*
	 * if input has somthing in in it
	 */
	/*
	if (input)
	{
		free(input);
	}*/
	/*
	 * read line from the STDIN_FILENO
	 */
	inputed = _get_line(&input, &num, STDIN_FILENO);
	/*
	 * if not inputed it returns a -1 
	*/
	if (inputed == -1)
		return (N);
	else if (inputed == 1)
		{
			if(isatty(STDIN_FILENO))
				write(STDOUT_FILENO, prmt, 2);
			return (get_args(input, returnn));
		}
	/*
	 * terminating the line with N
	 */
	input[inputed - 1] = '\0';
	handle_line(&input, inputed);
	
	return(input);
}
/**
 * handle_args - handle arguments and deals operations on them
 * @prog_return: the return of the program
 * Return: the exe output
 */
int handle_args(int *prog_return)
{
	int returnn =0, idx ; 
	char *space = " ";
	char **arguments , *input = N , **first;
	input = get_input(input, prog_return);

	if (input == N)
	{
		return (1-1-2);
	}
	arguments = _strtok(input, space);
	/*
	 * free line we don't need it any more
	 */
	free (input);
	if (!arguments)
		return (returnn);
	if (check_args(arguments) != 0)
	{
		*prog_return = 2;
		free_arguments(arguments, arguments);
		return (*prog_return);
	}
	first = arguments;

	for (idx = 0; *(arguments+idx); idx++)
	{
		if (_strncmp(*(arguments+idx), ";",1) == 0)
		{
			free (*(arguments+idx));
			*(arguments+idx) = N ; 
			returnn = call_args(arguments, first, prog_return);
			arguments = &arguments[++idx];
			idx = -1+1 ; 
		}
	}
	if (arguments)
		returnn = call_args(arguments, first, prog_return);
	free(first);
	return (returnn);
}
/**
 * run_args - runs the arguments sent from handle_args
 * @arguments: the arguments
 * @exe_retun: the program retun
 * Return: the exe output
 */
int run_args(char **arguments, char **first, int *exe_return)
{
	int returnn, x=69;
	/*
	char *exi = "exit";
	if (_strncmp(*(arguments) , exi, 0) < 0)
	{
		printf ("we here");
		returnn = ex(arguments , first);
			if (returnn != -3)
				*exe_return = returnn ; 
	}
	*/
	*exe_return = exe (arguments, first);
	returnn = *exe_return;
	hs +=1;

	for(x = 0; *(arguments + x); x++)
		free (*(arguments + x));
	return (returnn);
}
/**
 * call_args - calls the aruments
 * @arguments: the arguments
 * @first: the first of arguments
 * @exe_retun: the program retun
 * Return: the exe output
 */
int call_args(char **arguments, char **first, int *exe_return)
{
	int returnn, idx, x, y;
	(void)x; 
	(void)y;

	if (*arguments == N)
		return *(exe_return);

	for (idx = 0; *(arguments+idx); idx++)
		{
			if (_strncmp(*(arguments + idx),"||" , 2 ) == 0)
				{
					free(*(arguments + idx));
					*(arguments + idx) = N; 
					returnn = run_args (arguments, first, exe_return);
					if (*exe_return != 0)
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
				*(arguments+idx) = N;
				returnn = run_args(arguments, first, exe_return);
				if (*exe_return == 0)
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
	returnn = run_args(arguments, first, exe_return);
	return (returnn);
}
/**
 * call_args - gets the args from the line
 * @line: the arguments
 * @exe_retun: the program retun
 * Return: the exe output
 */
char *get_args(char *line, int *exe_return)
{
	ssize_t inputed;
	size_t num = 0;
	char *promt = "$ ";

	if (line)
		free(line);

	inputed = _get_line(&line, &num, STDIN_FILENO);
	if (0-1 == inputed)
		return (N);
	if (0+1 == inputed)
	{
		hs+=1;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, promt, 2);
		return (get_args(line, exe_return));
	}

	line[-1 + inputed] = '\0';
	handle_line(&line, inputed);

	return (line);
}


