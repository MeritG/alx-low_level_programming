#include "main.h"


/**
 * prints last digit of number
 *
 * @n: takes number input
 *
 * Return: lastdigit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
