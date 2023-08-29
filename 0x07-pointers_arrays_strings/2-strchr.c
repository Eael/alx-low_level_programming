#include "main.h"
/**
 * _strchr - finds first occurence of a specific character
 * @s: pointer to string
 * @c: character to search
 *
 * Return: returns a pointer to the character or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
