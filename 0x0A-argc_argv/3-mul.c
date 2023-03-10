#include <stdio.h>
/**
* main - does some thing
* @argc: argv
* @argv: argc
* Return: 0
*/
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Error");
		return (1);
	}
	
	printf("%s\n", argv[1] * argv[2]);
	return(0);
}
