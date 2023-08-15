#include <stdio.h>
#include "main.h"
/**
 * main -this is entry point
 *
 * Return:0 Always(success)
*/
int main(void)
{
	char n = 'a';
	/*prints a - z*/
	while (n <= 'z')
	{
	_putchar(n <= 10);
	n++;
	}
	_putchar('\n');
	return (0);
}	
