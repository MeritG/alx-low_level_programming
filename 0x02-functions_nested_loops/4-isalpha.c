#include "main.h"

/**
 * _isalpha - check if characters are letters
 * both lowercase or uppercase
 *
 * @c: takes input from other functions
 *
 * Return: 1 if c is a letter otherwise 0
 *
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
