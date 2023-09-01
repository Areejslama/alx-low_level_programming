#include <stdio.h>
#include <stdlib.h>

/**
 * main- this is entry point
 * @argc:number of arguments
 * @argv:value of arguments
 *
 * Return:0 Always
*/
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
	printf("%d\n", a * b);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
