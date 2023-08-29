#include "dog.h"
#include <stdlib.h>
/**
* init_dog - func to iniate struct
* @d: child of a struct
* @name: charcater
* @age: float
* @owner: character
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
