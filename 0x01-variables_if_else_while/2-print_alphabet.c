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
	//declare a variable
	char alphabet = "a";
	for ( alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{	
	// print the value of the variable 	
		putchar(alphabet);
	}
	putchar("\n");
	return (0);
}	
