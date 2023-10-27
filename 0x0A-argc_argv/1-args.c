#include <stdio.h>

/**
 * main - a program that prints number of arguement passed
 * @argc: counts the arguements
 * @argv: string pointer
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc);
	return (0);
}
