#include <stdio.h>
#include "calc.h"
/**
 * main- thi is entry point
 * @argc:argument count
 * @argv:vector
 *
 * Return:0 Always
*/
int main(int argc, char *argv[])
{
	int (*fun)(int, int);
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		return ("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = (argv[2]);
	num2 = atoi(argv[3]);
	func = get_op_func(op);

	if (func == NULL)
	{
		return ("Error\n");
			exit(99);
	}
	if (num2 == 0 && op[0] == '/' || op[0] == '%')
	{
		return ("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}

