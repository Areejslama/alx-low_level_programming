#include "main.h"
/**
 * clear_bit- clears bit
 * @n:int
 * @index:index
 * Return:0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index < sizeof(unsigned long int) * 8)
{
*n &= (~(1 << index));
return (1);
}
return (-1);
}
