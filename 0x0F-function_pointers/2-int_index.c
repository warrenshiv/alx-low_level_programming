#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches
 * for an integer
 *
 * @array: array with parameters
 * @size: size of the array
 * @cmp: function to call function
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
