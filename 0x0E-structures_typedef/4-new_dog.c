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

/**
 * *_strcpy - copy a string from another pointer
 * @dest: pointer to a string
 * @src: pointer to the strign to concatenate
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0, length;

	length = _strlen(src);
	while (count <= length)
	{
		dest[count] = src[count], count++;
	}
	return (dest);
}

/**
 * *new_dog - new dog
 * @name: string
 * @age: value
 * @owner: string
 * Return: new  struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int a, b;

	a = _strlen(name), b = _strlen(owner);

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(a + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = _strcpy(p->name, name);

	p->owner = malloc(b + 1);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	p->owner = _strcpy(p->owner, owner);

	p->age = age;
	return (p);
}
