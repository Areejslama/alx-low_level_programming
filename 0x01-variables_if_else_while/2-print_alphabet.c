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
	char alphabet = "a";
	for ( alphabet = "a"; alphabet <= "z" ; alphabet++)
	{		
		putchar(alphabet);
	}
	putchar("\n");
	return (0);
}	
