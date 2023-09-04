#include "main.h"
/**
 * _strstr - finds the neddle in the haystackg
 * @haystack: pointer to string we want to search through
 * @needle: pointer to string we want to search for
 *
 * Return: returns pointer to needle found in haystack or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && needle[j] == haystack[i + j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
