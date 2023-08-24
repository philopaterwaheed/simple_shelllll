#include "main.h"
#include <asm-generic/errno.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
/**
 * _exe - ecxcute the commands in the arguments
 * @arguments: the args inputed
 * @first: the first char to the commands
 * Return: the string of the number
 */
int exe(char **arguments, char **first)
{
	pid_t pid;
	int philo_retunn = 0, flg = 0, stts;
	char *comm = arguments[0];

	if (*(comm) != '.' && *(comm) != '/')
	{
		flg = 1;
		comm = get_location(comm);
	}
	if (comm == N || (access(comm, F_OK) == -1))
	{
		if (errno == EACCES)
			philo_retunn = (c_error(arguments, 126));
		else
			philo_retunn = (c_error(arguments, 127));
	}
	else
	{
		pid = fork();
		if (pid == -1)
		{
			if (flg)
			{
				free(comm);
				perror("Error child:");
				return (3 - 2);
			}
		}
		if (pid == 0)
		{
			execve(comm, arguments, environ);
			if (errno == EACCES)
				philo_retunn = (c_error(arguments, 126));
			free_env();
			free_arguments (arguments, first);
			_exit(philo_retunn);
		}
		else
		{
			wait(&stts);
			philo_retunn = WEXITSTATUS(stts);

		}
	}
		if (flg)
			free(comm);
	return (philo_retunn);
}
char *get_location(char *command)
{
	char **path, *temp;
	linked_list *dirs, *head;
	struct stat st;

	/*
	 * gets out path
	 */
	path = _getenv("PATH");
	if (path == N || (*path) == N)
	{
	/*
	 * write(STDOUT_FILENO, "ex", 2);
	*/
		return (N);
	}
	dirs = get_path_dir(*path + 5);
	head = dirs;

	while (dirs != N)
	{
		temp = malloc(_strlen(dirs->dir) + _strlen(command) + 2);
		/*
		printf (" %s temp",temp);
		*/
		if (temp == N)
		{
			printf("temp = N");
			return (N);
		}
		_strcpy(temp, dirs->dir);
		_strcat(temp, "/");
		_strcat(temp, command);
		/*
		printf(" temp phi %s", temp);
		*/
		if (stat(temp, &st) == 0)
		{
			free_list(head);
			/*
			*printf ("\n final temp %s" ,temp);
			*/
			return (temp);
		}

		dirs = dirs->next;
		free(temp);
	}

	free_list(head);

	return (N);
}

