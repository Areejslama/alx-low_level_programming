#include<stdio.h>
/**
 * main-this is entry point
 *
 * Description:program that prints the alphabet
 *
 * Return:0 Always (success)
*/
int main(void)
{
	char ch = 'A';
	 /*prints A - Z*/
	while (ch <= 'Z')
	{	
	putchar(ch);
	ch++
	}	
	putchar('\n');
	return (0);
	
}	
