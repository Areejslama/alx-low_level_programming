#include <stdio.h>
#include "main.h"
/**
 * print_binary- print number
 * @n:the number
 * Return:0 Always
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 2, j = 0;

	while (i <= n && j < 62)
	{
		i = i << 1;
		j++;
	}

	if (j != 62)
		i = i >> 1;

	while (i != 0)
	{
		if ((i & n) != 0)
		{
			j++;
			_putchar('1');
		}
		else
		{
			j++;
			_putchar('0');
		}
		i = i >> 1;
	}
}
