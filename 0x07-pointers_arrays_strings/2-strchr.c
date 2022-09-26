#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to check
 * @c: the character we are looking for
 *
 * Return: a pointer to the first occurance of the character @c
 * @s. Return NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	else
		return('\0');
}
