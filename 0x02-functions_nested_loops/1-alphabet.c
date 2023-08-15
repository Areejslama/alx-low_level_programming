#include<stdio.h>
#include "main.h"
/**
 * Description:  print_alphabet - alphabet in lowercase
 *
 * Return:0 Always (success)
*/
void print_alphabet(void)
{
	char ch = 'a';
	/*prints a - z*/
	while (ch <= 'z')
	{
	_putchar(ch);
	ch++;
	}
	_putchar ('\n');
}
