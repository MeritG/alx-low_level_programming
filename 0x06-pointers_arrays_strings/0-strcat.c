#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: output
 * @src: input
 *
 * Return: the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
		for (i = 0; dest[i] != '\0'; i++)
		{
			dest [i + j] = src[i];
		}
	dest[i + j] = '\0';
	return (dest);
}
