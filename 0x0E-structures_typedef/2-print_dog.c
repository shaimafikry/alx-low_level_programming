#include "dog.h"
/**
 * print_dog - prints a dog info by struct
 * @d: struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
		(*d).name = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}

}
