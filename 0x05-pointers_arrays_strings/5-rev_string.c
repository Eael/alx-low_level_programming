#include "main.h"
/**
 * rev_string - prints a string in reversee
 * @s: pointer to the string  we want to reverse
 *
 * Return: nothingg
 */

void rev_string(char *s)
{
	int l, l1;
	int i = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	l1 = i - 1;
	for (l = 0; l < i / 2; l++)
	{
		temp = s[l];
		s[l] = s[l1];
		s[l1--] = temp;
	}
}

