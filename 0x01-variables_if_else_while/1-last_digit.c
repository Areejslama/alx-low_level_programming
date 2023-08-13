#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-this is entry point
 *
 * Description: program will assign a random number 
 *
 * Return:0 Always (success)
*/
int main (void)
{	
		int n;
		int last_digit;	

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		last_digit = n % 10;
		 printf("enter a last digit of number:");
		 scanf("%d",&n);

		 if (last_digit >5);
			 printf("the last digit of n equal %d and is greater than 5\n",last_digit);
		 else (last_digit==0);
			 p("the last digit of n equal %d and is zero\n",last_digit);
		 else if (last_digit <6 &=!0);
			 printf("the last digit of n equal %d and is less than 6 and not 0\n",last_digit);
		 return (0);

	  
}		
