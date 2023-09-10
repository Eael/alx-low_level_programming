#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string to concatenate n bytes
 * @n: number of bytes of s2 to copy
 *
 * Return: pointer to results
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	if (n < len2)
	{
		n = len2;
	}

	res = malloc(sizeof(char) * (len1 + n + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		res[i + j] = s2[j];
	}

	res[i + j] = '\0';

	return (res);
}
