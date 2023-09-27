#include "main.h"

/**
 * _strlen_recursion - function that returns string length
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int string = 0;

	if (*s)
	{
		string++;
		string += _strlen_recursion(s + 1);
	}
	return (string);
}
