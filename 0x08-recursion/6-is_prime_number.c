#include "main.h"

/**
 * is_prime_number - checks if integer is prime
 * @n: input value
 * Return: 1 if number is prime and 0 when number is not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (number_prime(n, n - 1));
}

/**
 * number_prime - a recursion checking for any prime number
 * @n: input value
 * @m: iterator
 * Return: 1 if number is prime and 0 when number is not prime
 */

int number_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (number_prime(n, m - 1));
}

