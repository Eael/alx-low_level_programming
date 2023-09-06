#include "main.h"
/**
 * *create_array -  creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of array
 * @c: character to initialize the array
 * 
 * Return: pointer to array or null
*/

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
	{
	return (NULL);
	}
	else
	{
		ar = malloc(sizeof(char) * size);
		for (; i < size; i++)
		{
			ar[i] = c;
		}

		return (ar);
	}
	return (NULL);
}
