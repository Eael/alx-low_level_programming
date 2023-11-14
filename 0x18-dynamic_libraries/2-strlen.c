#include "main.h"
/**
 * _strlen - prints the length of a string. String
 * is considered an array ending with '\0'
 * @s: pointer to the we want to length of
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

