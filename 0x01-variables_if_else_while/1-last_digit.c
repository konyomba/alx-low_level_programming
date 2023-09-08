#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - c program that generates random numbers
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5",rand(),n);	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0",rand(),n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",rand(),n);
	}
	return (0);
}
