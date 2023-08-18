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
	int n = 0;

	while (n <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
		num++;
	}
}
