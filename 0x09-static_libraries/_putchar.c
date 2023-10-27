#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints a character c on the stdout
 *@c: character to be printed
Return: void
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
