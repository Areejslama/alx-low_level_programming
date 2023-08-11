#include<stdio.h>
/**
 * main-this is entry point
 *
 * Description:program will assign a random number
 *
 * Return:0 Always (success)
 */
int main(void)
{
	int x;
	printf("enter your number\n");
	scanf("%d",&x);	
	if(x>0)
	{
	printf("The number n is positive\n");
	}
	else if(x=0)
	{	
	printf("The number n is zero\n");
	}
	else (x<0)
	{	
	printf("The number n is negative\n");
	}
       return(0);	
}
