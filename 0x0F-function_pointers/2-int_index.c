#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function in the code
 * @array: collection of int
 * @size: array size
 * @cmp: pointer function
 * Return: -1 for no element match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
