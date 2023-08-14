#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description:a program that prints the lowercase alpha
 *
 * Return:0 Always (success)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
	putchar(ch);
	ch--;
	}
	putchar('\n');
	return (0);
}
