#include <stdio.h>
#include "main.h"
/**
 * rev_string- function that reverse a string
 * @s:string to be reversed
 *
 * Return:0 Always (success)
*/
void rev_string(char *s)
{
	for (s -= 1 ; s >= 0 ; s--)
