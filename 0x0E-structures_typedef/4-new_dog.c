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
if (owner == NULL || (name == NULL || age < 0))
return (NULL);
p->name = malloc(strlen(name) + 1);
p->owner = malloc(strlen(owner) + 1);
if (p->name == NULL)
{
free (p);
return(NULL);
}
if (p->owner == NULL)
{
free(p->name);
free(p);
return (NULL);
}
strncpy(name, p->name, strlen(name) + 1);
p->age = age;
strncpy(owner, p->owner,strlen(owner) + 1);
return (p);
}
