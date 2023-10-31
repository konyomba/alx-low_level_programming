#include "main.h"
#include <stdlib.h>

/**
 *_strdup - fnction that duplicates a string
 *@str: string
 *Return: str
 */
char *_strdup(char *str)
{
	int m = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (m < i)
	{
		s[m] = str[m];
	}
	s[m] = '\0';
	return (s);
}

