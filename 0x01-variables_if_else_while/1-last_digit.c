#include<stdio.h>
#include<stdilb.h>
#include<time.h>
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

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (Last digit of n > 5)
		{
			printf("Last digit of 98 is 8 and is greater than 5\n");
		}
		else if (Last digit of n < 6 && n > 0)
		{
			printf ("Last digit of -98 is -8 and is less than 6 and not 0 \n");
		}
		else (last digit of n is 0)
		{	
			printf ("is zero \n");
		}
		return (0);
}		
