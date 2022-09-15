#include "main.h"

/**
 * print_line - a function that draws a straight line on the terminal
 *
 * @n: numbers of time the character _ should be printed
 *
 * Returns: none;
 *
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
