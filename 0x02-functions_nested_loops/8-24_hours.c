#include "main.h"


/**
 * jack_bauer print every minute of the day 
 */

void jack_bauer(void)
{
	int main, hr;

	for (hr = 0; hr <= 23; ++hr)
	{
		for (min = 0; min <= 59; ++min)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);

			_putchar((min % 10) + 48);

			_putchar('\n');
		}
	}
}
