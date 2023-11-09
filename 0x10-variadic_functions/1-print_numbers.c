#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - function that prints numbers followed by a new line 
 *@separator: a string
 *@n: number to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, array;

	va_list pointer;
	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		array = va_arg(pointer, const unsigned int);
		printf("%d", array);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
		printf("\n");
		va_end(pointer);
}
