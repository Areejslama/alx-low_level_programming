#include <stdio.h>
#include "main.h"
/**
 *  puts2- prints every other character of a string
 *  @str:parameter
 *
 *  Return:void
*/
void puts2(char *str)
{
	int m;

	for (m = 0 ; str[m] != '\0' ; m++)
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	_putchar('\n');
}
