#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main- this is entry point
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
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = (argv[2]);
	num2 = atoi(argv[3]);
	fun = get_op_func(op);

	if (fun == NULL ||  op[1] != '\0')
	{
		printf("Error\n");
			exit(99);
	}
	if ((*op == '/' && num2 == 0) ||
	(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = fun(num1, num2);
	printf("%d\n", result);
	return (0);
}

