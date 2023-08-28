#include "main.h"
/**
 * _strchr - finds first occurence of a specific character
 * @s: pointer to string
 * @c: character to search
 *
 * Return: returns a pointer to the memory area s
 */

char *_strchr(char *s, char c);
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	for (; j < i; j++)
	{
		if (s[j] == c)
		{
			return (s[j]);
		}
		else
		{
			return NULL;
		}
	}
}
