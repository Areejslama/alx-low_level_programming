#include "main.h"
/**
 * set_bit- set the value of a bit
 * @n:integer
 * @index:index
 * Return:0
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
{
return (-1);
}
return ((*n |= 1 << index) ? 1 : -1);
}
