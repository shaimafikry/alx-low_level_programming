#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* init_dog - func to iniate struct
* @d: child of a struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s",d->name);
		else
			printf("(nil)");
		if (d->age)
			printf("Age: %f",d->age);
		else
			printf("(nil)");
		if (d->owner)
			printf("Owner: %s",d->owner);
		else
			printf("(nil)");
	}
}
