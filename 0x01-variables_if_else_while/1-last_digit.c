#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last digit of the number stored in the variable
 * Return: 0
 */

int main(void) 
{
	int n;
	int l = n % 10;
	
	printf("Last digit of %d is %d " , n , l);
	if (l > 5)
		printf("and is greater than 5\n");
	else if (l < 6)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}
