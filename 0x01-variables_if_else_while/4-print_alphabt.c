#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description:program that prints alphabet in lowercase
 *
 * Return:0 Always (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
