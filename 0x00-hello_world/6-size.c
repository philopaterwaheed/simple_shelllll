#include <stdio.h>
/*
 *main - simple function prints the size of various types on the computer it is compiled and run on
 *Return: 0 exit code 
 */
int main(void)
{
	printf("Size of a char: %d byte(s)",sizeof(char));
	printf("Size of a int: %d byte(s)",sizeof(int));
	printf("Size of a long long: %d byte(s)",sizeof(long long));
	printf("Size of a float: %d byte(s)",sizeof(float));
}
