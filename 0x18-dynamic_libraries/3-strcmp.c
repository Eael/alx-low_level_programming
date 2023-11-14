#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns positive or negative number
 */

int _strcmp(char *s1, char *s2)
{
	int res, i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}
