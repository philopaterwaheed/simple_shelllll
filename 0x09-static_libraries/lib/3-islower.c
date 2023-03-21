#include "main.h"

/**
 * _islower - check if @c is a lowercase character
 * @c: the character to check
 * Return: 1 if @c is a lowercase character
 * else return 0
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122 ? 1 : 0);
}
