#include <stdio.h>
#include "main.h"
/**
 * Description: function that prints 10 times the alphabet
 *
 * Return:0 Always(success)
*/
void print_alphabet_x10(void)
{
	char n = 'a';

	int c = 9;
	/*prints a - z*/
	while (c <= 10)
	{
	if(n <= 'z')
	{	
	_putchar(n);
	}
	n++;
	}
	_putchar('\n');
	c++;
}	
