#include "dog.h"
/**
 * print_dog -a function that prints a struct dog
 * @d: the struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL || d->age == 0)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->age == 0)
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
