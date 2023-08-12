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
	char B  = 'A';
	/*prints a -Z*/
	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	/*prints A - Z*/
	while (B <= 'Z')
	{
	putchar(B);
	B++;
	}
	putchar('\n');
	return (0);
}
