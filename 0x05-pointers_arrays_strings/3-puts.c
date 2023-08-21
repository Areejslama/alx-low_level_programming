#include <stdio.h>
#include "main.h"
/**
 * _puts-  prints a string
 * @str:parameter
 *
 * Return:0 Always (success)
*/
void _puts(char *str)
{
	int i = 0;
	   while(str[i] != '\0')
    {
        puts( str[i]);
	_putchar('\n');

    }
}
