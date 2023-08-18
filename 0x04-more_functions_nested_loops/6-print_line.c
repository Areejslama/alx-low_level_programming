#include <stdio.h>
#include "main.h"
/**
 * print_line- function draws a new line
 *@n:an integer
 *
 * Return:line if n 0 or less
*/
void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(line = 1 ; line > n ; line++)

			_putchar('_');
	}
	_putchar('\n');
}
