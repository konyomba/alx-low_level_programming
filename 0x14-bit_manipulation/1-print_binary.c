#include "main.h"

/**
 * _pow - function that finds the pow of a number
 * @base: base
 * @power: power
 * Return: pow
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int value;
	unsigned int k;

	value = 1;
	for (k = 1; k <= power; k++)
		value *= base;
	return (value);
}
/**
 * print_binary - prints a number in binary
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char checker;

	checker = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			checker = 1;
			_putchar('1');
		}
		else if (checker == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
