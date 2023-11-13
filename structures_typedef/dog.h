#ifndef __STRUCT__
#define __STRUCT__

/**
 * struct dog - frist struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*__STRUCT__*/
