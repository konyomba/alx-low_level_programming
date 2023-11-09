#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds numbers
 * @n: elements to be sumed
 * 
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i; /**used for the loop to keep track of count**/

	va_list list; /**initialization of the list **/

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(list, const unsigned int);
		}
	}
	va_end(list);
	return (sum);
}
