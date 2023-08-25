#include "main.h"
/**
 * leet - Encodes aeotlAEOTL to 43071
 * @s: string to change
 *
 * Return: Upper case.
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
