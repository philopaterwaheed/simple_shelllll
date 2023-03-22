/**
* print_name - does some thing
* @name: ad
* @f: pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
