#include "main.h"
/**
 * _strncpy - copies n bytes of src to dest
 * @src: string to concatenate
 * @dest: pointer to string
 * @n: number of bytes to print
 *
 * Return: Pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
