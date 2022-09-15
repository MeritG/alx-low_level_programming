#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 *
 * Return: print to stdout the alphabet, in lowercase
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		-putchar(i + '0');
	_putchar('\n');
}
