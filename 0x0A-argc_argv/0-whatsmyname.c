#include <stdio.h>

/**
 * main - a c program that prints its name
 * @argc: counts number of arguement
 * @argv: stores the actual arguements
 * Return: 0 success
 */
int main(int argc, char *argv[])
{	
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
