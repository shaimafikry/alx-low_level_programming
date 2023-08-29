#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - func to print struct
* @d: child of a struct
*/
dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *d;
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	
	}
	else
		return (NULL);
	return (d);
}
