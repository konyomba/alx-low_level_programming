#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int value;

	value = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		value <<= 1;
		if (b[k] == '1')
			value += 1;
	}
	return (value);
}
