#include "main.h"
/**
 * *_strdup -  returns a pointer to a new string which is a duplicate of the 
 * string str. Memory for the new string is obtained with malloc, and can be 
 * freed with free.
 * @str: string to duplicate
 *
 * Return: pointer to new string which is a duplicate 
*/

char *_strdup(char *str)
{
	char *dup;
	int i = 0, j, len;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	len = i + 1;
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
			dup[j] = str[j];
	}
	dup[j] = '\0';

	return (dup);
}
