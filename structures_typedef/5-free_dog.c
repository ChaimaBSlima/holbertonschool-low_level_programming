#include "dog.h"
/**
 * free_dog-  a function that frees dogs.
 * @d: the struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
