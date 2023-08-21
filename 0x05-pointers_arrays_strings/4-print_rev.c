#include <stdio.h>
#include "main.h"
/**
 * print_rev- that prints a string in reverse
 * @s:parameter
 *
 * Return:0 Always
*/
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a -= 1 ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
