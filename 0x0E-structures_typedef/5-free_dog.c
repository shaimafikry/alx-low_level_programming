#include "dog.h"
/**
 * free_dog -  frees memory
 * @d: var type dog_t
*/
void free_dog(dog_t *d)
{
	free(d);
}