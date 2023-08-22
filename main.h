#ifndef philo
#define philo
#define si(x) sizeof (x)
 #include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include "str.h"
int min (int x, int y);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t b);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
int handle_args(int *exe_ret);
char *get_input(char *input, int *returnn);
void *_memcpy(void *dest, void *src, unsigned int nbytes);
void *_realloc(void *ptr, unsigned int old, unsigned int new_);
void assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t b);
ssize_t _get_line(char **lineptr, size_t *n, FILE *stream);
unsigned int is_delim(char c, char *delim);
char *my_strtok(char *srcString, char *delim);
char **_strtok(char *line, char *delim);
int call_args(char **args, char **front, int *exe_ret);
int run_args(char **args, char **front, int *exe_ret);
int exe(char **arguments, char **front);
#endif
