#include "main.h"
/**
 * cap_string - capitalize first word of string
 * @s: string to capitalize
 *
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	char ch[13] = {' ','\n',',',';','!','\t','?','"','(',')','{' ,'}'};

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		j = 0;
		while (j < 13)
		{
			if (s[i] == ch[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] -  32;
				}
			}
			j++;
		}
		i++;
	}
	return (s);
}
