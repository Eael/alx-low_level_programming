#include "main.h"
/**
 * _strpbrk - finds the length of a prefix substring
 * @s: pointer to string we want to find initial length
 * @accept: set of characters we want to search for
 *
 * Return: returns 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
		i++;
	}
	return (NULL);
}
