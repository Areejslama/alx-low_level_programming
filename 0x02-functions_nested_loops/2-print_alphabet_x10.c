#include <stdio.h>
#include "main.h"
/**
 * main -function that prints 10 times the alphabet
 *
 * Return:0 Always(success)
*/
int main(void)
{
	char ch = 'a';
	/*prints a - z*/
	while (ch <= 'z')
	{
	_putchar(ch <= 10);
	ch++;
	}
	_putchar('\n');
}	
