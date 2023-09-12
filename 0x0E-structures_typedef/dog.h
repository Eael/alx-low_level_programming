#ifndef DOG_STRUCTURE
#define DOG_STRUCTURE
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Short description
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: a new type struct dog with name age and owner elemente
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
