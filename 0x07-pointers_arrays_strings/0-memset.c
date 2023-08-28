#include "main.h"
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

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
