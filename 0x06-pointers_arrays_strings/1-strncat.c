#include "main.h"
/**
 * _strncat - concatenates n bytes of src to dest
 * @src: string to concatenate
 * @dest: pointer to string
 * @n: number of bytes to print
 *
 * Return: Pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest = '\0';
	return (dest);
}
