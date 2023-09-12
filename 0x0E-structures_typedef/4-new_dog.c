#include "dog.h"
char *_strdup(char *str);
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *create_dog;

	create_dog = malloc(sizeof(dog_t));
	if (create_dog == NULL)
	{
		free(name);
		free(owner);
		return (NULL);
	}
	(*create_dog).name = _strdup(name);
	(*create_dog).owner = _strdup(owner);

	(*create_dog).age = age;

	return (create_dog);
}


/**
 * *_strdup -  returns a pointer to a new string which is a duplicate of the
 * string str. Memory for the new string is obtained with malloc, and can be
 * freed with free.
 * @str: string to duplicate
 *
 * Return: pointer to new string which is a duplicate
*/

char *_strdup(char *str)
{
	char *dup;
	int i = 0, j, len;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	len = i + 1;
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}
	dup[j] = '\0';

	return (dup);
}
