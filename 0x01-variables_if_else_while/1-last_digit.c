#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main-this is entry point
 *
 * Description: program will assign a random number 
 *
 * Return:0 Always (success)
*/
int main (void)
{	
		int n, A;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		A = n % 10;
		 printf("Enter A number: ")
		 scanf("%d",&n)
		printf("the last digit of a number %d is %d,n,A\n");	 
		return (0);
}		
