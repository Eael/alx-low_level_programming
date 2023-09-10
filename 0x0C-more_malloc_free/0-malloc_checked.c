#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of bytes
 * 
 * Return: pointer to 2 dimensional array
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
