#include "main.h"

/**
 * print_tringle - prints a tringle
 * @size: size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			c = size - a - 1;
			if (b < c)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
