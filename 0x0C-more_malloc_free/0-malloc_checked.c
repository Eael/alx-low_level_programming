#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of bytes
 * 
 * Return: pointer to 2 dimensional array
*/

void *malloc_checked(unsigned int b)
{
    int *ptr;

    ptr = malloc(b);
	if (ptr == NULL)
	{
		return (98);
	}
	return (ptr)
}