#include "main.h"

/**
 * _strlen - print half a string
 *
 * @s: a pointer to a char
 *
 * Return: length of string
 *
 */
int _strlen(char *s)
{
	int a, b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	a = b;
	return (a);
}

/**
 * puts_half - prints half a string
 *
 * @str: a pointer to a string
 *
 * Return: string
 *
 */

void puts_half(char *str)
{
	int b;
	int size = _strlen(str);

	if (size % 2 != 0)
	{
		b = (size / 2) + 1;
	}
	else
	{
		b = size / 2;
	}
	for (b = b; b < size; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
