#include "dog.h"
/**
 * print_dog -a function that prints a struct dog
 * @d: the struct
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    if (name == NULL || owner == NULL || age < 0)
    {
        return (NULL);
    }
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
    {
        return (NULL);
    }
    dog->name = malloc(sizeof(char) * (strlen(name) + 1));
    if (dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }
    dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }
    dog->name = strcpy(dog->name, name);
    dog->age = age;
    dog->owner = strcpy(dog->owner, owner);
    return (dog);
}