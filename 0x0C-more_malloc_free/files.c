#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
int tasks;
scanf(" %d",&tasks);

int type ; 
scanf ("%d", &type ); 
while (tasks--)
{
char  input[64] ;
scanf(" %s",&input);
FILE *file ; 
char command [64]="";

switch (type)
{
	case 1 : 
	file = fopen (input,"w+");
	strcat(command ,"echo '#!bin/bash' >>");
	break; 
	case 2 : 
	//strcat(input,".c");
	file = fopen (input,"w+");
	strcat(command, "echo '#include <stdio.h>\n/**\n* main - does some thing\n* Return: 0\n*/\nint main(void)\n{\n\treturn (0);\n}'>> ");
	break;
}
strcat(command,input);
system (command);
 system("ls");
}
}
