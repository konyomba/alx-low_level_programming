#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @min - min character accepted
 * @max - max character accepted
 *
 * Return: Always 0
 */

int main(void)
{
	srand(time(NULL));
	char min = 'a';
	char max = 'z';
	char randomInRange = min + (rand() % (max - min + 1));

	if (randomInRange == 'k')
	{
		printf("Tada! Congrats\n");
	}
	else
	{
		printf("try again please\n");
	}
	return (0);
}
