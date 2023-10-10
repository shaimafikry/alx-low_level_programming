#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/*
* struct dog - creating a struct for a dog type
* @name: char *
* @age: float
* @owner: char *
* dog_t -  typedf for struct dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
