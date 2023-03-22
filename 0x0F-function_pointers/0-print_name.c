/**
* print_name - does some thing
* @f: pointer
* Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
