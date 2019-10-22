#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - show the lenght of a string
 * @s: pointe to  pass the array
 *
 * Return: none
 */

int _strlen(char *s)

{
	int a = 0;

	while (s[a])
		++a;

	return (a);
}


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *p;

	p = malloc(sizeof(dog_t));
	if(p == NULL)
		return (NULL);
	
	p->name = name;
	p->age = age;
	p->owner = owner;

	p->name = malloc(_strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(_strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return(p);
}
