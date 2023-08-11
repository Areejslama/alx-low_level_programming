#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
 * main-this is entry point
 *
 * Description: program will assign a random numbe
 *
 * Return:0 Always (success)
 */ 
int main(void)
{
	int n;

        srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("The number is positive \n");
	}
	else if (n < 0)
	{	
		printf("The number is negative \n");
	}
	else
	{	
		printf("The number is Zero \n");
	}
       return (0);	
}
