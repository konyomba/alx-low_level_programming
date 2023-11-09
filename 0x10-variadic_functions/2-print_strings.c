#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings folloed by a new line
 * @separator: string to be printed between the string
 * @n: number of string passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list ptrstr;

	va_start(ptrstr, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ptrstr, char*);
		if (string == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", string);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(ptrstr);
}
