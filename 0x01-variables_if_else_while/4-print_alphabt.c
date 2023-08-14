#include <stdio.h>
/**
 * main- this is entry point
 *
 * Description: program that prints the alphabet execpt q and e
 *
 * Return : 0 Always (sucess)
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
