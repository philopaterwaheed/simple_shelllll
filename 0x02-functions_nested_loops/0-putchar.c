#include "main.h"
/**
* main - does some thing 
* Return: 0
*/
int main(void)
{
	int i;
	char msg[64] = "_putcahr";

	for (i = 0; i < 8; i++)
		_putschar(msg[i]);

	_putschar('\n');
	return (0);
}
