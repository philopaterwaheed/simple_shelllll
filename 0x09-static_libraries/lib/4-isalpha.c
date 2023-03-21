#include "main.h"

/**
 * _isalpha - check if @c is a alpha character
 * @c: the character to check
 * Return: 1 if @c is a alpha character
 * else return 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) ? 1 : 0);
}
