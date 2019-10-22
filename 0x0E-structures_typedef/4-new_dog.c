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
	int a, b;

	p = malloc(sizeof(dog_t));
	if(p == NULL)
		return (NULL);
	
	p->name = name;
	p->age = age;
	p->owner = owner;

	a = _strlen(name);
	b = _strlen(owner);

	p->name = malloc(sizeof(char)* a + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(char) * b + 1);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return(p);
}