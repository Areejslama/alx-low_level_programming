#include <stdio.h>
#include "main.h"
/** main - this is entry point
 *
 * Description: a function that prints every minute of the day
 *
 * Return:0 Always (success)
*/
void jack_bauer(void)
{
	int hr; = 0
	int min;= 0

	if (hr < 24)
	{	
	_putchar(hr / 10 + '0');
	_putchar(hr % 10 + '0');
	hr++;
	_putchar(':');
	}
	else if (min <60)
	{
	_putchar(min / 10 + '0');
	_putchar(min % 10 + '0');
	min++;
	_putchar('\n');

