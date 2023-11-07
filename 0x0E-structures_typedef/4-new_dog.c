#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *new_dog;

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char));
	new_dog->name = name;

	new_dog->owner = malloc(sizeof(char));
	new_dog->owner = owner;

	return (new_dog);
}
