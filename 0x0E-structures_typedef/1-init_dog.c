#include "dog.h"
/**
 * init_dog - func thta initialize a varaible of type struct dog
 * @d: var type struct
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: no return
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
