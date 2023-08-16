#include <stdio.h>
#include "main.h"
/**
 * times_table- prints the 9 time tabels
 *
 * return:time table
*/
void times_table(void)
{
	int n , t, prod;

	for (n = 0 ; n <= 9 ; n++)
	{	
		for (t = 1 ; t <= 9 ; t++)
		{
			prod = n * t
			 if (t == 0)
                        {
                                _putchar('0');
                        } else if (prod <= 9)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(prod + '0');
                        } else
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(prod / 10 + '0');
                                _putchar(prod % 10 + '0');
                        }
                }
                _putchar('\n');
        }
}

