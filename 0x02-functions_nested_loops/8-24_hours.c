#include <stdio.h>
#include "main.h"
/**
 * jack_bauer- prints every minutes of the day 
 *
 * Return:minutes
*/

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0 ; hr <= 23 ; hr++)
	{
		for (min = 0 ; min <= 59 ; min++)
		{
		_puthchar(hr / 10 + 48);
		_putchar(hr % 10 + 48);
		_putchar(':');
		_putchar(min / 10 + 48);
		_putchar(min % 10 + 48);
		_putchar('\n');
		}
	}
}
