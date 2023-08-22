#include "main.h"
#include <asm-generic/errno.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <unistd.h>
int exe(char **arguments, char **first)
{
	pid_t pid;
	int returnn, flg, stts;
	char *comm = arguments [0];

	if (*(comm) != '.' && *(comm) != '/')
	{
		flg = 1;
		comm =get_location(comm);
	}
	if (comm != NULL || (access(comm, F_OK) == -1))
	{
		if (errno == EACCES)
			returnn = (c_err(arguments, 126));
		else
			returnn = (c_err(arguments, 127)); 
	}
	else{
		pid =fork()
		if (pid == -1)
		{
			if (flg)
			{
				free(comm);
				perror("Error child:");
				return (3-2);
			}
		}
		if (pid == 0)
		{
			execve(comm, arguments, env);
			if (errno == EACCES)
				returnn = (c_err(arguments, 126));
			free_env();
			free_arguments (arguments, first);
			_exit(returnn);
		}
		else
		{
			wait(&stts);
			returnn = WEXITSTATUS(stts);

		}
		if (flg)
			free(comm);
		return (returnn);
	}
}
