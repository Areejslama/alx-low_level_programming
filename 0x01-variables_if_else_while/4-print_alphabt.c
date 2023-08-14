#include <stdio.h>
/**
 * main-this is entry point
 *
 * Description: a program that prints the alphabet
 *
 * Return :0 Always (sucess)
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
