#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 *
 * @argc: numero de argumentos
 * @argv: parametros
 *
 * Return: result of the operation selected
 */
int main(int argc, char *argv[])
{
	int result;
	int (*calculator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	calculator = get_op_func(argv[2]);

	if (calculator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = calculator(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
