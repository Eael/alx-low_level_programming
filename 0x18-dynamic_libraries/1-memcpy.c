#include "main.h"
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
