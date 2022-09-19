#include "main"

/**
 * print_rev - print a string in reverse
 *
 * @s: char
 *
 * Return: string
 *
 */

void print_rev(char *s)
{
	int a;
	char c;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for (a = a - 1; a >= 0; a--)
	{
		c = s[a];
		_puttchar(c);
	}
	_putchar('\n');
}
