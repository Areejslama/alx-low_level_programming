#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion- prints a string, followed by a new line
 * @s:a parameter
 *
 * Return:string
*/
void _puts_recursion(char *s)
{
	 *s = 0;

	_putchar(*s);
	_putchar('\n');
}
