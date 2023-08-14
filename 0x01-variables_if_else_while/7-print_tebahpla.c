#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description:program that prints the lowercase alphabet 
 *
 * Return:0 Always (success)
*/
int main(void)
{
	char ch = 'a';
	while (ch >= 'z')
	{
	putchar(ch);
	ch--;
	}
	putchar('\n');
	return(0);
}	
