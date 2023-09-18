#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the stdout
 * @c: character to be printed
 * Return: c 
 */

int _putchar(char c)
{
	return (write(1 , &c, 1));
}
