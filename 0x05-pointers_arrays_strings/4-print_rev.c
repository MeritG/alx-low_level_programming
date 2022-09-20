#include "main.h"

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
	int index;

	/*finds the length of the string*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*print char from the last index*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
