#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc -  allocates a new size to an old pointer
 * @*ptr: the pointer
 * @old_size: old size
 * @new_size: new size of pointer
 *
 * Return: pointer to new pointer or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *cp_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free (ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL);
	{
		return (NULL);
	}

	cp_ptr = ptr;
	if (new_size < old_size)
	{
		_memcpy(new_ptr, cp_ptr, new_size);
	}
	else
	{
		_memcpy(new_ptr, cp_ptr, old_size);
	}

	free (ptr);
	return (new_ptr);

}

/**
 * _memcpy - copy a block of memory from src to dest
 * @src: pointer to source
 * @dest: pointer to destination
 * @n: number of bytes to copy from source
 *
 * Return: returns a pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
