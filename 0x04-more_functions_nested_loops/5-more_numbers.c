#include <stdio.h>
#include "main.h"
/**
 * more_numbers- prints 10 times the numbers from 0 to 14
 *
 * Return:printed numbers
*/
void more_numbers(void)
{
	int num;
	int r;

	for (r = 0; r < 10; r++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
			_putchar('0' + (num / 10));
			}

			_putchar('0' + (num % 10));

		}
		_putchar('\n');
		num++;
	}
}
