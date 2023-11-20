#include "main.h"
/**
 * _strcpy - takes a pointer to a string and copies it to a dest
 * @src: pointer to string we want to print
 * @dest: pointer to dest
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l;
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (l = 0; l < i; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}
