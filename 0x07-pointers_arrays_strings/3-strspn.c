#include "main.h"
/**
 * _strspn - finds the length of a prefix substring
 * @s: pointer to string we want to find initial length
 * @accept: set of characters we want to search for
 *
 * Return: returns 0L
 */

unsigned int _strspn(char *s, char *accept);
{
	int i, j, k, count;

	i = 0;
	while (s[i] != '\0')
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				count = 1;
			}
		}
		if (count == 0)
		{
			return (k);
		}
		i++;
	}
	return (0);
}
