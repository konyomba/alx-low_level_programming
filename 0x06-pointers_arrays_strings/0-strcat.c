#include "main.h"

/**
 * _strcat - joins two strings
 * @dest: first string
 * @src: second string
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
