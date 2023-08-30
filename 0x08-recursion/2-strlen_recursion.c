#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion- returns the length of a string
 * @s:a string
 *
 * Return:string length
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_strlen_recursion(s - 1);
	}
	return (s);
}
