#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: char
 *
 * Return: str
 *
 */

void rev_string(char *s)
{
	int a = 0;
	int b;
	char c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; b < a; b++)
	{
		c = s[b];
		d = s[a];
		s[b] = d;
		s[a] = c;
		a--;
	}
}
