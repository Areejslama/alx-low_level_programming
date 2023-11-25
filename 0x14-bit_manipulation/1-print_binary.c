#include <stdio.h>
#include "main.h"
/**
 * print_binary- print number
 * @n:the number
 * Return:0 Always
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int count = 0;
	unsigned int t;

	for (i = 63; i >= 0; i--)
	{
		t = n >> i;
	if (t & 1)
	{
		_putchar('1');
		count++;
	}
	if (t)
	{
		_putchar('0');
	}
	if (!n)
	{
		_putchar('0');
	}
}
