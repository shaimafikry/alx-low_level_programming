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
