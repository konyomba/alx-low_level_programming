#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: parameter to be counted
 * Return: length of the string
 */

int _strlen(char *s)
{
		int i;
		int count = 0;

		for (i = 0; s[i] != '\0';)
			count++;
		return (count);
}
