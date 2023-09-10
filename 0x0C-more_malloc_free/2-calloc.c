#include "main.h"

char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of array
 *
 * Return:
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int arrsize;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arrsize = nmemb * size;
	ptr = malloc(arrsize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		_memset(ptr, 0, arrsize);
	}

	return (ptr);
}

/**
 * _memset - fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
