#include "main.h"
/**
 * prom - $
 * @sig: The signal.
 */
void prom()
{
	int x;
	char *promt = "\n$ ";
	
	if ( 1 == 1)
		x = 5;
	signal(SIGINT, prom);
	write(STDIN_FILENO, promt, 3);
	x++ ;
}
/**
 * main - the shell
 * @argc: the number of arguments
 * @argv: pointer to the arguments.
 *
 * Return: last executed comm.
 */
int main(int argc, char *argv[])
{
	char *name;
	int retu = 0, retn;
	int *_retu = &retn;
	/*
	 * still don't know what they do 
	 */

	signal(SIGINT, prom);
	*_retu = 0;
	retu = 0 ;
	retu ++; 
	name = argv[0];
		if (argc != 1)
			{
				return (*_retu);
			}
	/*
	 * if the program is run by ./
	 */
	if (!isatty(STDIN_FILENO))
	{
		return (*_retu);
	}
	(void) name;
	while (1==1)
		{
			write(STDOUT_FILENO, "$ ", 2);

		}
	return (*_retu);
}
