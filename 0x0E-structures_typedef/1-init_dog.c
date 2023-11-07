#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - function that initializes a struct
 * init_dog - struct
 * @name: input
 * @age: input
 * @owner: input
 * @d: dog initialized
 * Return: 0 on success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	{
	/**dereferencing**/
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
