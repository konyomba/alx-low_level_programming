#include"main.h"

/**
 * _isalpha - checks for alphabets
 * Return: 1 for alphabet character and 0 for anthing else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
