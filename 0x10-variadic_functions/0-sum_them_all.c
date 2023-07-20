#include "variadic_functions.h"
/**
 * sum_them_all - function that sum of all its parameters
 *
 * @n: How many variables will be inserted in the function
 *
 * Return: return the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
