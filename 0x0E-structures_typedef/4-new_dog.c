#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* dog_t *new_dog - func to create a child struct
* @name: string
* @age: float
* @owner: string
* Return: pointer to a new struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, len1, len2;

	len1 = 0, len2 = 0, i = 0;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	while (name[i++] != '\0')
		len1++;
	i = 0;
	while (owner[i++] != '\0')
		len2++;
	d->name = malloc(len1 + 1);
	d->owner = malloc(len2 + 1);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; ++i)
		d->name[i] = name[i];
	d->age = age;
	for (i = 0; owner[i] != '\0'; ++i)
		d->owner[i] = owner[i];
	return (d);
}
