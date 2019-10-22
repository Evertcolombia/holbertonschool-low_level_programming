#ifndef DOG
#define DOG
/**
 * struct dog - Structure
 * @name: value
 * @age: float value
 * @owner: pointer to value
 *
 * Description: structure for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
	/**
	 * @name: pointer to a value
	 * @age: value with an float
	 * @owner: pointer to a value
	 *
	 * Description: This structure is for a class dog
	 */
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG */
