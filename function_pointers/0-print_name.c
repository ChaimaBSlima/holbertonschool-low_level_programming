#include "function_pointers.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: the struct
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
  f(name);
}
