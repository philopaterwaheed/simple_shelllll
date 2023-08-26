#include "main.h"
int (*get_builtinn(char *command))(char **args, char **front)
{
	builtin_ funcs[] = {
		{ "exit", ex },
		{"env" ,_env},
		{ NULL, NULL }
	};
	int i;

	for (i = 0; funcs[i].nme; i++)
	{
		if (_strcmp(funcs[i].nme, command) == 0)
		{
			break;
		}
	}
	return (funcs[i].f);
}