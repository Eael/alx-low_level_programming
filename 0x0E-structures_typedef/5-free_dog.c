#include "dog.h"
/**
 * free_dog -
 * @d: pointer to dog
 *
 * Return: nothing
*/

void free_dog(dog_t *d)
{
	if (d->name != NULL && d->owner != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
