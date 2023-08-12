#include<stdio.h>
/**
 * main-this is entry point
 *
 * Description: program that prints the alphabet
 *
 * Return:0 Always (success)
*/
int main ()
{
	char ch ='a';
	/*prints a - z*/
	while (ch <= 'z')
	{	
	putchar(ch);
	ch++;
	}	
	putchar ('\n')
	return (0);
}
