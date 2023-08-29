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
	int i, len1, len2;

	len1 = 0;
	len2 = 0;
	i = 0;
	d = malloc(sizeof(struct dog));
	while ( name[i] != '\0')
	{
		len1++;
		i++;
	}
	d->name = malloc(len1 + 1);
	while ( owner[i] != '\0')
	{
		len2++;
		i++;
	}
	d->owner = malloc(len2 + 1);
	while ( name[i] != '\0')
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[len1] = '\0';
	d->age = age;
	i = 0;
	while ( owner[i] != '\0')
	{
		d->owner[i] = name[i];
		i++;
	}
	d->owner[len2] = '\0';
}
