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
	/*prints a - z*/
	while (n <= 'z')
	{
	_putchar(n <= 10);
	n++;
	}
	_putchar('\n');
}	
