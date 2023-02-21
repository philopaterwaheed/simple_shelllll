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
		_putchar(msg[i]);

	_putchar('\n');
	return (0);
}
