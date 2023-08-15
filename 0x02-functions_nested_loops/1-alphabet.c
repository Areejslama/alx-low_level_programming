#include <stdio.h>
#include "main.h"

/**
 * main -this is entry point
 *
 * Description: function that prints the alphabet in lowercase
 *
*/
void print_alphabet(void)
{
	 char ch = 'a';
        /*prints a - z*/
        while (ch <= 'z')
        {
        _putchar(ch);
        ch++;
        }
        _putchar ('\n');
}	
