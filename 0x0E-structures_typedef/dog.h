#include <stdlib.h>
#include <stdio.h>
#ifndef DOG_H
#define DOG_H
/*
* struct dog - creating a struct for a dog type
* @name:
* @age:
* @owner:
* dog_t -  typedf for struct dog 
*/
typedef struct dog
{
	char *name;
	float age;
	char * owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
