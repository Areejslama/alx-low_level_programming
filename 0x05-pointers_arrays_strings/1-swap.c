#include <stdio.h>
#include "main.h"
/**
 * swap_int-  that swaps the values of two integers
 * @a:an integer
 * @b:an integer
 *
 * Return:swap value
*/
void swap_int(int *a, int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
