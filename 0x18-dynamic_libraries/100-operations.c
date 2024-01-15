#include <stdio.h>
/**
 * mul- function that multiplies two integers.
 * @a:an integer will be  multiplied
 * @b:an integer will be  multiplied
 *
 * Return: multiplie result
*/
int mul(int a, int b)
{
        int sum;

         sum = a * b;
        return (sum);
}
#include <stdio.h>
/**
 * add- function that adds two integer
 * @a:an integer
 * @b:an integer
 *
 * Return:the result
*/
int add(int a, int b)
{
        int sum = a + b;

        return (sum);
}
/**
 * div- function that divide two integer
 * @a:an integer
 * @b:an integer
 *
 * Return:the result
*/
int div(int a, int b)
{
        int sum;
        sum = a / b;
        return (sum);
}
/**
 * sub- function that subtract two integer
 * @a:an integer
 * @b:an integer
 *
 * Return:the result
*/
int sub(int a, int b)
{
        int sum;
        sum = a - b;
        return (sum);
}
/**
 * mod- function that modelus two integer
 * @a:an integer
 * @b:an integer
 *
 * Return:the result
*/
int mod(int a, int b)
{
	 int sum;
        sum = a % b;
        return (sum);
}
