#include <stdio.h>

/**
 * main - program that prints all arguements
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
