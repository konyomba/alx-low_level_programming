#include "main.h"
#include <stdlib.h>

/**
 * *create_array - array of characters stored as pointers
 * @c: character for the array
 * @size: size of the array character
 * Return: 0 on success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
		return (array);
	}
	return (array);
}

