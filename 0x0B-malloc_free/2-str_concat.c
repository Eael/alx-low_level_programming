#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * 
 * Return: pointer to newly allocated space or NULL if failed
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len, k;
	char *temp;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s2[i] != '\0')
	{
		i++;
	}
	while (s1[j] != '\0')
	{
		j++;
	}
	len = i + j;
	temp = malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		temp[k] = s1[k];
	}
	for (i = 0; i <= len; i++)
	{
		temp[k + i] = s2[i];
	}
	return (temp);
}
