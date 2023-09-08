#include<stdio.h>
/**
 * main - c program that prints alphabets in lowercase
 * Return: 0 prints the characters using putchar
 */
int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
