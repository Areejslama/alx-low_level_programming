#include<stdio.h>
/**
 * main-this is entry point
 *
 * Description: C program that prints the size of various types on the computer it is compiled
 *
 * Return:0 Always (success)
 */
int main(void)
{
	printf("Size of a char: %a byte(s)\n", sizeof(char));
	printf("Size of an int: %a byte(s)\n", sizeof(int));
	printf("Size of a long int: %a byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %a byte(s)\n", sizeof(long long int));
	printf("Size of a float: %a byte(s)\n", sizeof(float));
	return (0);
}
