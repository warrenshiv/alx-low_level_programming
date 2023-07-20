#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - function addition
 *
 * @a: Parameter 1
 * @b: Parameter 2
 *
 * Return: Return the result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function subtraction
 *
 * @a: Parameter 1
 * @b: Parameter 2
 *
 * Return: Return the result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function multiplication
 *
 * @a: Parameter 1
 * @b: Parameter 2
 *
 * Return: Return the result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function division
 *
 * @a: Parameter 1
 * @b: Parameter 2
 *
 * Return: Return the result of the operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
 * op_mod - function modulo
 *
 * @a: Parameter 1
 * @b: Parameter 2
 *
 * Return: Return the result of the operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
