#include "main.h

/**
 * check if characters are letters
 *
 * @c: takes input from other functions
 *
 * Return: 1 if c is a letter otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c >=90)
		return (1);
	return (0);
}
