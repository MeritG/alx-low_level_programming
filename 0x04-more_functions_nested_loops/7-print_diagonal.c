#include "main.h"

/**
 * print_diagonal print diagonal line
 *
 * @n: numbers of lines and columns
 *
 * Return: none
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= b; b++)
		{
			if (b != a)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
