#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the result of a multiplication
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 1 if it does not receive two arguement,it prints "Error"
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
