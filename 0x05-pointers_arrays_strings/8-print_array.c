#include <stdio.h>
#include "main.h"

/**
 * print_array - print element of array
 *
 * @a: a pointer to an int
 *
 * @n: int
 *
 * Return: array
 *
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b != n - 1)
		{
			printf("%d, ", a[b]);
		}
		else
		{
			printf("%d", a[b]);
		}
	}
	printf("\n");
}
