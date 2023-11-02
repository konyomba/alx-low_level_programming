#include "main.h"

/**
 * string_nconcat - function that joins two strings
 * @s1: string one
 * @s2: string two
 * @n: elements
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, k;
	char *str;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++);
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++);
	}
	if (j > n)
	{
		j = n;
	}
	str = malloc((sizeof(char) * (i + j)) + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (k = 0; k < j; j++)
		str[k] = s2[k];
	str[i + j] = '\0';
	return (str);
}
