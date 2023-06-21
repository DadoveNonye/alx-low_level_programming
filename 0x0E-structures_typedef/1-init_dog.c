#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes a variable of type struct
 * @d: pointer to initialize
 * @name: name
 * @age: age to initialize
 * @owner: pointer to owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
