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
		int n,A;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		A = n% 10;
		if (last digit of n > 5)
		{
		i	printf("Last digit of 98 is 8 \n",n,A);
		}
		else if (Last digit of n < 6 && n > 0)
		{
			printf ("Last digit of -98 is -8 and is less than 6 and not 0 \n",n,A);
		}
		else (last digit of n is 0)
		{	
			printf ("Last digit of 980 is zero \n",n,A);
		}
		return (0);
}		
