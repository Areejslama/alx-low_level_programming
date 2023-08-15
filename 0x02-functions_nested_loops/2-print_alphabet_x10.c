#include <stdio.h>
#include "main.h"
/**
 * Description: print_alphabet_x10 -function that prints 10 times the alphabet
 *
 * Return:0 Always(success)
*/
void print_alphabet_x10(void)
{
	char n = 'a';

	int c = 0;
	/*prints a - z*/
	while (c <= 10)
	{
	for (n = 'a'; c <= 'z'; c++)
	{	
	_putchar(n);
	n++;
	}
	_putchar('\n');
	}
}	
