#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function
 * @action: function pointer
 * @array: pointer to the array
 * @size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action (*array);
		array++;
	}
}
