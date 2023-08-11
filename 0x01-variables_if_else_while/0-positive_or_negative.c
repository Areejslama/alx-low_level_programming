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
	printf("The number%d is positive\n");
	}
	else if(x=0)
	{	
	printf("The number%d is zero\n");
	}
	else (x<0)
	{	
	printf("The number%d is negative\n");
	}
       return(0);	
}
