#include<stdio.h>
#include <time.h>
/**
 * main-this is entry point
 *
 * Description:program will assign a random number
 *
 * Return:0 Always (success)
 */
int main(void)
{
	int n;

        srand(time(0));
	x = rand()  - RAND_MAX / 2;
	printf("%d",n);
	if(n>0)
	{
	
		printf("The number is positive \n");
	}
	else if
	{	
	
		printf("The number is zero \n");
	}
	else(n<0)
	{	
	
		printf("The number is negative \n");
	}
       return(0);	
}
