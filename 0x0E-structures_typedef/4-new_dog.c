#include "dog.h"
/**
 * new_dog - new struct for dog
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);
if (name == NULL)
name = 0;
	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);


}
