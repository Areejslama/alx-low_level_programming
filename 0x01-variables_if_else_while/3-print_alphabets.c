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
	char ch = 'a';
	/*print a - z*/
	while (ch <= 'z')
	{	
	putchar(ch);
	ch++;
	}	
	 /*prints A - Z*/
	putchar('\n');
	return (0);
	
}	
