#include "dog.h"
/**
 * strcp - copies string
 * @src: char * 
 * @des: destination
 */
void strcp(char *src, char *dest)
{
int i;

for (i = 0 ; src[i] != '/0'; i++)
dest[i] = src[i];
}
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
strcp(name,p->name);
	p->age = age;
strcp(owner,p->owner);
	return (p);
}
