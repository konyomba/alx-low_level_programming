#include <unistd.h>
/**
 * _putchar - function that writes on the stdout
 * @c: character to be printed
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
