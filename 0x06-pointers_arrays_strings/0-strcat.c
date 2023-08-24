#include "main.h"
/**
 * _strcat - takes a pointer to two strings and concatenates src to dest
 * @src: pointer to string we want to concatenate
 * @dest: pointer to dest
 *
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

