#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: the struct
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
