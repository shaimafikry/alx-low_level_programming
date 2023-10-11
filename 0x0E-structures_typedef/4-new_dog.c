#include "dog.h"
/**
* strl - length of string
* @str: string
* Return: string length
*/
int strl (char *str)
{
int i, count;

count = 0;
for (i = 0; str[i] != '\0'; i++)
count++;
return (count);
}
/**
 * strcp - copies string
 * @src: char * 
 * @des: destination
 */
void strcp(char *src, char *dest)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
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
p->name = malloc(strl(name) + 1);
p->owner = malloc(strl(owner) + 1);
if (p->name == NULL)
{
free (p->name);
return(NULL);
}
if (p->owner == NULL)
{
free(p->owner);
return (NULL);
}
strcp(name, p->name);
	p->age = age;
strcp(owner, p->owner);
	return (p);
}
