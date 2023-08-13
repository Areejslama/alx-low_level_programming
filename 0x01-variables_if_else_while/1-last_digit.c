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
		int n1,n2,n3;
		char last_digit;	

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		last_digit = n % 10;
		 printf("enter a last digit of number:");
		 scanf("%d","%c",&n1,n2,n3);

		 if (digit>5)
			 printf("the last digit of n1 equal %c and is greater than 5\n",last_digit);
		 else if (digit==0)
			 printf("the last digit of n2 equal %c and is zero\n",last_digit);
		 else if (digit<6,!=0)
			 printf("the last digit of n3 equal %c and is less than 6 and not 0\n",last_digit);
		 return (0);

	  
}		
