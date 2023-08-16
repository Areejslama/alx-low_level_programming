#include <stdio.h>
#include "main.h"

/** main - this is entry point
 *
 * Description: a function that prints every minute of the day
 *
 * Return:every minute of the day of Jack Bauer
*/

void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	if (hr < 24)
	{	
	_putchar(hr / 10 + '0');
	_putchar(hr % 10 + '0');
	hr++;
	_putchar(':');
	}
	else 
	{
	_putchar(min / 10 + '0');
	_putchar(min % 10 + '0');
	min++;
	_putchar('\n');
	}
}
