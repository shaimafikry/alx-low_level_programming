#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_dog - func to free struct
* @d: child of a struct
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
