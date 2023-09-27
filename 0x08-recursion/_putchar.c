#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * Return: Always 1 (success} and -1 on error
 * @c: input value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
