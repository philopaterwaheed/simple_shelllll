#include "main.h"
#include "str.h"
#include <string.h>
unsigned int is_delim(char c, char *delim)
{
    while(*delim != '\0')
    {
        if(c == *delim)
            return 1;
        delim++;
    }
    return 0;
}
char *my_strtok(char *srcString, char *delim)
{
    static char *backup_string; // start of the next search
    if(!srcString)
    {
        srcString = backup_string;
    }
    if(!srcString)
    {
        // user is bad user
        return NULL;
    }
    // handle beginning of the string containing delims
    while(1)
    {
        if(is_delim(*srcString, delim))
        {
            srcString++;
            continue;
        }
        if(*srcString == '\0')
        {
            // we've reached the end of the string
            return NULL; 
        }
        break;
    }
    char *ret = srcString;
    while(1)
    {
        if(*srcString == '\0')
        {
            /*end of the input string and
            next exec will return NULL*/
            backup_string = srcString;
            return ret;
        }
        if(is_delim(*srcString, delim))
        {
            *srcString = '\0';
            backup_string = srcString + 1;
            return ret;
        }
        srcString++;
    }
}
char **_strtok(char *line, char *delim)
{
	char **args = NULL;
	int len, i, j, counter =2;

	len = _strlen(line);
	if (len)
		{
			if (line [len -1] == '\n')
				line [len -1] = '\0';
		}	
	
	for (i = 0; line[i]; i++)
	{
		for (j = 0; delim[j]; j++)
		{
			if (line[i] == delim[j])
				counter++;
		}
	}
	args = malloc(si(char*) * counter);
	if (args == NULL)
	{
		/*
		handle errors 
		*/
	}
	i=0;
	_strcpy(args[i] ,my_strtok(line, delim));
	while (args[i++]) {
	_strcpy(args[i] ,my_strtok(line, delim));
	}
return (args);
}
