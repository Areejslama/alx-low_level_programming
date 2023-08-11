#include<stdio.h>
/**
 * main-this is entry point
 *
 * Description: program that prints the alphabet
 *
 * Return:0 Always (success)
*/
int main (void)
{
	char ch;
	/*prints a-z*/
	for ( ch = 'a'; ch <= 'z' ; ch++)
	{		
		putchar(ch);
	}
	putchar("\n")
	return (0);
}	
