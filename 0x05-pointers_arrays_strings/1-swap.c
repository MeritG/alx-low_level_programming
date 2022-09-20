#include "main.h"

/**
 * swap_int - swaps two integer
 *
 * @a: take first int
 *
 * @b: take secong int
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
