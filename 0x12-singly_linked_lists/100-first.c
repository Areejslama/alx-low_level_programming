#include <stdio.h>
void myfirst(void) __attribute__ ((constructor));
/**
 * printf- print a string
 *
 * Return:void
*/
void myfirst(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
