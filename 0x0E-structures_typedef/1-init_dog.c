#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of struct dog
 * @d: structure to initialize
 * @name: string pointer
 * @age: parameter
 * @owner: parameter
 * Return: return 0 success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
