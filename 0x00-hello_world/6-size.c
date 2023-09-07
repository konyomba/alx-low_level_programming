#include<stdio.h>
/**
 * main - programm that prints the sizes of various data types
 *
 * Return 0 (terminate)
 */

int main(void)
{
	int k;
	char c;
	float l;
	long int m;
	long long int d;
	printf("Size of a long int: %lu.\n",(unsigned long)sizeof(m));
	printf("Size of a long long int: %lu.\n",(unsigned long)sizeof(d));
	printf("Size of a int: %lu.\n",(unsigned long)sizeof(k));
	printf("Size of a char: %lu.\n",(unsigned long)sizeof(c));
	printf("Size of a float: %lu.\n",(unsigned long)sizeof(l));
	return (0);
}
