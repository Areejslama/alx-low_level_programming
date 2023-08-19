#include <stdio.h>
#include "main.h"
/**
 * print_triangle- function that prints a triangle
 * @size:number of square
 *
 * Return:print if size 0 or less
*/
void print_triangle(int size)
{
	int a;
        int b;

        if (size <= 0)
        {
	       	_putchar('\n');
        }
        else
        {
                for (a = 0 ; a < size ; a++)
                {
                        for (b = 0 ; b < size ; b++)
			{	
			       	_putchar('#');
			}
                        _putchar('\n');
                }
        }
}
