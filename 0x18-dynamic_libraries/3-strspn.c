#include "main.h"
/**
 * _strspn - finds the length of a prefix substring
 * @s: pointer to string we want to find initial length
 * @accept: set of characters we want to search for
 *
 * Return: returns length of string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count = 1;
				break;
			}
		}
		if (count == 0)
		{
			return (i);
		}
		i++;
	}
	return (i);
}
