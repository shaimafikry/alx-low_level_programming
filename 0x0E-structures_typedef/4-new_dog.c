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
p->name = malloc(strlen(name) + 1);
if (p->name == NULL)
{
free(p);
return (NULL);
}
p->owner = malloc(strlen(owner) + 1);
if (p->owner == NULL)
{
free(p->name);
free(p);
return (NULL);
}
strcpy(p->name,name);
p->age = age;
p->owner = strdup(owner);
return (p);
}

