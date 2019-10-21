#include "dog.h"

/**
 * init_dog - Function to inizialize a variable
 * @d: pointer to a class
 * @name: value
 * @age: value
 * @owner: value
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
