#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints arguement
 *@format: specifier
 *Return: what is specified
 */
void print_all(const char * const format, ...)
{
	int i, stats;

	char *str;
	va_list list;

	va_start(list, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(list, int));
				stats = 0;
				break;
			case 'f':
				printf("%d", va_arg(list, int));
				stats = 0;
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				stats = 0;
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				stats = 1;
				break;
		}
		if (format[i + 1] != '\0' && stats == 0 )
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
