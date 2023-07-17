#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a fonction
 * @d : a parameter
 * @name:a parameter
 * @age:a parameter
 * @owner:a ^parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			return;
		}
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
